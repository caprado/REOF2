void func_00126e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00126e18: addiu $sp, $sp, -0x10
    t2 = t2 << 0x10;                                            // 0x00126e1c: sll $t2, $t2, 0x10
    t3 = t3 << 0x10;                                            // 0x00126e20: sll $t3, $t3, 0x10
    t2 = t2 >> 0xc;                                             // 0x00126e2c: sra $t2, $t2, 0xc
    t3 = t3 >> 0xc;                                             // 0x00126e30: sra $t3, $t3, 0xc
    /* move to FPU: $t2, $f2 */                                 // 0x00126e40: mtc1 $t2, $f2
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00126e44: cvt.s.w $f2, $f2
    /* move to FPU: $t3, $f1 */                                 // 0x00126e4c: mtc1 $t3, $f1
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00126e50: cvt.s.w $f1, $f1
    v1 = *(int16_t*)(t5);                                       // 0x00126e54: lh $v1, 0($t5)
    a3 = *(int16_t*)((t5) + 2);                                 // 0x00126e58: lh $a3, 2($t5)
    v0 = (unsigned)t7 >> 0x1f;                                  // 0x00126e5c: srl $v0, $t7, 0x1f
    t1 = *(int16_t*)(t6);                                       // 0x00126e60: lh $t1, 0($t6)
    v0 = t7 + v0;                                               // 0x00126e64: addu $v0, $t7, $v0
    a1 = *(int16_t*)((t6) + 2);                                 // 0x00126e68: lh $a1, 2($t6)
    v1 = v1 << 0x10;                                            // 0x00126e6c: sll $v1, $v1, 0x10
    at = 0x3780 << 16;                                          // 0x00126e70: lui $at, 0x3780
    /* move to FPU: $at, $f0 */                                 // 0x00126e74: mtc1 $at, $f0
    a3 = a3 << 0x10;                                            // 0x00126e78: sll $a3, $a3, 0x10
    t1 = t1 << 0x10;                                            // 0x00126e7c: sll $t1, $t1, 0x10
    a1 = a1 << 0x10;                                            // 0x00126e80: sll $a1, $a1, 0x10
    v0 = v0 >> 1;                                               // 0x00126e84: sra $v0, $v0, 1
    /* FPU: mul.s $f14, $f1, $f0 */                             // 0x00126e88: mul.s $f14, $f1, $f0
    /* move to FPU: $v1, $f8 */                                 // 0x00126e8c: mtc1 $v1, $f8
    /* FPU: cvt.s.w $f8, $f8 */                                 // 0x00126e90: cvt.s.w $f8, $f8
    /* move to FPU: $a3, $f11 */                                // 0x00126e98: mtc1 $a3, $f11
    /* FPU: cvt.s.w $f11, $f11 */                               // 0x00126e9c: cvt.s.w $f11, $f11
    /* move to FPU: $t1, $f9 */                                 // 0x00126ea0: mtc1 $t1, $f9
    /* FPU: cvt.s.w $f9, $f9 */                                 // 0x00126ea4: cvt.s.w $f9, $f9
    /* move to FPU: $a1, $f10 */                                // 0x00126ea8: mtc1 $a1, $f10
    /* FPU: cvt.s.w $f10, $f10 */                               // 0x00126eac: cvt.s.w $f10, $f10
    if (v0 <= 0) goto label_0x127058;                           // 0x00126eb0: blez $v0, 0x127058
    /* FPU: mul.s $f13, $f2, $f0 */                             // 0x00126eb4: mul.s $f13, $f2, $f0
    t8 = -0x100;                                                // 0x00126ebc: addiu $t8, $zero, -0x100
    s1 = 0x22 << 16;                                            // 0x00126ec0: lui $s1, 0x22
    s0 = 0x22 << 16;                                            // 0x00126ec4: lui $s0, 0x22
    /* nop */                                                   // 0x00126ecc: nop 
