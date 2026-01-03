void func_00106ab8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00106ab8: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00106abc: lui $v0, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106acc: lw $a0, -0x210($v0)
    return func_00106ab8();  // Tail call                        // 0x00106ad4: j 0x106a18
    sp = sp + 0x10;                                             // 0x00106ad8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00106adc: nop 
    sp = sp + -0x10;                                            // 0x00106ae0: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00106ae4: lui $v0, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00106aec: lw $a0, -0x210($v0)
    return func_00106aa8();  // Tail call                       // 0x00106af4: j 0x106aa8
    sp = sp + 0x10;                                             // 0x00106af8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00106afc: nop 
    sp = sp + -0x20;                                            // 0x00106b00: addiu $sp, $sp, -0x20
    v0 = 0x34 << 16;                                            // 0x00106b04: lui $v0, 0x34
    s1 = v0 + 0x1cc0;                                           // 0x00106b14: addiu $s1, $v0, 0x1cc0
    func_001149d8();  // 1149d8                                // 0x00106b28: jal 0x1149d8
    g_00341cc0 = 0;  // Global at 0x00341cc0                    // 0x00106b2c: sw $zero, 0($s1)
    v1 = -1;                                                    // 0x00106b34: addiu $v1, $zero, -1
    if (a0 != v1) goto label_0x106b50;                          // 0x00106b38: bnel $a0, $v1, 0x106b50
    v1 = g_00341cc0;  // Global at 0x00341cc0                   // 0x00106b40: lw $v1, 0($s1)
    /* bnezl $v1, 0x106b4c */                                   // 0x00106b44: bnezl $v1, 0x106b4c
    *(uint32_t*)(s0) = v1;                                      // 0x00106b48: sw $v1, 0($s0)
label_0x106b50:
    return;                                                     // 0x00106b58: jr $ra
    sp = sp + 0x20;                                             // 0x00106b5c: addiu $sp, $sp, 0x20
}