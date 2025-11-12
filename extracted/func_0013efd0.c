void func_0013efd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013efd0: addiu $sp, $sp, -0x10
    v1 = 0x21 << 16;                                            // 0x0013efd4: lui $v1, 0x21
    v1 = v1 + -0x5268;                                          // 0x0013efdc: addiu $v1, $v1, -0x5268
    v0 = g_0020ad98;  // Global at 0x0020ad98                   // 0x0013efe0: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0013efe4: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x13f010;                           // 0x0013efe8: bnez $v0, 0x13f010
    g_0020ad98 = v0;  // Global at 0x0020ad98                   // 0x0013efec: sw $v0, 0($v1)
    a0 = 0x21 << 16;                                            // 0x0013eff0: lui $a0, 0x21
    a0 = a0 + -0x5260;                                          // 0x0013effc: addiu $a0, $a0, -0x5260
    a2 = 0x480;                                                 // 0x0013f000: addiu $a2, $zero, 0x480
    return func_00107d30();  // Tail call                        // 0x0013f004: j 0x107c70
    sp = sp + 0x10;                                             // 0x0013f008: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013f00c: nop 
label_0x13f010:
    return;                                                     // 0x0013f014: jr $ra
    sp = sp + 0x10;                                             // 0x0013f018: addiu $sp, $sp, 0x10
}