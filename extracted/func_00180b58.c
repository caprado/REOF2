void func_00180b58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00180b58: addiu $sp, $sp, -0x10
    func_001887a0();  // 0x188758                                // 0x00180b60: jal 0x188758
    /* nop */                                                   // 0x00180b64: nop 
    if (a0 >= 0) goto label_0x180b80;                           // 0x00180b6c: bgezl $a0, 0x180b80
    v0 = 0x21 << 16;                                            // 0x00180b70: lui $v0, 0x21
    v0 = 0x8101 << 16;                                          // 0x00180b74: lui $v0, 0x8101
    goto label_0x180bc8;                                        // 0x00180b78: b 0x180bc8
    v0 = v0 | 0x8002;                                           // 0x00180b7c: ori $v0, $v0, 0x8002
label_0x180b80:
    v1 = g_81016010;  // Global at 0x81016010                   // 0x00180b80: lw $v1, 0x6010($v0)
    /* bnezl $v1, 0x180b98 */                                   // 0x00180b84: bnezl $v1, 0x180b98
    v0 = 0x27 << 16;                                            // 0x00180b88: lui $v0, 0x27
    v0 = 0x8101 << 16;                                          // 0x00180b8c: lui $v0, 0x8101
    goto label_0x180bc8;                                        // 0x00180b90: b 0x180bc8
    v0 = v0 | 0x8001;                                           // 0x00180b94: ori $v0, $v0, 0x8001
    v1 = g_8100ac84;  // Global at 0x8100ac84                   // 0x00180b98: lw $v1, -0x537c($v0)
    if (v1 == 0) goto label_0x180bb0;                           // 0x00180b9c: beqz $v1, 0x180bb0
    /* nop */                                                   // 0x00180ba0: nop 
    v0 = 0x8101 << 16;                                          // 0x00180ba4: lui $v0, 0x8101
    goto label_0x180bc8;                                        // 0x00180ba8: b 0x180bc8
    v0 = v0 | 0x10;                                             // 0x00180bac: ori $v0, $v0, 0x10
label_0x180bb0:
    func_00188758();  // 0x1886f0                                // 0x00180bb0: jal 0x1886f0
    /* nop */                                                   // 0x00180bb4: nop 
    v1 = 0x8101 << 16;                                          // 0x00180bb8: lui $v1, 0x8101
    v1 = v1 | 0x8002;                                           // 0x00180bbc: ori $v1, $v1, 0x8002
    if (v0 != 0) v1 = 0;                                        // 0x00180bc0: movn $v1, $zero, $v0
label_0x180bc8:
    return;                                                     // 0x00180bcc: jr $ra
    sp = sp + 0x10;                                             // 0x00180bd0: addiu $sp, $sp, 0x10
}