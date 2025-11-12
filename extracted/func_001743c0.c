void func_001743c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001743c0: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x001743d4: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x001743dc: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174400;                           // 0x001743e0: beqz $v0, 0x174400
    a1 = a1 | 0x152;                                            // 0x001743ec: ori $a1, $a1, 0x152
    return func_00169940();  // Tail call                        // 0x001743f8: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001743fc: addiu $sp, $sp, 0x20
label_0x174400:
    v1 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00174400: lw $v1, 0x2ab0($s0)
    *(uint32_t*)((v1) + 0xdac) = s1;                            // 0x00174408: sw $s1, 0xdac($v1)
    return;                                                     // 0x00174414: jr $ra
    sp = sp + 0x20;                                             // 0x00174418: addiu $sp, $sp, 0x20
}