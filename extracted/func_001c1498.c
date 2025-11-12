void func_001c1498() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(uint8_t*)((v1) + 3);                                 // 0x001c149c: lbu $v0, 3($v1)
    if (v0 != 0) goto label_0x1c14b4;                           // 0x001c14a0: bnez $v0, 0x1c14b4
    v0 = v0 + -1;                                               // 0x001c14a4: addiu $v0, $v0, -1
    v0 = 0x17;                                                  // 0x001c14a8: addiu $v0, $zero, 0x17
    return func_001c13c0();  // Tail call                       // 0x001c14ac: j 0x1c13c0
    *(uint8_t*)((v1) + 3) = v0;                                 // 0x001c14b0: sb $v0, 3($v1)
label_0x1c14b4:
    return;                                                     // 0x001c14b4: jr $ra
    *(uint8_t*)((v1) + 3) = v0;                                 // 0x001c14b8: sb $v0, 3($v1)
}