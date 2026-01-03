void func_001a9660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001a9660: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a966c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a967c: addu.qb $zero, $sp, $s1
    a1 = 1;                                                     // 0x001a9680: addiu $a1, $zero, 1
    func_001a8fc0();  // 1a8fc0                                // 0x001a9690: jal 0x1a8fc0
    a0 = 9;                                                     // 0x001a9694: addiu $a0, $zero, 9
    if (s3 != 0) goto label_0x1a96b4;                           // 0x001a9698: bnez $s3, 0x1a96b4
    func_001a94b0();  // 1a94b0                                // 0x001a96a4: jal 0x1a94b0
    goto label_0x1a96bc;                                        // 0x001a96ac: b 0x1a96bc
label_0x1a96b4:
label_0x1a96bc:
    v0 = -1;                                                    // 0x001a96bc: addiu $v0, $zero, -1
    if (s3 != v0) goto label_0x1a96d0;                          // 0x001a96c0: bne $s3, $v0, 0x1a96d0
    /* nop */                                                   // 0x001a96c4: nop 
    goto label_0x1a974c;                                        // 0x001a96c8: b 0x1a974c
label_0x1a96d0:
    a0 = *(int32_t*)((s1) + 0x20);                              // 0x001a96d0: lw $a0, 0x20($s1)
    func_00128f00();  // 128f00                                // 0x001a96d4: jal 0x128f00
    *(uint32_t*)((gp) + -0x63e4) = v0;                          // 0x001a96dc: sw $v0, -0x63e4($gp)
    /* nop */                                                   // 0x001a96e0: nop 
    if (v0 == 0) goto label_0x1a96d0;                           // 0x001a96e4: beqz $v0, 0x1a96d0
    /* nop */                                                   // 0x001a96e8: nop 
    func_001298c8();  // 1298c8                                // 0x001a96ec: jal 0x1298c8
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a96f0: lw $a0, -0x63e4($gp)
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a96f4: lw $a0, -0x63e4($gp)
    func_00129460();  // 129460                                // 0x001a9700: jal 0x129460
    goto label_0x1a9728;                                        // 0x001a9708: b 0x1a9728
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a970c: lw $a0, -0x63e4($gp)
label_0x1a9710:
    v0 = 1;                                                     // 0x001a9710: addiu $v0, $zero, 1
    if (s2 != v0) goto label_0x1a9724;                          // 0x001a9714: bne $s2, $v0, 0x1a9724
    /* nop */                                                   // 0x001a9718: nop 
    func_001af560();  // 1af560                                // 0x001a971c: jal 0x1af560
    /* nop */                                                   // 0x001a9720: nop 
label_0x1a9724:
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9724: lw $a0, -0x63e4($gp)
label_0x1a9728:
    func_00129a08();  // 129a08                                // 0x001a9728: jal 0x129a08
    /* nop */                                                   // 0x001a972c: nop 
    v1 = 3;                                                     // 0x001a9730: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1a9710;                          // 0x001a9734: bne $v0, $v1, 0x1a9710
    /* nop */                                                   // 0x001a9738: nop 
    func_00129010();  // 129010                                // 0x001a973c: jal 0x129010
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9740: lw $a0, -0x63e4($gp)
    v0 = s1 << 0xb;                                             // 0x001a9744: sll $v0, $s1, 0xb
    *(uint32_t*)((gp) + -0x63e4) = 0;                           // 0x001a9748: sw $zero, -0x63e4($gp)
label_0x1a974c:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001a9750: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a9758: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a975c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a9760: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a9764: jr $ra
    sp = sp + 0x60;                                             // 0x001a9768: addiu $sp, $sp, 0x60
}