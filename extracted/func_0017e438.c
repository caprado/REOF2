void func_0017e438() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x21 << 16;                                            // 0x0017e438: lui $v1, 0x21
    a2 = v1 + 0x5f88;                                           // 0x0017e43c: addiu $a2, $v1, 0x5f88
    v0 = g_00215f88;  // Global at 0x00215f88                   // 0x0017e440: lw $v0, 0($a2)
    if (v0 == 0) goto label_0x17e460;                           // 0x0017e444: beqz $v0, 0x17e460
    a1 = 0x26 << 16;                                            // 0x0017e448: lui $a1, 0x26
    v0 = g_002678d8;  // Global at 0x002678d8                   // 0x0017e44c: lw $v0, 0x78d8($a1)
    if (v0 == a0) return;  // Branch to 0x17e528                // 0x0017e450: beq $v0, $a0, 0x17e528
    v0 = 1;                                                     // 0x0017e454: addiu $v0, $zero, 1
    goto label_0x17e468;                                        // 0x0017e458: b 0x17e468
    v1 = -1;                                                    // 0x0017e45c: addiu $v1, $zero, -1
label_0x17e460:
    v0 = 1;                                                     // 0x0017e460: addiu $v0, $zero, 1
    v1 = -1;                                                    // 0x0017e464: addiu $v1, $zero, -1
label_0x17e468:
    g_00215f88 = v0;  // Global at 0x00215f88                   // 0x0017e468: sw $v0, 0($a2)
    if (a0 != v1) return;  // Branch to 0x17e488                // 0x0017e46c: bne $a0, $v1, 0x17e488
    g_002678d8 = a0;  // Global at 0x002678d8                   // 0x0017e470: sw $a0, 0x78d8($a1)
    v1 = 0x21 << 16;                                            // 0x0017e474: lui $v1, 0x21
    v0 = 1;                                                     // 0x0017e478: addiu $v0, $zero, 1
    return;                                                     // 0x0017e47c: jr $ra
}