void func_001d9130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d9130: addiu $sp, $sp, -0x10
    a0 = 1;                                                     // 0x001d9134: addiu $a0, $zero, 1
    func_001d3c20();  // 0x1d3ae0                                // 0x001d913c: jal 0x1d3ae0
    a1 = 4;                                                     // 0x001d9140: addiu $a1, $zero, 4
    a0 = 0xa;                                                   // 0x001d9144: addiu $a0, $zero, 0xa
    func_001d3c20();  // 0x1d3ae0                                // 0x001d9148: jal 0x1d3ae0
    a1 = 1;                                                     // 0x001d914c: addiu $a1, $zero, 1
    func_0018db40();  // 0x18db10                                // 0x001d9150: jal 0x18db10
    /* nop */                                                   // 0x001d9154: nop 
    return;                                                     // 0x001d915c: jr $ra
    sp = sp + 0x10;                                             // 0x001d9160: addiu $sp, $sp, 0x10
}