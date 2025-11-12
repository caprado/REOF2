void func_001270b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001270b0: addiu $sp, $sp, -0x20
    t2 = t2 << 0x10;                                            // 0x001270b4: sll $t2, $t2, 0x10
    t3 = t3 << 0x10;                                            // 0x001270b8: sll $t3, $t3, 0x10
    t2 = t2 >> 0xc;                                             // 0x001270c4: sra $t2, $t2, 0xc
    t3 = t3 >> 0xc;                                             // 0x001270cc: sra $t3, $t3, 0xc
    /* move to FPU: $t2, $f2 */                                 // 0x001270dc: mtc1 $t2, $f2
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001270e0: cvt.s.w $f2, $f2
    /* move to FPU: $t3, $f1 */                                 // 0x001270e4: mtc1 $t3, $f1
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x001270e8: cvt.s.w $f1, $f1
    v1 = *(int16_t*)(t6);                                       // 0x001270ec: lh $v1, 0($t6)
    a3 = *(int16_t*)((t6) + 2);                                 // 0x001270f0: lh $a3, 2($t6)
    v0 = (unsigned)t8 >> 0x1f;                                  // 0x001270f4: srl $v0, $t8, 0x1f
    t1 = *(int16_t*)(t7);                                       // 0x001270f8: lh $t1, 0($t7)
    v0 = t8 + v0;                                               // 0x001270fc: addu $v0, $t8, $v0
    a1 = *(int16_t*)((t7) + 2);                                 // 0x00127100: lh $a1, 2($t7)
    v1 = v1 << 0x10;                                            // 0x00127104: sll $v1, $v1, 0x10
    at = 0x3780 << 16;                                          // 0x00127108: lui $at, 0x3780
    /* move to FPU: $at, $f0 */                                 // 0x0012710c: mtc1 $at, $f0
    a3 = a3 << 0x10;                                            // 0x00127110: sll $a3, $a3, 0x10
    t1 = t1 << 0x10;                                            // 0x00127114: sll $t1, $t1, 0x10
    a1 = a1 << 0x10;                                            // 0x00127118: sll $a1, $a1, 0x10
    v0 = v0 >> 1;                                               // 0x0012711c: sra $v0, $v0, 1
    /* FPU: mul.s $f14, $f1, $f0 */                             // 0x00127120: mul.s $f14, $f1, $f0
    /* move to FPU: $v1, $f9 */                                 // 0x00127124: mtc1 $v1, $f9
    /* FPU: cvt.s.w $f9, $f9 */                                 // 0x00127128: cvt.s.w $f9, $f9
    /* move to FPU: $a3, $f11 */                                // 0x00127130: mtc1 $a3, $f11
    /* FPU: cvt.s.w $f11, $f11 */                               // 0x00127134: cvt.s.w $f11, $f11
    /* move to FPU: $t1, $f8 */                                 // 0x0012713c: mtc1 $t1, $f8
    /* FPU: cvt.s.w $f8, $f8 */                                 // 0x00127140: cvt.s.w $f8, $f8
    /* move to FPU: $a1, $f10 */                                // 0x00127144: mtc1 $a1, $f10
    /* FPU: cvt.s.w $f10, $f10 */                               // 0x00127148: cvt.s.w $f10, $f10
    if (v0 <= 0) goto label_0x1272f8;                           // 0x0012714c: blez $v0, 0x1272f8
    /* FPU: mul.s $f12, $f2, $f0 */                             // 0x00127150: mul.s $f12, $f2, $f0
    t9 = -0x100;                                                // 0x00127158: addiu $t9, $zero, -0x100
    s2 = 0x22 << 16;                                            // 0x0012715c: lui $s2, 0x22
    s1 = 0x22 << 16;                                            // 0x00127160: lui $s1, 0x22
