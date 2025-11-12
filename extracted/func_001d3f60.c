void func_001d3f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d3f60: addiu $sp, $sp, -0x20
    a1 = 0x24 << 16;                                            // 0x001d3f64: lui $a1, 0x24
    at = 0x31 << 16;                                            // 0x001d3f6c: lui $at, 0x31
    v1 = a0 << 2;                                               // 0x001d3f74: sll $v1, $a0, 2
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001d3f78: lhu $a3, 0x37ba($at)
    v0 = gp + -0x7ae0;                                          // 0x001d3f7c: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d3f80: addu $v0, $v0, $v1
    a0 = 0x33 << 16;                                            // 0x001d3f88: lui $a0, 0x33
    a2 = g_0032e190;  // Global at 0x0032e190                   // 0x001d3f8c: lw $a2, 0($v0)
    a0 = a0 + -0x1e70;                                          // 0x001d3f90: addiu $a0, $a0, -0x1e70
    a1 = &str_00247280;  // "%sST\\R%03d\\E%03d%02d%02d"        // 0x001d3f94: addiu $a1, $a1, 0x7280
    at = 0x31 << 16;                                            // 0x001d3f98: lui $at, 0x31
    t1 = g_003137bc;  // Global at 0x003137bc                   // 0x001d3f9c: lhu $t1, 0x37bc($at)
    at = 0x31 << 16;                                            // 0x001d3fa0: lui $at, 0x31
    t2 = g_003137be;  // Global at 0x003137be                   // 0x001d3fa4: lhu $t2, 0x37be($at)
    func_0010a570();  // 0x10a4d8                                // 0x001d3fa8: jal 0x10a4d8
    if (s0 != 0) goto label_0x1d3fc8;                           // 0x001d3fb0: bnez $s0, 0x1d3fc8
    a0 = 0x33 << 16;                                            // 0x001d3fb4: lui $a0, 0x33
    a1 = 0x24 << 16;                                            // 0x001d3fb8: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d3fbc: addiu $a0, $a0, -0x1e70
    func_0010a990();  // 0x10a860                                // 0x001d3fc0: jal 0x10a860
    a1 = a1 + 0x7250;                                           // 0x001d3fc4: addiu $a1, $a1, 0x7250
label_0x1d3fc8:
    v0 = 0x33 << 16;                                            // 0x001d3fcc: lui $v0, 0x33
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3fd0: xori.b $w0, $w0, 0xb0
    v0 = v0 + -0x1e70;                                          // 0x001d3fd4: addiu $v0, $v0, -0x1e70
    return;                                                     // 0x001d3fd8: jr $ra
    sp = sp + 0x20;                                             // 0x001d3fdc: addiu $sp, $sp, 0x20
}