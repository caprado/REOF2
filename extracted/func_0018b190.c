void func_0018b190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move to FPU: $zero, $f0 */                               // 0x0018b190: mtc1 $zero, $f0
    if (a1 != 0) goto label_0x18b200;                           // 0x0018b194: bnez $a1, 0x18b200
    v0 = 0xff;                                                  // 0x0018b198: addiu $v0, $zero, 0xff
    if (a0 != v0) goto label_0x18b1b4;                          // 0x0018b19c: bne $a0, $v0, 0x18b1b4
    /* nop */                                                   // 0x0018b1a0: nop 
    v0 = 0x4300 << 16;                                          // 0x0018b1a4: lui $v0, 0x4300
    /* move to FPU: $v0, $f0 */                                 // 0x0018b1a8: mtc1 $v0, $f0
    goto label_0x18b274;                                        // 0x0018b1ac: b 0x18b274
    /* nop */                                                   // 0x0018b1b0: nop 
label_0x18b1b4:
    if (a0 == 0) goto label_0x18b274;                           // 0x0018b1b4: beqz $a0, 0x18b274
    /* nop */                                                   // 0x0018b1b8: nop 
    a0 = (unsigned)a0 >> 1;                                     // 0x0018b1bc: srl $a0, $a0, 1
    if (a0 != 0) goto label_0x18b1cc;                           // 0x0018b1c0: bnez $a0, 0x18b1cc
    /* nop */                                                   // 0x0018b1c4: nop 
    a0 = 1;                                                     // 0x0018b1c8: addiu $a0, $zero, 1
label_0x18b1cc:
    if (a0 < 0) goto label_0x18b1e0;                            // 0x0018b1cc: bltz $a0, 0x18b1e0
    v1 = (unsigned)a0 >> 1;                                     // 0x0018b1d0: srl $v1, $a0, 1
    /* move to FPU: $a0, $f0 */                                 // 0x0018b1d4: mtc1 $a0, $f0
    goto label_0x18b1f8;                                        // 0x0018b1d8: b 0x18b1f8
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018b1dc: cvt.s.w $f0, $f0
label_0x18b1e0:
    v0 = a0 & 1;                                                // 0x0018b1e0: andi $v0, $a0, 1
    v1 = v1 | v0;                                               // 0x0018b1e4: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x0018b1e8: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018b1ec: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018b1f0: cvt.s.w $f0, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x0018b1f4: add.s $f0, $f0, $f0
label_0x18b1f8:
    goto label_0x18b274;                                        // 0x0018b1f8: b 0x18b274
    /* nop */                                                   // 0x0018b1fc: nop 
label_0x18b200:
    if (a0 < 0) goto label_0x18b214;                            // 0x0018b200: bltz $a0, 0x18b214
    v1 = (unsigned)a0 >> 1;                                     // 0x0018b204: srl $v1, $a0, 1
    /* move to FPU: $a0, $f0 */                                 // 0x0018b208: mtc1 $a0, $f0
    goto label_0x18b22c;                                        // 0x0018b20c: b 0x18b22c
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x0018b210: cvt.s.w $f2, $f0
label_0x18b214:
    v0 = a0 & 1;                                                // 0x0018b214: andi $v0, $a0, 1
    v1 = v1 | v0;                                               // 0x0018b218: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x0018b21c: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018b220: nop 
    /* FPU: cvt.s.w $f2, $f0 */                                 // 0x0018b224: cvt.s.w $f2, $f0
    /* FPU: add.s $f2, $f2, $f2 */                              // 0x0018b228: add.s $f2, $f2, $f2
label_0x18b22c:
    v1 = 0x437f << 16;                                          // 0x0018b22c: lui $v1, 0x437f
    v0 = 0x3f80 << 16;                                          // 0x0018b230: lui $v0, 0x3f80
    /* move to FPU: $v1, $f0 */                                 // 0x0018b234: mtc1 $v1, $f0
    /* move to FPU: $v0, $f1 */                                 // 0x0018b238: mtc1 $v0, $f1
    /* nop */                                                   // 0x0018b23c: nop 
    /* FPU: div.s $f0, $f2, $f0 */                              // 0x0018b240: div.s $f0, $f2, $f0
    /* nop */                                                   // 0x0018b244: nop 
    /* nop */                                                   // 0x0018b248: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x0018b24c: c.ole.s $f0, $f1
    /* bc1t 0x18b25c */                                         // 0x0018b250: bc1t 0x18b25c
    /* nop */                                                   // 0x0018b254: nop 
    /* FPU: mov.s $f0, $f1 */                                   // 0x0018b258: mov.s $f0, $f1
    /* move to FPU: $zero, $f1 */                               // 0x0018b25c: mtc1 $zero, $f1
    /* nop */                                                   // 0x0018b260: nop 
    /* FPU: c.olt.s $f0, $f1 */                                 // 0x0018b264: c.olt.s $f0, $f1
    /* bc1f 0x18b274 */                                         // 0x0018b268: bc1f 0x18b274
    /* nop */                                                   // 0x0018b26c: nop 
    /* FPU: mov.s $f0, $f1 */                                   // 0x0018b270: mov.s $f0, $f1
label_0x18b274:
    return;                                                     // 0x0018b274: jr $ra
    /* nop */                                                   // 0x0018b278: nop 
}