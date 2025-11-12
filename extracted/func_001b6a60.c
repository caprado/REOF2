void func_001b6a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b6a60: addiu $sp, $sp, -0x40
    t0 = 0x14;                                                  // 0x001b6a64: addiu $t0, $zero, 0x14
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001b6a78: addu.qb $zero, $sp, $s0
    t3 = g_4180000c;  // Global at 0x4180000c                   // 0x001b6a80: lw $t3, 0xc($a0)
    a2 = *(int32_t*)((s1) + 0x54);                              // 0x001b6a94: lw $a2, 0x54($s1)
    func_001b69e0();  // 0x1b6860                                // 0x001b6a98: jal 0x1b6860
    a3 = 1;                                                     // 0x001b6a9c: addiu $a3, $zero, 1
    at = 0x29 << 16;                                            // 0x001b6aa0: lui $at, 0x29
    a2 = g_0028ff7c;  // Global at 0x0028ff7c                   // 0x001b6aa8: lw $a2, -0x84($at)
    v0 = 0x1000;                                                // 0x001b6aac: addiu $v0, $zero, 0x1000
    v1 = v0 - a2;                                               // 0x001b6ab0: subu $v1, $v0, $a2
    if (v1 >= 0) goto label_0x1b6ac4;                           // 0x001b6ab4: bgez $v1, 0x1b6ac4
    v0 = v1 >> 1;                                               // 0x001b6ab8: sra $v0, $v1, 1
    v0 = v1 + 1;                                                // 0x001b6abc: addiu $v0, $v1, 1
    v0 = v0 >> 1;                                               // 0x001b6ac0: sra $v0, $v0, 1
label_0x1b6ac4:
    at = 0x29 << 16;                                            // 0x001b6ac4: lui $at, 0x29
    a0 = 0x1000;                                                // 0x001b6ac8: addiu $a0, $zero, 0x1000
    v1 = g_0028ff80;  // Global at 0x0028ff80                   // 0x001b6acc: lw $v1, -0x80($at)
    v0 = v0 << 4;                                               // 0x001b6ad0: sll $v0, $v0, 4
    a0 = a0 - v1;                                               // 0x001b6ad4: subu $a0, $a0, $v1
    if (a0 >= 0) goto label_0x1b6ae8;                           // 0x001b6ad8: bgez $a0, 0x1b6ae8
    v1 = a0 >> 1;                                               // 0x001b6adc: sra $v1, $a0, 1
    v1 = a0 + 1;                                                // 0x001b6ae0: addiu $v1, $a0, 1
    v1 = v1 >> 1;                                               // 0x001b6ae4: sra $v1, $v1, 1
label_0x1b6ae8:
    /* move to FPU: $a2, $f1 */                                 // 0x001b6ae8: mtc1 $a2, $f1
    t1 = v1 << 4;                                               // 0x001b6aec: sll $t1, $v1, 4
    FPU_F0 = *(float*)((s1) + 0x70);  // Load float             // 0x001b6af0: lwc1 $f0, 0x70($s1)
    v1 = *(int32_t*)((s1) + 0x6c);                              // 0x001b6af4: lw $v1, 0x6c($s1)
    /* FPU: cvt.s.w $f2, $f1 */                                 // 0x001b6af8: cvt.s.w $f2, $f1
    a2 = 0x4420 << 16;                                          // 0x001b6afc: lui $a2, 0x4420
    t0 = *(int32_t*)((s1) + 0x74);                              // 0x001b6b00: lw $t0, 0x74($s1)
    a0 = 0x4180 << 16;                                          // 0x001b6b04: lui $a0, 0x4180
    a3 = *(int32_t*)((s1) + 0x98);                              // 0x001b6b08: lw $a3, 0x98($s1)
    v1 = (unsigned)v1 >> s0;                                    // 0x001b6b0c: srlv $v1, $v1, $s0
    /* move to FPU: $a2, $f1 */                                 // 0x001b6b10: mtc1 $a2, $f1
    /* nop */                                                   // 0x001b6b14: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001b6b18: cvt.s.w $f0, $f0
    t0 = t0 << 4;                                               // 0x001b6b1c: sll $t0, $t0, 4
    /* FPU: div.s $f2, $f2, $f1 */                              // 0x001b6b20: div.s $f2, $f2, $f1
    /* FPU: mul.s $f1, $f0, $f2 */                              // 0x001b6b24: mul.s $f1, $f0, $f2
    /* move to FPU: $a0, $f0 */                                 // 0x001b6b28: mtc1 $a0, $f0
    /* nop */                                                   // 0x001b6b2c: nop 
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x001b6b30: mul.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001b6b34: cvt.w.s $f0, $f0
    /* move from FPU: $a2, $f0 */                               // 0x001b6b38: mfc1 $a2, $f0
    if (v1 < 0) goto label_0x1b6b50;                            // 0x001b6b3c: bltz $v1, 0x1b6b50
    a3 = a3 << 4;                                               // 0x001b6b40: sll $a3, $a3, 4
    /* move to FPU: $v1, $f0 */                                 // 0x001b6b44: mtc1 $v1, $f0
    goto label_0x1b6b6c;                                        // 0x001b6b48: b 0x1b6b6c
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001b6b4c: cvt.s.w $f0, $f0
label_0x1b6b50:
    a0 = (unsigned)v1 >> 1;                                     // 0x001b6b50: srl $a0, $v1, 1
    v1 = v1 & 1;                                                // 0x001b6b54: andi $v1, $v1, 1
    a0 = a0 | v1;                                               // 0x001b6b58: or $a0, $a0, $v1
    /* move to FPU: $a0, $f0 */                                 // 0x001b6b5c: mtc1 $a0, $f0
    /* nop */                                                   // 0x001b6b60: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001b6b64: cvt.s.w $f0, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x001b6b68: add.s $f0, $f0, $f0
