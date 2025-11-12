void func_001d3da0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d3da0: addiu $sp, $sp, -0x20
    at = (t0 < 0x64) ? 1 : 0;                                   // 0x001d3dac: slti $at, $t0, 0x64
    if (at == 0) goto label_0x1d3dec;                           // 0x001d3db8: beqz $at, 0x1d3dec
    v1 = s0 << 2;                                               // 0x001d3dc0: sll $v1, $s0, 2
    v0 = gp + -0x7ae0;                                          // 0x001d3dc4: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d3dc8: addu $v0, $v0, $v1
    a0 = 0x33 << 16;                                            // 0x001d3dcc: lui $a0, 0x33
    a2 = g_0032e190;  // Global at 0x0032e190                   // 0x001d3dd0: lw $a2, 0($v0)
    a1 = 0x24 << 16;                                            // 0x001d3dd4: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d3dd8: addiu $a0, $a0, -0x1e70
    func_0010a570();  // 0x10a4d8                                // 0x001d3ddc: jal 0x10a4d8
    a1 = &str_00247230;  // "%s%s%03d"                          // 0x001d3de0: addiu $a1, $a1, 0x7230
    goto label_0x1d3e10;                                        // 0x001d3de4: b 0x1d3e10
    /* nop */                                                   // 0x001d3de8: nop 
label_0x1d3dec:
    v1 = s0 << 2;                                               // 0x001d3dec: sll $v1, $s0, 2
    v0 = gp + -0x7ae0;                                          // 0x001d3df0: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d3df4: addu $v0, $v0, $v1
    a0 = 0x33 << 16;                                            // 0x001d3df8: lui $a0, 0x33
    a2 = g_0032e190;  // Global at 0x0032e190                   // 0x001d3dfc: lw $a2, 0($v0)
    a1 = 0x24 << 16;                                            // 0x001d3e00: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d3e04: addiu $a0, $a0, -0x1e70
    func_0010a570();  // 0x10a4d8                                // 0x001d3e08: jal 0x10a4d8
    a1 = &str_00247240;  // "%s%s%02d_%02d"                     // 0x001d3e0c: addiu $a1, $a1, 0x7240
label_0x1d3e10:
    if (s0 != 0) goto label_0x1d3e28;                           // 0x001d3e10: bnez $s0, 0x1d3e28
    a0 = 0x33 << 16;                                            // 0x001d3e14: lui $a0, 0x33
    a1 = 0x24 << 16;                                            // 0x001d3e18: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d3e1c: addiu $a0, $a0, -0x1e70
    func_0010a990();  // 0x10a860                                // 0x001d3e20: jal 0x10a860
    a1 = a1 + 0x7250;                                           // 0x001d3e24: addiu $a1, $a1, 0x7250
label_0x1d3e28:
    v0 = 0x33 << 16;                                            // 0x001d3e2c: lui $v0, 0x33
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3e30: xori.b $w0, $w0, 0xb0
    v0 = v0 + -0x1e70;                                          // 0x001d3e34: addiu $v0, $v0, -0x1e70
    return;                                                     // 0x001d3e38: jr $ra
    sp = sp + 0x20;                                             // 0x001d3e3c: addiu $sp, $sp, 0x20
}