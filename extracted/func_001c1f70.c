void func_001c1f70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c1f70: addiu $sp, $sp, -0x30
    a0 = 0x14;                                                  // 0x001c1f74: addiu $a0, $zero, 0x14
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c1f7c: addu.qb $zero, $sp, $s1
    func_001b4ff0();  // 0x1b4fd0                                // 0x001c1f80: jal 0x1b4fd0
    v0 = 0x8080 << 16;                                          // 0x001c1f88: lui $v0, 0x8080
    func_001b5060();  // 0x1b5050                                // 0x001c1f8c: jal 0x1b5050
    a0 = v0 | 0x8080;                                           // 0x001c1f90: ori $a0, $v0, 0x8080
    func_001b5040();  // 0x1b5030                                // 0x001c1f94: jal 0x1b5030
    a0 = 1;                                                     // 0x001c1f98: addiu $a0, $zero, 1
    s1 = 0x22 << 16;                                            // 0x001c1f9c: lui $s1, 0x22
    s0 = 0xb4;                                                  // 0x001c1fa0: addiu $s0, $zero, 0xb4
    goto label_0x1c1fc4;                                        // 0x001c1fa4: b 0x1c1fc4
    s1 = s1 + -0xf60;                                           // 0x001c1fa8: addiu $s1, $s1, -0xf60
label_0x1c1fac:
    func_001b5010();  // 0x1b4ff0                                // 0x001c1fac: jal 0x1b4ff0
    func_001b52d0();  // 0x1b5090                                // 0x001c1fb4: jal 0x1b5090
    a0 = g_0021f0a0;  // Global at 0x0021f0a0                   // 0x001c1fb8: lw $a0, 0($s1)
    s1 = s1 + 4;                                                // 0x001c1fbc: addiu $s1, $s1, 4
    s0 = s0 + 0x14;                                             // 0x001c1fc0: addiu $s0, $s0, 0x14
label_0x1c1fc4:
    v0 = g_0021f0a4;  // Global at 0x0021f0a4                   // 0x001c1fc4: lw $v0, 0($s1)
    if (v0 != 0) goto label_0x1c1fac;                           // 0x001c1fc8: bnez $v0, 0x1c1fac
    a0 = 0x1e;                                                  // 0x001c1fcc: addiu $a0, $zero, 0x1e
    func_001b5040();  // 0x1b5030                                // 0x001c1fd0: jal 0x1b5030
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c1fdc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c1fe0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c1fe4: jr $ra
    sp = sp + 0x30;                                             // 0x001c1fe8: addiu $sp, $sp, 0x30
}