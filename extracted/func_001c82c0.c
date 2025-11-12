void func_001c82c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c82c0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c82cc: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c82dc: jal 0x1c7770
    v0 = 0x31 << 16;                                            // 0x001c82e4: lui $v0, 0x31
    v0 = v0 + 0x669c;                                           // 0x001c82ec: addiu $v0, $v0, 0x669c
    g_0031669c = s2;  // Global at 0x0031669c                   // 0x001c82f4: sh $s2, 0($v0)
    g_0031669e = s1;  // Global at 0x0031669e                   // 0x001c82fc: sh $s1, 2($v0)
    func_00107b68();  // 0x107ab8                                // 0x001c8300: jal 0x107ab8
    a0 = v0 + 4;                                                // 0x001c8304: addiu $a0, $v0, 4
    a0 = 0x27;                                                  // 0x001c8308: addiu $a0, $zero, 0x27
    a1 = 0x124;                                                 // 0x001c830c: addiu $a1, $zero, 0x124
    func_001c7670();  // 0x1c75b0                                // 0x001c8310: jal 0x1c75b0
    a2 = 0x20;                                                  // 0x001c8314: addiu $a2, $zero, 0x20
    func_001c7790();  // 0x1c7780                                // 0x001c831c: jal 0x1c7780
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c832c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c8330: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c8334: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c8338: jr $ra
    sp = sp + 0x40;                                             // 0x001c833c: addiu $sp, $sp, 0x40
}