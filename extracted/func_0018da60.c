void func_0018da60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x29 << 16;                                            // 0x0018da68: lui $a0, 0x29
    return func_00189940();  // Tail call                       // 0x0018da6c: j 0x189940
    a0 = a0 + 0x3e0;                                            // 0x0018da70: addiu $a0, $a0, 0x3e0
    /* nop */                                                   // 0x0018da74: nop 
    /* nop */                                                   // 0x0018da78: nop 
    /* nop */                                                   // 0x0018da7c: nop 
    a0 = 0x29 << 16;                                            // 0x0018da84: lui $a0, 0x29
    return func_00189960();  // Tail call                       // 0x0018da88: j 0x189960
    a0 = a0 + 0x3e0;                                            // 0x0018da8c: addiu $a0, $a0, 0x3e0
    a2 = 1;                                                     // 0x0018da94: addiu $a2, $zero, 1
    a0 = 0x29 << 16;                                            // 0x0018da98: lui $a0, 0x29
    return func_001899f8();  // Tail call                        // 0x0018da9c: j 0x1898e0
    a0 = a0 + 0x3e0;                                            // 0x0018daa0: addiu $a0, $a0, 0x3e0
    /* nop */                                                   // 0x0018daa4: nop 
    /* nop */                                                   // 0x0018daa8: nop 
    /* nop */                                                   // 0x0018daac: nop 
    sp = sp + -0x20;                                            // 0x0018dab0: addiu $sp, $sp, -0x20
    func_001a09f0();  // 0x1a09e0                                // 0x0018dabc: jal 0x1a09e0
    if (v0 != 0) goto label_0x18dadc;                           // 0x0018dac4: bnez $v0, 0x18dadc
    /* nop */                                                   // 0x0018dac8: nop 
    func_0018db40();  // 0x18db10                                // 0x0018dacc: jal 0x18db10
    /* nop */                                                   // 0x0018dad0: nop 
    func_001a0a00();  // 0x1a09f0                                // 0x0018dad4: jal 0x1a09f0
label_0x18dadc:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018dae0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018dae4: jr $ra
    sp = sp + 0x20;                                             // 0x0018dae8: addiu $sp, $sp, 0x20
}