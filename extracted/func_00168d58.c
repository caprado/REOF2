void func_00168d58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00168d58: addiu $sp, $sp, -0x20
    func_00178e78();  // 0x178db0                                // 0x00168d64: jal 0x178db0
    /* nop */                                                   // 0x00168d68: nop 
    if (s0 == 0) goto label_0x168d9c;                           // 0x00168d74: beqz $s0, 0x168d9c
    func_001790b8();  // 0x178fc8                                // 0x00168d7c: jal 0x178fc8
    /* nop */                                                   // 0x00168d80: nop 
    v1 = local_0;                                               // 0x00168d88: lw $v1, 0($sp)
    if (v0 == 0) v1 = 0;                                        // 0x00168d8c: movz $v1, $zero, $v0
    func_00178ec8();  // 0x178e78                                // 0x00168d90: jal 0x178e78
    local_0 = v1;                                               // 0x00168d94: sw $v1, 0($sp)
    v0 = local_0;                                               // 0x00168d98: lw $v0, 0($sp)
label_0x168d9c:
    return;                                                     // 0x00168da4: jr $ra
    sp = sp + 0x20;                                             // 0x00168da8: addiu $sp, $sp, 0x20
}