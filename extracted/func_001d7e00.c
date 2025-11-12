void func_001d7e00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d7e00: addiu $sp, $sp, -0x50
    a0 = 0x2000;                                                // 0x001d7e04: addiu $a0, $zero, 0x2000
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d7e0c: addu.qb $zero, $sp, $s1
    func_001d3c30();  // 0x1d3c20                                // 0x001d7e10: jal 0x1d3c20
    a0 = 0x15;                                                  // 0x001d7e18: addiu $a0, $zero, 0x15
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e1c: jal 0x1aefd0
    a1 = 2;                                                     // 0x001d7e20: addiu $a1, $zero, 2
    a0 = 1;                                                     // 0x001d7e24: addiu $a0, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e28: jal 0x1aefd0
    a0 = 0x12;                                                  // 0x001d7e30: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e34: jal 0x1aefd0
    a0 = 0x62;                                                  // 0x001d7e3c: addiu $a0, $zero, 0x62
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e40: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d7e44: addiu $a1, $zero, 1
    a0 = 0xc;                                                   // 0x001d7e48: addiu $a0, $zero, 0xc
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e4c: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d7e54: addiu $a0, $zero, 0x66
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e58: jal 0x1aefd0
    a0 = 2;                                                     // 0x001d7e60: addiu $a0, $zero, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e64: jal 0x1aefd0
    a0 = 0x12;                                                  // 0x001d7e6c: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e70: jal 0x1aefd0
    func_001aefe0();  // 0x1aefd0                                // 0x001d7e7c: jal 0x1aefd0
    s0 = 0x39 << 16;                                            // 0x001d7e84: lui $s0, 0x39
    a0 = 0x400;                                                 // 0x001d7e88: addiu $a0, $zero, 0x400
    a1 = 4;                                                     // 0x001d7e8c: addiu $a1, $zero, 4
    func_001b28a0();  // 0x1b2780                                // 0x001d7e90: jal 0x1b2780
    s0 = s0 + -0x51c0;                                          // 0x001d7e94: addiu $s0, $s0, -0x51c0
    at = 0x39 << 16;                                            // 0x001d7e98: lui $at, 0x39
    g_0038b648 = v0;  // Global at 0x0038b648                   // 0x001d7e9c: sw $v0, -0x49b8($at)
    at = 0x39 << 16;                                            // 0x001d7ea0: lui $at, 0x39
    g_0038b658 = 0;  // Global at 0x0038b658                    // 0x001d7ea4: sw $zero, -0x49a8($at)
    at = 0x31 << 16;                                            // 0x001d7ea8: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d7eac: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d7ed8;                           // 0x001d7eb0: bnez $v0, 0x1d7ed8
    a0 = sp + 0x30;                                             // 0x001d7eb4: addiu $a0, $sp, 0x30
    at = 0x31 << 16;                                            // 0x001d7eb8: lui $at, 0x31
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001d7ec0: lhu $a0, 0x37ba($at)
    a1 = -1;                                                    // 0x001d7ec4: addiu $a1, $zero, -1
    func_001d4f30();  // 0x1d4db0                                // 0x001d7ec8: jal 0x1d4db0
    a3 = 2;                                                     // 0x001d7ecc: addiu $a3, $zero, 2
    goto label_0x1d7f14;                                        // 0x001d7ed0: b 0x1d7f14
    /* nop */                                                   // 0x001d7ed4: nop 
label_0x1d7ed8:
    func_00107d30();  // 0x107c70                                // 0x001d7edc: jal 0x107c70
    a2 = 0x20;                                                  // 0x001d7ee0: addiu $a2, $zero, 0x20
    at = 0x31 << 16;                                            // 0x001d7ee4: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d7ee8: lui $a1, 0x24
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001d7eec: lhu $a2, 0x37ba($at)
    a0 = sp + 0x30;                                             // 0x001d7ef0: addiu $a0, $sp, 0x30
    func_0010a570();  // 0x10a4d8                                // 0x001d7ef4: jal 0x10a4d8
    a1 = &str_00247600;  // "data\\rom\\etc\\efdata%02d.bin"    // 0x001d7ef8: addiu $a1, $a1, 0x7600
    v0 = 1 << 16;                                               // 0x001d7efc: lui $v0, 1
    a0 = sp + 0x30;                                             // 0x001d7f04: addiu $a0, $sp, 0x30
    a2 = 0x2000;                                                // 0x001d7f08: addiu $a2, $zero, 0x2000
    func_001aa6d0();  // 0x1aa480                                // 0x001d7f0c: jal 0x1aa480
    a3 = v0 | 2;                                                // 0x001d7f10: ori $a3, $v0, 2
