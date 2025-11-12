void func_00162d38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162d38: addiu $sp, $sp, -0x20
    func_00163140();  // 0x163100                                // 0x00162d4c: jal 0x163100
    v1 = 1;                                                     // 0x00162d54: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x162d88;                          // 0x00162d58: bnel $v0, $v1, 0x162d88
    func_00163100();  // 0x1630e0                                // 0x00162d60: jal 0x1630e0
    /* nop */                                                   // 0x00162d64: nop 
    if (v0 == 0) goto label_0x162d84;                           // 0x00162d68: beqz $v0, 0x162d84
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00162d6c: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((v0) + 0x24);                              // 0x00162d70: lw $v0, 0x24($v0)
    /* beqzl $v0, 0x162d88 */                                   // 0x00162d74: beqzl $v0, 0x162d88
    /* call function at address in v0 */                        // 0x00162d7c: jalr $v0
label_0x162d84:
label_0x162d88:
    return;                                                     // 0x00162d90: jr $ra
    sp = sp + 0x20;                                             // 0x00162d94: addiu $sp, $sp, 0x20
}