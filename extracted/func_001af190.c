void func_001af190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001af190: addiu $sp, $sp, -0x30
    a2 = 0x10;                                                  // 0x001af194: addiu $a2, $zero, 0x10
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001af19c: addu.qb $zero, $sp, $s1
    a0 = 0x2b << 16;                                            // 0x001af1ac: lui $a0, 0x2b
    a0 = a0 + -0x5750;                                          // 0x001af1b0: addiu $a0, $a0, -0x5750
    func_00107d30();  // 0x107c70                                // 0x001af1b4: jal 0x107c70
    at = 0x2b << 16;                                            // 0x001af1bc: lui $at, 0x2b
    g_002aa8b0 = s1;  // Global at 0x002aa8b0                   // 0x001af1c0: sw $s1, -0x5750($at)
    at = 0x2b << 16;                                            // 0x001af1c4: lui $at, 0x2b
    g_002aa8b4 = s0;  // Global at 0x002aa8b4                   // 0x001af1c8: sw $s0, -0x574c($at)
    at = 0x2b << 16;                                            // 0x001af1cc: lui $at, 0x2b
    g_002aa8bc = s0;  // Global at 0x002aa8bc                   // 0x001af1d0: sw $s0, -0x5744($at)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001af1d8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af1dc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af1e0: jr $ra
    sp = sp + 0x30;                                             // 0x001af1e4: addiu $sp, $sp, 0x30
}