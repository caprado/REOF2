void func_0015e658() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015e658: addiu $sp, $sp, -0x10
    a1 = 0x1b;                                                  // 0x0015e65c: addiu $a1, $zero, 0x1b
    FPU_F0 = *(float*)(a0);  // Load float                      // 0x0015e664: lwc1 $f0, 0($a0)
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x0015e668: cvt.w.s $f1, $f0
    /* move from FPU: $a2, $f1 */                               // 0x0015e66c: mfc1 $a2, $f1
    func_0015fbd8();  // 0x15fb78                                // 0x0015e670: jal 0x15fb78
    a1 = 7;                                                     // 0x0015e680: addiu $a1, $zero, 7
    a2 = 1;                                                     // 0x0015e684: addiu $a2, $zero, 1
    return func_0015fbd8();  // Tail call                        // 0x0015e688: j 0x15fb78
    sp = sp + 0x10;                                             // 0x0015e68c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015e690: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0015e694: lui $v0, 0x21
    v0 = v0 + 0x4450;                                           // 0x0015e69c: addiu $v0, $v0, 0x4450
    v1 = g_00214450;  // Global at 0x00214450                   // 0x0015e6a0: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x15e6b8;                           // 0x0015e6a4: beqz $v1, 0x15e6b8
    g_00214450 = 0;  // Global at 0x00214450                    // 0x0015e6ac: sw $zero, 0($v0)
    return func_0015e4d8();  // Tail call                        // 0x0015e6b0: j 0x15e360
    sp = sp + 0x10;                                             // 0x0015e6b4: addiu $sp, $sp, 0x10
label_0x15e6b8:
    return;                                                     // 0x0015e6b8: jr $ra
    sp = sp + 0x10;                                             // 0x0015e6bc: addiu $sp, $sp, 0x10
}