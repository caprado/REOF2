void func_00168fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00168fa0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00168fb0: lw $v1, 0x2ab0($s0)
    if (v1 == 0) goto label_0x168fdc;                           // 0x00168fb4: beqz $v1, 0x168fdc
    func_0016b8b8();  // 0x16b8a8                                // 0x00168fbc: jal 0x16b8a8
    /* nop */                                                   // 0x00168fc0: nop 
    if (v0 <= 0) goto label_0x168fd8;                           // 0x00168fc4: blezl $v0, 0x168fd8
    v0 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00168fc8: lw $v0, 0x2ab0($s0)
    goto label_0x168fdc;                                        // 0x00168fcc: b 0x168fdc
    /* nop */                                                   // 0x00168fd4: nop 
label_0x168fd8:
    v0 = v0 + 0xc;                                              // 0x00168fd8: addiu $v0, $v0, 0xc
label_0x168fdc:
    return;                                                     // 0x00168fe4: jr $ra
    sp = sp + 0x10;                                             // 0x00168fe8: addiu $sp, $sp, 0x10
}