label_0x1d7f14:
    at = 0x36 << 16;                                            // 0x001d7f14: lui $at, 0x36
    v0 = 0x39 << 16;                                            // 0x001d7f18: lui $v0, 0x39
    g_003650f0 = 0;  // Global at 0x003650f0                    // 0x001d7f1c: sw $zero, 0x50f0($at)
    s0 = 0x36 << 16;                                            // 0x001d7f20: lui $s0, 0x36
    at = 0x36 << 16;                                            // 0x001d7f24: lui $at, 0x36
    v0 = v0 + -0x51c0;                                          // 0x001d7f28: addiu $v0, $v0, -0x51c0
    g_003650f4 = 0;  // Global at 0x003650f4                    // 0x001d7f2c: sw $zero, 0x50f4($at)
    a0 = sp + 0x30;                                             // 0x001d7f30: addiu $a0, $sp, 0x30
    at = 0x36 << 16;                                            // 0x001d7f34: lui $at, 0x36
    g_003650e8 = v0;  // Global at 0x003650e8                   // 0x001d7f3c: sw $v0, 0x50e8($at)
    a2 = 0x20;                                                  // 0x001d7f40: addiu $a2, $zero, 0x20
    at = 0x31 << 16;                                            // 0x001d7f44: lui $at, 0x31
    v0 = 0x2f << 16;                                            // 0x001d7f48: lui $v0, 0x2f
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d7f4c: lw $v1, 0x37fc($at)
    v0 = v0 | 0xf000;                                           // 0x001d7f50: ori $v0, $v0, 0xf000
    s0 = s0 + 0x50d0;                                           // 0x001d7f54: addiu $s0, $s0, 0x50d0
    func_00107d30();  // 0x107c70                                // 0x001d7f58: jal 0x107c70
    s1 = v1 + v0;                                               // 0x001d7f5c: addu $s1, $v1, $v0
    at = 0x31 << 16;                                            // 0x001d7f60: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d7f64: lui $a1, 0x24
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001d7f68: lhu $a2, 0x37ba($at)
    a0 = sp + 0x30;                                             // 0x001d7f6c: addiu $a0, $sp, 0x30
    func_0010a570();  // 0x10a4d8                                // 0x001d7f70: jal 0x10a4d8
    a1 = &str_00247610;  // "efdata%02d.bin"                    // 0x001d7f74: addiu $a1, $a1, 0x7610
    at = 0x31 << 16;                                            // 0x001d7f78: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d7f7c: lb $v0, 0x37b7($at)
    if (v0 == 0) goto label_0x1d7fa4;                           // 0x001d7f80: beqz $v0, 0x1d7fa4
    v0 = 1 << 16;                                               // 0x001d7f84: lui $v0, 1
    at = 0x31 << 16;                                            // 0x001d7f88: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d7f8c: lui $a1, 0x24
    a2 = g_003137ba;  // Global at 0x003137ba                   // 0x001d7f90: lhu $a2, 0x37ba($at)
    a0 = sp + 0x30;                                             // 0x001d7f94: addiu $a0, $sp, 0x30
    func_0010a570();  // 0x10a4d8                                // 0x001d7f98: jal 0x10a4d8
    a1 = &str_00247630;  // "def%02d"                           // 0x001d7f9c: addiu $a1, $a1, 0x7630
    v0 = 1 << 16;                                               // 0x001d7fa0: lui $v0, 1
label_0x1d7fa4:
    a0 = sp + 0x30;                                             // 0x001d7fa4: addiu $a0, $sp, 0x30
    func_001d33e0();  // 0x1d3390                                // 0x001d7fb0: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d7fb4: ori $a2, $v0, 1
    if (a2 == 0) goto label_0x1d7fdc;                           // 0x001d7fbc: beqz $a2, 0x1d7fdc
    a0 = 0x36 << 16;                                            // 0x001d7fc0: lui $a0, 0x36
    func_00107b68();  // 0x107ab8                                // 0x001d7fc8: jal 0x107ab8
    a0 = a0 + 0x5130;                                           // 0x001d7fcc: addiu $a0, $a0, 0x5130
    v1 = 0x36 << 16;                                            // 0x001d7fd0: lui $v1, 0x36
    v1 = v1 + 0x5530;                                           // 0x001d7fd4: addiu $v1, $v1, 0x5530
    g_003650ec = v1;  // Global at 0x003650ec                   // 0x001d7fd8: sw $v1, 0x1c($s0)
label_0x1d7fdc:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d7fe0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7fe4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d7fe8: jr $ra
    sp = sp + 0x50;                                             // 0x001d7fec: addiu $sp, $sp, 0x50
}