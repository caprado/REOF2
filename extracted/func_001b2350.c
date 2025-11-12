void func_001b2350() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001b2350: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001b2358: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001b2364: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001b236c: swc1 $f20, 0($sp)
    func_001b2530();  // 0x1b24c0                                // 0x001b2370: jal 0x1b24c0
    /* FPU: mov.s $f20, $f12 */                                 // 0x001b2374: mov.s $f20, $f12
    if (v0 != 0) goto label_0x1b2388;                           // 0x001b2378: bnez $v0, 0x1b2388
    goto label_0x1b2450;                                        // 0x001b2380: b 0x1b2450
    v0 = -1;                                                    // 0x001b2384: addiu $v0, $zero, -1
label_0x1b2388:
    /* move to FPU: $zero, $f0 */                               // 0x001b2388: mtc1 $zero, $f0
    /* nop */                                                   // 0x001b238c: nop 
    /* FPU: c.olt.s $f20, $f0 */                                // 0x001b2390: c.olt.s $f20, $f0
    /* bc1f 0x1b23a0 */                                         // 0x001b2394: bc1f 0x1b23a0
    v0 = 0 | 0xc350;                                            // 0x001b2398: ori $v0, $zero, 0xc350
    /* FPU: mov.s $f20, $f0 */                                  // 0x001b239c: mov.s $f20, $f0
    /* move to FPU: $v0, $f0 */                                 // 0x001b23a0: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b23a4: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001b23a8: cvt.s.w $f0, $f0
    /* FPU: c.ole.s $f20, $f0 */                                // 0x001b23ac: c.ole.s $f20, $f0
    /* bc1t 0x1b23c8 */                                         // 0x001b23b0: bc1t 0x1b23c8
    /* nop */                                                   // 0x001b23b4: nop 
    func_001b2560();  // 0x1b2530                                // 0x001b23b8: jal 0x1b2530
    /* nop */                                                   // 0x001b23bc: nop 
    goto label_0x1b2450;                                        // 0x001b23c0: b 0x1b2450
    v0 = -1;                                                    // 0x001b23c4: addiu $v0, $zero, -1
    *(uint32_t*)((s0) + 0x1c) = s2;                             // 0x001b23c8: sw $s2, 0x1c($s0)
    /* nop */                                                   // 0x001b23cc: nop 
    /* FPU: div.s $f2, $f20, $f0 */                             // 0x001b23d0: div.s $f2, $f20, $f0
    v1 = 0x4300 << 16;                                          // 0x001b23d4: lui $v1, 0x4300
    v0 = 0x4f00 << 16;                                          // 0x001b23d8: lui $v0, 0x4f00
    *(uint32_t*)((s0) + 0x18) = s1;                             // 0x001b23dc: sw $s1, 0x18($s0)
    /* move to FPU: $v1, $f1 */                                 // 0x001b23e0: mtc1 $v1, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x001b23e4: mtc1 $v0, $f0
    /* nop */                                                   // 0x001b23e8: nop 
    /* FPU: mul.s $f1, $f1, $f2 */                              // 0x001b23ec: mul.s $f1, $f1, $f2
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001b23f0: c.ole.s $f0, $f1
    /* bc1t 0x1b240c */                                         // 0x001b23f4: bc1t 0x1b240c
    *(float*)((s0) + 0x10) = FPU_F20;  // Store float           // 0x001b23f8: swc1 $f20, 0x10($s0)
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001b23fc: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001b2400: mfc1 $v1, $f1
    goto label_0x1b2428;                                        // 0x001b2404: b 0x1b2428
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001b2408: sw $v1, 4($s0)
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001b240c: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001b2410: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001b2414: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001b2418: mfc1 $v1, $f1
    /* nop */                                                   // 0x001b241c: nop 
    v1 = v1 | v0;                                               // 0x001b2420: or $v1, $v1, $v0
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001b2424: sw $v1, 4($s0)
label_0x1b2428:
    v0 = 0x31 << 16;                                            // 0x001b2428: lui $v0, 0x31
    a1 = *(int32_t*)((s0) + 4);                                 // 0x001b242c: lw $a1, 4($s0)
    v1 = 0x7f;                                                  // 0x001b2430: addiu $v1, $zero, 0x7f
    v0 = v0 + -0x5d50;                                          // 0x001b2434: addiu $v0, $v0, -0x5d50
    v1 = v1 - a1;                                               // 0x001b243c: subu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001b2440: sll $v1, $v1, 2
    func_001b25c0();  // 0x1b2560                                // 0x001b2444: jal 0x1b2560
    a1 = v0 + v1;                                               // 0x001b2448: addu $a1, $v0, $v1
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001b244c: lw $v0, 4($s0)
label_0x1b2450:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001b2454: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001b245c: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001b2460: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001b2464: jr $ra
    sp = sp + 0x50;                                             // 0x001b2468: addiu $sp, $sp, 0x50
}