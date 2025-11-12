void func_001dbd30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001dbd30: addiu $sp, $sp, -0x10
    a0 = 0x4000;                                                // 0x001dbd34: addiu $a0, $zero, 0x4000
    func_001d3c20();  // 0x1d3ae0                                // 0x001dbd3c: jal 0x1d3ae0
    a1 = 0x18;                                                  // 0x001dbd40: addiu $a1, $zero, 0x18
    a0 = 0x4019;                                                // 0x001dbd44: addiu $a0, $zero, 0x4019
    func_001d3c20();  // 0x1d3ae0                                // 0x001dbd48: jal 0x1d3ae0
    a1 = 4;                                                     // 0x001dbd4c: addiu $a1, $zero, 4
    a0 = 0x4018;                                                // 0x001dbd50: addiu $a0, $zero, 0x4018
    func_001d3c20();  // 0x1d3ae0                                // 0x001dbd54: jal 0x1d3ae0
    a1 = 1;                                                     // 0x001dbd58: addiu $a1, $zero, 1
    a0 = 0x4100;                                                // 0x001dbd5c: addiu $a0, $zero, 0x4100
    func_001d3c20();  // 0x1d3ae0                                // 0x001dbd60: jal 0x1d3ae0
    a1 = 1;                                                     // 0x001dbd64: addiu $a1, $zero, 1
    func_0018db40();  // 0x18db10                                // 0x001dbd68: jal 0x18db10
    /* nop */                                                   // 0x001dbd6c: nop 
    return;                                                     // 0x001dbd74: jr $ra
    sp = sp + 0x10;                                             // 0x001dbd78: addiu $sp, $sp, 0x10
}