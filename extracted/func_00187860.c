void func_00187860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x24;                                                  // 0x00187860: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x00187864: lui $v1, 0x28
    v1 = v1 + -0x2fb8;                                          // 0x0018786c: addiu $v1, $v1, -0x2fb8
    a0 = a0 + v1;                                               // 0x00187870: addu $a0, $a0, $v1
    return;                                                     // 0x00187894: jr $ra
    v0 = 1;                                                     // 0x00187898: addiu $v0, $zero, 1
}