void func_001a90b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a90b0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a90b8: lw $a0, -0x63e4($gp)
    if (a0 == 0) goto label_0x1a90cc;                           // 0x001a90bc: beqz $a0, 0x1a90cc
    /* nop */                                                   // 0x001a90c0: nop 
    func_001294a0();  // 1294a0                                // 0x001a90c4: jal 0x1294a0
    /* nop */                                                   // 0x001a90c8: nop 
label_0x1a90cc:
    return;                                                     // 0x001a90d0: jr $ra
    sp = sp + 0x10;                                             // 0x001a90d4: addiu $sp, $sp, 0x10
}