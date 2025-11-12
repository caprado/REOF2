void func_001b1fd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b1fd0: addiu $sp, $sp, -0x20
    v1 = *(int8_t*)(a0);                                        // 0x001b1fdc: lb $v1, 0($a0)
    if (v1 == 0) goto label_0x1b1ff0;                           // 0x001b1fe0: beqz $v1, 0x1b1ff0
    func_001b1620();  // 0x1b1550                                // 0x001b1fe8: jal 0x1b1550
    a0 = s0 + 4;                                                // 0x001b1fec: addiu $a0, $s0, 4
label_0x1b1ff0:
    *(uint8_t*)(s0) = 0;                                        // 0x001b1ff0: sb $zero, 0($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1ff8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1ffc: jr $ra
    sp = sp + 0x20;                                             // 0x001b2000: addiu $sp, $sp, 0x20
}