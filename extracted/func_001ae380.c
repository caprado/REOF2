void func_001ae380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ae380: addiu $sp, $sp, -0x20
    func_001b7a70();  // 1b7a70                                // 0x001ae390: jal 0x1b7a70
    a0 = 0xe;                                                   // 0x001ae394: addiu $a0, $zero, 0xe
    if (v0 != 0) goto label_0x1ae3c0;                           // 0x001ae398: bnez $v0, 0x1ae3c0
    v1 = 0x2b << 16;                                            // 0x001ae39c: lui $v1, 0x2b
    a0 = s0 << 2;                                               // 0x001ae3a0: sll $a0, $s0, 2
    v1 = v1 + -0x5788;                                          // 0x001ae3a4: addiu $v1, $v1, -0x5788
    v1 = v1 + a0;                                               // 0x001ae3a8: addu $v1, $v1, $a0
    v1 = g_002aa878;  // Global at 0x002aa878                   // 0x001ae3ac: lw $v1, 0($v1)
    if (v1 == 0) goto label_0x1ae3c0;                           // 0x001ae3b0: beqz $v1, 0x1ae3c0
    func_001ae120();  // 1ae120                                // 0x001ae3b8: jal 0x1ae120
    /* nop */                                                   // 0x001ae3bc: nop 
label_0x1ae3c0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ae3c4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ae3c8: jr $ra
    sp = sp + 0x20;                                             // 0x001ae3cc: addiu $sp, $sp, 0x20
}