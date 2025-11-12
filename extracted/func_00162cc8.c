void func_00162cc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162cc8: addiu $sp, $sp, -0x20
    func_00163140();  // 0x163100                                // 0x00162ce4: jal 0x163100
    v1 = 1;                                                     // 0x00162cec: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x162d20;                          // 0x00162cf0: bnel $v0, $v1, 0x162d20
    func_00163100();  // 0x1630e0                                // 0x00162cf8: jal 0x1630e0
    /* nop */                                                   // 0x00162cfc: nop 
    if (v0 == 0) goto label_0x162d1c;                           // 0x00162d00: beqz $v0, 0x162d1c
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00162d04: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((v0) + 0x20);                              // 0x00162d08: lw $v0, 0x20($v0)
    if (v0 == 0) goto label_0x162d1c;                           // 0x00162d0c: beqz $v0, 0x162d1c
    /* call function at address in v0 */                        // 0x00162d14: jalr $v0
label_0x162d1c:
label_0x162d20:
    return;                                                     // 0x00162d2c: jr $ra
    sp = sp + 0x20;                                             // 0x00162d30: addiu $sp, $sp, 0x20
}