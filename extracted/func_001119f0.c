void func_001119f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_24;
    
    sp = sp + -0x80;                                            // 0x001119f0: addiu $sp, $sp, -0x80
    a0 = sp + 0x60;                                             // 0x001119f8: addiu $a0, $sp, 0x60
    func_00111738();  // 0x111678                                // 0x00111a08: jal 0x111678
    s0 = sp + 0x20;                                             // 0x00111a10: addiu $s0, $sp, 0x20
    a0 = sp + 0x68;                                             // 0x00111a14: addiu $a0, $sp, 0x68
    func_00111738();  // 0x111678                                // 0x00111a18: jal 0x111678
    v0 = local_24;                                              // 0x00111a24: lw $v0, 0x24($sp)
    a2 = sp + 0x40;                                             // 0x00111a2c: addiu $a2, $sp, 0x40
    v0 = v0 ^ 1;                                                // 0x00111a30: xori $v0, $v0, 1
    func_00111998();  // 0x111738                                // 0x00111a34: jal 0x111738
    local_24 = v0;                                              // 0x00111a38: sw $v0, 0x24($sp)
    func_00111678();  // 0x1115a0                                // 0x00111a3c: jal 0x1115a0
    return;                                                     // 0x00111a4c: jr $ra
    sp = sp + 0x80;                                             // 0x00111a50: addiu $sp, $sp, 0x80
}