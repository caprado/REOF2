void func_00115550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x20;                                            // 0x00115550: addiu $sp, $sp, -0x20
    a2 = a2 & 0xffff;                                           // 0x00115558: andi $a2, $a2, 0xffff
    local_0 = a0;                                               // 0x0011555c: sw $a0, 0($sp)
    local_4 = v0;                                               // 0x00115568: sw $v0, 4($sp)
    a0 = -5;                                                    // 0x0011556c: addiu $a0, $zero, -5
    GetMemorySize();  // 0x114710                               // 0x00115570: jal 0x114710
    local_8 = a2;                                               // 0x00115574: sw $a2, 8($sp)
    return;                                                     // 0x0011557c: jr $ra
    sp = sp + 0x20;                                             // 0x00115580: addiu $sp, $sp, 0x20
}