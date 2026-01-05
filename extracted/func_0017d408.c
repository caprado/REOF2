void func_0017d408() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017d408: addiu $sp, $sp, -0x10
    func_0017d460();  // 17d460                                // 0x0017d414: jal 0x17d460
    /* nop */                                                   // 0x0017d418: nop 
    if (s0 == 0) goto label_0x17d450;                           // 0x0017d420: beqz $s0, 0x17d450
    func_0017d4b0();  // 17d4b0                                // 0x0017d428: jal 0x17d4b0
    /* nop */                                                   // 0x0017d42c: nop 
    v1 = 0x21 << 16;                                            // 0x0017d430: lui $v1, 0x21
    v1 = v1 + 0x5d48;                                           // 0x0017d434: addiu $v1, $v1, 0x5d48
    a1 = 1;                                                     // 0x0017d438: addiu $a1, $zero, 1
    a0 = g_00215d48;  // Global at 0x00215d48                   // 0x0017d43c: lw $a0, 0($v1)
    a0 = a0 + 1;                                                // 0x0017d444: addiu $a0, $a0, 1
    g_00215d48 = a0;  // Global at 0x00215d48                   // 0x0017d448: sw $a0, 0($v1)
    *(uint32_t*)(s0) = a1;                                      // 0x0017d44c: sw $a1, 0($s0)
label_0x17d450:
    return;                                                     // 0x0017d458: jr $ra
    sp = sp + 0x10;                                             // 0x0017d45c: addiu $sp, $sp, 0x10
}