label_0x127168:
    t2 = t2 + 0x12;                                             // 0x00127168: addiu $t2, $t2, 0x12
    v1 = *(uint16_t*)(a3);                                      // 0x0012716c: lhu $v1, 0($a3)
    a0 = *(uint8_t*)((a3) + 1);                                 // 0x00127170: lbu $a0, 1($a3)
    v1 = v1 << 8;                                               // 0x00127174: sll $v1, $v1, 8
    v1 = v1 & t9;                                               // 0x00127178: and $v1, $v1, $t9
    a0 = a0 | v1;                                               // 0x0012717c: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00127180: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x00127184: sra $a0, $a0, 0x10
    v1 = a0 & 0x8000;                                           // 0x00127188: andi $v1, $a0, 0x8000
    if (v1 != 0) goto label_0x12733c;                           // 0x0012718c: bnez $v1, 0x12733c
    v0 = t5 << 1;                                               // 0x00127190: sll $v0, $t5, 1
    v1 = *(uint16_t*)(t2);                                      // 0x00127194: lhu $v1, 0($t2)
    v0 = a0 & 0x1fff;                                           // 0x00127198: andi $v0, $a0, 0x1fff
    a0 = *(uint8_t*)((t2) + 1);                                 // 0x0012719c: lbu $a0, 1($t2)
    v0 = v0 + 1;                                                // 0x001271a0: addiu $v0, $v0, 1
    v1 = v1 << 8;                                               // 0x001271a4: sll $v1, $v1, 8
    /* move to FPU: $v0, $f15 */                                // 0x001271a8: mtc1 $v0, $f15
    /* FPU: cvt.s.w $f15, $f15 */                               // 0x001271ac: cvt.s.w $f15, $f15
    v1 = v1 & t9;                                               // 0x001271b0: and $v1, $v1, $t9
    a0 = a0 | v1;                                               // 0x001271b4: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x001271b8: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x001271bc: sra $a0, $a0, 0x10
    v1 = a0 & 0x8000;                                           // 0x001271c0: andi $v1, $a0, 0x8000
    if (v1 != 0) goto label_0x12733c;                           // 0x001271c4: bnez $v1, 0x12733c
    v0 = t5 << 1;                                               // 0x001271c8: sll $v0, $t5, 1
    v0 = a0 & 0x1fff;                                           // 0x001271cc: andi $v0, $a0, 0x1fff
    at = 0x3f33 << 16;                                          // 0x001271d0: lui $at, 0x3f33
    at = at | 0x3333;                                           // 0x001271d4: ori $at, $at, 0x3333
    /* move to FPU: $at, $f16 */                                // 0x001271d8: mtc1 $at, $f16
    v0 = v0 + 1;                                                // 0x001271dc: addiu $v0, $v0, 1
    a3 = a3 + 2;                                                // 0x001271e0: addiu $a3, $a3, 2
    /* move to FPU: $v0, $f13 */                                // 0x001271e4: mtc1 $v0, $f13
    /* FPU: cvt.s.w $f13, $f13 */                               // 0x001271e8: cvt.s.w $f13, $f13
    t2 = t2 + 2;                                                // 0x001271ec: addiu $t2, $t2, 2
    t4 = s2 + 0x2da8;                                           // 0x001271f0: addiu $t4, $s2, 0x2da8
    t3 = s1 + 0x31a8;                                           // 0x001271f4: addiu $t3, $s1, 0x31a8
    t1 = 0x1e;                                                  // 0x001271f8: addiu $t1, $zero, 0x1e
    /* nop */                                                   // 0x001271fc: nop 
