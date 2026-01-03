void func_001959a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xd0;                                            // 0x001959a0: addiu $sp, $sp, -0xd0
    at = 0x29 << 16;                                            // 0x001959a4: lui $at, 0x29
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x001959ac: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001959b4: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001959bc: addu.qb $zero, $sp, $s0
    *(float*)((sp) + 4) = FPU_F21;  // Store float              // 0x001959c0: swc1 $f21, 4($sp)
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001959c4: swc1 $f20, 0($sp)
    v0 = g_00290364;  // Global at 0x00290364                   // 0x001959c8: lw $v0, 0x364($at)
    if (v0 == 0) goto label_0x1959dc;                           // 0x001959cc: beqz $v0, 0x1959dc
    goto label_0x195e68;                                        // 0x001959d4: b 0x195e68
    v0 = 1;                                                     // 0x001959d8: addiu $v0, $zero, 1
label_0x1959dc:
    a0 = 0x21 << 16;                                            // 0x001959dc: lui $a0, 0x21
    a1 = 0x7000 << 16;                                          // 0x001959e0: lui $a1, 0x7000
    a0 = a0 + 0x66f0;                                           // 0x001959e4: addiu $a0, $a0, 0x66f0
    func_001899f8();  // 1899f8                                // 0x001959e8: jal 0x1899f8
    a2 = 3;                                                     // 0x001959ec: addiu $a2, $zero, 3
    v0 = 0x7000 << 16;                                          // 0x001959f0: lui $v0, 0x7000
    a0 = sp + 0x70;                                             // 0x001959f4: addiu $a0, $sp, 0x70
    a1 = v0 | 0x3700;                                           // 0x001959f8: ori $a1, $v0, 0x3700
    func_00191030();  // 191030                                // 0x001959fc: jal 0x191030
    a2 = v0 | 0x3f40;                                           // 0x00195a00: ori $a2, $v0, 0x3f40
    a0 = sp + 0x70;                                             // 0x00195a04: addiu $a0, $sp, 0x70
    a2 = 0x28 << 16;                                            // 0x00195a08: lui $a2, 0x28
    a2 = a2 + 0x53a0;                                           // 0x00195a0c: addiu $a2, $a2, 0x53a0
    func_00191030();  // 191030                                // 0x00195a10: jal 0x191030
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x00195a18: lw $a0, 0x24($s0)
    func_001989a0();  // 1989a0                                // 0x00195a1c: jal 0x1989a0
    a0 = sp + 0xb0;                                             // 0x00195a28: addiu $a0, $sp, 0xb0
    func_00191860();  // 191860                                // 0x00195a30: jal 0x191860
    a2 = sp + 0x70;                                             // 0x00195a34: addiu $a2, $sp, 0x70
    s4 = sp + 0xbc;                                             // 0x00195a38: addiu $s4, $sp, 0xbc
    v0 = 0x3f80 << 16;                                          // 0x00195a3c: lui $v0, 0x3f80
    FPU_F0 = *(float*)(s4);  // Load float                      // 0x00195a40: lwc1 $f0, 0($s4)
    v1 = (unsigned)s1 >> 0x10;                                  // 0x00195a44: srl $v1, $s1, 0x10
    /* move to FPU: $v0, $f1 */                                 // 0x00195a48: mtc1 $v0, $f1
    a0 = v1 & 0xff;                                             // 0x00195a4c: andi $a0, $v1, 0xff
    at = 0x7000 << 16;                                          // 0x00195a50: lui $at, 0x7000
    v0 = (unsigned)s1 >> 8;                                     // 0x00195a54: srl $v0, $s1, 8
    v0 = v0 & 0xff;                                             // 0x00195a58: andi $v0, $v0, 0xff
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00195a60: div.s $f0, $f1, $f0
    v0 = s1 & 0xff;                                             // 0x00195a64: andi $v0, $s1, 0xff
    v1 = a0 | v1;                                               // 0x00195a68: or $v1, $a0, $v1
    v1 = v0 | v1;                                               // 0x00195a70: or $v1, $v0, $v1
    v0 = (unsigned)s1 >> 0x18;                                  // 0x00195a74: srl $v0, $s1, 0x18
    v0 = v0 & 0xff;                                             // 0x00195a78: andi $v0, $v0, 0xff
    v1 = v0 | v1;                                               // 0x00195a80: or $v1, $v0, $v1
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x00195a84: swc1 $f0, 0($s4)
    v0 = v0 | v1;                                               // 0x00195a90: or $v0, $v0, $v1
    FPU_F1 = *(float*)(s4);  // Load float                      // 0x00195a98: lwc1 $f1, 0($s4)
    at = 0x7000 << 16;                                          // 0x00195a9c: lui $at, 0x7000
    FPU_F0 = *(float*)((s0) + 0x30);  // Load float             // 0x00195aa0: lwc1 $f0, 0x30($s0)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195aa4: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xcc) = FPU_F0;  // Store float            // 0x00195aa8: swc1 $f0, 0xcc($sp)
    FPU_F0 = *(float*)((s0) + 0x34);  // Load float             // 0x00195aac: lwc1 $f0, 0x34($s0)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195ab4: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xc8) = FPU_F0;  // Store float            // 0x00195ab8: swc1 $f0, 0xc8($sp)
    v0 = v1 | v0;                                               // 0x00195ac4: or $v0, $v1, $v0
    func_00198910();  // 198910                                // 0x00195acc: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xb0);  // Load float            // 0x00195ad0: lwc1 $f12, 0xb0($sp)
    s3 = sp + 0xb4;                                             // 0x00195ad4: addiu $s3, $sp, 0xb4
    FPU_F12 = *(float*)(s3);  // Load float                     // 0x00195ad8: lwc1 $f12, 0($s3)
    func_00198930();  // 198930                                // 0x00195adc: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x00195ae0: mov.s $f21, $f0
    s2 = sp + 0xb8;                                             // 0x00195ae4: addiu $s2, $sp, 0xb8
    FPU_F12 = *(float*)(s2);  // Load float                     // 0x00195ae8: lwc1 $f12, 0($s2)
    func_00198970();  // 198970                                // 0x00195aec: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x00195af0: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x00195af4: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x00195af8: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x00195afc: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x00195b00: mtc1 $v0, $f1
    /* nop */                                                   // 0x00195b04: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x00195b08: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x00195b0c: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x00195b10: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x00195b14: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00195b18: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x00195b1c: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x00195b20: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x00195b24: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x00195b28: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00195b2c: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x00195b30: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x00195b34: mfc1 $v0, $f2
    /* nop */                                                   // 0x00195b38: nop 
    v0 = v0 << 4;                                               // 0x00195b3c: sll $v0, $v0, 4
    /* bc1t 0x195b5c */                                         // 0x00195b44: bc1t 0x195b5c
    a0 = v1 | v0;                                               // 0x00195b48: or $a0, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195b4c: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195b50: mfc1 $v1, $f0
    goto label_0x195b78;                                        // 0x00195b54: b 0x195b78
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00195b5c: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x00195b60: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195b64: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195b68: mfc1 $v1, $f0
    /* nop */                                                   // 0x00195b6c: nop 
    v1 = v1 | v0;                                               // 0x00195b70: or $v1, $v1, $v0
