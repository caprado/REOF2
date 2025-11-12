void func_00166b28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00166b28: addiu $sp, $sp, -0x40
    func_00169ba0();  // 0x169b88                                // 0x00166b50: jal 0x169b88
    *(uint32_t*)((s2) + 4) = s1;                                // 0x00166b58: sw $s1, 4($s2)
    a0 = s0 + 0x18;                                             // 0x00166b5c: addiu $a0, $s0, 0x18
    func_00166bd8();  // 0x166bc8                                // 0x00166b8c: jal 0x166bc8
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00166b94: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x00166b98: sw $zero, 0x24($s0)
    func_00173dd8();  // 0x173dc0                                // 0x00166b9c: jal 0x173dc0
    a0 = s0 + 0x28;                                             // 0x00166ba0: addiu $a0, $s0, 0x28
    func_00169bc8();  // 0x169ba0                                // 0x00166ba4: jal 0x169ba0
    return;                                                     // 0x00166bc0: jr $ra
    sp = sp + 0x40;                                             // 0x00166bc4: addiu $sp, $sp, 0x40
}