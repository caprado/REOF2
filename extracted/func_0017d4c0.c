void func_0017d4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) goto label_0x17d4e0;                           // 0x0017d4c0: beqz $a0, 0x17d4e0
    /* nop */                                                   // 0x0017d4c4: nop 
    *(uint32_t*)(a0) = 0;                                       // 0x0017d4c8: sw $zero, 0($a0)
    v1 = 0x21 << 16;                                            // 0x0017d4cc: lui $v1, 0x21
    v1 = v1 + 0x5d48;                                           // 0x0017d4d0: addiu $v1, $v1, 0x5d48
    v0 = g_00215d48;  // Global at 0x00215d48                   // 0x0017d4d4: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0017d4d8: addiu $v0, $v0, -1
    g_00215d48 = v0;  // Global at 0x00215d48                   // 0x0017d4dc: sw $v0, 0($v1)
label_0x17d4e0:
    return;                                                     // 0x0017d4e0: jr $ra
    /* nop */                                                   // 0x0017d4e4: nop 
}