void func_001928e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001928e0: addiu $sp, $sp, -0x20
    func_00192b20();  // 0x192ab0                                // 0x001928ec: jal 0x192ab0
    if (v0 == 0) goto label_0x192904;                           // 0x001928f4: beqz $v0, 0x192904
    func_001929a0();  // 0x192920                                // 0x001928fc: jal 0x192920
label_0x192904:
    v0 = 1;                                                     // 0x00192908: addiu $v0, $zero, 1
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019290c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00192910: jr $ra
    sp = sp + 0x20;                                             // 0x00192914: addiu $sp, $sp, 0x20
}