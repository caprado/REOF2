void func_001154a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    a1 = a1 << 0x18;                                            // 0x001154a0: sll $a1, $a1, 0x18
    sp = sp + -0x20;                                            // 0x001154a4: addiu $sp, $sp, -0x20
    a1 = a1 >> 0x18;                                            // 0x001154a8: sra $a1, $a1, 0x18
    local_0 = a0;                                               // 0x001154ac: sw $a0, 0($sp)
    local_4 = a1;                                               // 0x001154b0: sw $a1, 4($sp)
    a0 = 3;                                                     // 0x001154b4: addiu $a0, $zero, 3
    GetMemorySize();  // 0x114710                               // 0x001154bc: jal 0x114710
    return;                                                     // 0x001154c8: jr $ra
    sp = sp + 0x20;                                             // 0x001154cc: addiu $sp, $sp, 0x20
}