label_0x126ed0:
    t2 = t2 + 0x12;                                             // 0x00126ed0: addiu $t2, $t2, 0x12
    v1 = *(uint16_t*)(a1);                                      // 0x00126ed4: lhu $v1, 0($a1)
    a0 = *(uint8_t*)((a1) + 1);                                 // 0x00126ed8: lbu $a0, 1($a1)
    v1 = v1 << 8;                                               // 0x00126edc: sll $v1, $v1, 8
    v1 = v1 & t8;                                               // 0x00126ee0: and $v1, $v1, $t8
    a0 = a0 | v1;                                               // 0x00126ee4: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00126ee8: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x00126eec: sra $a0, $a0, 0x10
    v1 = a0 & 0x8000;                                           // 0x00126ef0: andi $v1, $a0, 0x8000
    if (v1 != 0) goto label_0x12709c;                           // 0x00126ef4: bnez $v1, 0x12709c
    v0 = t4 << 1;                                               // 0x00126ef8: sll $v0, $t4, 1
    v1 = *(uint16_t*)(t2);                                      // 0x00126efc: lhu $v1, 0($t2)
    v0 = a0 & 0x1fff;                                           // 0x00126f00: andi $v0, $a0, 0x1fff
    a0 = *(uint8_t*)((t2) + 1);                                 // 0x00126f04: lbu $a0, 1($t2)
    v0 = v0 + 1;                                                // 0x00126f08: addiu $v0, $v0, 1
    v1 = v1 << 8;                                               // 0x00126f0c: sll $v1, $v1, 8
    /* move to FPU: $v0, $f15 */                                // 0x00126f10: mtc1 $v0, $f15
    /* FPU: cvt.s.w $f15, $f15 */                               // 0x00126f14: cvt.s.w $f15, $f15
    v1 = v1 & t8;                                               // 0x00126f18: and $v1, $v1, $t8
    a0 = a0 | v1;                                               // 0x00126f1c: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00126f20: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x00126f24: sra $a0, $a0, 0x10
    v1 = a0 & 0x8000;                                           // 0x00126f28: andi $v1, $a0, 0x8000
    if (v1 != 0) goto label_0x12709c;                           // 0x00126f2c: bnez $v1, 0x12709c
    v0 = t4 << 1;                                               // 0x00126f30: sll $v0, $t4, 1
    v0 = a0 & 0x1fff;                                           // 0x00126f34: andi $v0, $a0, 0x1fff
    a1 = a1 + 2;                                                // 0x00126f38: addiu $a1, $a1, 2
    v0 = v0 + 1;                                                // 0x00126f3c: addiu $v0, $v0, 1
    t2 = t2 + 2;                                                // 0x00126f40: addiu $t2, $t2, 2
    /* move to FPU: $v0, $f12 */                                // 0x00126f44: mtc1 $v0, $f12
    /* FPU: cvt.s.w $f12, $f12 */                               // 0x00126f48: cvt.s.w $f12, $f12
    t3 = s1 + 0x2da8;                                           // 0x00126f4c: addiu $t3, $s1, 0x2da8
    t1 = s0 + 0x31a8;                                           // 0x00126f50: addiu $t1, $s0, 0x31a8
    a3 = 0x1e;                                                  // 0x00126f54: addiu $a3, $zero, 0x1e
