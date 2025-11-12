void func_0012b470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x1f << 16;                                            // 0x0012b470: lui $v1, 0x1f
    a0 = 0x1f << 16;                                            // 0x0012b474: lui $a0, 0x1f
    a1 = 0x1f << 16;                                            // 0x0012b478: lui $a1, 0x1f
    a2 = 0x1f << 16;                                            // 0x0012b47c: lui $a2, 0x1f
    a3 = 0x1f << 16;                                            // 0x0012b480: lui $a3, 0x1f
    t0 = 0x1f << 16;                                            // 0x0012b484: lui $t0, 0x1f
    v0 = 1;                                                     // 0x0012b488: addiu $v0, $zero, 1
    v1 = v1 + 0x6af8;                                           // 0x0012b48c: addiu $v1, $v1, 0x6af8
    a0 = a0 + 0x6b08;                                           // 0x0012b490: addiu $a0, $a0, 0x6b08
    a1 = a1 + 0x6b18;                                           // 0x0012b494: addiu $a1, $a1, 0x6b18
    a2 = a2 + 0x6b28;                                           // 0x0012b498: addiu $a2, $a2, 0x6b28
    a3 = a3 + 0x6b38;                                           // 0x0012b49c: addiu $a3, $a3, 0x6b38
    t0 = t0 + 0x6b48;                                           // 0x0012b4a0: addiu $t0, $t0, 0x6b48
    return;                                                     // 0x0012b4b8: jr $ra
}