void func_0015f690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015f690: addiu $sp, $sp, -0x10
    func_001030a8();  // 0x103080                                // 0x0015f69c: jal 0x103080
    /* nop */                                                   // 0x0015f6a0: nop 
    /* nop */                                                   // 0x0015f6ac: nop 
label_0x15f6b0:
    a1 = 1;                                                     // 0x0015f6b0: addiu $a1, $zero, 1
    func_00103688();  // 0x103650                                // 0x0015f6b4: jal 0x103650
    a2 = 0x1e;                                                  // 0x0015f6b8: addiu $a2, $zero, 0x1e
    if (v0 != 0) goto label_0x15f6b0;                           // 0x0015f6bc: bnez $v0, 0x15f6b0
    return;                                                     // 0x0015f6cc: jr $ra
    sp = sp + 0x10;                                             // 0x0015f6d0: addiu $sp, $sp, 0x10
}