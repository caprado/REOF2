void func_001154f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x001154f8: addiu $sp, $sp, -0x30
    a0 = a0 & 0xff;                                             // 0x001154fc: andi $a0, $a0, 0xff
    local_4 = a1;                                               // 0x00115500: sw $a1, 4($sp)
    local_0 = a0;                                               // 0x00115504: sw $a0, 0($sp)
    a0 = 0x20;                                                  // 0x00115510: addiu $a0, $zero, 0x20
    GetMemorySize();  // 0x114710                               // 0x00115514: jal 0x114710
    local_8 = a2;                                               // 0x00115518: sw $a2, 8($sp)
    return;                                                     // 0x00115520: jr $ra
    sp = sp + 0x30;                                             // 0x00115524: addiu $sp, $sp, 0x30
}