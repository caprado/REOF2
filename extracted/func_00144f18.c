void func_00144f18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xb0;                                            // 0x00144f18: addiu $sp, $sp, -0xb0
    v0 = 0x1000 << 16;                                          // 0x00144f1c: lui $v0, 0x1000
    v0 = v0 | 0x2010;                                           // 0x00144f24: ori $v0, $v0, 0x2010
    a1 = 0x8000 << 16;                                          // 0x00144f2c: lui $a1, 0x8000
    a1 = a1 | 0x4000;                                           // 0x00144f34: ori $a1, $a1, 0x4000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00144f5c: lw $v1, 0($v0)
    v0 = 0x8000 << 16;                                          // 0x00144f60: lui $v0, 0x8000
    v1 = v1 & a1;                                               // 0x00144f64: and $v1, $v1, $a1
    if (v1 != v0) goto label_0x145054;                          // 0x00144f68: bne $v1, $v0, 0x145054
    v0 = 0x1000 << 16;                                          // 0x00144f70: lui $v0, 0x1000
    s3 = 0x1000 << 16;                                          // 0x00144f74: lui $s3, 0x1000
    local_0 = v0;                                               // 0x00144f78: sw $v0, 0($sp)
    s1 = 0x1000 << 16;                                          // 0x00144f7c: lui $s1, 0x1000
    v0 = v0 | 0xb420;                                           // 0x00144f80: ori $v0, $v0, 0xb420
    s4 = 0x1000 << 16;                                          // 0x00144f84: lui $s4, 0x1000
    s5 = 0x1000 << 16;                                          // 0x00144f88: lui $s5, 0x1000
    s6 = 0xfffe << 16;                                          // 0x00144f8c: lui $s6, 0xfffe
    fp = 0x1000 << 16;                                          // 0x00144f90: lui $fp, 0x1000
    s2 = 0x1000 << 16;                                          // 0x00144f94: lui $s2, 0x1000
    s0 = 0x8000 << 16;                                          // 0x00144f98: lui $s0, 0x8000
    local_0 = v0;                                               // 0x00144f9c: sw $v0, 0($sp)
    s3 = s3 | 0xf590;                                           // 0x00144fa0: ori $s3, $s3, 0xf590
    s1 = s1 | 0xf520;                                           // 0x00144fa4: ori $s1, $s1, 0xf520
    s4 = s4 | 0xb400;                                           // 0x00144fa8: ori $s4, $s4, 0xb400
    s5 = s5 | 0xb000;                                           // 0x00144fac: ori $s5, $s5, 0xb000
    s6 = s6 | 0xffff;                                           // 0x00144fb0: ori $s6, $s6, 0xffff
    fp = fp | 0xb020;                                           // 0x00144fb4: ori $fp, $fp, 0xb020
    s2 = s2 | 0x2010;                                           // 0x00144fb8: ori $s2, $s2, 0x2010
    s0 = s0 | 0x4000;                                           // 0x00144fbc: ori $s0, $s0, 0x4000
    v0 = *(int32_t*)((s7) + 0x10a0);                            // 0x00144fc0: lw $v0, 0x10a0($s7)
    /* nop */                                                   // 0x00144fc4: nop 
label_0x144fc8:
    if (v0 == 0) goto label_0x145024;                           // 0x00144fc8: beqz $v0, 0x145024
    func_0011d320();  // 11d320                                // 0x00144fd0: jal 0x11d320
    /* nop */                                                   // 0x00144fd4: nop 
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00144fd8: lw $v1, 0($s1)
    a0 = 1 << 16;                                               // 0x00144fdc: lui $a0, 1
    v1 = v1 | a0;                                               // 0x00144fe0: or $v1, $v1, $a0
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00144fe4: sw $v1, 0($s3)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00144fe8: sw $zero, 0($s4)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00144fec: sw $zero, 0($s5)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00144ff0: lw $v1, 0($s1)
    v1 = v1 & s6;                                               // 0x00144ff4: and $v1, $v1, $s6
    if (v0 == 0) goto label_0x145008;                           // 0x00144ff8: beqz $v0, 0x145008
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00144ffc: sw $v1, 0($s3)
    func_0011d378();  // 11d378                                // 0x00145000: jal 0x11d378
    /* nop */                                                   // 0x00145004: nop 
label_0x145008:
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00145008: sw $zero, 0($fp)
    v1 = 0x4000 << 16;                                          // 0x0014500c: lui $v1, 0x4000
    v0 = local_0;                                               // 0x00145010: lw $v0, 0($sp)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00145014: sw $zero, 0($v0)
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00145018: sw $v1, 0($s2)
    goto label_0x145054;                                        // 0x0014501c: b 0x145054
label_0x145024:
    v0 = (v0 < 0x1389) ? 1 : 0;                                 // 0x00145024: slti $v0, $v0, 0x1389
    if (v0 != 0) goto label_0x14503c;                           // 0x00145028: bnez $v0, 0x14503c
    a0 = a0 + 1;                                                // 0x0014502c: addiu $a0, $a0, 1
    func_00147ca0();  // 147ca0                                // 0x00145030: jal 0x147ca0
    a0 = *(int32_t*)((s7) + 0x870);                             // 0x00145034: lw $a0, 0x870($s7)
label_0x14503c:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0014503c: lw $v0, 0($s2)
    v1 = 0x8000 << 16;                                          // 0x00145040: lui $v1, 0x8000
    v0 = v0 & s0;                                               // 0x00145044: and $v0, $v0, $s0
    if (v0 == v1) goto label_0x144fc8;                          // 0x00145048: beql $v0, $v1, 0x144fc8
    v0 = *(int32_t*)((s7) + 0x10a0);                            // 0x0014504c: lw $v0, 0x10a0($s7)
label_0x145054:
    return;                                                     // 0x00145078: jr $ra
    sp = sp + 0xb0;                                             // 0x0014507c: addiu $sp, $sp, 0xb0
}