void func_001c7770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001c7770: lui $at, 0x31
    return PollSema();  // Tail call                            // 0x001c7774: j 0x114320
    a0 = g_00316610;  // Global at 0x00316610                   // 0x001c7778: lw $a0, 0x6610($at)
    /* nop */                                                   // 0x001c777c: nop 
    at = 0x31 << 16;                                            // 0x001c7780: lui $at, 0x31
    return iSignalSema();  // Tail call                         // 0x001c7784: j 0x114300
    a0 = g_00316610;  // Global at 0x00316610                   // 0x001c7788: lw $a0, 0x6610($at)
    /* nop */                                                   // 0x001c778c: nop 
    sp = sp + -0x30;                                            // 0x001c7790: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c7798: addu.qb $zero, $sp, $s1
    func_001c7780();  // 0x1c7770                                // 0x001c77a4: jal 0x1c7770
    at = 0x31 << 16;                                            // 0x001c77ac: lui $at, 0x31
    a1 = 0x20;                                                  // 0x001c77b0: addiu $a1, $zero, 0x20
    g_00316680 = s1;  // Global at 0x00316680                   // 0x001c77b4: sw $s1, 0x6680($at)
    a0 = 5;                                                     // 0x001c77b8: addiu $a0, $zero, 5
    at = 0x31 << 16;                                            // 0x001c77bc: lui $at, 0x31
    func_001c7670();  // 0x1c75b0                                // 0x001c77c4: jal 0x1c75b0
    g_00316684 = s0;  // Global at 0x00316684                   // 0x001c77c8: sw $s0, 0x6684($at)
    func_001c7790();  // 0x1c7780                                // 0x001c77d0: jal 0x1c7780
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c77e0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c77e4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c77e8: jr $ra
    sp = sp + 0x30;                                             // 0x001c77ec: addiu $sp, $sp, 0x30
}