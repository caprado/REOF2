void func_00109950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00109950: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00109954: lui $v0, 0x1f
    a1 = 0x5851 << 16;                                          // 0x0010995c: lui $a1, 0x5851
    a1 = a1 | 0xf42d;                                           // 0x00109960: ori $a1, $a1, 0xf42d
    a1 = a1 | 0x4c95;                                           // 0x00109968: ori $a1, $a1, 0x4c95
    a1 = a1 | 0x7f2d;                                           // 0x00109970: ori $a1, $a1, 0x7f2d
    s0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00109974: lw $s0, -0x210($v0)
    func_0010f7c0();  // 0x10f748                                // 0x0010997c: jal 0x10f748
    a0 = 0x7fff << 16;                                          // 0x00109984: lui $a0, 0x7fff
    a0 = a0 | 0xffff;                                           // 0x00109988: ori $a0, $a0, 0xffff
    v0 = v0 & a0;                                               // 0x0010999c: and $v0, $v0, $a0
    return;                                                     // 0x001099ac: jr $ra
    sp = sp + 0x10;                                             // 0x001099b0: addiu $sp, $sp, 0x10
}