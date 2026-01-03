void func_00114b08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00114b08: addiu $sp, $sp, -0x10
    func_00104ef8();  // 104ef8                                // 0x00114b10: jal 0x104ef8
    /* nop */                                                   // 0x00114b14: nop 
    v1 = 5;                                                     // 0x00114b18: addiu $v1, $zero, 5
    *(uint32_t*)(v0) = v1;                                      // 0x00114b20: sw $v1, 0($v0)
    v0 = -1;                                                    // 0x00114b24: addiu $v0, $zero, -1
    return;                                                     // 0x00114b28: jr $ra
    sp = sp + 0x10;                                             // 0x00114b2c: addiu $sp, $sp, 0x10
}