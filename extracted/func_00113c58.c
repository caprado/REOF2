void func_00113c58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00113c58: addiu $sp, $sp, -0x10
    func_00113be0();  // 113be0                                // 0x00113c60: jal 0x113be0
    a0 = 1;                                                     // 0x00113c64: addiu $a0, $zero, 1
    v0 = 0x1000 << 16;                                          // 0x00113c68: lui $v0, 0x1000
    v1 = 0x4000 << 16;                                          // 0x00113c6c: lui $v1, 0x4000
    v0 = v0 | 0x2010;                                           // 0x00113c70: ori $v0, $v0, 0x2010
    a0 = 0x1000 << 16;                                          // 0x00113c74: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00113c78: sw $v1, 0($v0)
    a0 = a0 | 0x2010;                                           // 0x00113c7c: ori $a0, $a0, 0x2010
label_0x113c80:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113c80: lw $v0, 0($a0)
    /* nop */                                                   // 0x00113c84: nop 
    /* nop */                                                   // 0x00113c88: nop 
    /* nop */                                                   // 0x00113c8c: nop 
    /* nop */                                                   // 0x00113c90: nop 
    if (v0 < 0) goto label_0x113c80;                            // 0x00113c94: bltz $v0, 0x113c80
    /* nop */                                                   // 0x00113c98: nop 
    v0 = 0x1000 << 16;                                          // 0x00113c9c: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x00113ca0: lui $v1, 0x1000
    v0 = v0 | 0x2000;                                           // 0x00113ca4: ori $v0, $v0, 0x2000
    v1 = v1 | 0x2010;                                           // 0x00113ca8: ori $v1, $v1, 0x2010
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00113cac: sw $zero, 0($v0)
label_0x113cb0:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113cb0: lw $v0, 0($v1)
    /* nop */                                                   // 0x00113cb4: nop 
    /* nop */                                                   // 0x00113cb8: nop 
    /* nop */                                                   // 0x00113cbc: nop 
    /* nop */                                                   // 0x00113cc0: nop 
    if (v0 < 0) goto label_0x113cb0;                            // 0x00113cc4: bltz $v0, 0x113cb0
    /* nop */                                                   // 0x00113cc8: nop 
    a1 = 0x1f << 16;                                            // 0x00113ccc: lui $a1, 0x1f
    a0 = 0x1000 << 16;                                          // 0x00113cd0: lui $a0, 0x1000
    a1 = a1 + 0x2b0;                                            // 0x00113cd4: addiu $a1, $a1, 0x2b0
    a0 = a0 | 0x7010;                                           // 0x00113cd8: ori $a0, $a0, 0x7010
    /* FPU: andi.b $w0, $w0, 0xa2 */                            // 0x00113cdc: andi.b $w0, $w0, 0xa2
    a2 = 0x1000 << 16;                                          // 0x00113ce0: lui $a2, 0x1000
    a3 = 0x5000 << 16;                                          // 0x00113ce4: lui $a3, 0x5000
    a2 = a2 | 0x2000;                                           // 0x00113ce8: ori $a2, $a2, 0x2000
    t0 = 0x1000 << 16;                                          // 0x00113cf0: lui $t0, 0x1000
    t0 = t0 | 0x2010;                                           // 0x00113cf4: ori $t0, $t0, 0x2010
    /* FPU: adds_a.h $w0, $w0, $w3 */                           // 0x00113cf8: adds_a.h $w0, $w0, $w3
    /* FPU: ld.b $w0, 0xa2($zero) */                            // 0x00113d00: ld.b $w0, 0xa2($zero)
    /* FPU: andi.b $w1, $w0, 0xa2 */                            // 0x00113d10: andi.b $w1, $w0, 0xa2
    /* FPU: andi.b $w1, $w0, 0xa3 */                            // 0x00113d18: andi.b $w1, $w0, 0xa3
    /* FPU: andi.b $w1, $w0, 0xa2 */                            // 0x00113d20: andi.b $w1, $w0, 0xa2
    /* FPU: andi.b $w1, $w0, 0xa3 */                            // 0x00113d28: andi.b $w1, $w0, 0xa3
    g_10000000 = a3;  // Global at 0x10000000                   // 0x00113d30: sw $a3, 0($a2)
    /* nop */                                                   // 0x00113d34: nop 
label_0x113d38:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113d38: lw $v0, 0($t0)
    /* nop */                                                   // 0x00113d3c: nop 
    /* nop */                                                   // 0x00113d40: nop 
    /* nop */                                                   // 0x00113d44: nop 
    /* nop */                                                   // 0x00113d48: nop 
    if (v0 < 0) goto label_0x113d38;                            // 0x00113d4c: bltz $v0, 0x113d38
    /* nop */                                                   // 0x00113d50: nop 
    v0 = 0x1000 << 16;                                          // 0x00113d54: lui $v0, 0x1000
    v1 = 0x5800 << 16;                                          // 0x00113d58: lui $v1, 0x5800
    v0 = v0 | 0x2000;                                           // 0x00113d5c: ori $v0, $v0, 0x2000
    a0 = 0x1000 << 16;                                          // 0x00113d60: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00113d64: sw $v1, 0($v0)
    a0 = a0 | 0x2010;                                           // 0x00113d68: ori $a0, $a0, 0x2010
    /* nop */                                                   // 0x00113d6c: nop 
