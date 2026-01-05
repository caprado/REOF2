void func_001c85d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c85d0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c85d8: addu.qb $zero, $sp, $s1
    func_001c7770();  // 1c7770                                // 0x001c85e0: jal 0x1c7770
    a0 = 0x31;                                                  // 0x001c85e8: addiu $a0, $zero, 0x31
    a1 = 0x20;                                                  // 0x001c85ec: addiu $a1, $zero, 0x20
    func_001c75b0();  // 1c75b0                                // 0x001c85f0: jal 0x1c75b0
    a2 = 0x24;                                                  // 0x001c85f4: addiu $a2, $zero, 0x24
    if (s0 >= 0) goto label_0x1c8618;                           // 0x001c8600: bgez $s0, 0x1c8618
    /* nop */                                                   // 0x001c8604: nop 
    func_001c7780();  // 1c7780                                // 0x001c8608: jal 0x1c7780
    /* nop */                                                   // 0x001c860c: nop 
    goto label_0x1c8630;                                        // 0x001c8610: b 0x1c8630
label_0x1c8618:
    at = 0x31 << 16;                                            // 0x001c8618: lui $at, 0x31
    v0 = g_0031669c;  // Global at 0x0031669c                   // 0x001c861c: lw $v0, 0x669c($at)
    func_001c7780();  // 1c7780                                // 0x001c8620: jal 0x1c7780
    *(uint32_t*)(s1) = v0;                                      // 0x001c8624: sw $v0, 0($s1)
    /* nop */                                                   // 0x001c862c: nop 
label_0x1c8630:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8634: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8638: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c863c: jr $ra
    sp = sp + 0x30;                                             // 0x001c8640: addiu $sp, $sp, 0x30
}