void func_001201a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x001201a0: addiu $sp, $sp, -0x30
    /* FPU: mov.s $f11, $f12 */                                 // 0x001201a4: mov.s $f11, $f12
    *(float*)((sp) + 0x28) = FPU_F22;  // Store float           // 0x001201ac: swc1 $f22, 0x28($sp)
    *(float*)((sp) + 0x20) = FPU_F21;  // Store float           // 0x001201b0: swc1 $f21, 0x20($sp)
    /* move from FPU: $a0, $f11 */                              // 0x001201b4: mfc1 $a0, $f11
    v0 = 0x7fff << 16;                                          // 0x001201b8: lui $v0, 0x7fff
    a1 = 0x3f80 << 16;                                          // 0x001201bc: lui $a1, 0x3f80
    v0 = v0 | 0xffff;                                           // 0x001201c0: ori $v0, $v0, 0xffff
    v1 = a0 & v0;                                               // 0x001201c4: and $v1, $a0, $v0
    if (v1 != a1) goto label_0x1201f0;                          // 0x001201c8: bne $v1, $a1, 0x1201f0
    *(float*)((sp) + 0x18) = FPU_F20;  // Store float           // 0x001201cc: swc1 $f20, 0x18($sp)
    /* move to FPU: $zero, $f0 */                               // 0x001201d0: mtc1 $zero, $f0
    if (a0 > 0) goto label_0x1205b0;                            // 0x001201d4: bgtz $a0, 0x1205b0
    at = 0x4049 << 16;                                          // 0x001201dc: lui $at, 0x4049
    at = at | 0xfda;                                            // 0x001201e0: ori $at, $at, 0xfda
    /* move to FPU: $at, $f0 */                                 // 0x001201e4: mtc1 $at, $f0
    goto label_0x1205b4;                                        // 0x001201e8: b 0x1205b4
    FPU_F22 = *(float*)((sp) + 0x28);  // Load float            // 0x001201ec: lwc1 $f22, 0x28($sp)
label_0x1201f0:
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x001201f0: slt $v0, $a1, $v1
    if (v0 == 0) goto label_0x120218;                           // 0x001201f4: beqz $v0, 0x120218
    v0 = 0x3eff << 16;                                          // 0x001201f8: lui $v0, 0x3eff
    /* FPU: sub.s $f0, $f11, $f11 */                            // 0x001201fc: sub.s $f0, $f11, $f11
    /* nop */                                                   // 0x00120200: nop 
    /* nop */                                                   // 0x00120204: nop 
    /* FPU: div.s $f0, $f0, $f0 */                              // 0x00120208: div.s $f0, $f0, $f0
    goto label_0x1205b0;                                        // 0x0012020c: b 0x1205b0
    /* nop */                                                   // 0x00120214: nop 
