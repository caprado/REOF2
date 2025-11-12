void func_001c8b50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001c8b50: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001c8b58: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c8b64: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c8b70: jal 0x1c7770
    s0 = 0x31 << 16;                                            // 0x001c8b78: lui $s0, 0x31
    a1 = 0x128;                                                 // 0x001c8b7c: addiu $a1, $zero, 0x128
    s0 = s0 + 0x669c;                                           // 0x001c8b80: addiu $s0, $s0, 0x669c
    a0 = 0x4a;                                                  // 0x001c8b84: addiu $a0, $zero, 0x4a
    g_0031669c = s1;  // Global at 0x0031669c                   // 0x001c8b88: sw $s1, 0($s0)
    func_001c7670();  // 0x1c75b0                                // 0x001c8b90: jal 0x1c75b0
    g_003166a0 = s3;  // Global at 0x003166a0                   // 0x001c8b94: sw $s3, 4($s0)
    if (s1 >= 0) goto label_0x1c8bb8;                           // 0x001c8ba0: bgez $s1, 0x1c8bb8
    /* nop */                                                   // 0x001c8ba4: nop 
    func_001c7790();  // 0x1c7780                                // 0x001c8ba8: jal 0x1c7780
    /* nop */                                                   // 0x001c8bac: nop 
    goto label_0x1c8be0;                                        // 0x001c8bb0: b 0x1c8be0
label_0x1c8bb8:
    at = (s3 < s1) ? 1 : 0;                                     // 0x001c8bb8: slt $at, $s3, $s1
    if (at != 0) goto label_0x1c8bd0;                           // 0x001c8bbc: bnez $at, 0x1c8bd0
    a1 = s0 + 8;                                                // 0x001c8bc4: addiu $a1, $s0, 8
    func_00107b68();  // 0x107ab8                                // 0x001c8bc8: jal 0x107ab8
label_0x1c8bd0:
    func_001c7790();  // 0x1c7780                                // 0x001c8bd0: jal 0x1c7780
    /* nop */                                                   // 0x001c8bd4: nop 
    /* nop */                                                   // 0x001c8bdc: nop 
label_0x1c8be0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c8be8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8bec: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8bf0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8bf4: jr $ra
    sp = sp + 0x50;                                             // 0x001c8bf8: addiu $sp, $sp, 0x50
}