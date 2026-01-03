void func_00163cc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163cc8: addiu $sp, $sp, -0x10
    func_0015e338();  // 15e338                                // 0x00163cd0: jal 0x15e338
    /* nop */                                                   // 0x00163cd4: nop 
    v1 = *(int32_t*)((v0) + 0x48);                              // 0x00163cd8: lw $v1, 0x48($v0)
    if (v1 == 0) goto label_0x163cec;                           // 0x00163cdc: beqz $v1, 0x163cec
    a0 = *(int32_t*)((v0) + 0x4c);                              // 0x00163ce0: lw $a0, 0x4c($v0)
    /* call function at address in v1 */                        // 0x00163ce4: jalr $v1
    /* nop */                                                   // 0x00163ce8: nop 
label_0x163cec:
    return;                                                     // 0x00163cf0: jr $ra
    sp = sp + 0x10;                                             // 0x00163cf4: addiu $sp, $sp, 0x10
}