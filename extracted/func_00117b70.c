void func_00117b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00117b70: addiu $sp, $sp, -0x30
    func_0011d320();  // 11d320                                // 0x00117b80: jal 0x11d320
    s1 = *(int32_t*)((s0) + 0xc);                               // 0x00117b88: lw $s1, 0xc($s0)
    /* bnezl $s1, 0x117b9c */                                   // 0x00117b8c: bnezl $s1, 0x117b9c
    v1 = *(int32_t*)((s1) + 0x3c);                              // 0x00117b90: lw $v1, 0x3c($s1)
    goto label_0x117ba8;                                        // 0x00117b94: b 0x117ba8
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00117b98: sw $zero, 4($s0)
    v0 = 1;                                                     // 0x00117b9c: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00117ba0: sw $v0, 4($s0)
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x00117ba4: sw $v1, 0xc($s0)
label_0x117ba8:
    func_0011d378();  // 11d378                                // 0x00117ba8: jal 0x11d378
    /* nop */                                                   // 0x00117bac: nop 
    return;                                                     // 0x00117bc0: jr $ra
    sp = sp + 0x30;                                             // 0x00117bc4: addiu $sp, $sp, 0x30
}