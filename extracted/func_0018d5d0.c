void func_0018d5d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0018d5d0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018d5dc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018d5ec: addu.qb $zero, $sp, $s1
    if (s1 != 0) goto label_0x18d624;                           // 0x0018d5f8: bnez $s1, 0x18d624
    func_0011c458();  // 0x11c438                                // 0x0018d600: jal 0x11c438
    /* nop */                                                   // 0x0018d604: nop 
    if (v0 >= 0) goto label_0x18d660;                           // 0x0018d608: bgez $v0, 0x18d660
    a0 = 0x23 << 16;                                            // 0x0018d60c: lui $a0, 0x23
    func_00108f48();  // 0x108ed8                                // 0x0018d614: jal 0x108ed8
    a0 = &str_0022a410;  // "cdrom0:"                           // 0x0018d618: addiu $a0, $a0, -0x5bf0
    goto label_0x18d664;                                        // 0x0018d61c: b 0x18d664
label_0x18d624:
    goto label_0x18d644;                                        // 0x0018d624: b 0x18d644
label_0x18d62c:
    func_0011c458();  // 0x11c438                                // 0x0018d630: jal 0x11c438
    if (v0 > 0) goto label_0x18d660;                            // 0x0018d638: bgtz $v0, 0x18d660
    /* nop */                                                   // 0x0018d63c: nop 
    s0 = s0 + 1;                                                // 0x0018d640: addiu $s0, $s0, 1
label_0x18d644:
    v0 = (s0 < s1) ? 1 : 0;                                     // 0x0018d644: slt $v0, $s0, $s1
    if (v0 != 0) goto label_0x18d62c;                           // 0x0018d648: bnez $v0, 0x18d62c
    a0 = 0x23 << 16;                                            // 0x0018d650: lui $a0, 0x23
    func_00108f48();  // 0x108ed8                                // 0x0018d658: jal 0x108ed8
    a0 = &str_0022a410;  // "cdrom0:"                           // 0x0018d65c: addiu $a0, $a0, -0x5bf0
label_0x18d660:
label_0x18d664:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018d664: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018d66c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018d670: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018d674: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018d678: jr $ra
    sp = sp + 0x60;                                             // 0x0018d67c: addiu $sp, $sp, 0x60
}