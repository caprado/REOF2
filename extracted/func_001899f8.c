void func_001899f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x1899f8:
    a2 = a2 + -1;                                               // 0x001899f8: addiu $a2, $a2, -1
    /* FPU: andi.b $w0, $w0, 0x82 */                            // 0x001899fc: andi.b $w0, $w0, 0x82
    a0 = a0 + 0x10;                                             // 0x00189a00: addiu $a0, $a0, 0x10
    if (a2 != 0) goto label_0x1899f8;                           // 0x00189a08: bnez $a2, 0x1899f8
    a1 = a1 + 0x10;                                             // 0x00189a0c: addiu $a1, $a1, 0x10
    return;                                                     // 0x00189a10: jr $ra
    /* nop */                                                   // 0x00189a14: nop 
}