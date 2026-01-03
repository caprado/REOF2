void func_001acfe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001acfe0: addiu $sp, $sp, -0x10
    a0 = 0x2a << 16;                                            // 0x001acfe4: lui $a0, 0x2a
    a0 = a0 + 0x5240;                                           // 0x001acfec: addiu $a0, $a0, 0x5240
    func_00107c70();  // 107c70                                // 0x001acff4: jal 0x107c70
    a2 = 0x1c8;                                                 // 0x001acff8: addiu $a2, $zero, 0x1c8
    at = 0x31 << 16;                                            // 0x001acffc: lui $at, 0x31
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001ad000: lw $a0, 0x37fc($at)
    if (a0 == 0) goto label_0x1ad018;                           // 0x001ad004: beqz $a0, 0x1ad018
    v1 = 8 << 16;                                               // 0x001ad008: lui $v1, 8
    at = 0x2a << 16;                                            // 0x001ad00c: lui $at, 0x2a
    v1 = a0 + v1;                                               // 0x001ad010: addu $v1, $a0, $v1
    g_002a5248 = v1;  // Global at 0x002a5248                   // 0x001ad014: sw $v1, 0x5248($at)
label_0x1ad018:
    return;                                                     // 0x001ad01c: jr $ra
    sp = sp + 0x10;                                             // 0x001ad020: addiu $sp, $sp, 0x10
}