label_0x1b6b6c:
    /* FPU: mul.s $f2, $f0, $f2 */                              // 0x001b6b6c: mul.s $f2, $f0, $f2
    a0 = 0x4180 << 16;                                          // 0x001b6b70: lui $a0, 0x4180
    v1 = 0x4f00 << 16;                                          // 0x001b6b74: lui $v1, 0x4f00
    /* move to FPU: $a0, $f1 */                                 // 0x001b6b78: mtc1 $a0, $f1
    /* move to FPU: $v1, $f0 */                                 // 0x001b6b7c: mtc1 $v1, $f0
    /* nop */                                                   // 0x001b6b80: nop 
    /* FPU: mul.s $f1, $f1, $f2 */                              // 0x001b6b84: mul.s $f1, $f1, $f2
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001b6b88: c.ole.s $f0, $f1
    /* bc1t 0x1b6ba4 */                                         // 0x001b6b8c: bc1t 0x1b6ba4
    /* nop */                                                   // 0x001b6b90: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001b6b94: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001b6b98: mfc1 $a0, $f1
    goto label_0x1b6bbc;                                        // 0x001b6b9c: b 0x1b6bbc
    /* nop */                                                   // 0x001b6ba0: nop 
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001b6ba4: sub.s $f1, $f1, $f0
    v1 = 0x8000 << 16;                                          // 0x001b6ba8: lui $v1, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001b6bac: cvt.w.s $f1, $f1
    /* move from FPU: $a0, $f1 */                               // 0x001b6bb0: mfc1 $a0, $f1
    /* nop */                                                   // 0x001b6bb4: nop 
    a0 = a0 | v1;                                               // 0x001b6bb8: or $a0, $a0, $v1
label_0x1b6bbc:
    at = 0x29 << 16;                                            // 0x001b6bbc: lui $at, 0x29
    v1 = g_0028ff74;  // Global at 0x0028ff74                   // 0x001b6bc0: lw $v1, -0x8c($at)
    if (v1 != 0) goto label_0x1b6bd4;                           // 0x001b6bc4: bnez $v1, 0x1b6bd4
    v1 = v0 + a2;                                               // 0x001b6bc8: addu $v1, $v0, $a2
    t0 = t0 >> 1;                                               // 0x001b6bcc: sra $t0, $t0, 1
    a3 = (unsigned)a3 >> 1;                                     // 0x001b6bd0: srl $a3, $a3, 1
