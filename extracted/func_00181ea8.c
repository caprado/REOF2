void func_00181ea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00181ea8: addiu $sp, $sp, -0x20
    func_00180da8();  // 180da8                                // 0x00181eb0: jal 0x180da8
    /* nop */                                                   // 0x00181eb4: nop 
    if (v1 != 0) goto label_0x181ed8;                           // 0x00181ebc: bnez $v1, 0x181ed8
    local_0 = v0;                                               // 0x00181ec0: sw $v0, 0($sp)
    func_00181d30();  // 181d30                                // 0x00181ecc: jal 0x181d30
    v0 = local_0;                                               // 0x00181ed4: lw $v0, 0($sp)
label_0x181ed8:
    return;                                                     // 0x00181edc: jr $ra
    sp = sp + 0x20;                                             // 0x00181ee0: addiu $sp, $sp, 0x20
}