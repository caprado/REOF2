void func_001d40d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d40d0: addiu $sp, $sp, -0x20
    v1 = a1 << 2;                                               // 0x001d40dc: sll $v1, $a1, 2
    v0 = gp + -0x7ae0;                                          // 0x001d40e0: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d40e8: addu $v0, $v0, $v1
    a2 = g_0032e190;  // Global at 0x0032e190                   // 0x001d40f0: lw $a2, 0($v0)
    a0 = 0x33 << 16;                                            // 0x001d40f4: lui $a0, 0x33
    a1 = 0x24 << 16;                                            // 0x001d40f8: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d40fc: addiu $a0, $a0, -0x1e70
    func_0010a4d8();  // 10a4d8                                // 0x001d4100: jal 0x10a4d8
    a1 = &str_002472d0;  // "NPC\\LOW\\N"                       // 0x001d4104: addiu $a1, $a1, 0x72d0
    if (s0 != 0) goto label_0x1d4120;                           // 0x001d4108: bnez $s0, 0x1d4120
    a0 = 0x33 << 16;                                            // 0x001d410c: lui $a0, 0x33
    a1 = 0x24 << 16;                                            // 0x001d4110: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d4114: addiu $a0, $a0, -0x1e70
    func_0010a860();  // 10a860                                // 0x001d4118: jal 0x10a860
    a1 = a1 + 0x7250;                                           // 0x001d411c: addiu $a1, $a1, 0x7250
label_0x1d4120:
    v0 = 0x33 << 16;                                            // 0x001d4124: lui $v0, 0x33
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d4128: xori.b $w0, $w0, 0xb0
    v0 = v0 + -0x1e70;                                          // 0x001d412c: addiu $v0, $v0, -0x1e70
    return;                                                     // 0x001d4130: jr $ra
    sp = sp + 0x20;                                             // 0x001d4134: addiu $sp, $sp, 0x20
}