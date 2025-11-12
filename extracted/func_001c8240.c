void func_001c8240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c8240: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8248: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8250: jal 0x1c7770
    a0 = 0x26;                                                  // 0x001c8258: addiu $a0, $zero, 0x26
    a1 = 0x20;                                                  // 0x001c825c: addiu $a1, $zero, 0x20
    func_001c7670();  // 0x1c75b0                                // 0x001c8260: jal 0x1c75b0
    a2 = 0x4c;                                                  // 0x001c8264: addiu $a2, $zero, 0x4c
    if (s0 >= 0) goto label_0x1c8288;                           // 0x001c8270: bgez $s0, 0x1c8288
    /* nop */                                                   // 0x001c8274: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c8278: jal 0x1c7780
    /* nop */                                                   // 0x001c827c: nop 
    goto label_0x1c82a0;                                        // 0x001c8280: b 0x1c82a0
label_0x1c8288:
    at = 0x31 << 16;                                            // 0x001c8288: lui $at, 0x31
    v0 = g_0031669c;  // Global at 0x0031669c                   // 0x001c828c: lw $v0, 0x669c($at)
    func_001c7790();  // 0x1c7780                                // 0x001c8290: jal 0x1c7780
    *(uint32_t*)(s1) = v0;                                      // 0x001c8294: sw $v0, 0($s1)
    /* nop */                                                   // 0x001c829c: nop 
label_0x1c82a0:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c82a4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c82a8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c82ac: jr $ra
    sp = sp + 0x30;                                             // 0x001c82b0: addiu $sp, $sp, 0x30
}