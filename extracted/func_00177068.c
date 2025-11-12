void func_00177068() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x30;                                            // 0x00177068: addiu $sp, $sp, -0x30
    v0 = 1;                                                     // 0x00177074: addiu $v0, $zero, 1
    a1 = *(int32_t*)((v1) + 0x94c);                             // 0x00177080: lw $a1, 0x94c($v1)
    v1 = v1 + 0xcc0;                                            // 0x00177084: addiu $v1, $v1, 0xcc0
    s0 = *(int32_t*)((v1) + 0x23c);                             // 0x00177088: lw $s0, 0x23c($v1)
    if (a1 == 0) goto label_0x1770ec;                           // 0x0017708c: beqz $a1, 0x1770ec
    s1 = *(int32_t*)((v1) + 0x238);                             // 0x00177090: lw $s1, 0x238($v1)
    v1 = -5;                                                    // 0x00177094: addiu $v1, $zero, -5
    if (s1 == v1) goto label_0x1770ec;                          // 0x00177098: beq $s1, $v1, 0x1770ec
    func_00176060();  // 0x176010                                // 0x001770a4: jal 0x176010
    a2 = sp + 4;                                                // 0x001770a8: addiu $a2, $sp, 4
    v1 = 0 | 0xea24;                                            // 0x001770ac: ori $v1, $zero, 0xea24
    a0 = s0 << 5;                                               // 0x001770b0: sll $a0, $s0, 5
    /* beqzl $v1, 0x1770bc */                                   // 0x001770b4: beqzl $v1, 0x1770bc
    /* break (trap) */                                          // 0x001770b8: break 0, 7
    a0 = a0 - s0;                                               // 0x001770bc: subu $a0, $a0, $s0
    a2 = local_0;                                               // 0x001770c0: lw $a2, 0($sp)
    a0 = a0 << 2;                                               // 0x001770c4: sll $a0, $a0, 2
    a3 = local_4;                                               // 0x001770c8: lw $a3, 4($sp)
    a0 = a0 + s0;                                               // 0x001770cc: addu $a0, $a0, $s0
    a0 = a0 << 4;                                               // 0x001770d4: sll $a0, $a0, 4
    /* divide: a0 / v1 -> hi:lo */                              // 0x001770d8: div $zero, $a0, $v1
    /* mflo $a0 */                                              // 0x001770dc
    func_0014fef0();  // 0x14fea8                                // 0x001770e0: jal 0x14fea8
    a0 = s1 + a0;                                               // 0x001770e4: addu $a0, $s1, $a0
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001770e8: sltu $v0, $zero, $v0
label_0x1770ec:
    return;                                                     // 0x001770f8: jr $ra
    sp = sp + 0x30;                                             // 0x001770fc: addiu $sp, $sp, 0x30
}