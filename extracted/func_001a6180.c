void func_001a6180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int16_t*)((a0) + 4);                                 // 0x001a6180: lh $v0, 4($a0)
    at = (v0 < 0x25) ? 1 : 0;                                   // 0x001a6184: slti $at, $v0, 0x25
    if (at == 0) goto label_0x1a6198;                           // 0x001a6188: beqz $at, 0x1a6198
    goto label_0x1a6208;                                        // 0x001a6190: b 0x1a6208
    /* nop */                                                   // 0x001a6194: nop 
label_0x1a6198:
    v1 = *(int16_t*)((a0) + 6);                                 // 0x001a6198: lh $v1, 6($a0)
    v0 = 0x41b4 << 16;                                          // 0x001a619c: lui $v0, 0x41b4
    /* move to FPU: $v0, $f1 */                                 // 0x001a61a0: mtc1 $v0, $f1
    v0 = 0x4f00 << 16;                                          // 0x001a61a4: lui $v0, 0x4f00
    /* move to FPU: $v0, $f0 */                                 // 0x001a61a8: mtc1 $v0, $f0
    /* move to FPU: $v1, $f2 */                                 // 0x001a61ac: mtc1 $v1, $f2
    /* nop */                                                   // 0x001a61b0: nop 
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x001a61b4: cvt.s.w $f2, $f2
    /* FPU: div.s $f1, $f2, $f1 */                              // 0x001a61b8: div.s $f1, $f2, $f1
    /* nop */                                                   // 0x001a61bc: nop 
    /* nop */                                                   // 0x001a61c0: nop 
    /* FPU: c.ole.s $f0, $f1 */                                 // 0x001a61c4: c.ole.s $f0, $f1
    /* bc1t 0x1a61e0 */                                         // 0x001a61c8: bc1t 0x1a61e0
    /* nop */                                                   // 0x001a61cc: nop 
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a61d0: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a61d4: mfc1 $v1, $f1
    goto label_0x1a61f8;                                        // 0x001a61d8: b 0x1a61f8
    /* nop */                                                   // 0x001a61dc: nop 
    /* FPU: sub.s $f1, $f1, $f0 */                              // 0x001a61e0: sub.s $f1, $f1, $f0
    v0 = 0x8000 << 16;                                          // 0x001a61e4: lui $v0, 0x8000
    /* FPU: cvt.w.s $f1, $f1 */                                 // 0x001a61e8: cvt.w.s $f1, $f1
    /* move from FPU: $v1, $f1 */                               // 0x001a61ec: mfc1 $v1, $f1
    /* nop */                                                   // 0x001a61f0: nop 
    v1 = v1 | v0;                                               // 0x001a61f4: or $v1, $v1, $v0
label_0x1a61f8:
    v0 = 0x21 << 16;                                            // 0x001a61f8: lui $v0, 0x21
    v0 = v0 + 0x7730;                                           // 0x001a61fc: addiu $v0, $v0, 0x7730
    v0 = v0 + v1;                                               // 0x001a6200: addu $v0, $v0, $v1
    v0 = g_00217730;  // Global at 0x00217730                   // 0x001a6204: lbu $v0, 0($v0)
label_0x1a6208:
    return;                                                     // 0x001a6208: jr $ra
    /* nop */                                                   // 0x001a620c: nop 
}