label_0x195b78:
    at = 0x7000 << 16;                                          // 0x00195b78: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x00195b84: or $v0, $v0, $a0
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x00195b8c: lw $a0, 0x28($s0)
    func_001989a0();  // 1989a0                                // 0x00195b90: jal 0x1989a0
    a0 = sp + 0xb0;                                             // 0x00195b9c: addiu $a0, $sp, 0xb0
    a1 = s0 + 0xc;                                              // 0x00195ba0: addiu $a1, $s0, 0xc
    func_00191860();  // 191860                                // 0x00195ba4: jal 0x191860
    a2 = sp + 0x70;                                             // 0x00195ba8: addiu $a2, $sp, 0x70
    FPU_F0 = *(float*)(s4);  // Load float                      // 0x00195bac: lwc1 $f0, 0($s4)
    v0 = 0x3f80 << 16;                                          // 0x00195bb0: lui $v0, 0x3f80
    /* move to FPU: $v0, $f1 */                                 // 0x00195bb4: mtc1 $v0, $f1
    at = 0x7000 << 16;                                          // 0x00195bb8: lui $at, 0x7000
    v0 = (unsigned)s1 >> 0x10;                                  // 0x00195bbc: srl $v0, $s1, 0x10
    a1 = v0 & 0xff;                                             // 0x00195bc0: andi $a1, $v0, 0xff
    v0 = (unsigned)s1 >> 8;                                     // 0x00195bc4: srl $v0, $s1, 8
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00195bc8: div.s $f0, $f1, $f0
    v1 = v0 & 0xff;                                             // 0x00195bcc: andi $v1, $v0, 0xff
    v0 = s1 & 0xff;                                             // 0x00195bd4: andi $v0, $s1, 0xff
    a0 = a1 | a0;                                               // 0x00195bdc: or $a0, $a1, $a0
    v0 = (unsigned)s1 >> 0x18;                                  // 0x00195be0: srl $v0, $s1, 0x18
    v1 = v1 | a0;                                               // 0x00195be4: or $v1, $v1, $a0
    v0 = v0 & 0xff;                                             // 0x00195be8: andi $v0, $v0, 0xff
    v1 = v0 | v1;                                               // 0x00195bf0: or $v1, $v0, $v1
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x00195bf4: swc1 $f0, 0($s4)
    v0 = v0 | v1;                                               // 0x00195c00: or $v0, $v0, $v1
    FPU_F1 = *(float*)(s4);  // Load float                      // 0x00195c08: lwc1 $f1, 0($s4)
    at = 0x7000 << 16;                                          // 0x00195c0c: lui $at, 0x7000
    FPU_F0 = *(float*)((s0) + 0x38);  // Load float             // 0x00195c10: lwc1 $f0, 0x38($s0)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195c14: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xcc) = FPU_F0;  // Store float            // 0x00195c18: swc1 $f0, 0xcc($sp)
    FPU_F0 = *(float*)((s0) + 0x3c);  // Load float             // 0x00195c1c: lwc1 $f0, 0x3c($s0)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195c24: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xc8) = FPU_F0;  // Store float            // 0x00195c28: swc1 $f0, 0xc8($sp)
    v0 = v1 | v0;                                               // 0x00195c34: or $v0, $v1, $v0
    func_00198910();  // 198910                                // 0x00195c3c: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xb0);  // Load float            // 0x00195c40: lwc1 $f12, 0xb0($sp)
    FPU_F12 = *(float*)(s3);  // Load float                     // 0x00195c44: lwc1 $f12, 0($s3)
    func_00198930();  // 198930                                // 0x00195c48: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x00195c4c: mov.s $f21, $f0
    FPU_F12 = *(float*)(s2);  // Load float                     // 0x00195c50: lwc1 $f12, 0($s2)
    func_00198970();  // 198970                                // 0x00195c54: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x00195c58: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x00195c5c: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x00195c60: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x00195c64: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x00195c68: mtc1 $v0, $f1
    /* nop */                                                   // 0x00195c6c: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x00195c70: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x00195c74: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x00195c78: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x00195c7c: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00195c80: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x00195c84: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x00195c88: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x00195c8c: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x00195c90: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00195c94: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x00195c98: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x00195c9c: mfc1 $v0, $f2
    /* nop */                                                   // 0x00195ca0: nop 
    v0 = v0 << 4;                                               // 0x00195ca4: sll $v0, $v0, 4
    /* bc1t 0x195cc4 */                                         // 0x00195cac: bc1t 0x195cc4
    a0 = v1 | v0;                                               // 0x00195cb0: or $a0, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195cb4: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195cb8: mfc1 $v1, $f0
    goto label_0x195ce0;                                        // 0x00195cbc: b 0x195ce0
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00195cc4: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x00195cc8: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195ccc: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195cd0: mfc1 $v1, $f0
    /* nop */                                                   // 0x00195cd4: nop 
    v1 = v1 | v0;                                               // 0x00195cd8: or $v1, $v1, $v0