label_0x127200:
    v0 = *(uint8_t*)(a3);                                       // 0x00127200: lbu $v0, 0($a3)
    a3 = a3 + 1;                                                // 0x00127204: addiu $a3, $a3, 1
    v1 = *(uint8_t*)(t2);                                       // 0x00127208: lbu $v1, 0($t2)
    t2 = t2 + 1;                                                // 0x0012720c: addiu $t2, $t2, 1
    /* FPU: mul.s $f1, $f14, $f11 */                            // 0x00127210: mul.s $f1, $f14, $f11
    /* FPU: mov.s $f11, $f9 */                                  // 0x00127214: mov.s $f11, $f9
    /* FPU: mul.s $f3, $f14, $f10 */                            // 0x00127218: mul.s $f3, $f14, $f10
    /* FPU: mov.s $f10, $f8 */                                  // 0x0012721c: mov.s $f10, $f8
    v0 = v0 << 2;                                               // 0x00127220: sll $v0, $v0, 2
    v1 = v1 << 2;                                               // 0x00127224: sll $v1, $v1, 2
    /* FPU: mul.s $f2, $f12, $f9 */                             // 0x00127228: mul.s $f2, $f12, $f9
    a0 = v0 + t4;                                               // 0x0012722c: addu $a0, $v0, $t4
    /* FPU: mul.s $f0, $f12, $f8 */                             // 0x00127230: mul.s $f0, $f12, $f8
    a1 = v1 + t4;                                               // 0x00127234: addu $a1, $v1, $t4
    FPU_F7 = *(float*)(a0);  // Load float                      // 0x00127238: lwc1 $f7, 0($a0)
    /* FPU: mul.s $f6, $f14, $f11 */                            // 0x0012723c: mul.s $f6, $f14, $f11
    FPU_F4 = *(float*)(a1);  // Load float                      // 0x00127240: lwc1 $f4, 0($a1)
    /* FPU: mul.s $f5, $f14, $f10 */                            // 0x00127244: mul.s $f5, $f14, $f10
    /* FPU: add.s $f2, $f2, $f1 */                              // 0x00127248: add.s $f2, $f2, $f1
    v1 = v1 + t3;                                               // 0x0012724c: addu $v1, $v1, $t3
    /* FPU: add.s $f0, $f0, $f3 */                              // 0x00127250: add.s $f0, $f0, $f3
    v0 = v0 + t3;                                               // 0x00127254: addu $v0, $v0, $t3
    /* FPU: mul.s $f3, $f7, $f15 */                             // 0x00127258: mul.s $f3, $f7, $f15
    FPU_F7 = *(float*)(v0);  // Load float                      // 0x0012725c: lwc1 $f7, 0($v0)
    /* FPU: mul.s $f1, $f4, $f13 */                             // 0x00127260: mul.s $f1, $f4, $f13
    FPU_F4 = *(float*)(v1);  // Load float                      // 0x00127264: lwc1 $f4, 0($v1)
    t1 = t1 + -2;                                               // 0x00127268: addiu $t1, $t1, -2
    /* FPU: mul.s $f4, $f4, $f13 */                             // 0x0012726c: mul.s $f4, $f4, $f13
    /* FPU: add.s $f9, $f2, $f3 */                              // 0x00127270: add.s $f9, $f2, $f3
    /* FPU: add.s $f8, $f0, $f1 */                              // 0x00127274: add.s $f8, $f0, $f1
    /* FPU: mul.s $f3, $f7, $f15 */                             // 0x00127278: mul.s $f3, $f7, $f15
    /* FPU: mul.s $f2, $f12, $f9 */                             // 0x0012727c: mul.s $f2, $f12, $f9
    /* FPU: mov.s $f11, $f9 */                                  // 0x00127280: mov.s $f11, $f9
    /* FPU: mul.s $f1, $f12, $f8 */                             // 0x00127284: mul.s $f1, $f12, $f8
    /* FPU: mov.s $f10, $f8 */                                  // 0x00127288: mov.s $f10, $f8
    /* FPU: add.s $f0, $f9, $f8 */                              // 0x0012728c: add.s $f0, $f9, $f8
    /* FPU: add.s $f2, $f2, $f6 */                              // 0x00127290: add.s $f2, $f2, $f6
    /* FPU: add.s $f1, $f1, $f5 */                              // 0x00127294: add.s $f1, $f1, $f5
    /* FPU: mul.s $f0, $f0, $f16 */                             // 0x00127298: mul.s $f0, $f0, $f16
    /* FPU: add.s $f9, $f2, $f3 */                              // 0x0012729c: add.s $f9, $f2, $f3
    /* FPU: add.s $f8, $f1, $f4 */                              // 0x001272a0: add.s $f8, $f1, $f4
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x001272a4: cvt.w.s $f1, $f0
    /* move from FPU: $v0, $f1 */                               // 0x001272a8: mfc1 $v0, $f1
    /* FPU: add.s $f1, $f9, $f8 */                              // 0x001272ac: add.s $f1, $f9, $f8
    v0 = v0 >> 0x10;                                            // 0x001272b0: sra $v0, $v0, 0x10
    *(uint16_t*)(t0) = v0;                                      // 0x001272b4: sh $v0, 0($t0)
    t0 = t0 + 2;                                                // 0x001272b8: addiu $t0, $t0, 2
    *(uint16_t*)(a2) = v0;                                      // 0x001272bc: sh $v0, 0($a2)
    a2 = a2 + 2;                                                // 0x001272c0: addiu $a2, $a2, 2
    /* FPU: mul.s $f1, $f1, $f16 */                             // 0x001272c4: mul.s $f1, $f1, $f16
    /* FPU: cvt.w.s $f0, $f1 */                                 // 0x001272c8: cvt.w.s $f0, $f1
    /* move from FPU: $v0, $f0 */                               // 0x001272cc: mfc1 $v0, $f0
    v0 = v0 >> 0x10;                                            // 0x001272d0: sra $v0, $v0, 0x10
    *(uint16_t*)(t0) = v0;                                      // 0x001272d4: sh $v0, 0($t0)
    t0 = t0 + 2;                                                // 0x001272d8: addiu $t0, $t0, 2
    *(uint16_t*)(a2) = v0;                                      // 0x001272dc: sh $v0, 0($a2)
    if (t1 >= 0) goto label_0x127200;                           // 0x001272e0: bgez $t1, 0x127200
    a2 = a2 + 2;                                                // 0x001272e4: addiu $a2, $a2, 2
    t5 = t5 + 1;                                                // 0x001272e8: addiu $t5, $t5, 1
    v0 = (t5 < s0) ? 1 : 0;                                     // 0x001272ec: slt $v0, $t5, $s0
    if (v0 != 0) goto label_0x127168;                           // 0x001272f0: bnez $v0, 0x127168
