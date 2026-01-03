void func_001c86b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c86b0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c86b8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c86c4: addu.qb $zero, $sp, $s1
    func_001c7770();  // 1c7770                                // 0x001c86d0: jal 0x1c7770
    a0 = 0x37;                                                  // 0x001c86d8: addiu $a0, $zero, 0x37
    a1 = 0x20;                                                  // 0x001c86dc: addiu $a1, $zero, 0x20
    func_001c75b0();  // 1c75b0                                // 0x001c86e0: jal 0x1c75b0
    a2 = 0x2c;                                                  // 0x001c86e4: addiu $a2, $zero, 0x2c
    if (s0 >= 0) goto label_0x1c8708;                           // 0x001c86f0: bgez $s0, 0x1c8708
    /* nop */                                                   // 0x001c86f4: nop 
    func_001c7780();  // 1c7780                                // 0x001c86f8: jal 0x1c7780
    /* nop */                                                   // 0x001c86fc: nop 
    goto label_0x1c8730;                                        // 0x001c8700: b 0x1c8730
label_0x1c8708:
    v1 = 0x31 << 16;                                            // 0x001c8708: lui $v1, 0x31
    v1 = v1 + 0x669c;                                           // 0x001c870c: addiu $v1, $v1, 0x669c
    v0 = g_0031669c;  // Global at 0x0031669c                   // 0x001c8710: lw $v0, 0($v1)
    *(uint32_t*)(s3) = v0;                                      // 0x001c8714: sw $v0, 0($s3)
    v0 = g_003166a0;  // Global at 0x003166a0                   // 0x001c8718: lw $v0, 4($v1)
    *(uint32_t*)(s2) = v0;                                      // 0x001c871c: sw $v0, 0($s2)
    v0 = g_003166a4;  // Global at 0x003166a4                   // 0x001c8720: lw $v0, 8($v1)
    func_001c7780();  // 1c7780                                // 0x001c8724: jal 0x1c7780
    *(uint32_t*)(s1) = v0;                                      // 0x001c8728: sw $v0, 0($s1)
label_0x1c8730:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c8738: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c873c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8740: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8744: jr $ra
    sp = sp + 0x50;                                             // 0x001c8748: addiu $sp, $sp, 0x50
}