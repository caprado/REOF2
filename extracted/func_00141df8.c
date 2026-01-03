void func_00141df8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00141df8: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x00141dfc: lui $v0, 0x21
    v0 = v0 + 0xbec;                                            // 0x00141e04: addiu $v0, $v0, 0xbec
    v1 = g_00210bec;  // Global at 0x00210bec                   // 0x00141e08: lw $v1, 0($v0)
    v1 = v1 + -1;                                               // 0x00141e0c: addiu $v1, $v1, -1
    g_00210bec = v1;  // Global at 0x00210bec                   // 0x00141e10: sw $v1, 0($v0)
    a0 = g_00210bec;  // Global at 0x00210bec                   // 0x00141e14: lw $a0, 0($v0)
    if (a0 != 0) goto label_0x141e48;                           // 0x00141e18: bnez $a0, 0x141e48
    func_00141d38();  // 141d38                                // 0x00141e20: jal 0x141d38
    /* nop */                                                   // 0x00141e24: nop 
    a0 = 0x25 << 16;                                            // 0x00141e28: lui $a0, 0x25
    a0 = a0 + 0x6170;                                           // 0x00141e30: addiu $a0, $a0, 0x6170
    a2 = 8;                                                     // 0x00141e38: addiu $a2, $zero, 8
    return func_00107d30();  // Tail call                        // 0x00141e3c: j 0x107c70
    sp = sp + 0x10;                                             // 0x00141e40: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00141e44: nop 
label_0x141e48:
    return;                                                     // 0x00141e48: jr $ra
    sp = sp + 0x10;                                             // 0x00141e4c: addiu $sp, $sp, 0x10
}