label_0x120218:
    v0 = v0 | 0xffff;                                           // 0x00120218: ori $v0, $v0, 0xffff
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0012021c: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x120348;                           // 0x00120220: bnez $v0, 0x120348
    v0 = 0x2300 << 16;                                          // 0x00120224: lui $v0, 0x2300
    at = 0x3fc9 << 16;                                          // 0x00120228: lui $at, 0x3fc9
    at = at | 0xfda;                                            // 0x0012022c: ori $at, $at, 0xfda
    /* move to FPU: $at, $f0 */                                 // 0x00120230: mtc1 $at, $f0
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x00120234: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x1205b0;                           // 0x00120238: beqz $v0, 0x1205b0
    /* FPU: mul.s $f21, $f11, $f11 */                           // 0x00120240: mul.s $f21, $f11, $f11
    at = 0x3811 << 16;                                          // 0x00120244: lui $at, 0x3811
    at = at | 0xef08;                                           // 0x00120248: ori $at, $at, 0xef08
    /* move to FPU: $at, $f1 */                                 // 0x0012024c: mtc1 $at, $f1
    at = 0x3a4f << 16;                                          // 0x00120250: lui $at, 0x3a4f
    at = at | 0x7f04;                                           // 0x00120254: ori $at, $at, 0x7f04
    /* move to FPU: $at, $f3 */                                 // 0x00120258: mtc1 $at, $f3
    at = 0xbd24 << 16;                                          // 0x0012025c: lui $at, 0xbd24
    at = at | 0x1146;                                           // 0x00120260: ori $at, $at, 0x1146
    /* move to FPU: $at, $f7 */                                 // 0x00120264: mtc1 $at, $f7
    at = 0x3d9d << 16;                                          // 0x00120268: lui $at, 0x3d9d
    at = at | 0xc62d;                                           // 0x0012026c: ori $at, $at, 0xc62d
    /* move to FPU: $at, $f2 */                                 // 0x00120270: mtc1 $at, $f2
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x00120274: mul.s $f1, $f21, $f1
    at = 0xbf30 << 16;                                          // 0x00120278: lui $at, 0xbf30
    at = at | 0x3360;                                           // 0x0012027c: ori $at, $at, 0x3360
    /* move to FPU: $at, $f0 */                                 // 0x00120280: mtc1 $at, $f0
    /* FPU: mul.s $f2, $f21, $f2 */                             // 0x00120284: mul.s $f2, $f21, $f2
    at = 0x3e4e << 16;                                          // 0x00120288: lui $at, 0x3e4e
    at = at | 0xaa8;                                            // 0x0012028c: ori $at, $at, 0xaa8
    /* move to FPU: $at, $f6 */                                 // 0x00120290: mtc1 $at, $f6
    at = 0x4001 << 16;                                          // 0x00120294: lui $at, 0x4001
    at = at | 0x572c;                                           // 0x00120298: ori $at, $at, 0x572c
    /* move to FPU: $at, $f4 */                                 // 0x0012029c: mtc1 $at, $f4
    at = 0xbea6 << 16;                                          // 0x001202a0: lui $at, 0xbea6
    at = at | 0xb08f;                                           // 0x001202a4: ori $at, $at, 0xb08f
    /* move to FPU: $at, $f9 */                                 // 0x001202a8: mtc1 $at, $f9
    /* FPU: add.s $f1, $f1, $f3 */                              // 0x001202ac: add.s $f1, $f1, $f3
    at = 0x3f80 << 16;                                          // 0x001202b0: lui $at, 0x3f80
    /* move to FPU: $at, $f3 */                                 // 0x001202b4: mtc1 $at, $f3
    /* FPU: add.s $f2, $f2, $f0 */                              // 0x001202b8: add.s $f2, $f2, $f0
    at = 0x33a2 << 16;                                          // 0x001202bc: lui $at, 0x33a2
    at = at | 0x2168;                                           // 0x001202c0: ori $at, $at, 0x2168
    /* move to FPU: $at, $f0 */                                 // 0x001202c4: mtc1 $at, $f0
    at = 0xc019 << 16;                                          // 0x001202c8: lui $at, 0xc019
    at = at | 0xd138;                                           // 0x001202cc: ori $at, $at, 0xd138
    /* move to FPU: $at, $f5 */                                 // 0x001202d0: mtc1 $at, $f5
    at = 0x3e2a << 16;                                          // 0x001202d4: lui $at, 0x3e2a
    at = at | 0xaaaa;                                           // 0x001202d8: ori $at, $at, 0xaaaa
    /* move to FPU: $at, $f8 */                                 // 0x001202dc: mtc1 $at, $f8
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x001202e0: mul.s $f1, $f21, $f1
    at = 0x3fc9 << 16;                                          // 0x001202e4: lui $at, 0x3fc9
    at = at | 0xfda;                                            // 0x001202e8: ori $at, $at, 0xfda
    /* move to FPU: $at, $f10 */                                // 0x001202ec: mtc1 $at, $f10
    /* FPU: mul.s $f2, $f21, $f2 */                             // 0x001202f0: mul.s $f2, $f21, $f2
    /* FPU: add.s $f1, $f1, $f7 */                              // 0x001202f4: add.s $f1, $f1, $f7
    /* FPU: add.s $f2, $f2, $f4 */                              // 0x001202f8: add.s $f2, $f2, $f4
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x001202fc: mul.s $f1, $f21, $f1
    /* FPU: mul.s $f2, $f21, $f2 */                             // 0x00120300: mul.s $f2, $f21, $f2
    /* FPU: add.s $f1, $f1, $f6 */                              // 0x00120304: add.s $f1, $f1, $f6
    /* FPU: add.s $f2, $f2, $f5 */                              // 0x00120308: add.s $f2, $f2, $f5
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x0012030c: mul.s $f1, $f21, $f1
    /* FPU: mul.s $f2, $f21, $f2 */                             // 0x00120310: mul.s $f2, $f21, $f2
    /* FPU: add.s $f1, $f1, $f9 */                              // 0x00120314: add.s $f1, $f1, $f9
    /* FPU: add.s $f22, $f2, $f3 */                             // 0x00120318: add.s $f22, $f2, $f3
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x0012031c: mul.s $f1, $f21, $f1
    /* FPU: add.s $f1, $f1, $f8 */                              // 0x00120320: add.s $f1, $f1, $f8
    /* FPU: mul.s $f20, $f21, $f1 */                            // 0x00120324: mul.s $f20, $f21, $f1
    /* nop */                                                   // 0x00120328: nop 
    /* nop */                                                   // 0x0012032c: nop 
    /* FPU: div.s $f12, $f20, $f22 */                           // 0x00120330: div.s $f12, $f20, $f22
    /* FPU: mul.s $f1, $f11, $f12 */                            // 0x00120334: mul.s $f1, $f11, $f12
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00120338: sub.s $f0, $f0, $f1
    /* FPU: sub.s $f0, $f11, $f0 */                             // 0x0012033c: sub.s $f0, $f11, $f0
    goto label_0x1205b0;                                        // 0x00120340: b 0x1205b0
    /* FPU: sub.s $f0, $f10, $f0 */                             // 0x00120344: sub.s $f0, $f10, $f0
