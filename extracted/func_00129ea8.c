void func_00129ea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129ea8: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00129eac: lui $v0, 0x1f
    s0 = 0x1f << 16;                                            // 0x00129eb4: lui $s0, 0x1f
    v0 = v0 + 0x5998;                                           // 0x00129ebc: addiu $v0, $v0, 0x5998
    v1 = g_001f59b0;  // Global at 0x001f59b0                   // 0x00129ec0: lw $v1, 0x59b0($s0)
    a0 = g_001f5998;  // Global at 0x001f5998                   // 0x00129ec4: lw $a0, 0($v0)
    /* bnezl $v1, 0x12a008 */                                   // 0x00129ec8: bnezl $v1, 0x12a008
    v1 = s0 + 0x59b0;                                           // 0x00129ecc: addiu $v1, $s0, 0x59b0
    func_001261a0();  // 0x126190                                // 0x00129ed0: jal 0x126190
    /* nop */                                                   // 0x00129ed4: nop 
    func_001261b8();  // 0x1261a0                                // 0x00129ed8: jal 0x1261a0
    /* nop */                                                   // 0x00129edc: nop 
    func_0013fd30();  // 0x13fce0                                // 0x00129ee0: jal 0x13fce0
    /* nop */                                                   // 0x00129ee4: nop 
    func_0013f518();  // 0x13f4b8                                // 0x00129ee8: jal 0x13f4b8
    /* nop */                                                   // 0x00129eec: nop 
    func_0013efd0();  // 0x13ef80                                // 0x00129ef0: jal 0x13ef80
    /* nop */                                                   // 0x00129ef4: nop 
    func_00127d30();  // 0x127cf8                                // 0x00129ef8: jal 0x127cf8
    /* nop */                                                   // 0x00129efc: nop 
    func_0012fdc0();  // 0x12fd88                                // 0x00129f00: jal 0x12fd88
    /* nop */                                                   // 0x00129f04: nop 
    func_0012c638();  // 0x12c608                                // 0x00129f08: jal 0x12c608
    /* nop */                                                   // 0x00129f0c: nop 
    func_001280d0();  // 0x128008                                // 0x00129f10: jal 0x128008
    /* nop */                                                   // 0x00129f14: nop 
    func_0012c308();  // 0x12c2f0                                // 0x00129f18: jal 0x12c2f0
    /* nop */                                                   // 0x00129f1c: nop 
    func_0013d2d8();  // 0x13d258                                // 0x00129f20: jal 0x13d258
    /* nop */                                                   // 0x00129f24: nop 
    func_00141df8();  // 0x141db8                                // 0x00129f28: jal 0x141db8
    /* nop */                                                   // 0x00129f2c: nop 
    a0 = 0x13 << 16;                                            // 0x00129f30: lui $a0, 0x13
    func_0012c328();  // 0x12c320                                // 0x00129f38: jal 0x12c320
    a0 = a0 + -0x6240;                                          // 0x00129f3c: addiu $a0, $a0, -0x6240
    a0 = 0x13 << 16;                                            // 0x00129f40: lui $a0, 0x13
    a0 = a0 + -0x6228;                                          // 0x00129f44: addiu $a0, $a0, -0x6228
    func_0013d1b8();  // 0x13d190                                // 0x00129f48: jal 0x13d190
    a0 = 0x1f << 16;                                            // 0x00129f50: lui $a0, 0x1f
    a0 = a0 + 0x59c8;                                           // 0x00129f54: addiu $a0, $a0, 0x59c8
    func_00107d30();  // 0x107c70                                // 0x00129f5c: jal 0x107c70
    a2 = 0xc40;                                                 // 0x00129f60: addiu $a2, $zero, 0xc40
    func_0012b2e0();  // 0x12b2d0                                // 0x00129f64: jal 0x12b2d0
    /* nop */                                                   // 0x00129f68: nop 
    v0 = 1;                                                     // 0x00129f70: addiu $v0, $zero, 1
    a1 = 0x13 << 16;                                            // 0x00129f74: lui $a1, 0x13
    a0 = 5;                                                     // 0x00129f78: addiu $a0, $zero, 5
    a1 = a1 + -0x61c8;                                          // 0x00129f7c: addiu $a1, $a1, -0x61c8
    if (a3 != v0) goto label_0x129fd8;                          // 0x00129f80: bne $a3, $v0, 0x129fd8
    v0 = 0x1f << 16;                                            // 0x00129f88: lui $v0, 0x1f
    v1 = g_001f59bc;  // Global at 0x001f59bc                   // 0x00129f8c: lw $v1, 0x59bc($v0)
    if (v1 != a3) goto label_0x129fd8;                          // 0x00129f90: bne $v1, $a3, 0x129fd8
    a2 = 0x13 << 16;                                            // 0x00129f98: lui $a2, 0x13
    a0 = 2;                                                     // 0x00129f9c: addiu $a0, $zero, 2
    a1 = 1;                                                     // 0x00129fa0: addiu $a1, $zero, 1
    func_001419d8();  // 0x141918                                // 0x00129fa4: jal 0x141918
    a2 = a2 + -0x6198;                                          // 0x00129fa8: addiu $a2, $a2, -0x6198
    a1 = 0x13 << 16;                                            // 0x00129fac: lui $a1, 0x13
    a1 = a1 + -0x6178;                                          // 0x00129fb0: addiu $a1, $a1, -0x6178
    a0 = 4;                                                     // 0x00129fb4: addiu $a0, $zero, 4
    func_001418a0();  // 0x1417d0                                // 0x00129fb8: jal 0x1417d0
    v1 = 0x1f << 16;                                            // 0x00129fc0: lui $v1, 0x1f
    a1 = 0x13 << 16;                                            // 0x00129fc4: lui $a1, 0x13
    a0 = 5;                                                     // 0x00129fc8: addiu $a0, $zero, 5
    a1 = a1 + -0x61e8;                                          // 0x00129fcc: addiu $a1, $a1, -0x61e8
    g_001f59c0 = v0;  // Global at 0x001f59c0                   // 0x00129fd4: sw $v0, 0x59c0($v1)
