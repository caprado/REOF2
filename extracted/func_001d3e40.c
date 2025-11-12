void func_001d3e40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d3e40: addiu $sp, $sp, -0x20
    v0 = a1 & 0x8000;                                           // 0x001d3e44: andi $v0, $a1, 0x8000
    if (v0 == 0) goto label_0x1d3ed4;                           // 0x001d3e58: beqz $v0, 0x1d3ed4
    v0 = 0xffff << 16;                                          // 0x001d3e60: lui $v0, 0xffff
    v0 = v0 | 0x7fff;                                           // 0x001d3e64: ori $v0, $v0, 0x7fff
    v0 = t0 & v0;                                               // 0x001d3e68: and $v0, $t0, $v0
    at = (v0 < 0x64) ? 1 : 0;                                   // 0x001d3e6c: slti $at, $v0, 0x64
    if (at == 0) goto label_0x1d3ea8;                           // 0x001d3e70: beqz $at, 0x1d3ea8
    v1 = s0 << 2;                                               // 0x001d3e74: sll $v1, $s0, 2
    v1 = s0 << 2;                                               // 0x001d3e78: sll $v1, $s0, 2
    v0 = gp + -0x7ae0;                                          // 0x001d3e7c: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d3e80: addu $v0, $v0, $v1
    a0 = 0x33 << 16;                                            // 0x001d3e84: lui $a0, 0x33
    a2 = g_ffff0000;  // Global at 0xffff0000                   // 0x001d3e88: lw $a2, 0($v0)
    a1 = 0x24 << 16;                                            // 0x001d3e8c: lui $a1, 0x24
    t0 = t0 & 0x7fff;                                           // 0x001d3e90: andi $t0, $t0, 0x7fff
    a0 = a0 + -0x1e70;                                          // 0x001d3e94: addiu $a0, $a0, -0x1e70
    func_0010a570();  // 0x10a4d8                                // 0x001d3e98: jal 0x10a4d8
    a1 = &str_00247230;  // "%s%s%03d"                          // 0x001d3e9c: addiu $a1, $a1, 0x7230
    goto label_0x1d3f2c;                                        // 0x001d3ea0: b 0x1d3f2c
    /* nop */                                                   // 0x001d3ea4: nop 
label_0x1d3ea8:
    v0 = gp + -0x7ae0;                                          // 0x001d3ea8: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d3eac: addu $v0, $v0, $v1
    a0 = 0x33 << 16;                                            // 0x001d3eb0: lui $a0, 0x33
    a2 = g_ffff0000;  // Global at 0xffff0000                   // 0x001d3eb4: lw $a2, 0($v0)
    a1 = 0x24 << 16;                                            // 0x001d3eb8: lui $a1, 0x24
    t0 = t0 & 0x7fff;                                           // 0x001d3ebc: andi $t0, $t0, 0x7fff
    a0 = a0 + -0x1e70;                                          // 0x001d3ec0: addiu $a0, $a0, -0x1e70
    func_0010a570();  // 0x10a4d8                                // 0x001d3ec4: jal 0x10a4d8
    a1 = &str_00247240;  // "%s%s%02d_%02d"                     // 0x001d3ec8: addiu $a1, $a1, 0x7240
    goto label_0x1d3f2c;                                        // 0x001d3ecc: b 0x1d3f2c
    /* nop */                                                   // 0x001d3ed0: nop 
label_0x1d3ed4:
    at = (t0 < 0x64) ? 1 : 0;                                   // 0x001d3ed4: slti $at, $t0, 0x64
    if (at == 0) goto label_0x1d3f0c;                           // 0x001d3ed8: beqz $at, 0x1d3f0c
    v1 = s0 << 2;                                               // 0x001d3edc: sll $v1, $s0, 2
    v1 = s0 << 2;                                               // 0x001d3ee0: sll $v1, $s0, 2
    v0 = gp + -0x7ae0;                                          // 0x001d3ee4: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d3ee8: addu $v0, $v0, $v1
    a0 = 0x33 << 16;                                            // 0x001d3eec: lui $a0, 0x33
    a2 = g_ffff0000;  // Global at 0xffff0000                   // 0x001d3ef0: lw $a2, 0($v0)
    a1 = 0x24 << 16;                                            // 0x001d3ef4: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d3ef8: addiu $a0, $a0, -0x1e70
    func_0010a570();  // 0x10a4d8                                // 0x001d3efc: jal 0x10a4d8
    a1 = &str_00247258;  // "%s%s%03d_%02d"                     // 0x001d3f00: addiu $a1, $a1, 0x7258
    goto label_0x1d3f2c;                                        // 0x001d3f04: b 0x1d3f2c
    /* nop */                                                   // 0x001d3f08: nop 
label_0x1d3f0c:
    v0 = gp + -0x7ae0;                                          // 0x001d3f0c: addiu $v0, $gp, -0x7ae0
    v0 = v0 + v1;                                               // 0x001d3f10: addu $v0, $v0, $v1
    a0 = 0x33 << 16;                                            // 0x001d3f14: lui $a0, 0x33
    a2 = g_ffff0000;  // Global at 0xffff0000                   // 0x001d3f18: lw $a2, 0($v0)
    a1 = 0x24 << 16;                                            // 0x001d3f1c: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d3f20: addiu $a0, $a0, -0x1e70
    func_0010a570();  // 0x10a4d8                                // 0x001d3f24: jal 0x10a4d8
    a1 = &str_00247268;  // "%sST\\R%03d\\R%03d%02d%02d"        // 0x001d3f28: addiu $a1, $a1, 0x7268
label_0x1d3f2c:
    if (s0 != 0) goto label_0x1d3f44;                           // 0x001d3f2c: bnez $s0, 0x1d3f44
    a0 = 0x33 << 16;                                            // 0x001d3f30: lui $a0, 0x33
    a1 = 0x24 << 16;                                            // 0x001d3f34: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d3f38: addiu $a0, $a0, -0x1e70
    func_0010a990();  // 0x10a860                                // 0x001d3f3c: jal 0x10a860
    a1 = a1 + 0x7250;                                           // 0x001d3f40: addiu $a1, $a1, 0x7250
label_0x1d3f44:
    v0 = 0x33 << 16;                                            // 0x001d3f48: lui $v0, 0x33
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d3f4c: xori.b $w0, $w0, 0xb0
    v0 = v0 + -0x1e70;                                          // 0x001d3f50: addiu $v0, $v0, -0x1e70
    return;                                                     // 0x001d3f54: jr $ra
    sp = sp + 0x20;                                             // 0x001d3f58: addiu $sp, $sp, 0x20
}