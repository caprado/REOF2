void func_0018e360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x0018e360: addiu $sp, $sp, -0x40
    a2 = sp + 0x38;                                             // 0x0018e368: addiu $a2, $sp, 0x38
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018e36c: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018e370: swc1 $f20, 0($sp)
    local_3c = 0;                                               // 0x0018e378: sw $zero, 0x3c($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x0018e37c: mov.s $f20, $f12
    local_38 = 0;                                               // 0x0018e380: sw $zero, 0x38($sp)
    a3 = *(int16_t*)(s0);                                       // 0x0018e384: lh $a3, 0($s0)
    func_0018ea10();  // 0x18e8c0                                // 0x0018e388: jal 0x18e8c0
    a1 = sp + 0x3c;                                             // 0x0018e38c: addiu $a1, $sp, 0x3c
    *(uint16_t*)(s0) = v0;                                      // 0x0018e390: sh $v0, 0($s0)
    v1 = local_38;                                              // 0x0018e394: lw $v1, 0x38($sp)
    if (v1 != 0) goto label_0x18e3ac;                           // 0x0018e398: bnez $v1, 0x18e3ac
    /* nop */                                                   // 0x0018e39c: nop 
    v0 = local_3c;                                              // 0x0018e3a0: lw $v0, 0x3c($sp)
    goto label_0x18e3d0;                                        // 0x0018e3a4: b 0x18e3d0
    FPU_F0 = *(float*)(v0);  // Load float                      // 0x0018e3a8: lwc1 $f0, 0($v0)
label_0x18e3ac:
    v0 = local_3c;                                              // 0x0018e3ac: lw $v0, 0x3c($sp)
    FPU_F16 = *(float*)(v1);  // Load float                     // 0x0018e3b0: lwc1 $f16, 0($v1)
    FPU_F17 = *(float*)((v1) + 4);  // Load float               // 0x0018e3b4: lwc1 $f17, 4($v1)
    FPU_F18 = *(float*)((v1) + 8);  // Load float               // 0x0018e3b8: lwc1 $f18, 8($v1)
    FPU_F13 = *(float*)(v0);  // Load float                     // 0x0018e3bc: lwc1 $f13, 0($v0)
    FPU_F14 = *(float*)((v0) + 4);  // Load float               // 0x0018e3c0: lwc1 $f14, 4($v0)
    FPU_F15 = *(float*)((v0) + 0xc);  // Load float             // 0x0018e3c4: lwc1 $f15, 0xc($v0)
    func_0018f3a0();  // 0x18f0b0                                // 0x0018e3c8: jal 0x18f0b0
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e3cc: mov.s $f12, $f20
label_0x18e3d0:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018e3d4: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018e3d8: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0018e3dc: jr $ra
    sp = sp + 0x40;                                             // 0x0018e3e0: addiu $sp, $sp, 0x40
}