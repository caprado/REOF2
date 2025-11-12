void func_001a88b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a88b0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((gp) + -0x63f0);                           // 0x001a88b8: lw $v0, -0x63f0($gp)
    if (v0 != 0) goto label_0x1a88d4;                           // 0x001a88bc: bnez $v0, 0x1a88d4
    /* nop */                                                   // 0x001a88c0: nop 
    func_001a85c0();  // 0x1a8580                                // 0x001a88c4: jal 0x1a8580
    /* nop */                                                   // 0x001a88c8: nop 
    goto label_0x1a88e0;                                        // 0x001a88cc: b 0x1a88e0
label_0x1a88d4:
    func_001a8600();  // 0x1a85c0                                // 0x001a88d4: jal 0x1a85c0
    /* nop */                                                   // 0x001a88d8: nop 
label_0x1a88e0:
    return;                                                     // 0x001a88e0: jr $ra
    sp = sp + 0x10;                                             // 0x001a88e4: addiu $sp, $sp, 0x10
}