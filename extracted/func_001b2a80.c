void func_001b2a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b2a80: addiu $sp, $sp, -0x10
    a0 = 0x49 << 16;                                            // 0x001b2a84: lui $a0, 0x49
    at = 0x49 << 16;                                            // 0x001b2a8c: lui $at, 0x49
    g_00490c1e = 0;  // Global at 0x00490c1e                    // 0x001b2a90: sh $zero, 0xc1e($at)
    a0 = a0 + 0xc24;                                            // 0x001b2a94: addiu $a0, $a0, 0xc24
    at = 0x49 << 16;                                            // 0x001b2a98: lui $at, 0x49
    g_00490c20 = 0;  // Global at 0x00490c20                    // 0x001b2aa0: sh $zero, 0xc20($at)
    a2 = 4;                                                     // 0x001b2aa4: addiu $a2, $zero, 4
    at = 0x49 << 16;                                            // 0x001b2aa8: lui $at, 0x49
    func_00107c70();  // 107c70                                // 0x001b2aac: jal 0x107c70
    g_00490c22 = 0;  // Global at 0x00490c22                    // 0x001b2ab0: sh $zero, 0xc22($at)
    a0 = 0x49 << 16;                                            // 0x001b2ab4: lui $a0, 0x49
    a1 = 0xff;                                                  // 0x001b2ab8: addiu $a1, $zero, 0xff
    a0 = a0 + -0x790;                                           // 0x001b2abc: addiu $a0, $a0, -0x790
    func_00107c70();  // 107c70                                // 0x001b2ac0: jal 0x107c70
    a2 = 0x600;                                                 // 0x001b2ac4: addiu $a2, $zero, 0x600
    return;                                                     // 0x001b2acc: jr $ra
    sp = sp + 0x10;                                             // 0x001b2ad0: addiu $sp, $sp, 0x10
}