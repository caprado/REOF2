void func_0015b470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x0015b470: lui $v0, 0x25
    g_0025644c = a0;  // Global at 0x0025644c                   // 0x0015b474: sw $a0, 0x644c($v0)
    if (a0 == 0) goto label_0x15b48c;                           // 0x0015b478: beqz $a0, 0x15b48c
    v0 = -1;                                                    // 0x0015b47c: addiu $v0, $zero, -1
    v1 = *(int32_t*)((a0) + 0x188);                             // 0x0015b480: lw $v1, 0x188($a0)
    v1 = v1 ^ 2;                                                // 0x0015b484: xori $v1, $v1, 2
    if (v1 == 0) v0 = 0;                                        // 0x0015b488: movz $v0, $zero, $v1
label_0x15b48c:
    return;                                                     // 0x0015b48c: jr $ra
    /* nop */                                                   // 0x0015b490: nop 
}