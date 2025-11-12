void func_00140b48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00140b48: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x00140b4c: lui $v0, 0x21
    s0 = v0 + 0x74;                                             // 0x00140b54: addiu $s0, $v0, 0x74
    v1 = 0x21 << 16;                                            // 0x00140b5c: lui $v1, 0x21
    a0 = g_00210074;  // Global at 0x00210074                   // 0x00140b60: lw $a0, 0($s0)
    v1 = v1 + 0x70;                                             // 0x00140b64: addiu $v1, $v1, 0x70
    v0 = g_00210070;  // Global at 0x00210070                   // 0x00140b68: lw $v0, 0($v1)
    if (a0 != 0) goto label_0x140b84;                           // 0x00140b6c: bnez $a0, 0x140b84
    v0 = a0 + 1;                                                // 0x00140b70: addiu $v0, $a0, 1
    func_001390a8();  // 0x138fb8                                // 0x00140b74: jal 0x138fb8
    /* nop */                                                   // 0x00140b78: nop 
    a0 = g_00210074;  // Global at 0x00210074                   // 0x00140b7c: lw $a0, 0($s0)
    v0 = a0 + 1;                                                // 0x00140b80: addiu $v0, $a0, 1
label_0x140b84:
    g_00210074 = v0;  // Global at 0x00210074                   // 0x00140b88: sw $v0, 0($s0)
    return;                                                     // 0x00140b90: jr $ra
    sp = sp + 0x10;                                             // 0x00140b94: addiu $sp, $sp, 0x10
}