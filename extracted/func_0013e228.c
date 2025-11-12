void func_0013e228() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x0013e228: addiu $sp, $sp, -0x20
    a2 = 1;                                                     // 0x0013e22c: addiu $a2, $zero, 1
    local_0 = a0;                                               // 0x0013e230: sw $a0, 0($sp)
    a0 = 0xb;                                                   // 0x0013e234: addiu $a0, $zero, 0xb
    func_00139228();  // 0x139120                                // 0x0013e244: jal 0x139120
    return;                                                     // 0x0013e250: jr $ra
    sp = sp + 0x20;                                             // 0x0013e254: addiu $sp, $sp, 0x20
}