label_0x126f58:
    a0 = *(uint8_t*)(a1);                                       // 0x00126f58: lbu $a0, 0($a1)
    a1 = a1 + 1;                                                // 0x00126f5c: addiu $a1, $a1, 1
    /* FPU: mul.s $f2, $f14, $f11 */                            // 0x00126f60: mul.s $f2, $f14, $f11
    /* FPU: mov.s $f11, $f8 */                                  // 0x00126f64: mov.s $f11, $f8
    a0 = a0 << 2;                                               // 0x00126f68: sll $a0, $a0, 2
    /* FPU: mul.s $f0, $f13, $f8 */                             // 0x00126f6c: mul.s $f0, $f13, $f8
    v0 = a0 + t3;                                               // 0x00126f70: addu $v0, $a0, $t3
    a0 = a0 + t1;                                               // 0x00126f74: addu $a0, $a0, $t1
    v1 = *(uint8_t*)(t2);                                       // 0x00126f78: lbu $v1, 0($t2)
    t2 = t2 + 1;                                                // 0x00126f7c: addiu $t2, $t2, 1
    FPU_F4 = *(float*)(v0);  // Load float                      // 0x00126f80: lwc1 $f4, 0($v0)
    /* FPU: mul.s $f3, $f14, $f10 */                            // 0x00126f84: mul.s $f3, $f14, $f10
    /* FPU: add.s $f0, $f0, $f2 */                              // 0x00126f88: add.s $f0, $f0, $f2
    v1 = v1 << 2;                                               // 0x00126f8c: sll $v1, $v1, 2
    /* FPU: mul.s $f2, $f4, $f15 */                             // 0x00126f90: mul.s $f2, $f4, $f15
    FPU_F4 = *(float*)(a0);  // Load float                      // 0x00126f94: lwc1 $f4, 0($a0)
    /* FPU: mul.s $f1, $f13, $f9 */                             // 0x00126f98: mul.s $f1, $f13, $f9
    v0 = v1 + t3;                                               // 0x00126f9c: addu $v0, $v1, $t3
    FPU_F7 = *(float*)(v0);  // Load float                      // 0x00126fa0: lwc1 $f7, 0($v0)
    /* FPU: mov.s $f10, $f9 */                                  // 0x00126fa4: mov.s $f10, $f9
    /* FPU: mul.s $f6, $f14, $f11 */                            // 0x00126fa8: mul.s $f6, $f14, $f11
    v1 = v1 + t1;                                               // 0x00126fac: addu $v1, $v1, $t1
    /* FPU: add.s $f8, $f0, $f2 */                              // 0x00126fb0: add.s $f8, $f0, $f2
    a3 = a3 + -2;                                               // 0x00126fb4: addiu $a3, $a3, -2
    /* FPU: add.s $f1, $f1, $f3 */                              // 0x00126fb8: add.s $f1, $f1, $f3
    /* FPU: mul.s $f3, $f7, $f12 */                             // 0x00126fbc: mul.s $f3, $f7, $f12
    FPU_F7 = *(float*)(v1);  // Load float                      // 0x00126fc0: lwc1 $f7, 0($v1)
    /* FPU: mul.s $f5, $f14, $f10 */                            // 0x00126fc4: mul.s $f5, $f14, $f10
    /* FPU: mul.s $f0, $f13, $f8 */                             // 0x00126fc8: mul.s $f0, $f13, $f8
    /* FPU: mov.s $f11, $f8 */                                  // 0x00126fcc: mov.s $f11, $f8
    /* FPU: mul.s $f4, $f4, $f15 */                             // 0x00126fd0: mul.s $f4, $f4, $f15
    /* FPU: add.s $f9, $f1, $f3 */                              // 0x00126fd4: add.s $f9, $f1, $f3
    /* FPU: cvt.w.s $f1, $f8 */                                 // 0x00126fd8: cvt.w.s $f1, $f8
    /* move from FPU: $v1, $f1 */                               // 0x00126fdc: mfc1 $v1, $f1
    /* FPU: add.s $f0, $f0, $f6 */                              // 0x00126fe0: add.s $f0, $f0, $f6
    /* FPU: mul.s $f2, $f7, $f12 */                             // 0x00126fe4: mul.s $f2, $f7, $f12
    /* FPU: mul.s $f1, $f13, $f9 */                             // 0x00126fe8: mul.s $f1, $f13, $f9
    /* FPU: mov.s $f10, $f9 */                                  // 0x00126fec: mov.s $f10, $f9
    v0 = v1 >> 0x10;                                            // 0x00126ff0: sra $v0, $v1, 0x10
    /* FPU: cvt.w.s $f3, $f9 */                                 // 0x00126ff4: cvt.w.s $f3, $f9
    /* move from FPU: $v1, $f3 */                               // 0x00126ff8: mfc1 $v1, $f3
    /* FPU: add.s $f8, $f0, $f4 */                              // 0x00126ffc: add.s $f8, $f0, $f4
    *(uint16_t*)(a2) = v0;                                      // 0x00127000: sh $v0, 0($a2)
    a2 = a2 + 2;                                                // 0x00127004: addiu $a2, $a2, 2
    /* FPU: add.s $f1, $f1, $f5 */                              // 0x00127008: add.s $f1, $f1, $f5
    v0 = v1 >> 0x10;                                            // 0x0012700c: sra $v0, $v1, 0x10
    *(uint16_t*)(t0) = v0;                                      // 0x00127010: sh $v0, 0($t0)
    t0 = t0 + 2;                                                // 0x00127014: addiu $t0, $t0, 2
    /* FPU: cvt.w.s $f0, $f8 */                                 // 0x00127018: cvt.w.s $f0, $f8
    /* move from FPU: $v1, $f0 */                               // 0x0012701c: mfc1 $v1, $f0
    /* FPU: add.s $f9, $f1, $f2 */                              // 0x00127020: add.s $f9, $f1, $f2
    v0 = v1 >> 0x10;                                            // 0x00127024: sra $v0, $v1, 0x10
    /* FPU: cvt.w.s $f0, $f9 */                                 // 0x00127028: cvt.w.s $f0, $f9
    /* move from FPU: $v1, $f0 */                               // 0x0012702c: mfc1 $v1, $f0
    *(uint16_t*)(a2) = v0;                                      // 0x00127030: sh $v0, 0($a2)
    a2 = a2 + 2;                                                // 0x00127034: addiu $a2, $a2, 2
    v0 = v1 >> 0x10;                                            // 0x00127038: sra $v0, $v1, 0x10
    *(uint16_t*)(t0) = v0;                                      // 0x0012703c: sh $v0, 0($t0)
    if (a3 >= 0) goto label_0x126f58;                           // 0x00127040: bgez $a3, 0x126f58
    t0 = t0 + 2;                                                // 0x00127044: addiu $t0, $t0, 2
    t4 = t4 + 1;                                                // 0x00127048: addiu $t4, $t4, 1
    v0 = (t4 < t9) ? 1 : 0;                                     // 0x0012704c: slt $v0, $t4, $t9
    if (v0 != 0) goto label_0x126ed0;                           // 0x00127050: bnez $v0, 0x126ed0
