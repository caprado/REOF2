void func_00164228() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00164228: addiu $sp, $sp, -0x10
    return func_00130ab8();  // Tail call                       // 0x00164234: j 0x130ab8
    sp = sp + 0x10;                                             // 0x00164238: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016423c: nop 
    sp = sp + -0x10;                                            // 0x00164240: addiu $sp, $sp, -0x10
    func_00130b08();  // 0x130b00                                // 0x0016424c: jal 0x130b00
    *(uint32_t*)(s0) = v0;                                      // 0x00164254: sw $v0, 0($s0)
    return;                                                     // 0x00164260: jr $ra
    sp = sp + 0x10;                                             // 0x00164264: addiu $sp, $sp, 0x10
}