void func_0018e630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x0018e630: addiu $sp, $sp, -0x40
    a2 = sp + 0x38;                                             // 0x0018e638: addiu $a2, $sp, 0x38
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018e63c: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018e640: swc1 $f20, 0($sp)
    local_3c = 0;                                               // 0x0018e648: sw $zero, 0x3c($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x0018e64c: mov.s $f20, $f12
    local_38 = 0;                                               // 0x0018e650: sw $zero, 0x38($sp)
    a3 = *(int16_t*)(s0);                                       // 0x0018e654: lh $a3, 0($s0)
    func_0018ee90();  // 18ee90                                // 0x0018e658: jal 0x18ee90
    a1 = sp + 0x3c;                                             // 0x0018e65c: addiu $a1, $sp, 0x3c
    *(uint16_t*)(s0) = v0;                                      // 0x0018e660: sh $v0, 0($s0)
    t0 = local_38;                                              // 0x0018e664: lw $t0, 0x38($sp)
    if (t0 != 0) goto label_0x18e684;                           // 0x0018e668: bnez $t0, 0x18e684
    /* nop */                                                   // 0x0018e66c: nop 
    v0 = local_3c;                                              // 0x0018e670: lw $v0, 0x3c($sp)
    v0 = g_00010004;  // Global at 0x00010004                   // 0x0018e674: lh $v0, 4($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018e678: mtc1 $v0, $f0
    goto label_0x18e75c;                                        // 0x0018e67c: b 0x18e75c
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018e680: cvt.s.w $f0, $f0
label_0x18e684:
    a0 = local_3c;                                              // 0x0018e684: lw $a0, 0x3c($sp)
    v0 = 2 << 16;                                               // 0x0018e688: lui $v0, 2
    v1 = *(int32_t*)(a0);                                       // 0x0018e68c: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x18e6f4;                          // 0x0018e690: beq $v1, $v0, 0x18e6f4
    v0 = 1 << 16;                                               // 0x0018e694: lui $v0, 1
    if (v1 == v0) goto label_0x18e6a8;                          // 0x0018e698: beq $v1, $v0, 0x18e6a8
    /* nop */                                                   // 0x0018e69c: nop 
    goto label_0x18e758;                                        // 0x0018e6a0: b 0x18e758
    /* nop */                                                   // 0x0018e6a4: nop 
label_0x18e6a8:
    a1 = *(int16_t*)((a0) + 4);                                 // 0x0018e6a8: lh $a1, 4($a0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e6ac: mov.s $f12, $f20
    v1 = *(int16_t*)((t0) + 4);                                 // 0x0018e6b0: lh $v1, 4($t0)
    v0 = *(int16_t*)((t0) + 6);                                 // 0x0018e6b4: lh $v0, 6($t0)
    a0 = *(int16_t*)((a0) + 6);                                 // 0x0018e6b8: lh $a0, 6($a0)
    /* move to FPU: $a1, $f1 */                                 // 0x0018e6bc: mtc1 $a1, $f1
    /* nop */                                                   // 0x0018e6c0: nop 
    /* FPU: cvt.s.w $f13, $f1 */                                // 0x0018e6c4: cvt.s.w $f13, $f1
    /* move to FPU: $a0, $f0 */                                 // 0x0018e6c8: mtc1 $a0, $f0
    /* move to FPU: $v1, $f1 */                                 // 0x0018e6cc: mtc1 $v1, $f1
    /* nop */                                                   // 0x0018e6d0: nop 
    /* FPU: cvt.s.w $f14, $f0 */                                // 0x0018e6d4: cvt.s.w $f14, $f0
    /* move to FPU: $v0, $f0 */                                 // 0x0018e6d8: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018e6dc: nop 
    /* FPU: cvt.s.w $f15, $f1 */                                // 0x0018e6e0: cvt.s.w $f15, $f1
    func_0018f030();  // 18f030                                // 0x0018e6e4: jal 0x18f030
    /* FPU: cvt.s.w $f16, $f0 */                                // 0x0018e6e8: cvt.s.w $f16, $f0
    goto label_0x18e760;                                        // 0x0018e6ec: b 0x18e760
label_0x18e6f4:
    a3 = *(int16_t*)((a0) + 4);                                 // 0x0018e6f4: lh $a3, 4($a0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e6f8: mov.s $f12, $f20
    a2 = *(int16_t*)((a0) + 6);                                 // 0x0018e6fc: lh $a2, 6($a0)
    a1 = *(int16_t*)((a0) + 0xa);                               // 0x0018e700: lh $a1, 0xa($a0)
    v1 = *(int16_t*)((t0) + 6);                                 // 0x0018e704: lh $v1, 6($t0)
    v0 = *(int16_t*)((t0) + 8);                                 // 0x0018e708: lh $v0, 8($t0)
    /* move to FPU: $a3, $f1 */                                 // 0x0018e70c: mtc1 $a3, $f1
    /* move to FPU: $a2, $f0 */                                 // 0x0018e710: mtc1 $a2, $f0
    /* nop */                                                   // 0x0018e714: nop 
    /* FPU: cvt.s.w $f13, $f1 */                                // 0x0018e718: cvt.s.w $f13, $f1
    a0 = *(int16_t*)((t0) + 4);                                 // 0x0018e71c: lh $a0, 4($t0)
    /* FPU: cvt.s.w $f14, $f0 */                                // 0x0018e720: cvt.s.w $f14, $f0
    /* move to FPU: $a1, $f1 */                                 // 0x0018e724: mtc1 $a1, $f1
    /* move to FPU: $a0, $f0 */                                 // 0x0018e728: mtc1 $a0, $f0
    /* nop */                                                   // 0x0018e72c: nop 
    /* FPU: cvt.s.w $f15, $f1 */                                // 0x0018e730: cvt.s.w $f15, $f1
    /* FPU: cvt.s.w $f16, $f0 */                                // 0x0018e734: cvt.s.w $f16, $f0
    /* move to FPU: $v1, $f1 */                                 // 0x0018e738: mtc1 $v1, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x0018e73c: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018e740: nop 
    /* FPU: cvt.s.w $f17, $f1 */                                // 0x0018e744: cvt.s.w $f17, $f1
    func_0018f0b0();  // 18f0b0                                // 0x0018e748: jal 0x18f0b0
    /* FPU: cvt.s.w $f18, $f0 */                                // 0x0018e74c: cvt.s.w $f18, $f0
    goto label_0x18e75c;                                        // 0x0018e750: b 0x18e75c
    /* nop */                                                   // 0x0018e754: nop 
label_0x18e758:
    /* move to FPU: $zero, $f0 */                               // 0x0018e758: mtc1 $zero, $f0
label_0x18e75c:
label_0x18e760:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018e760: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018e764: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0018e768: jr $ra
    sp = sp + 0x40;                                             // 0x0018e76c: addiu $sp, $sp, 0x40
}