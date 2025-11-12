void func_001b07d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = gp + -0x63b0;                                          // 0x001b07d0: addiu $a0, $gp, -0x63b0
    a1 = 0xff;                                                  // 0x001b07d4: addiu $a1, $zero, 0xff
    return func_00107d30();  // Tail call                        // 0x001b07d8: j 0x107c70
    a2 = 8;                                                     // 0x001b07dc: addiu $a2, $zero, 8
    a0 = *(uint8_t*)((a0) + 3);                                 // 0x001b07e0: lbu $a0, 3($a0)
    v1 = gp + -0x63b0;                                          // 0x001b07e4: addiu $v1, $gp, -0x63b0
    v1 = v1 + a0;                                               // 0x001b07e8: addu $v1, $v1, $a0
    return;                                                     // 0x001b07ec: jr $ra
    *(uint8_t*)(v1) = a1;                                       // 0x001b07f0: sb $a1, 0($v1)
}