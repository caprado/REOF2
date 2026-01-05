void func_00138868() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00138868: addiu $sp, $sp, -0x10
    func_0013ef18();  // 13ef18                                // 0x00138874: jal 0x13ef18
    *(uint8_t*)(s0) = 0;                                        // 0x00138880: sb $zero, 0($s0)
    return func_0013ef80();  // Tail call                        // 0x00138888: j 0x13ef30
    sp = sp + 0x10;                                             // 0x0013888c: addiu $sp, $sp, 0x10
    v0 = 1;                                                     // 0x00138890: addiu $v0, $zero, 1
    *(uint32_t*)((a0) + 0x3c) = 0;                              // 0x00138894: sw $zero, 0x3c($a0)
    return;                                                     // 0x00138898: jr $ra
    *(uint8_t*)((a0) + 1) = v0;                                 // 0x0013889c: sb $v0, 1($a0)
}