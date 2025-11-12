void func_001dbca0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001dbca0: addiu $sp, $sp, -0x40
    at = 0x31 << 16;                                            // 0x001dbca4: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dbcb0: addu.qb $zero, $sp, $s1
    s2 = g_003137fc;  // Global at 0x003137fc                   // 0x001dbcbc: lw $s2, 0x37fc($at)
label_0x1dbcc4:
    v1 = *(int8_t*)(s0);                                        // 0x001dbcc4: lb $v1, 0($s0)
    if (v1 < 0) goto label_0x1dbd08;                            // 0x001dbcc8: bltz $v1, 0x1dbd08
    /* nop */                                                   // 0x001dbccc: nop 
    v0 = 0x22 << 16;                                            // 0x001dbcd0: lui $v0, 0x22
    v1 = v1 << 2;                                               // 0x001dbcd4: sll $v1, $v1, 2
    v0 = v0 + -0x390;                                           // 0x001dbcd8: addiu $v0, $v0, -0x390
    v0 = v0 + v1;                                               // 0x001dbce0: addu $v0, $v0, $v1
    a0 = g_0021fc70;  // Global at 0x0021fc70                   // 0x001dbce8: lw $a0, 0($v0)
    v0 = 1 << 16;                                               // 0x001dbcec: lui $v0, 1
    func_001d33e0();  // 0x1d3390                                // 0x001dbcf0: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001dbcf4: ori $a2, $v0, 1
    if (v0 == 0) goto label_0x1dbd08;                           // 0x001dbcf8: beqz $v0, 0x1dbd08
    a0 = s1 + 0x4019;                                           // 0x001dbcfc: addiu $a0, $s1, 0x4019
    func_001d36b0();  // 0x1d3600                                // 0x001dbd00: jal 0x1d3600
label_0x1dbd08:
    s1 = s1 + 1;                                                // 0x001dbd08: addiu $s1, $s1, 1
    v1 = (s1 < 4) ? 1 : 0;                                      // 0x001dbd0c: slti $v1, $s1, 4
    if (v1 != 0) goto label_0x1dbcc4;                           // 0x001dbd10: bnez $v1, 0x1dbcc4
    s0 = s0 + 1;                                                // 0x001dbd14: addiu $s0, $s0, 1
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001dbd1c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001dbd20: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dbd24: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dbd28: jr $ra
    sp = sp + 0x40;                                             // 0x001dbd2c: addiu $sp, $sp, 0x40
}