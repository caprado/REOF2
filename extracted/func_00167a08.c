void func_00167a08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_c;
    
    sp = sp + -0x30;                                            // 0x00167a08: addiu $sp, $sp, -0x30
    func_00166ca8();  // 0x166c90                                // 0x00167a10: jal 0x166c90
    v1 = local_4;                                               // 0x00167a18: lw $v1, 4($sp)
    v0 = local_c;                                               // 0x00167a1c: lw $v0, 0xc($sp)
    v0 = v1 + v0;                                               // 0x00167a24: addu $v0, $v1, $v0
    return;                                                     // 0x00167a28: jr $ra
    sp = sp + 0x30;                                             // 0x00167a2c: addiu $sp, $sp, 0x30
}