label_0x1b6bd4:
    t0 = t1 + t0;                                               // 0x001b6bd4: addu $t0, $t1, $t0
    v0 = v1 + a0;                                               // 0x001b6bd8: addu $v0, $v1, $a0
    v0 = t0 + a3;                                               // 0x001b6be8: addu $v0, $t0, $a3
    t5 = *(int32_t*)((s1) + 0xc);                               // 0x001b6bf4: lw $t5, 0xc($s1)
    a3 = a2 | a0;                                               // 0x001b6c08: or $a3, $a2, $a0
    a0 = v1 | v0;                                               // 0x001b6c10: or $a0, $v1, $v0
    a2 = 0x5100 << 16;                                          // 0x001b6c14: lui $a2, 0x5100
    v0 = 0x1000 << 16;                                          // 0x001b6c18: lui $v0, 0x1000
    t3 = a2 | 8;                                                // 0x001b6c1c: ori $t3, $a2, 8
    t4 = v0 | 8;                                                // 0x001b6c20: ori $t4, $v0, 8
    *(uint32_t*)(a1) = t4;                                      // 0x001b6c28: sw $t4, 0($a1)
    v0 = 3;                                                     // 0x001b6c2c: addiu $v0, $zero, 3
    *(uint32_t*)((a1) + 4) = 0;                                 // 0x001b6c30: sw $zero, 4($a1)
    t2 = v0 | v1;                                               // 0x001b6c34: or $t2, $v0, $v1
    *(uint32_t*)((a1) + 8) = 0;                                 // 0x001b6c38: sw $zero, 8($a1)
    v1 = 5;                                                     // 0x001b6c3c: addiu $v1, $zero, 5
    *(uint32_t*)((a1) + 0xc) = t3;                              // 0x001b6c40: sw $t3, 0xc($a1)
    v0 = 0x5540 << 16;                                          // 0x001b6c44: lui $v0, 0x5540
    t1 = 0xe;                                                   // 0x001b6c48: addiu $t1, $zero, 0xe
    t4 = t5 << 4;                                               // 0x001b6c54: sll $t4, $t5, 4
    v0 = v0 | 0x4000;                                           // 0x001b6c5c: ori $v0, $v0, 0x4000
    v1 = v0 | v1;                                               // 0x001b6c60: or $v1, $v0, $v1
    t0 = 0x3f;                                                  // 0x001b6c64: addiu $t0, $zero, 0x3f
    v0 = (unsigned)t4 >> s0;                                    // 0x001b6c6c: srlv $v0, $t4, $s0
    a2 = v0 + 8;                                                // 0x001b6c74: addiu $a2, $v0, 8
    v0 = t4 + 8;                                                // 0x001b6c7c: addiu $v0, $t4, 8
    t9 = *(int32_t*)((s1) + 0x58);                              // 0x001b6c80: lw $t9, 0x58($s1)
    t8 = *(int32_t*)((s1) + 0x7c);                              // 0x001b6c88: lw $t8, 0x7c($s1)
    t6 = 6;                                                     // 0x001b6c9c: addiu $t6, $zero, 6
    a2 = a2 | v0;                                               // 0x001b6ca0: or $a2, $a2, $v0
    t5 = 0x60;                                                  // 0x001b6ca4: addiu $t5, $zero, 0x60
    v0 = 0x2000 << 16;                                          // 0x001b6ca8: lui $v0, 0x2000
    v1 = s0 | v1;                                               // 0x001b6cac: or $v1, $s0, $v1
    t4 = 0x14;                                                  // 0x001b6cb4: addiu $t4, $zero, 0x14
    t8 = t9 + t8;                                               // 0x001b6cb8: addu $t8, $t9, $t8
    v0 = 0x6400 << 16;                                          // 0x001b6cbc: lui $v0, 0x6400
    v0 = 0 | 0x8001;                                            // 0x001b6ccc: ori $v0, $zero, 0x8001
    t3 = v0 | t0;                                               // 0x001b6cd0: or $t3, $v0, $t0
    v1 = v1 | s0;                                               // 0x001b6cd8: or $v1, $v1, $s0
    v0 = 0x53 << 16;                                            // 0x001b6cdc: lui $v0, 0x53
    v1 = v1 | t7;                                               // 0x001b6ce0: or $v1, $v1, $t7
    t2 = v0 | 0x5310;                                           // 0x001b6ce4: ori $t2, $v0, 0x5310
    t1 = 0x156;                                                 // 0x001b6cec: addiu $t1, $zero, 0x156
    t0 = 8 << 16;                                               // 0x001b6cf4: lui $t0, 8
    t0 = t0 | 8;                                                // 0x001b6cfc: ori $t0, $t0, 8
    v0 = a1 + 0x90;                                             // 0x001b6d04: addiu $v0, $a1, 0x90
    v1 = v1 | a3;                                               // 0x001b6d28: or $v1, $v1, $a3
    v1 = v1 | a0;                                               // 0x001b6d3c: or $v1, $v1, $a0
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001b6d48: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001b6d4c: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001b6d50: jr $ra
    sp = sp + 0x40;                                             // 0x001b6d54: addiu $sp, $sp, 0x40
}