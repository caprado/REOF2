void func_001aa960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_64, local_74;
    
    sp = sp + -0xd0;                                            // 0x001aa960: addiu $sp, $sp, -0xd0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001aa968: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aa974: addu.qb $zero, $sp, $s1
    if (s3 == 0) goto label_0x1aa9d8;                           // 0x001aa980: beqz $s3, 0x1aa9d8
    a0 = sp + 0x50;                                             // 0x001aa98c: addiu $a0, $sp, 0x50
    func_00107ab8();  // 107ab8                                // 0x001aa990: jal 0x107ab8
    a2 = 0x80;                                                  // 0x001aa994: addiu $a2, $zero, 0x80
    a0 = local_64;                                              // 0x001aa998: lw $a0, 0x64($sp)
    if (a0 == 0) goto label_0x1aa9d8;                           // 0x001aa99c: beqz $a0, 0x1aa9d8
    /* nop */                                                   // 0x001aa9a0: nop 
    v1 = local_74;                                              // 0x001aa9a4: lw $v1, 0x74($sp)
    if (v1 != 0) goto label_0x1aa9bc;                           // 0x001aa9a8: bnez $v1, 0x1aa9bc
    a2 = s0 + a0;                                               // 0x001aa9ac: addu $a2, $s0, $a0
    goto label_0x1aa9dc;                                        // 0x001aa9b0: b 0x1aa9dc
    a2 = s0 + a0;                                               // 0x001aa9b8: addu $a2, $s0, $a0
label_0x1aa9bc:
    a1 = s2 & 0xff;                                             // 0x001aa9bc: andi $a1, $s2, 0xff
    func_001d61c0();  // 1d61c0                                // 0x001aa9c8: jal 0x1d61c0
    func_0018db10();  // 18db10                                // 0x001aa9d0: jal 0x18db10
    /* nop */                                                   // 0x001aa9d4: nop 
label_0x1aa9d8:
label_0x1aa9dc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aa9e0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aa9e4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aa9e8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aa9ec: jr $ra
    sp = sp + 0xd0;                                             // 0x001aa9f0: addiu $sp, $sp, 0xd0
}