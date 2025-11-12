void func_0015ba80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015ba80: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0015ba84: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x15bac0;                          // 0x0015ba8c: beq $a0, $v0, 0x15bac0
    v1 = 1;                                                     // 0x0015ba90: addiu $v1, $zero, 1
    if (a0 == 0) goto label_0x15bac0;                           // 0x0015ba94: beqz $a0, 0x15bac0
    v1 = 2;                                                     // 0x0015ba98: addiu $v1, $zero, 2
    v0 = 2;                                                     // 0x0015ba9c: addiu $v0, $zero, 2
    if (a0 == v0) goto label_0x15bac0;                          // 0x0015baa0: beq $a0, $v0, 0x15bac0
    v0 = 3;                                                     // 0x0015baa4: addiu $v0, $zero, 3
    if (a0 == v0) goto label_0x15bac0;                          // 0x0015baa8: beq $a0, $v0, 0x15bac0
    v1 = 3;                                                     // 0x0015baac: addiu $v1, $zero, 3
    a0 = 0x22 << 16;                                            // 0x0015bab0: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015bab4: jal 0x163410
    a0 = &str_00226f60;  // "E301091: Internal Error: sfd_hnctrl_work is short." // 0x0015bab8: addiu $a0, $a0, 0x6f60
    v1 = 3;                                                     // 0x0015babc: addiu $v1, $zero, 3
label_0x15bac0:
    return;                                                     // 0x0015bac8: jr $ra
    sp = sp + 0x10;                                             // 0x0015bacc: addiu $sp, $sp, 0x10
}