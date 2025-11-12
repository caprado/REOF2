void func_0017d460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x0017d460: lui $v0, 0x21
    v0 = v0 + 0x5d48;                                           // 0x0017d468: addiu $v0, $v0, 0x5d48
    a1 = g_00215d50;  // Global at 0x00215d50                   // 0x0017d46c: lw $a1, 8($v0)
    if (a1 <= 0) goto label_0x17d4a4;                           // 0x0017d470: blez $a1, 0x17d4a4
    v0 = v0 + 0xc;                                              // 0x0017d474: addiu $v0, $v0, 0xc
    /* nop */                                                   // 0x0017d47c: nop 
label_0x17d480:
    v1 = *(int32_t*)(a0);                                       // 0x0017d480: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x17d4a8;                           // 0x0017d488: beqz $v1, 0x17d4a8
    a0 = a0 + 0x44;                                             // 0x0017d48c: addiu $a0, $a0, 0x44
    a2 = a2 + 1;                                                // 0x0017d490: addiu $a2, $a2, 1
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x0017d494: slt $v0, $a2, $a1
    /* nop */                                                   // 0x0017d498: nop 
    if (v0 != 0) goto label_0x17d480;                           // 0x0017d49c: bnez $v0, 0x17d480
    /* nop */                                                   // 0x0017d4a0: nop 
label_0x17d4a4:
label_0x17d4a8:
    return;                                                     // 0x0017d4a8: jr $ra
    /* nop */                                                   // 0x0017d4ac: nop 
}