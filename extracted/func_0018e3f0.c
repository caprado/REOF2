void func_0018e3f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x0018e3f0: addiu $sp, $sp, -0x40
    a2 = sp + 0x38;                                             // 0x0018e3f8: addiu $a2, $sp, 0x38
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x0018e3fc: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x0018e400: swc1 $f20, 0($sp)
    local_3c = 0;                                               // 0x0018e408: sw $zero, 0x3c($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x0018e40c: mov.s $f20, $f12
    local_38 = 0;                                               // 0x0018e410: sw $zero, 0x38($sp)
    a3 = *(int16_t*)(s0);                                       // 0x0018e414: lh $a3, 0($s0)
    func_0018eb70();  // 0x18ea10                                // 0x0018e418: jal 0x18ea10
    a1 = sp + 0x3c;                                             // 0x0018e41c: addiu $a1, $sp, 0x3c
    *(uint16_t*)(s0) = v0;                                      // 0x0018e420: sh $v0, 0($s0)
    a1 = local_38;                                              // 0x0018e424: lw $a1, 0x38($sp)
    if (a1 != 0) goto label_0x18e43c;                           // 0x0018e428: bnez $a1, 0x18e43c
    /* nop */                                                   // 0x0018e42c: nop 
    v0 = local_3c;                                              // 0x0018e430: lw $v0, 0x3c($sp)
    goto label_0x18e4ac;                                        // 0x0018e434: b 0x18e4ac
    FPU_F0 = *(float*)((v0) + 4);  // Load float                // 0x0018e438: lwc1 $f0, 4($v0)
label_0x18e43c:
    a0 = local_3c;                                              // 0x0018e43c: lw $a0, 0x3c($sp)
    v0 = 2 << 16;                                               // 0x0018e440: lui $v0, 2
    v1 = *(int32_t*)(a0);                                       // 0x0018e444: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x18e480;                          // 0x0018e448: beq $v1, $v0, 0x18e480
    v0 = 1 << 16;                                               // 0x0018e44c: lui $v0, 1
    if (v1 == v0) goto label_0x18e460;                          // 0x0018e450: beq $v1, $v0, 0x18e460
    /* nop */                                                   // 0x0018e454: nop 
    goto label_0x18e4a8;                                        // 0x0018e458: b 0x18e4a8
    /* nop */                                                   // 0x0018e45c: nop 
label_0x18e460:
    FPU_F13 = *(float*)((a0) + 4);  // Load float               // 0x0018e460: lwc1 $f13, 4($a0)
    FPU_F14 = *(float*)((a0) + 8);  // Load float               // 0x0018e464: lwc1 $f14, 8($a0)
    FPU_F15 = *(float*)((a1) + 4);  // Load float               // 0x0018e468: lwc1 $f15, 4($a1)
    FPU_F16 = *(float*)((a1) + 8);  // Load float               // 0x0018e46c: lwc1 $f16, 8($a1)
    func_0018f0b0();  // 0x18f030                                // 0x0018e470: jal 0x18f030
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e474: mov.s $f12, $f20
    goto label_0x18e4b0;                                        // 0x0018e478: b 0x18e4b0
label_0x18e480:
    FPU_F13 = *(float*)((a0) + 4);  // Load float               // 0x0018e480: lwc1 $f13, 4($a0)
    FPU_F14 = *(float*)((a0) + 8);  // Load float               // 0x0018e484: lwc1 $f14, 8($a0)
    FPU_F15 = *(float*)((a0) + 0x10);  // Load float            // 0x0018e488: lwc1 $f15, 0x10($a0)
    FPU_F16 = *(float*)((a1) + 4);  // Load float               // 0x0018e48c: lwc1 $f16, 4($a1)
    FPU_F17 = *(float*)((a1) + 8);  // Load float               // 0x0018e490: lwc1 $f17, 8($a1)
    FPU_F18 = *(float*)((a1) + 0xc);  // Load float             // 0x0018e494: lwc1 $f18, 0xc($a1)
    func_0018f3a0();  // 0x18f0b0                                // 0x0018e498: jal 0x18f0b0
    /* FPU: mov.s $f12, $f20 */                                 // 0x0018e49c: mov.s $f12, $f20
    goto label_0x18e4ac;                                        // 0x0018e4a0: b 0x18e4ac
    /* nop */                                                   // 0x0018e4a4: nop 
label_0x18e4a8:
    /* move to FPU: $zero, $f0 */                               // 0x0018e4a8: mtc1 $zero, $f0
label_0x18e4ac:
label_0x18e4b0:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x0018e4b0: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x0018e4b4: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x0018e4b8: jr $ra
    sp = sp + 0x40;                                             // 0x0018e4bc: addiu $sp, $sp, 0x40
}