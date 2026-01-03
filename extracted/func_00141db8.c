void func_00141db8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00141db8: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x00141dbc: lui $v0, 0x21
    s0 = v0 + 0xbec;                                            // 0x00141dc4: addiu $s0, $v0, 0xbec
    v1 = g_00210bec;  // Global at 0x00210bec                   // 0x00141dc8: lw $v1, 0($s0)
    if (v1 != 0) goto label_0x141ddc;                           // 0x00141dcc: bnez $v1, 0x141ddc
    func_00141d38();  // 141d38                                // 0x00141dd4: jal 0x141d38
    /* nop */                                                   // 0x00141dd8: nop 
label_0x141ddc:
    v0 = g_00210bec;  // Global at 0x00210bec                   // 0x00141ddc: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x00141de4: addiu $v0, $v0, 1
    g_00210bec = v0;  // Global at 0x00210bec                   // 0x00141de8: sw $v0, 0($s0)
    return;                                                     // 0x00141df0: jr $ra
    sp = sp + 0x10;                                             // 0x00141df4: addiu $sp, $sp, 0x10
}