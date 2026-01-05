void func_0013fe68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013fe68: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x13fe8c;                           // 0x0013fe74: beqz $s0, 0x13fe8c
    func_00107c70();  // 107c70                                // 0x0013fe80: jal 0x107c70
    a2 = 0x30;                                                  // 0x0013fe84: addiu $a2, $zero, 0x30
    *(uint8_t*)((s0) + 4) = 0;                                  // 0x0013fe88: sb $zero, 4($s0)
label_0x13fe8c:
    return;                                                     // 0x0013fe94: jr $ra
    sp = sp + 0x10;                                             // 0x0013fe98: addiu $sp, $sp, 0x10
}