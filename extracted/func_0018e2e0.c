void func_0018e2e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x0018e2e0: addiu $sp, $sp, -0x40
    a2 = sp + 0x38;                                             // 0x0018e2e8: addiu $a2, $sp, 0x38
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018e2ec: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018e2f0: swc1 $f20, 0($sp)
    local_3c = 0;                                               // 0x0018e2f8: sw $zero, 0x3c($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x0018e2fc: mov.s $f20, $f12
    local_38 = 0;                                               // 0x0018e300: sw $zero, 0x38($sp)
    a3 = *(int16_t*)(s0);                                       // 0x0018e304: lh $a3, 0($s0)
    func_0018e770();  // 18e770                                // 0x0018e308: jal 0x18e770
    a1 = sp + 0x3c;                                             // 0x0018e30c: addiu $a1, $sp, 0x3c
    *(uint16_t*)(s0) = v0;                                      // 0x0018e310: sh $v0, 0($s0)
    v1 = local_38;                                              // 0x0018e314: lw $v1, 0x38($sp)
    if (v1 != 0) goto label_0x18e32c;                           // 0x0018e318: bnez $v1, 0x18e32c
    /* nop */                                                   // 0x0018e31c: nop 
    v0 = local_3c;                                              // 0x0018e320: lw $v0, 0x3c($sp)
    goto label_0x18e348;                                        // 0x0018e324: b 0x18e348
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x0018e328: lwc1 $f0, 0($v0)
label_0x18e32c:
    v0 = local_3c;                                              // 0x0018e32c: lw $v0, 0x3c($sp)
    FPU_F15 = *(float*)(v1);  // Load float                     // 0x0018e330: lwc1 $f15, 0($v1)
    FPU_F16 = *(float*)((v1) + 4);  // Load float               // 0x0018e334: lwc1 $f16, 4($v1)
    FPU_F13 = *(float*)(v0);  // Load float                     // 0x0018e338: lwc1 $f13, 0($v0)
    FPU_F14 = *(float*)((v0) + 4);  // Load float               // 0x0018e33c: lwc1 $f14, 4($v0)
    func_0018f030();  // 18f030                                // 0x0018e340: jal 0x18f030
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e344: mov.s $f12, $f20
label_0x18e348:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018e34c: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018e350: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0018e354: jr $ra
    sp = sp + 0x40;                                             // 0x0018e358: addiu $sp, $sp, 0x40
}