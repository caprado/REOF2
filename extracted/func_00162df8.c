void func_00162df8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162df8: addiu $sp, $sp, -0x20
    func_00163140();  // 0x163100                                // 0x00162e0c: jal 0x163100
    v1 = 1;                                                     // 0x00162e14: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x162e4c;                          // 0x00162e18: bne $v0, $v1, 0x162e4c
    func_00163100();  // 0x1630e0                                // 0x00162e20: jal 0x1630e0
    /* nop */                                                   // 0x00162e24: nop 
    if (v0 == 0) goto label_0x162e48;                           // 0x00162e28: beqz $v0, 0x162e48
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00162e2c: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((v0) + 0x2c);                              // 0x00162e30: lw $v0, 0x2c($v0)
    /* beqzl $v0, 0x162e4c */                                   // 0x00162e34: beqzl $v0, 0x162e4c
    /* call function at address in v0 */                        // 0x00162e3c: jalr $v0
    /* nop */                                                   // 0x00162e40: nop 
label_0x162e48:
label_0x162e4c:
    return;                                                     // 0x00162e58: jr $ra
    sp = sp + 0x20;                                             // 0x00162e5c: addiu $sp, $sp, 0x20
}