void func_001b4380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b4380: addiu $sp, $sp, -0x20
    a0 = 1;                                                     // 0x001b43b0: addiu $a0, $zero, 1
    func_001b42c0();  // 0x1b4180                                // 0x001b43b8: jal 0x1b4180
    if (v0 == 0) goto label_0x1b43cc;                           // 0x001b43c0: beqz $v0, 0x1b43cc
    /* nop */                                                   // 0x001b43c4: nop 
    *(uint8_t*)(v0) = s0;                                       // 0x001b43c8: sb $s0, 0($v0)
label_0x1b43cc:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b43d0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b43d4: jr $ra
    sp = sp + 0x20;                                             // 0x001b43d8: addiu $sp, $sp, 0x20
}