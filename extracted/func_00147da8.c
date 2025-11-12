void func_00147da8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00147da8: addiu $sp, $sp, -0x10
    /* beqzl $a3, 0x147dbc */                                   // 0x00147db4: beqzl $a3, 0x147dbc
    /* break (trap) */                                          // 0x00147db8: break 0, 7
    v0 = g_002268c0;  // Global at 0x002268c0                   // 0x00147dbc: lw $v0, 8($a1)
    a0 = g_002268bc;  // Global at 0x002268bc                   // 0x00147dc0: lw $a0, 4($a1)
    v0 = v0 + a3;                                               // 0x00147dc4: addu $v0, $v0, $a3
    v1 = str_002268b8;  // "image buffer needs to be aligned to 64byte boundary(0x%08x)" // 0x00147dc8: lw $v1, 0($a1)
    v0 = v0 + -1;                                               // 0x00147dcc: addiu $v0, $v0, -1
    /* divide: v0 / a3 -> hi:lo */                              // 0x00147dd0: divu $zero, $v0, $a3
    v1 = v1 + a0;                                               // 0x00147dd4: addu $v1, $v1, $a0
    /* mflo $v0 */                                              // 0x00147dd8
    /* multiply: v0 * a3 -> hi:lo */                            // 0x00147ddc: mult $ac2, $v0, $a3
    a0 = v0 + a2;                                               // 0x00147de0: addu $a0, $v0, $a2
    v1 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x00147de4: sltu $v1, $v1, $a0
    /* bnezl $v1, 0x147df8 */                                   // 0x00147de8: bnezl $v1, 0x147df8
    a1 = 0x22 << 16;                                            // 0x00147dec: lui $a1, 0x22
    goto label_0x147e08;                                        // 0x00147df0: b 0x147e08
    g_00220008 = a0;  // Global at 0x00220008                   // 0x00147df4: sw $a0, 8($a1)
    func_00148588();  // 0x148530                                // 0x00147dfc: jal 0x148530
    a1 = &str_002268b8;  // "image buffer needs to be aligned to 64byte boundary(0x%08x)" // 0x00147e00: addiu $a1, $a1, 0x68b8
label_0x147e08:
    return;                                                     // 0x00147e0c: jr $ra
    sp = sp + 0x10;                                             // 0x00147e10: addiu $sp, $sp, 0x10
}