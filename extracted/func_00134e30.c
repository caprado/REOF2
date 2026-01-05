void func_00134e30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00134e30: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x00134e34: lui $v0, 0x20
    s0 = v0 + 0x1db8;                                           // 0x00134e40: addiu $s0, $v0, 0x1db8
    s1 = 0xf;                                                   // 0x00134e48: addiu $s1, $zero, 0xf
    s2 = 1;                                                     // 0x00134e50: addiu $s2, $zero, 1
    /* nop */                                                   // 0x00134e54: nop 
label_0x134e58:
    v0 = g_00201db8;  // Global at 0x00201db8                   // 0x00134e58: lw $v0, 0($s0)
    if (v0 != s2) goto label_0x134e70;                          // 0x00134e5c: bnel $v0, $s2, 0x134e70
    s1 = s1 + -1;                                               // 0x00134e60: addiu $s1, $s1, -1
    func_00134d38();  // 134d38                                // 0x00134e64: jal 0x134d38
    s1 = s1 + -1;                                               // 0x00134e6c: addiu $s1, $s1, -1
label_0x134e70:
    if (s1 >= 0) goto label_0x134e58;                           // 0x00134e70: bgez $s1, 0x134e58
    s0 = s0 + 0x3c;                                             // 0x00134e74: addiu $s0, $s0, 0x3c
    return;                                                     // 0x00134e88: jr $ra
    sp = sp + 0x20;                                             // 0x00134e8c: addiu $sp, $sp, 0x20
}