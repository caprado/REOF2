void func_001820a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001820a8: addiu $sp, $sp, -0x20
    func_001814e8();  // 1814e8                                // 0x001820b0: jal 0x1814e8
    /* nop */                                                   // 0x001820b4: nop 
    if (v1 != 0) goto label_0x1820d8;                           // 0x001820bc: bnez $v1, 0x1820d8
    local_0 = v0;                                               // 0x001820c0: sw $v0, 0($sp)
    func_00181d30();  // 181d30                                // 0x001820cc: jal 0x181d30
    v0 = local_0;                                               // 0x001820d4: lw $v0, 0($sp)
label_0x1820d8:
    return;                                                     // 0x001820dc: jr $ra
    sp = sp + 0x20;                                             // 0x001820e0: addiu $sp, $sp, 0x20
}