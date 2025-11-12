void func_001149a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001149a0: addiu $sp, $sp, -0x10
    func_001050b8();  // 0x104ef8                                // 0x001149a8: jal 0x104ef8
    /* nop */                                                   // 0x001149ac: nop 
    v1 = 5;                                                     // 0x001149b0: addiu $v1, $zero, 5
    *(uint32_t*)(v0) = v1;                                      // 0x001149b8: sw $v1, 0($v0)
    v0 = -1;                                                    // 0x001149bc: addiu $v0, $zero, -1
    return;                                                     // 0x001149c0: jr $ra
    sp = sp + 0x10;                                             // 0x001149c4: addiu $sp, $sp, 0x10
}