label_0x113d70:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113d70: lw $v0, 0($a0)
    /* nop */                                                   // 0x00113d74: nop 
    /* nop */                                                   // 0x00113d78: nop 
    /* nop */                                                   // 0x00113d7c: nop 
    /* nop */                                                   // 0x00113d80: nop 
    if (v0 < 0) goto label_0x113d70;                            // 0x00113d84: bltz $v0, 0x113d70
    /* nop */                                                   // 0x00113d88: nop 
    v1 = 0x1f << 16;                                            // 0x00113d8c: lui $v1, 0x1f
    a0 = 0x1000 << 16;                                          // 0x00113d90: lui $a0, 0x1000
    v1 = v1 + 0x300;                                            // 0x00113d94: addiu $v1, $v1, 0x300
    a0 = a0 | 0x7010;                                           // 0x00113d98: ori $a0, $a0, 0x7010
    /* FPU: andi.b $w0, $w0, 0x62 */                            // 0x00113d9c: andi.b $w0, $w0, 0x62
    a1 = 0x1000 << 16;                                          // 0x00113da0: lui $a1, 0x1000
    a2 = 0x6000 << 16;                                          // 0x00113da4: lui $a2, 0x6000
    a1 = a1 | 0x2000;                                           // 0x00113da8: ori $a1, $a1, 0x2000
    a3 = 0x1000 << 16;                                          // 0x00113db0: lui $a3, 0x1000
    a3 = a3 | 0x2010;                                           // 0x00113db4: ori $a3, $a3, 0x2010
    /* FPU: add_a.d $w0, $w0, $w2 */                            // 0x00113db8: add_a.d $w0, $w0, $w2
    g_10000000 = a2;  // Global at 0x10000000                   // 0x00113dc0: sw $a2, 0($a1)
    /* nop */                                                   // 0x00113dc4: nop 
label_0x113dc8:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113dc8: lw $v0, 0($a3)
    /* nop */                                                   // 0x00113dcc: nop 
    /* nop */                                                   // 0x00113dd0: nop 
    /* nop */                                                   // 0x00113dd4: nop 
    /* nop */                                                   // 0x00113dd8: nop 
    if (v0 < 0) goto label_0x113dc8;                            // 0x00113ddc: bltz $v0, 0x113dc8
    /* nop */                                                   // 0x00113de0: nop 
    v0 = 0x1000 << 16;                                          // 0x00113de4: lui $v0, 0x1000
    v1 = 0x9000 << 16;                                          // 0x00113de8: lui $v1, 0x9000
    v0 = v0 | 0x2000;                                           // 0x00113dec: ori $v0, $v0, 0x2000
    a0 = 0x1000 << 16;                                          // 0x00113df0: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00113df4: sw $v1, 0($v0)
    a0 = a0 | 0x2010;                                           // 0x00113df8: ori $a0, $a0, 0x2010
    /* nop */                                                   // 0x00113dfc: nop 
label_0x113e00:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113e00: lw $v0, 0($a0)
    /* nop */                                                   // 0x00113e04: nop 
    /* nop */                                                   // 0x00113e08: nop 
    /* nop */                                                   // 0x00113e0c: nop 
    /* nop */                                                   // 0x00113e10: nop 
    if (v0 < 0) goto label_0x113e00;                            // 0x00113e14: bltz $v0, 0x113e00
    /* nop */                                                   // 0x00113e18: nop 
    v0 = 0x1000 << 16;                                          // 0x00113e1c: lui $v0, 0x1000
    v1 = 0x4000 << 16;                                          // 0x00113e20: lui $v1, 0x4000
    v0 = v0 | 0x2010;                                           // 0x00113e24: ori $v0, $v0, 0x2010
    a0 = 0x1000 << 16;                                          // 0x00113e28: lui $a0, 0x1000
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00113e2c: sw $v1, 0($v0)
    a0 = a0 | 0x2010;                                           // 0x00113e30: ori $a0, $a0, 0x2010
    /* nop */                                                   // 0x00113e34: nop 
label_0x113e38:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113e38: lw $v0, 0($a0)
    /* nop */                                                   // 0x00113e3c: nop 
    /* nop */                                                   // 0x00113e40: nop 
    /* nop */                                                   // 0x00113e44: nop 
    /* nop */                                                   // 0x00113e48: nop 
    if (v0 < 0) goto label_0x113e38;                            // 0x00113e4c: bltz $v0, 0x113e38
    /* nop */                                                   // 0x00113e50: nop 
    v0 = 0x1000 << 16;                                          // 0x00113e54: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x00113e58: lui $v1, 0x1000
    v0 = v0 | 0x2000;                                           // 0x00113e5c: ori $v0, $v0, 0x2000
    v1 = v1 | 0x2010;                                           // 0x00113e60: ori $v1, $v1, 0x2010
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00113e64: sw $zero, 0($v0)
label_0x113e68:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113e68: lw $v0, 0($v1)
    /* nop */                                                   // 0x00113e6c: nop 
    /* nop */                                                   // 0x00113e70: nop 
    /* nop */                                                   // 0x00113e74: nop 
    /* nop */                                                   // 0x00113e78: nop 
    if (v0 < 0) goto label_0x113e68;                            // 0x00113e7c: bltz $v0, 0x113e68
    /* nop */                                                   // 0x00113e80: nop 
    return;                                                     // 0x00113e88: jr $ra
    sp = sp + 0x10;                                             // 0x00113e8c: addiu $sp, $sp, 0x10
}