label_0x120348:
    if (a0 >= 0) goto label_0x120478;                           // 0x00120348: bgez $a0, 0x120478
    /* nop */                                                   // 0x0012034c: nop 
    at = 0x3f80 << 16;                                          // 0x00120350: lui $at, 0x3f80
    /* move to FPU: $at, $f10 */                                // 0x00120354: mtc1 $at, $f10
    at = 0x3f00 << 16;                                          // 0x00120358: lui $at, 0x3f00
    /* move to FPU: $at, $f3 */                                 // 0x0012035c: mtc1 $at, $f3
    /* FPU: add.s $f2, $f11, $f10 */                            // 0x00120360: add.s $f2, $f11, $f10
    at = 0x3811 << 16;                                          // 0x00120364: lui $at, 0x3811
    at = at | 0xef08;                                           // 0x00120368: ori $at, $at, 0xef08
    /* move to FPU: $at, $f0 */                                 // 0x0012036c: mtc1 $at, $f0
    at = 0x3a4f << 16;                                          // 0x00120370: lui $at, 0x3a4f
    at = at | 0x7f04;                                           // 0x00120374: ori $at, $at, 0x7f04
    /* move to FPU: $at, $f5 */                                 // 0x00120378: mtc1 $at, $f5
    at = 0xbd24 << 16;                                          // 0x0012037c: lui $at, 0xbd24
    at = at | 0x1146;                                           // 0x00120380: ori $at, $at, 0x1146
    /* move to FPU: $at, $f6 */                                 // 0x00120384: mtc1 $at, $f6
    at = 0x3d9d << 16;                                          // 0x00120388: lui $at, 0x3d9d
    at = at | 0xc62d;                                           // 0x0012038c: ori $at, $at, 0xc62d
    /* move to FPU: $at, $f1 */                                 // 0x00120390: mtc1 $at, $f1
    /* FPU: mul.s $f21, $f2, $f3 */                             // 0x00120394: mul.s $f21, $f2, $f3
    at = 0x4001 << 16;                                          // 0x00120398: lui $at, 0x4001
    at = at | 0x572c;                                           // 0x0012039c: ori $at, $at, 0x572c
    /* move to FPU: $at, $f2 */                                 // 0x001203a0: mtc1 $at, $f2
    at = 0xbf30 << 16;                                          // 0x001203a4: lui $at, 0xbf30
    at = at | 0x3360;                                           // 0x001203a8: ori $at, $at, 0x3360
    /* move to FPU: $at, $f4 */                                 // 0x001203ac: mtc1 $at, $f4
    at = 0x3e4e << 16;                                          // 0x001203b0: lui $at, 0x3e4e
    at = at | 0xaa8;                                            // 0x001203b4: ori $at, $at, 0xaa8
    /* move to FPU: $at, $f7 */                                 // 0x001203b8: mtc1 $at, $f7
    at = 0xbea6 << 16;                                          // 0x001203bc: lui $at, 0xbea6
    at = at | 0xb08f;                                           // 0x001203c0: ori $at, $at, 0xb08f
    /* move to FPU: $at, $f9 */                                 // 0x001203c4: mtc1 $at, $f9
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x001203c8: mul.s $f0, $f21, $f0
    at = 0xc019 << 16;                                          // 0x001203cc: lui $at, 0xc019
    at = at | 0xd138;                                           // 0x001203d0: ori $at, $at, 0xd138
    /* move to FPU: $at, $f3 */                                 // 0x001203d4: mtc1 $at, $f3
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x001203d8: mul.s $f1, $f21, $f1
    at = 0x3e2a << 16;                                          // 0x001203dc: lui $at, 0x3e2a
    at = at | 0xaaaa;                                           // 0x001203e0: ori $at, $at, 0xaaaa
    /* move to FPU: $at, $f8 */                                 // 0x001203e4: mtc1 $at, $f8
    /* FPU: mov.s $f12, $f21 */                                 // 0x001203e8: mov.s $f12, $f21
    /* FPU: add.s $f0, $f0, $f5 */                              // 0x001203ec: add.s $f0, $f0, $f5
    /* FPU: add.s $f1, $f1, $f4 */                              // 0x001203f0: add.s $f1, $f1, $f4
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x001203f4: mul.s $f0, $f21, $f0
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x001203f8: mul.s $f1, $f21, $f1
    /* FPU: add.s $f0, $f0, $f6 */                              // 0x001203fc: add.s $f0, $f0, $f6
    /* FPU: add.s $f1, $f1, $f2 */                              // 0x00120400: add.s $f1, $f1, $f2
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x00120404: mul.s $f0, $f21, $f0
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x00120408: mul.s $f1, $f21, $f1
    /* FPU: add.s $f0, $f0, $f7 */                              // 0x0012040c: add.s $f0, $f0, $f7
    /* FPU: add.s $f1, $f1, $f3 */                              // 0x00120410: add.s $f1, $f1, $f3
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x00120414: mul.s $f0, $f21, $f0
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x00120418: mul.s $f1, $f21, $f1
    /* FPU: add.s $f0, $f0, $f9 */                              // 0x0012041c: add.s $f0, $f0, $f9
    /* FPU: add.s $f22, $f1, $f10 */                            // 0x00120420: add.s $f22, $f1, $f10
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x00120424: mul.s $f0, $f21, $f0
    /* FPU: add.s $f0, $f0, $f8 */                              // 0x00120428: add.s $f0, $f0, $f8
    func_00120b58();  // 120b58                                // 0x0012042c: jal 0x120b58
    /* FPU: mul.s $f20, $f21, $f0 */                            // 0x00120430: mul.s $f20, $f21, $f0
    /* FPU: mov.s $f13, $f0 */                                  // 0x00120434: mov.s $f13, $f0
    at = 0x33a2 << 16;                                          // 0x00120438: lui $at, 0x33a2
    at = at | 0x2168;                                           // 0x0012043c: ori $at, $at, 0x2168
    /* move to FPU: $at, $f1 */                                 // 0x00120440: mtc1 $at, $f1
    at = 0x4049 << 16;                                          // 0x00120444: lui $at, 0x4049
    at = at | 0xfda;                                            // 0x00120448: ori $at, $at, 0xfda
    /* move to FPU: $at, $f2 */                                 // 0x0012044c: mtc1 $at, $f2
    /* nop */                                                   // 0x00120450: nop 
    /* nop */                                                   // 0x00120454: nop 
    /* FPU: div.s $f12, $f20, $f22 */                           // 0x00120458: div.s $f12, $f20, $f22
    /* FPU: mul.s $f0, $f12, $f13 */                            // 0x0012045c: mul.s $f0, $f12, $f13
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00120460: sub.s $f0, $f0, $f1
    /* FPU: add.s $f0, $f13, $f0 */                             // 0x00120464: add.s $f0, $f13, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x00120468: add.s $f0, $f0, $f0
    goto label_0x1205ac;                                        // 0x0012046c: b 0x1205ac
    /* FPU: sub.s $f0, $f2, $f0 */                              // 0x00120470: sub.s $f0, $f2, $f0
    /* nop */                                                   // 0x00120474: nop 
