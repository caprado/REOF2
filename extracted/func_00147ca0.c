void func_00147ca0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00147ca0: addiu $sp, $sp, -0x30
    v0 = 1;                                                     // 0x00147ca4: addiu $v0, $zero, 1
    func_00147c28();  // 147c28                                // 0x00147cb0: jal 0x147c28
    local_0 = v0;                                               // 0x00147cb4: sw $v0, 0($sp)
    v0 = 1;                                                     // 0x00147cbc: addiu $v0, $zero, 1
    return;                                                     // 0x00147cc0: jr $ra
    sp = sp + 0x30;                                             // 0x00147cc4: addiu $sp, $sp, 0x30
}