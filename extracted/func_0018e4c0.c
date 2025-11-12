void func_0018e4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x0018e4c0: addiu $sp, $sp, -0x40
    a2 = sp + 0x38;                                             // 0x0018e4c8: addiu $a2, $sp, 0x38
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018e4cc: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018e4d0: swc1 $f20, 0($sp)
    local_3c = 0;                                               // 0x0018e4d8: sw $zero, 0x3c($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x0018e4dc: mov.s $f20, $f12
    local_38 = 0;                                               // 0x0018e4e0: sw $zero, 0x38($sp)
    a3 = *(int16_t*)(s0);                                       // 0x0018e4e4: lh $a3, 0($s0)
    func_0018ed00();  // 0x18eb70                                // 0x0018e4e8: jal 0x18eb70
    a1 = sp + 0x3c;                                             // 0x0018e4ec: addiu $a1, $sp, 0x3c
    *(uint16_t*)(s0) = v0;                                      // 0x0018e4f0: sh $v0, 0($s0)
    v0 = local_38;                                              // 0x0018e4f4: lw $v0, 0x38($sp)
    if (v0 != 0) goto label_0x18e514;                           // 0x0018e4f8: bnez $v0, 0x18e514
    /* nop */                                                   // 0x0018e4fc: nop 
    v0 = local_3c;                                              // 0x0018e500: lw $v0, 0x3c($sp)
    v0 = *(int16_t*)(v0);                                       // 0x0018e504: lh $v0, 0($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018e508: mtc1 $v0, $f0
    goto label_0x18e550;                                        // 0x0018e50c: b 0x18e550
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018e510: cvt.s.w $f0, $f0
label_0x18e514:
    a0 = local_3c;                                              // 0x0018e514: lw $a0, 0x3c($sp)
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e518: mov.s $f12, $f20
    v1 = *(int16_t*)(v0);                                       // 0x0018e51c: lh $v1, 0($v0)
    a1 = *(int16_t*)(a0);                                       // 0x0018e520: lh $a1, 0($a0)
    /* move to FPU: $v1, $f1 */                                 // 0x0018e524: mtc1 $v1, $f1
    v0 = *(int16_t*)((v0) + 2);                                 // 0x0018e528: lh $v0, 2($v0)
    /* FPU: cvt.s.w $f15, $f1 */                                // 0x0018e52c: cvt.s.w $f15, $f1
    a0 = *(int16_t*)((a0) + 2);                                 // 0x0018e530: lh $a0, 2($a0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018e534: mtc1 $v0, $f0
    /* move to FPU: $a1, $f2 */                                 // 0x0018e538: mtc1 $a1, $f2
    /* FPU: cvt.s.w $f16, $f0 */                                // 0x0018e53c: cvt.s.w $f16, $f0
    /* move to FPU: $a0, $f1 */                                 // 0x0018e540: mtc1 $a0, $f1
    /* FPU: cvt.s.w $f13, $f2 */                                // 0x0018e544: cvt.s.w $f13, $f2
    func_0018f0b0();  // 0x18f030                                // 0x0018e548: jal 0x18f030
    /* FPU: cvt.s.w $f14, $f1 */                                // 0x0018e54c: cvt.s.w $f14, $f1
label_0x18e550:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018e554: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018e558: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0018e55c: jr $ra
    sp = sp + 0x40;                                             // 0x0018e560: addiu $sp, $sp, 0x40
}