label_0x1272f8:
    /* FPU: cvt.w.s $f0, $f9 */                                 // 0x001272f8: cvt.w.s $f0, $f9
    /* move from FPU: $v1, $f0 */                               // 0x001272fc: mfc1 $v1, $f0
    /* FPU: cvt.w.s $f0, $f11 */                                // 0x00127304: cvt.w.s $f0, $f11
    /* move from FPU: $a0, $f0 */                               // 0x00127308: mfc1 $a0, $f0
    /* FPU: cvt.w.s $f0, $f8 */                                 // 0x0012730c: cvt.w.s $f0, $f8
    /* move from FPU: $a1, $f0 */                               // 0x00127310: mfc1 $a1, $f0
    /* FPU: cvt.w.s $f0, $f10 */                                // 0x00127314: cvt.w.s $f0, $f10
    /* move from FPU: $a2, $f0 */                               // 0x00127318: mfc1 $a2, $f0
    v1 = v1 >> 0x10;                                            // 0x0012731c: sra $v1, $v1, 0x10
    a0 = a0 >> 0x10;                                            // 0x00127320: sra $a0, $a0, 0x10
    *(uint16_t*)(t6) = v1;                                      // 0x00127324: sh $v1, 0($t6)
    a1 = a1 >> 0x10;                                            // 0x00127328: sra $a1, $a1, 0x10
    *(uint16_t*)((t6) + 2) = a0;                                // 0x0012732c: sh $a0, 2($t6)
    a2 = a2 >> 0x10;                                            // 0x00127330: sra $a2, $a2, 0x10
    *(uint16_t*)(t7) = a1;                                      // 0x00127334: sh $a1, 0($t7)
    *(uint16_t*)((t7) + 2) = a2;                                // 0x00127338: sh $a2, 2($t7)
label_0x12733c:
    return;                                                     // 0x00127348: jr $ra
    sp = sp + 0x20;                                             // 0x0012734c: addiu $sp, $sp, 0x20
}