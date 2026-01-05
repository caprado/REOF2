void func_00162c08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00162c08: addiu $sp, $sp, -0x10
    func_00163100();  // 163100                                // 0x00162c14: jal 0x163100
    v1 = 1;                                                     // 0x00162c1c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x162c50;                          // 0x00162c20: bnel $v0, $v1, 0x162c50
    func_001630e0();  // 1630e0                                // 0x00162c28: jal 0x1630e0
    /* nop */                                                   // 0x00162c2c: nop 
    if (v0 == 0) goto label_0x162c4c;                           // 0x00162c30: beqz $v0, 0x162c4c
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00162c34: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((v0) + 0x18);                              // 0x00162c38: lw $v0, 0x18($v0)
    /* beqzl $v0, 0x162c50 */                                   // 0x00162c3c: beqzl $v0, 0x162c50
    /* call function at address in v0 */                        // 0x00162c44: jalr $v0
    /* nop */                                                   // 0x00162c48: nop 
label_0x162c4c:
label_0x162c50:
    return;                                                     // 0x00162c54: jr $ra
    sp = sp + 0x10;                                             // 0x00162c58: addiu $sp, $sp, 0x10
}