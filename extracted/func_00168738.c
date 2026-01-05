void func_00168738() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2;
    
    sp = sp + -0x20;                                            // 0x00168738: addiu $sp, $sp, -0x20
    func_00168930();  // 168930                                // 0x0016874c: jal 0x168930
    if (v0 != 0) goto label_0x168768;                           // 0x00168754: bnez $v0, 0x168768
    a1 = -1;                                                    // 0x00168758: addiu $a1, $zero, -1
    goto label_0x1687a4;                                        // 0x0016875c: b 0x1687a4
    v0 = -1;                                                    // 0x00168760: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00168764: nop 
label_0x168768:
    v1 = local_0;                                               // 0x00168768: lbu $v1, 0($sp)
    v0 = -1;                                                    // 0x0016876c: addiu $v0, $zero, -1
    a0 = local_2;                                               // 0x00168770: lbu $a0, 2($sp)
    v1 = v1 << 4;                                               // 0x00168774: sll $v1, $v1, 4
    v1 = v1 + a0;                                               // 0x00168778: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x0016877c: sll $v1, $v1, 2
    at = 0x23 << 16;                                            // 0x00168780: lui $at, 0x23
    at = at + v1;                                               // 0x00168784: addu $at, $at, $v1
    v1 = g_00228f00;  // Global at 0x00228f00                   // 0x00168788: lw $v1, -0x7100($at)
    if (v1 == a1) goto label_0x1687a4;                          // 0x0016878c: beq $v1, $a1, 0x1687a4
    a0 = v1 << 5;                                               // 0x00168790: sll $a0, $v1, 5
    v0 = a0 - v1;                                               // 0x00168794: subu $v0, $a0, $v1
    v0 = v0 << 2;                                               // 0x00168798: sll $v0, $v0, 2
    v0 = v0 + v1;                                               // 0x0016879c: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x001687a0: sll $v0, $v0, 3
label_0x1687a4:
    return;                                                     // 0x001687a8: jr $ra
    sp = sp + 0x20;                                             // 0x001687ac: addiu $sp, $sp, 0x20
}