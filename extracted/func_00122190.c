void func_00122190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move from FPU: $v1, $f12 */                              // 0x00122190: mfc1 $v1, $f12
    v0 = 0x7fff << 16;                                          // 0x00122198: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x0012219c: ori $v0, $v0, 0xffff
    a2 = a0 & v0;                                               // 0x001221a0: and $a2, $a0, $v0
    v1 = (unsigned)a2 >> 0x17;                                  // 0x001221a4: srl $v1, $a2, 0x17
    a1 = v1 + -0x7f;                                            // 0x001221a8: addiu $a1, $v1, -0x7f
    v0 = (a1 < 0x17) ? 1 : 0;                                   // 0x001221ac: slti $v0, $a1, 0x17
    if (v0 == 0) goto label_0x122260;                           // 0x001221b0: beqz $v0, 0x122260
    /* FPU: mov.s $f0, $f12 */                                  // 0x001221b4: mov.s $f0, $f12
    if (a1 >= 0) goto label_0x122208;                           // 0x001221b8: bgezl $a1, 0x122208
    v0 = 0x7f << 16;                                            // 0x001221bc: lui $v0, 0x7f
    at = 0x7149 << 16;                                          // 0x001221c0: lui $at, 0x7149
    at = at | 0xf2c9;                                           // 0x001221c4: ori $at, $at, 0xf2c9
    /* move to FPU: $at, $f0 */                                 // 0x001221c8: mtc1 $at, $f0
    /* move to FPU: $zero, $f1 */                               // 0x001221cc: mtc1 $zero, $f1
    /* FPU: add.s $f0, $f12, $f0 */                             // 0x001221d0: add.s $f0, $f12, $f0
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001221d4: c.olt.s $f1, $f0
    /* bc1f 0x122258 */                                         // 0x001221d8: bc1f 0x122258
    /* nop */                                                   // 0x001221dc: nop 
    if (a0 < 0) goto label_0x1221f0;                            // 0x001221e0: bltz $a0, 0x1221f0
    v0 = 0x7f << 16;                                            // 0x001221e4: lui $v0, 0x7f
    goto label_0x122258;                                        // 0x001221e8: b 0x122258
label_0x1221f0:
    v0 = v0 | 0xffff;                                           // 0x001221f0: ori $v0, $v0, 0xffff
    v0 = ((unsigned)v0 < (unsigned)a2) ? 1 : 0;                 // 0x001221f4: sltu $v0, $v0, $a2
    /* bnezl $v0, 0x122258 */                                   // 0x001221f8: bnezl $v0, 0x122258
    a0 = 0xbf80 << 16;                                          // 0x001221fc: lui $a0, 0xbf80
    goto label_0x122258;                                        // 0x00122200: b 0x122258
    /* nop */                                                   // 0x00122204: nop 
label_0x122208:
    v0 = v0 | 0xffff;                                           // 0x00122208: ori $v0, $v0, 0xffff
    a2 = v0 >> a1;                                              // 0x0012220c: srav $a2, $v0, $a1
    v1 = a0 & a2;                                               // 0x00122210: and $v1, $a0, $a2
    if (v1 == 0) goto label_0x122260;                           // 0x00122214: beqz $v1, 0x122260
    /* FPU: mov.s $f0, $f12 */                                  // 0x00122218: mov.s $f0, $f12
    at = 0x7149 << 16;                                          // 0x0012221c: lui $at, 0x7149
    at = at | 0xf2c9;                                           // 0x00122220: ori $at, $at, 0xf2c9
    /* move to FPU: $at, $f0 */                                 // 0x00122224: mtc1 $at, $f0
    /* move to FPU: $zero, $f1 */                               // 0x00122228: mtc1 $zero, $f1
    /* FPU: add.s $f0, $f12, $f0 */                             // 0x0012222c: add.s $f0, $f12, $f0
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x00122230: c.olt.s $f1, $f0
    /* bc1f 0x122258 */                                         // 0x00122234: bc1f 0x122258
    /* nop */                                                   // 0x00122238: nop 
    if (a0 >= 0) goto label_0x122254;                           // 0x0012223c: bgez $a0, 0x122254
    v0 = ~(0 | a2);                                             // 0x00122240: nor $v0, $zero, $a2
    v0 = 0x80 << 16;                                            // 0x00122244: lui $v0, 0x80
    v0 = v0 >> a1;                                              // 0x00122248: srav $v0, $v0, $a1
    a0 = a0 + v0;                                               // 0x0012224c: addu $a0, $a0, $v0
    v0 = ~(0 | a2);                                             // 0x00122250: nor $v0, $zero, $a2
label_0x122254:
    a0 = a0 & v0;                                               // 0x00122254: and $a0, $a0, $v0
label_0x122258:
    /* move to FPU: $a0, $f12 */                                // 0x00122258: mtc1 $a0, $f12
    /* move to FPU: $a0, $f0 */                                 // 0x0012225c: mtc1 $a0, $f0
label_0x122260:
    return;                                                     // 0x00122260: jr $ra
    /* nop */                                                   // 0x00122264: nop 
}