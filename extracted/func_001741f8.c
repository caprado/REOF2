void func_001741f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001741f8: addiu $sp, $sp, -0x20
    if (a1 <= 0) goto label_0x17422c;                           // 0x00174204: blez $a1, 0x17422c
label_0x174218:
    s1 = s1 + 0xdc4;                                            // 0x00174218: addiu $s1, $s1, 0xdc4
    func_001742b0();  // 0x174240                                // 0x0017421c: jal 0x174240
    s0 = s0 + -1;                                               // 0x00174220: addiu $s0, $s0, -1
    if (s0 != 0) goto label_0x174218;                           // 0x00174224: bnez $s0, 0x174218
label_0x17422c:
    return;                                                     // 0x00174238: jr $ra
    sp = sp + 0x20;                                             // 0x0017423c: addiu $sp, $sp, 0x20
}