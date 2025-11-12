void func_0016f9f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016f9f8: addiu $sp, $sp, -0x20
    s0 = *(int32_t*)((s2) + 0x1b30);                            // 0x0016fa10: lw $s0, 0x1b30($s2)
    s1 = *(int32_t*)(s0);                                       // 0x0016fa14: lw $s1, 0($s0)
    if (s1 == 0) goto label_0x16fb4c;                           // 0x0016fa18: beqz $s1, 0x16fb4c
    v0 = 0x26 << 16;                                            // 0x0016fa20: lui $v0, 0x26
    v1 = 0x26 << 16;                                            // 0x0016fa24: lui $v1, 0x26
    t1 = v0 + 0x77e8;                                           // 0x0016fa28: addiu $t1, $v0, 0x77e8
    a3 = *(int32_t*)((s0) + 0x24);                              // 0x0016fa64: lw $a3, 0x24($s0)
    g_00267808 = a3;  // Global at 0x00267808                   // 0x0016fa70: sw $a3, 0x20($t1)
    a1 = 0x26 << 16;                                            // 0x0016fa74: lui $a1, 0x26
    t0 = v1 + 0x7810;                                           // 0x0016fa78: addiu $t0, $v1, 0x7810
    a2 = a1 + 0x7818;                                           // 0x0016fa8c: addiu $a2, $a1, 0x7818
    func_00171738();  // 0x1716b0                                // 0x0016fb0c: jal 0x1716b0
    func_0016fba0();  // 0x16fb68                                // 0x0016fb14: jal 0x16fb68
    a1 = 0xff00 << 16;                                          // 0x0016fb1c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x16fb48;                           // 0x0016fb20: beqz $v0, 0x16fb48
    a1 = a1 | 0xf0c;                                            // 0x0016fb2c: ori $a1, $a1, 0xf0c
    return func_00169940();  // Tail call                        // 0x0016fb3c: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016fb40: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016fb44: nop 
label_0x16fb48:
    *(uint32_t*)(s0) = 0;                                       // 0x0016fb48: sw $zero, 0($s0)
label_0x16fb4c:
    return;                                                     // 0x0016fb5c: jr $ra
    sp = sp + 0x20;                                             // 0x0016fb60: addiu $sp, $sp, 0x20
}