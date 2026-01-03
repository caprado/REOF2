void func_00184048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00184048: addiu $sp, $sp, -0x20
    func_00182670();  // 182670                                // 0x00184054: jal 0x182670
    if (v0 == 0) goto label_0x184074;                           // 0x0018405c: beqz $v0, 0x184074
    /* nop */                                                   // 0x00184060: nop 
    func_00182278();  // 182278                                // 0x00184064: jal 0x182278
    if (v0 != 0) goto label_0x184080;                           // 0x0018406c: bnez $v0, 0x184080
    /* nop */                                                   // 0x00184070: nop 
label_0x184074:
    v0 = 0x8101 << 16;                                          // 0x00184074: lui $v0, 0x8101
    goto label_0x184098;                                        // 0x00184078: b 0x184098
    v0 = v0 | 0x16;                                             // 0x0018407c: ori $v0, $v0, 0x16
label_0x184080:
    func_00182208();  // 182208                                // 0x00184080: jal 0x182208
    v1 = 0x8101 << 16;                                          // 0x00184088: lui $v1, 0x8101
    v1 = v1 | 0x5b;                                             // 0x0018408c: ori $v1, $v1, 0x5b
    if (v0 != 0) v1 = 0;                                        // 0x00184090: movn $v1, $zero, $v0
label_0x184098:
    return;                                                     // 0x001840a0: jr $ra
    sp = sp + 0x20;                                             // 0x001840a4: addiu $sp, $sp, 0x20
}