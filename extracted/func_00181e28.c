void func_00181e28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00181e28: addiu $sp, $sp, -0x20
    func_00180f18();  // 0x180e58                                // 0x00181e30: jal 0x180e58
    /* nop */                                                   // 0x00181e34: nop 
    if (v1 != 0) goto label_0x181e58;                           // 0x00181e3c: bnez $v1, 0x181e58
    local_0 = v0;                                               // 0x00181e40: sw $v0, 0($sp)
    func_00181dd8();  // 0x181d30                                // 0x00181e4c: jal 0x181d30
    v0 = local_0;                                               // 0x00181e54: lw $v0, 0($sp)
label_0x181e58:
    return;                                                     // 0x00181e5c: jr $ra
    sp = sp + 0x20;                                             // 0x00181e60: addiu $sp, $sp, 0x20
}