label_0x129fd8:
    func_001418a0();  // 0x1417d0                                // 0x00129fd8: jal 0x1417d0
    /* nop */                                                   // 0x00129fdc: nop 
    v1 = 0x1f << 16;                                            // 0x00129fe0: lui $v1, 0x1f
    g_001f59b8 = v0;  // Global at 0x001f59b8                   // 0x00129fe4: sw $v0, 0x59b8($v1)
    v0 = 0x1f << 16;                                            // 0x00129fe8: lui $v0, 0x1f
    a0 = 0x3c;                                                  // 0x00129fec: addiu $a0, $zero, 0x3c
    v0 = v0 + 0x59c4;                                           // 0x00129ff0: addiu $v0, $v0, 0x59c4
    func_00132578();  // 0x132568                                // 0x00129ff4: jal 0x132568
    g_001f59c4 = 0;  // Global at 0x001f59c4                    // 0x00129ff8: sw $zero, 0($v0)
    func_001261d0();  // 0x1261b8                                // 0x00129ffc: jal 0x1261b8
    /* nop */                                                   // 0x0012a000: nop 
    v1 = s0 + 0x59b0;                                           // 0x0012a004: addiu $v1, $s0, 0x59b0
    v0 = g_001f59b0;  // Global at 0x001f59b0                   // 0x0012a00c: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0012a014: addiu $v0, $v0, 1
    g_001f59b0 = v0;  // Global at 0x001f59b0                   // 0x0012a018: sw $v0, 0($v1)
    return;                                                     // 0x0012a01c: jr $ra
    sp = sp + 0x10;                                             // 0x0012a020: addiu $sp, $sp, 0x10
}