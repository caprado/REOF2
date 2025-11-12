void func_001c8520() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c8520: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c8528: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8534: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8540: jal 0x1c7770
    a0 = 0x30;                                                  // 0x001c8548: addiu $a0, $zero, 0x30
    a1 = 0x20;                                                  // 0x001c854c: addiu $a1, $zero, 0x20
    func_001c7670();  // 0x1c75b0                                // 0x001c8550: jal 0x1c75b0
    a2 = 0x128;                                                 // 0x001c8554: addiu $a2, $zero, 0x128
    if (s1 >= 0) goto label_0x1c8578;                           // 0x001c8560: bgez $s1, 0x1c8578
    /* nop */                                                   // 0x001c8564: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c8568: jal 0x1c7780
    /* nop */                                                   // 0x001c856c: nop 
    goto label_0x1c85a8;                                        // 0x001c8570: b 0x1c85a8
label_0x1c8578:
    s0 = 0x31 << 16;                                            // 0x001c857c: lui $s0, 0x31
    s0 = s0 + 0x669c;                                           // 0x001c8580: addiu $s0, $s0, 0x669c
    func_0010ae00();  // 0x10ac68                                // 0x001c8584: jal 0x10ac68
    v0 = g_0031679c;  // Global at 0x0031679c                   // 0x001c858c: lw $v0, 0x100($s0)
    *(uint32_t*)(s3) = v0;                                      // 0x001c8590: sw $v0, 0($s3)
    v0 = g_003167a0;  // Global at 0x003167a0                   // 0x001c8594: lw $v0, 0x104($s0)
    func_001c7790();  // 0x1c7780                                // 0x001c8598: jal 0x1c7780
    *(uint32_t*)(s2) = v0;                                      // 0x001c859c: sw $v0, 0($s2)
    /* nop */                                                   // 0x001c85a4: nop 
label_0x1c85a8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c85b0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c85b4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c85b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c85bc: jr $ra
    sp = sp + 0x50;                                             // 0x001c85c0: addiu $sp, $sp, 0x50
}