void func_001b2110() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001b2110: addiu $sp, $sp, -0x90
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b211c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b212c: addu.qb $zero, $sp, $s1
    func_001b24c0();  // 1b24c0                                // 0x001b2134: jal 0x1b24c0
    if (v0 != 0) goto label_0x1b214c;                           // 0x001b213c: bnez $v0, 0x1b214c
    goto label_0x1b2290;                                        // 0x001b2144: b 0x1b2290
    v0 = -1;                                                    // 0x001b2148: addiu $v0, $zero, -1
label_0x1b214c:
    at = 0x31 << 16;                                            // 0x001b214c: lui $at, 0x31
    a0 = sp + 0x80;                                             // 0x001b2150: addiu $a0, $sp, 0x80
    FPU_F2 = *(float*)((at) + 0x3548);  // Load float           // 0x001b2154: lwc1 $f2, 0x3548($at)
    a1 = sp + 0x70;                                             // 0x001b2158: addiu $a1, $sp, 0x70
    s1 = sp + 0x68;                                             // 0x001b215c: addiu $s1, $sp, 0x68
    at = 0x31 << 16;                                            // 0x001b2160: lui $at, 0x31
    FPU_F1 = *(float*)((at) + 0x354c);  // Load float           // 0x001b2164: lwc1 $f1, 0x354c($at)
    *(float*)((sp) + 0x80) = FPU_F2;  // Store float            // 0x001b2168: swc1 $f2, 0x80($sp)
    at = 0x31 << 16;                                            // 0x001b216c: lui $at, 0x31
    FPU_F0 = *(float*)((at) + 0x3550);  // Load float           // 0x001b2170: lwc1 $f0, 0x3550($at)
    *(float*)((sp) + 0x84) = FPU_F1;  // Store float            // 0x001b2174: swc1 $f1, 0x84($sp)
    *(float*)((sp) + 0x88) = FPU_F0;  // Store float            // 0x001b2178: swc1 $f0, 0x88($sp)
    FPU_F0 = *(float*)(s2);  // Load float                      // 0x001b217c: lwc1 $f0, 0($s2)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x001b2180: swc1 $f0, 0x70($sp)
    FPU_F0 = *(float*)((s2) + 4);  // Load float                // 0x001b2184: lwc1 $f0, 4($s2)
    *(float*)((sp) + 0x74) = FPU_F0;  // Store float            // 0x001b2188: swc1 $f0, 0x74($sp)
    FPU_F0 = *(float*)((s2) + 8);  // Load float                // 0x001b218c: lwc1 $f0, 8($s2)
    func_00191ac0();  // 191ac0                                // 0x001b2190: jal 0x191ac0
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x001b2194: swc1 $f0, 0x78($sp)
    /* move to FPU: $zero, $f1 */                               // 0x001b2198: mtc1 $zero, $f1
    /* nop */                                                   // 0x001b219c: nop 
    /* FPU: c.olt.s $f0, $f1 */                                 // 0x001b21a0: c.olt.s $f0, $f1
    /* bc1f 0x1b21b0 */                                         // 0x001b21a4: bc1f 0x1b21b0
    *(float*)(s1) = FPU_F0;  // Store float                     // 0x001b21a8: swc1 $f0, 0($s1)
    *(float*)(s1) = FPU_F1;  // Store float                     // 0x001b21ac: swc1 $f1, 0($s1)
    v0 = 0 | 0xc350;                                            // 0x001b21b0: ori $v0, $zero, 0xc350
    /* move to FPU: $v0, $f0 */                                 // 0x001b21b4: mtc1 $v0, $f0
    FPU_F1 = *(float*)(s1);  // Load float                      // 0x001b21b8: lwc1 $f1, 0($s1)
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001b21bc: cvt.s.w $f0, $f0
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x001b21c0: c.ole.s $f1, $f0
    /* bc1t 0x1b21dc */                                         // 0x001b21c4: bc1t 0x1b21dc
    /* nop */                                                   // 0x001b21c8: nop 
    func_001b2530();  // 1b2530                                // 0x001b21cc: jal 0x1b2530
    /* nop */                                                   // 0x001b21d0: nop 
    goto label_0x1b2290;                                        // 0x001b21d4: b 0x1b2290
    v0 = -1;                                                    // 0x001b21d8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001b21dc: nop 
    /* nop */                                                   // 0x001b21e0: nop 
    /* FPU: div.s $f2, $f1, $f0 */                              // 0x001b21e4: div.s $f2, $f1, $f0
    *(uint32_t*)((s0) + 0x1c) = s4;                             // 0x001b21e8: sw $s4, 0x1c($s0)
    *(uint32_t*)((s0) + 0x18) = s3;                             // 0x001b21ec: sw $s3, 0x18($s0)
    a0 = sp + 0x60;                                             // 0x001b21f0: addiu $a0, $sp, 0x60
    v1 = 0x4300 << 16;                                          // 0x001b21f4: lui $v1, 0x4300
    v0 = 0x4f00 << 16;                                          // 0x001b21f8: lui $v0, 0x4f00
    FPU_F4 = *(float*)(a0);  // Load float                      // 0x001b21fc: lwc1 $f4, 0($a0)
    FPU_F3 = *(float*)((a0) + 4);  // Load float                // 0x001b2200: lwc1 $f3, 4($a0)
    FPU_F1 = *(float*)((a0) + 8);  // Load float                // 0x001b2204: lwc1 $f1, 8($a0)
    FPU_F0 = *(float*)((a0) + 0xc);  // Load float              // 0x001b2208: lwc1 $f0, 0xc($a0)
    *(float*)((s0) + 8) = FPU_F4;  // Store float               // 0x001b220c: swc1 $f4, 8($s0)
    *(float*)((s0) + 0xc) = FPU_F3;  // Store float             // 0x001b2210: swc1 $f3, 0xc($s0)
    *(float*)((s0) + 0x10) = FPU_F1;  // Store float            // 0x001b2214: swc1 $f1, 0x10($s0)
    /* move to FPU: $v1, $f1 */                                 // 0x001b2218: mtc1 $v1, $f1
    /* nop */                                                   // 0x001b221c: nop 
    *(float*)((s0) + 0x14) = FPU_F0;  // Store float            // 0x001b2220: swc1 $f0, 0x14($s0)
    /* FPU: mul.s $f1, $f1, $f2 */                              // 0x001b2224: mul.s $f1, $f1, $f2
    /* move to FPU: $v0, $f0 */                                 // 0x001b2228: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b222c: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001b2230: c.ole.s $f0, $f1
    /* bc1t 0x1b224c */                                         // 0x001b2234: bc1t 0x1b224c
    /* nop */                                                   // 0x001b2238: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001b223c: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001b2240: mfc1 $v1, $f1
    goto label_0x1b2268;                                        // 0x001b2244: b 0x1b2268
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001b2248: sw $v1, 4($s0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001b224c: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001b2250: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001b2254: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001b2258: mfc1 $v1, $f1
    /* nop */                                                   // 0x001b225c: nop 
    v1 = v1 | v0;                                               // 0x001b2260: or $v1, $v1, $v0
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001b2264: sw $v1, 4($s0)
label_0x1b2268:
    v0 = 0x31 << 16;                                            // 0x001b2268: lui $v0, 0x31
    a1 = *(int32_t*)((s0) + 4);                                 // 0x001b226c: lw $a1, 4($s0)
    v1 = 0x7f;                                                  // 0x001b2270: addiu $v1, $zero, 0x7f
    v0 = v0 + -0x5d50;                                          // 0x001b2274: addiu $v0, $v0, -0x5d50
    v1 = v1 - a1;                                               // 0x001b227c: subu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001b2280: sll $v1, $v1, 2
    func_001b2560();  // 1b2560                                // 0x001b2284: jal 0x1b2560
    a1 = v0 + v1;                                               // 0x001b2288: addu $a1, $v0, $v1
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001b228c: lw $v0, 4($s0)
label_0x1b2290:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001b2294: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b229c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b22a0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b22a4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b22a8: jr $ra
    sp = sp + 0x90;                                             // 0x001b22ac: addiu $sp, $sp, 0x90
}