label_0x127058:
    /* FPU: cvt.w.s $f0, $f8 */                                 // 0x00127058: cvt.w.s $f0, $f8
    /* move from FPU: $v1, $f0 */                               // 0x0012705c: mfc1 $v1, $f0
    /* FPU: cvt.w.s $f0, $f11 */                                // 0x00127064: cvt.w.s $f0, $f11
    /* move from FPU: $a0, $f0 */                               // 0x00127068: mfc1 $a0, $f0
    /* FPU: cvt.w.s $f0, $f9 */                                 // 0x0012706c: cvt.w.s $f0, $f9
    /* move from FPU: $a1, $f0 */                               // 0x00127070: mfc1 $a1, $f0
    /* FPU: cvt.w.s $f0, $f10 */                                // 0x00127074: cvt.w.s $f0, $f10
    /* move from FPU: $a2, $f0 */                               // 0x00127078: mfc1 $a2, $f0
    v1 = v1 >> 0x10;                                            // 0x0012707c: sra $v1, $v1, 0x10
    a0 = a0 >> 0x10;                                            // 0x00127080: sra $a0, $a0, 0x10
    *(uint16_t*)(t5) = v1;                                      // 0x00127084: sh $v1, 0($t5)
    a1 = a1 >> 0x10;                                            // 0x00127088: sra $a1, $a1, 0x10
    *(uint16_t*)((t5) + 2) = a0;                                // 0x0012708c: sh $a0, 2($t5)
    a2 = a2 >> 0x10;                                            // 0x00127090: sra $a2, $a2, 0x10
    *(uint16_t*)(t6) = a1;                                      // 0x00127094: sh $a1, 0($t6)
    *(uint16_t*)((t6) + 2) = a2;                                // 0x00127098: sh $a2, 2($t6)
label_0x12709c:
    return;                                                     // 0x001270a4: jr $ra
    sp = sp + 0x10;                                             // 0x001270a8: addiu $sp, $sp, 0x10
}