label_0x195ce0:
    at = 0x7000 << 16;                                          // 0x00195ce0: lui $at, 0x7000
    v0 = v0 | a0;                                               // 0x00195cec: or $v0, $v0, $a0
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x00195cf4: lw $a0, 0x2c($s0)
    func_001989a0();  // 1989a0                                // 0x00195cf8: jal 0x1989a0
    a0 = sp + 0xb0;                                             // 0x00195d04: addiu $a0, $sp, 0xb0
    a1 = s0 + 0x18;                                             // 0x00195d08: addiu $a1, $s0, 0x18
    func_00191860();  // 191860                                // 0x00195d0c: jal 0x191860
    a2 = sp + 0x70;                                             // 0x00195d10: addiu $a2, $sp, 0x70
    FPU_F0 = *(float*)(s4);  // Load float                      // 0x00195d14: lwc1 $f0, 0($s4)
    v0 = 0x3f80 << 16;                                          // 0x00195d18: lui $v0, 0x3f80
    /* move to FPU: $v0, $f1 */                                 // 0x00195d1c: mtc1 $v0, $f1
    at = 0x7000 << 16;                                          // 0x00195d20: lui $at, 0x7000
    v0 = (unsigned)s1 >> 0x10;                                  // 0x00195d24: srl $v0, $s1, 0x10
    a1 = v0 & 0xff;                                             // 0x00195d28: andi $a1, $v0, 0xff
    v0 = (unsigned)s1 >> 8;                                     // 0x00195d2c: srl $v0, $s1, 8
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00195d30: div.s $f0, $f1, $f0
    v1 = v0 & 0xff;                                             // 0x00195d34: andi $v1, $v0, 0xff
    v0 = s1 & 0xff;                                             // 0x00195d3c: andi $v0, $s1, 0xff
    a0 = a1 | a0;                                               // 0x00195d44: or $a0, $a1, $a0
    v0 = (unsigned)s1 >> 0x18;                                  // 0x00195d48: srl $v0, $s1, 0x18
    v1 = v1 | a0;                                               // 0x00195d4c: or $v1, $v1, $a0
    v0 = v0 & 0xff;                                             // 0x00195d50: andi $v0, $v0, 0xff
    v1 = v0 | v1;                                               // 0x00195d58: or $v1, $v0, $v1
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x00195d5c: swc1 $f0, 0($s4)
    v0 = v0 | v1;                                               // 0x00195d68: or $v0, $v0, $v1
    FPU_F1 = *(float*)(s4);  // Load float                      // 0x00195d70: lwc1 $f1, 0($s4)
    at = 0x7000 << 16;                                          // 0x00195d74: lui $at, 0x7000
    FPU_F0 = *(float*)((s0) + 0x40);  // Load float             // 0x00195d78: lwc1 $f0, 0x40($s0)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195d7c: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xcc) = FPU_F0;  // Store float            // 0x00195d80: swc1 $f0, 0xcc($sp)
    FPU_F0 = *(float*)((s0) + 0x44);  // Load float             // 0x00195d84: lwc1 $f0, 0x44($s0)
    /* FPU: mul.s $f0, $f0, $f1 */                              // 0x00195d8c: mul.s $f0, $f0, $f1
    *(float*)((sp) + 0xc8) = FPU_F0;  // Store float            // 0x00195d90: swc1 $f0, 0xc8($sp)
    v0 = v1 | v0;                                               // 0x00195d9c: or $v0, $v1, $v0
    func_00198910();  // 198910                                // 0x00195da4: jal 0x198910
    FPU_F12 = *(float*)((sp) + 0xb0);  // Load float            // 0x00195da8: lwc1 $f12, 0xb0($sp)
    FPU_F12 = *(float*)(s3);  // Load float                     // 0x00195dac: lwc1 $f12, 0($s3)
    func_00198930();  // 198930                                // 0x00195db0: jal 0x198930
    /* FPU: mov.s $f21, $f0 */                                  // 0x00195db4: mov.s $f21, $f0
    FPU_F12 = *(float*)(s2);  // Load float                     // 0x00195db8: lwc1 $f12, 0($s2)
    func_00198970();  // 198970                                // 0x00195dbc: jal 0x198970
    /* FPU: mov.s $f20, $f0 */                                  // 0x00195dc0: mov.s $f20, $f0
    at = 0x29 << 16;                                            // 0x00195dc4: lui $at, 0x29
    v0 = 0x4f00 << 16;                                          // 0x00195dc8: lui $v0, 0x4f00
    FPU_F3 = *(float*)((at) + 0x314);  // Load float            // 0x00195dcc: lwc1 $f3, 0x314($at)
    /* move to FPU: $v0, $f1 */                                 // 0x00195dd0: mtc1 $v0, $f1
    /* nop */                                                   // 0x00195dd4: nop 
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x00195dd8: c.ole.s $f1, $f0
    at = 0x29 << 16;                                            // 0x00195ddc: lui $at, 0x29
    FPU_F2 = *(float*)((at) + 0x318);  // Load float            // 0x00195de0: lwc1 $f2, 0x318($at)
    /* FPU: cvt.s.w $f3, $f3 */                                 // 0x00195de4: cvt.s.w $f3, $f3
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00195de8: cvt.s.w $f2, $f2
    /* FPU: add.s $f3, $f3, $f21 */                             // 0x00195dec: add.s $f3, $f3, $f21
    /* FPU: add.s $f2, $f2, $f20 */                             // 0x00195df0: add.s $f2, $f2, $f20
    /* FPU: cvt.w.s $f3, $f3 */                                 // 0x00195df4: cvt.w.s $f3, $f3
    /* move from FPU: $v0, $f3 */                               // 0x00195df8: mfc1 $v0, $f3
    /* FPU: cvt.w.s $f2, $f2 */                                 // 0x00195dfc: cvt.w.s $f2, $f2
    v1 = v0 << 4;                                               // 0x00195e00: sll $v1, $v0, 4
    /* move from FPU: $v0, $f2 */                               // 0x00195e04: mfc1 $v0, $f2
    /* nop */                                                   // 0x00195e08: nop 
    v0 = v0 << 4;                                               // 0x00195e0c: sll $v0, $v0, 4
    /* bc1t 0x195e2c */                                         // 0x00195e14: bc1t 0x195e2c
    a1 = v1 | v0;                                               // 0x00195e18: or $a1, $v1, $v0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195e1c: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195e20: mfc1 $v1, $f0
    goto label_0x195e48;                                        // 0x00195e24: b 0x195e48
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00195e2c: sub.s $f0, $f0, $f1
    v0 = 0x8000 << 16;                                          // 0x00195e30: lui $v0, 0x8000
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x00195e34: cvt.w.s $f0, $f0
    /* move from FPU: $v1, $f0 */                               // 0x00195e38: mfc1 $v1, $f0
    /* nop */                                                   // 0x00195e3c: nop 
    v1 = v1 | v0;                                               // 0x00195e40: or $v1, $v1, $v0
label_0x195e48:
    at = 0x7000 << 16;                                          // 0x00195e48: lui $at, 0x7000
    a0 = 0x7000 << 16;                                          // 0x00195e50: lui $a0, 0x7000
    v0 = v0 | a1;                                               // 0x00195e58: or $v0, $v0, $a1
    func_00193e90();  // 193e90                                // 0x00195e5c: jal 0x193e90
    v0 = 1;                                                     // 0x00195e64: addiu $v0, $zero, 1
label_0x195e68:
    FPU_F21 = *(float*)((sp) + 4);  // Load float               // 0x00195e6c: lwc1 $f21, 4($sp)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x00195e70: aver_u.h $w1, $w0, $w20
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00195e74: lwc1 $f20, 0($sp)
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x00195e78: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x00195e80: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00195e84: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x00195e88: jr $ra
    sp = sp + 0xd0;                                             // 0x00195e8c: addiu $sp, $sp, 0xd0
}