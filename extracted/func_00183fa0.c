void func_00183fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00183fa0: addiu $sp, $sp, -0x20
    func_00188568();  // 0x188530                                // 0x00183fac: jal 0x188530
    if (v0 == 0) goto label_0x18401c;                           // 0x00183fb4: beqz $v0, 0x18401c
    /* nop */                                                   // 0x00183fb8: nop 
    func_00186b70();  // 0x186b50                                // 0x00183fbc: jal 0x186b50
    if (v0 == 0) goto label_0x183fec;                           // 0x00183fc4: beqz $v0, 0x183fec
    v1 = 0x27 << 16;                                            // 0x00183fc8: lui $v1, 0x27
    v0 = 0x898;                                                 // 0x00183fcc: addiu $v0, $zero, 0x898
    a2 = v1 + 0x72c8;                                           // 0x00183fd4: addiu $a2, $v1, 0x72c8
    a0 = 1;                                                     // 0x00183fd8: addiu $a0, $zero, 1
    v0 = a2 + a1;                                               // 0x00183fdc: addu $v0, $a2, $a1
    v1 = g_81010888;  // Global at 0x81010888                   // 0x00183fe0: lw $v1, 0x888($v0)
    if (v1 != a0) goto label_0x183ff8;                          // 0x00183fe4: bnel $v1, $a0, 0x183ff8
    v1 = g_8101088c;  // Global at 0x8101088c                   // 0x00183fe8: lw $v1, 0x88c($v0)
label_0x183fec:
    v0 = 0x8101 << 16;                                          // 0x00183fec: lui $v0, 0x8101
    goto label_0x184034;                                        // 0x00183ff0: b 0x184034
    v0 = v0 | 0x9003;                                           // 0x00183ff4: ori $v0, $v0, 0x9003
label_0x183ff8:
    if (v1 != 0) goto label_0x18400c;                           // 0x00183ff8: bnez $v1, 0x18400c
    /* nop */                                                   // 0x00183ffc: nop 
    v0 = 0x8101 << 16;                                          // 0x00184000: lui $v0, 0x8101
    goto label_0x184034;                                        // 0x00184004: b 0x184034
    v0 = v0 | 0x2f;                                             // 0x00184008: ori $v0, $v0, 0x2f
label_0x18400c:
    func_00186b90();  // 0x186b70                                // 0x0018400c: jal 0x186b70
    if (v0 != 0) goto label_0x184028;                           // 0x00184014: bnez $v0, 0x184028
    /* nop */                                                   // 0x00184018: nop 
label_0x18401c:
    v0 = 0x8101 << 16;                                          // 0x0018401c: lui $v0, 0x8101
    goto label_0x184034;                                        // 0x00184020: b 0x184034
    v0 = v0 | 0x13;                                             // 0x00184024: ori $v0, $v0, 0x13
label_0x184028:
    func_00187e78();  // 0x187d40                                // 0x00184028: jal 0x187d40
label_0x184034:
    return;                                                     // 0x0018403c: jr $ra
    sp = sp + 0x20;                                             // 0x00184040: addiu $sp, $sp, 0x20
}