label_0x120478:
    at = 0x3f80 << 16;                                          // 0x00120478: lui $at, 0x3f80
    /* move to FPU: $at, $f20 */                                // 0x0012047c: mtc1 $at, $f20
    at = 0x3f00 << 16;                                          // 0x00120480: lui $at, 0x3f00
    /* move to FPU: $at, $f1 */                                 // 0x00120484: mtc1 $at, $f1
    /* FPU: sub.s $f0, $f20, $f11 */                            // 0x00120488: sub.s $f0, $f20, $f11
    /* FPU: mul.s $f21, $f0, $f1 */                             // 0x0012048c: mul.s $f21, $f0, $f1
    func_00120b58();  // 120b58                                // 0x00120490: jal 0x120b58
    /* FPU: mov.s $f12, $f21 */                                 // 0x00120494: mov.s $f12, $f21
    /* FPU: mov.s $f11, $f0 */                                  // 0x00120498: mov.s $f11, $f0
    /* FPU: mov.s $f13, $f11 */                                 // 0x0012049c: mov.s $f13, $f11
    *(float*)(sp) = FPU_F0;  // Store float                     // 0x001204a0: swc1 $f0, 0($sp)
    v0 = -0x1000;                                               // 0x001204a4: addiu $v0, $zero, -0x1000
    v1 = local_0;                                               // 0x001204a8: lw $v1, 0($sp)
    v1 = v1 & v0;                                               // 0x001204ac: and $v1, $v1, $v0
    /* move to FPU: $v1, $f11 */                                // 0x001204b0: mtc1 $v1, $f11
    /* FPU: mul.s $f3, $f11, $f11 */                            // 0x001204b4: mul.s $f3, $f11, $f11
    at = 0x3811 << 16;                                          // 0x001204b8: lui $at, 0x3811
    at = at | 0xef08;                                           // 0x001204bc: ori $at, $at, 0xef08
    /* move to FPU: $at, $f0 */                                 // 0x001204c0: mtc1 $at, $f0
    at = 0x3a4f << 16;                                          // 0x001204c4: lui $at, 0x3a4f
    at = at | 0x7f04;                                           // 0x001204c8: ori $at, $at, 0x7f04
    /* move to FPU: $at, $f5 */                                 // 0x001204cc: mtc1 $at, $f5
    at = 0xbd24 << 16;                                          // 0x001204d0: lui $at, 0xbd24
    at = at | 0x1146;                                           // 0x001204d4: ori $at, $at, 0x1146
    /* move to FPU: $at, $f9 */                                 // 0x001204d8: mtc1 $at, $f9
    at = 0x3d9d << 16;                                          // 0x001204dc: lui $at, 0x3d9d
    at = at | 0xc62d;                                           // 0x001204e0: ori $at, $at, 0xc62d
    /* move to FPU: $at, $f1 */                                 // 0x001204e4: mtc1 $at, $f1
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x001204e8: mul.s $f0, $f21, $f0
    at = 0xbf30 << 16;                                          // 0x001204ec: lui $at, 0xbf30
    at = at | 0x3360;                                           // 0x001204f0: ori $at, $at, 0x3360
    /* move to FPU: $at, $f4 */                                 // 0x001204f4: mtc1 $at, $f4
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x001204f8: mul.s $f1, $f21, $f1
    at = 0x3e4e << 16;                                          // 0x001204fc: lui $at, 0x3e4e
    at = at | 0xaa8;                                            // 0x00120500: ori $at, $at, 0xaa8
    /* move to FPU: $at, $f8 */                                 // 0x00120504: mtc1 $at, $f8
    at = 0x4001 << 16;                                          // 0x00120508: lui $at, 0x4001
    at = at | 0x572c;                                           // 0x0012050c: ori $at, $at, 0x572c
    /* move to FPU: $at, $f7 */                                 // 0x00120510: mtc1 $at, $f7
    /* FPU: sub.s $f3, $f21, $f3 */                             // 0x00120514: sub.s $f3, $f21, $f3
    at = 0xbea6 << 16;                                          // 0x00120518: lui $at, 0xbea6
    at = at | 0xb08f;                                           // 0x0012051c: ori $at, $at, 0xb08f
    /* move to FPU: $at, $f10 */                                // 0x00120520: mtc1 $at, $f10
    /* FPU: add.s $f2, $f13, $f11 */                            // 0x00120524: add.s $f2, $f13, $f11
    /* FPU: add.s $f0, $f0, $f5 */                              // 0x00120528: add.s $f0, $f0, $f5
    at = 0x3e2a << 16;                                          // 0x0012052c: lui $at, 0x3e2a
    at = at | 0xaaaa;                                           // 0x00120530: ori $at, $at, 0xaaaa
    /* move to FPU: $at, $f5 */                                 // 0x00120534: mtc1 $at, $f5
    /* FPU: add.s $f1, $f1, $f4 */                              // 0x00120538: add.s $f1, $f1, $f4
    at = 0xc019 << 16;                                          // 0x0012053c: lui $at, 0xc019
    at = at | 0xd138;                                           // 0x00120540: ori $at, $at, 0xd138
    /* move to FPU: $at, $f6 */                                 // 0x00120544: mtc1 $at, $f6
    /* nop */                                                   // 0x00120548: nop 
    /* nop */                                                   // 0x0012054c: nop 
    /* FPU: div.s $f3, $f3, $f2 */                              // 0x00120550: div.s $f3, $f3, $f2
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x00120554: mul.s $f0, $f21, $f0
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x00120558: mul.s $f1, $f21, $f1
    /* FPU: add.s $f0, $f0, $f9 */                              // 0x0012055c: add.s $f0, $f0, $f9
    /* FPU: add.s $f1, $f1, $f7 */                              // 0x00120560: add.s $f1, $f1, $f7
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x00120564: mul.s $f0, $f21, $f0
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x00120568: mul.s $f1, $f21, $f1
    /* FPU: add.s $f0, $f0, $f8 */                              // 0x0012056c: add.s $f0, $f0, $f8
    /* FPU: add.s $f1, $f1, $f6 */                              // 0x00120570: add.s $f1, $f1, $f6
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x00120574: mul.s $f0, $f21, $f0
    /* FPU: mul.s $f1, $f21, $f1 */                             // 0x00120578: mul.s $f1, $f21, $f1
    /* FPU: add.s $f0, $f0, $f10 */                             // 0x0012057c: add.s $f0, $f0, $f10
    /* FPU: add.s $f22, $f1, $f20 */                            // 0x00120580: add.s $f22, $f1, $f20
    /* FPU: mul.s $f0, $f21, $f0 */                             // 0x00120584: mul.s $f0, $f21, $f0
    /* FPU: add.s $f0, $f0, $f5 */                              // 0x00120588: add.s $f0, $f0, $f5
    /* FPU: mul.s $f20, $f21, $f0 */                            // 0x0012058c: mul.s $f20, $f21, $f0
    /* nop */                                                   // 0x00120590: nop 
    /* nop */                                                   // 0x00120594: nop 
    /* FPU: div.s $f12, $f20, $f22 */                           // 0x00120598: div.s $f12, $f20, $f22
    /* FPU: mul.s $f0, $f12, $f13 */                            // 0x0012059c: mul.s $f0, $f12, $f13
    /* FPU: add.s $f0, $f0, $f3 */                              // 0x001205a0: add.s $f0, $f0, $f3
    /* FPU: add.s $f0, $f11, $f0 */                             // 0x001205a4: add.s $f0, $f11, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x001205a8: add.s $f0, $f0, $f0
label_0x1205ac:
label_0x1205b0:
    FPU_F22 = *(float*)((sp) + 0x28);  // Load float            // 0x001205b0: lwc1 $f22, 0x28($sp)
label_0x1205b4:
    FPU_F21 = *(float*)((sp) + 0x20);  // Load float            // 0x001205b4: lwc1 $f21, 0x20($sp)
    FPU_F20 = *(float*)((sp) + 0x18);  // Load float            // 0x001205b8: lwc1 $f20, 0x18($sp)
    return;                                                     // 0x001205bc: jr $ra
    sp = sp + 0x30;                                             // 0x001205c0: addiu $sp, $sp, 0x30
}