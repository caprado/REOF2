void func_0013ad70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ad70: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a1) + 0x24);                              // 0x0013ad7c: lw $a0, 0x24($a1)
    v0 = *(int32_t*)((a1) + 0x1c);                              // 0x0013ad80: lw $v0, 0x1c($a1)
    a3 = a0 << 0xb;                                             // 0x0013ad88: sll $a3, $a0, 0xb
    v1 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x0013ad98: sltu $v1, $v1, $v0
    if (v1 == 0) goto label_0x13adc8;                           // 0x0013ada4: beqz $v1, 0x13adc8
    a0 = *(int32_t*)((a1) + 0x20);                              // 0x0013adac: lw $a0, 0x20($a1)
    a0 = a0 + a3;                                               // 0x0013adb8: addu $a0, $a0, $a3
    a0 = a0 - v0;                                               // 0x0013adbc: subu $a0, $a0, $v0
    return func_00107d30();  // Tail call                        // 0x0013adc0: j 0x107c70
    sp = sp + 0x10;                                             // 0x0013adc4: addiu $sp, $sp, 0x10
label_0x13adc8:
    return;                                                     // 0x0013adc8: jr $ra
    sp = sp + 0x10;                                             // 0x0013adcc: addiu $sp, $sp, 0x10
}