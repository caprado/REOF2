void func_001761b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001761b8: addiu $sp, $sp, -0x20
    func_00176330();  // 176330                                // 0x001761d4: jal 0x176330
    if (v0 == 0) goto label_0x1761fc;                           // 0x001761dc: beqz $v0, 0x1761fc
    s0 = s0 + 0xcc0;                                            // 0x001761e0: addiu $s0, $s0, 0xcc0
    v1 = *(int32_t*)((s0) + 0x264);                             // 0x001761e4: lw $v1, 0x264($s0)
    a0 = 0x21 << 16;                                            // 0x001761e8: lui $a0, 0x21
    *(uint32_t*)(s1) = v1;                                      // 0x001761f0: sw $v1, 0($s1)
    v1 = g_00215740;  // Global at 0x00215740                   // 0x001761f4: lw $v1, 0x5740($a0)
    *(uint32_t*)(s2) = v1;                                      // 0x001761f8: sw $v1, 0($s2)
label_0x1761fc:
    return;                                                     // 0x0017620c: jr $ra
    sp = sp + 0x20;                                             // 0x00176210: addiu $sp, $sp, 0x20
}