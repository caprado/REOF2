void func_0018e570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x0018e570: addiu $sp, $sp, -0x40
    a2 = sp + 0x38;                                             // 0x0018e578: addiu $a2, $sp, 0x38
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018e57c: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018e580: swc1 $f20, 0($sp)
    local_3c = 0;                                               // 0x0018e588: sw $zero, 0x3c($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x0018e58c: mov.s $f20, $f12
    local_38 = 0;                                               // 0x0018e590: sw $zero, 0x38($sp)
    a3 = *(int16_t*)(s0);                                       // 0x0018e594: lh $a3, 0($s0)
    func_0018ed00();  // 18ed00                                // 0x0018e598: jal 0x18ed00
    a1 = sp + 0x3c;                                             // 0x0018e59c: addiu $a1, $sp, 0x3c
    *(uint16_t*)(s0) = v0;                                      // 0x0018e5a0: sh $v0, 0($s0)
    v0 = local_38;                                              // 0x0018e5a4: lw $v0, 0x38($sp)
    if (v0 != 0) goto label_0x18e5c4;                           // 0x0018e5a8: bnez $v0, 0x18e5c4
    /* nop */                                                   // 0x0018e5ac: nop 
    v0 = local_3c;                                              // 0x0018e5b0: lw $v0, 0x3c($sp)
    v0 = *(int16_t*)(v0);                                       // 0x0018e5b4: lh $v0, 0($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018e5b8: mtc1 $v0, $f0
    goto label_0x18e61c;                                        // 0x0018e5bc: b 0x18e61c
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018e5c0: cvt.s.w $f0, $f0
label_0x18e5c4:
    a0 = *(int16_t*)(v0);                                       // 0x0018e5c4: lh $a0, 0($v0)
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e5c8: mov.s $f12, $f20
    a3 = local_3c;                                              // 0x0018e5cc: lw $a3, 0x3c($sp)
    v1 = *(int16_t*)((v0) + 2);                                 // 0x0018e5d0: lh $v1, 2($v0)
    /* move to FPU: $a0, $f1 */                                 // 0x0018e5d4: mtc1 $a0, $f1
    a2 = *(int16_t*)(a3);                                       // 0x0018e5d8: lh $a2, 0($a3)
    a1 = *(int16_t*)((a3) + 2);                                 // 0x0018e5dc: lh $a1, 2($a3)
    /* FPU: cvt.s.w $f16, $f1 */                                // 0x0018e5e0: cvt.s.w $f16, $f1
    v0 = *(int16_t*)((v0) + 4);                                 // 0x0018e5e4: lh $v0, 4($v0)
    a0 = *(int16_t*)((a3) + 6);                                 // 0x0018e5e8: lh $a0, 6($a3)
    /* move to FPU: $v1, $f0 */                                 // 0x0018e5ec: mtc1 $v1, $f0
    /* move to FPU: $a1, $f1 */                                 // 0x0018e5f0: mtc1 $a1, $f1
    /* nop */                                                   // 0x0018e5f4: nop 
    /* FPU: cvt.s.w $f17, $f0 */                                // 0x0018e5f8: cvt.s.w $f17, $f0
    /* FPU: cvt.s.w $f14, $f1 */                                // 0x0018e5fc: cvt.s.w $f14, $f1
    /* move to FPU: $a2, $f2 */                                 // 0x0018e600: mtc1 $a2, $f2
    /* move to FPU: $a0, $f1 */                                 // 0x0018e604: mtc1 $a0, $f1
    /* move to FPU: $v0, $f0 */                                 // 0x0018e608: mtc1 $v0, $f0
    /* FPU: cvt.s.w $f13, $f2 */                                // 0x0018e60c: cvt.s.w $f13, $f2
    /* FPU: cvt.s.w $f15, $f1 */                                // 0x0018e610: cvt.s.w $f15, $f1
    func_0018f0b0();  // 18f0b0                                // 0x0018e614: jal 0x18f0b0
    /* FPU: cvt.s.w $f18, $f0 */                                // 0x0018e618: cvt.s.w $f18, $f0
label_0x18e61c:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018e620: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018e624: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0018e628: jr $ra
    sp = sp + 0x40;                                             // 0x0018e62c: addiu $sp, $sp, 0x40
}