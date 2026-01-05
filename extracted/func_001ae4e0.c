void func_001ae4e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ae4e0: addiu $sp, $sp, -0x20
    func_001b7a70();  // 1b7a70                                // 0x001ae4f0: jal 0x1b7a70
    a0 = 0xe;                                                   // 0x001ae4f4: addiu $a0, $zero, 0xe
    if (v0 != 0) goto label_0x1ae528;                           // 0x001ae4f8: bnez $v0, 0x1ae528
    v1 = 0x2b << 16;                                            // 0x001ae4fc: lui $v1, 0x2b
    a0 = s0 << 2;                                               // 0x001ae500: sll $a0, $s0, 2
    v1 = v1 + -0x5788;                                          // 0x001ae504: addiu $v1, $v1, -0x5788
    s0 = v1 + a0;                                               // 0x001ae508: addu $s0, $v1, $a0
    a0 = *(int32_t*)(s0);                                       // 0x001ae50c: lw $a0, 0($s0)
    if (a0 == 0) goto label_0x1ae528;                           // 0x001ae510: beqz $a0, 0x1ae528
    /* nop */                                                   // 0x001ae514: nop 
    func_0012a5a8();  // 12a5a8                                // 0x001ae518: jal 0x12a5a8
    /* nop */                                                   // 0x001ae51c: nop 
    func_00131af8();  // 131af8                                // 0x001ae520: jal 0x131af8
    a0 = *(int32_t*)(s0);                                       // 0x001ae524: lw $a0, 0($s0)
label_0x1ae528:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae52c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae530: jr $ra
    sp = sp + 0x20;                                             // 0x001ae534: addiu $sp, $sp, 0x20
}