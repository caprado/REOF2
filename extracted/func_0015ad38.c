void func_0015ad38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x25 << 16;                                            // 0x0015ad38: lui $v1, 0x25
    v0 = 0x22 << 16;                                            // 0x0015ad3c: lui $v0, 0x22
    sp = sp + -0x20;                                            // 0x0015ad40: addiu $sp, $sp, -0x20
    v1 = v1 + 0x63e8;                                           // 0x0015ad44: addiu $v1, $v1, 0x63e8
    v0 = &str_00226e40;  // "Append: GCC2096 SCE2800\n"         // 0x0015ad48: addiu $v0, $v0, 0x6e40
    func_0015ae08();  // 15ae08                                // 0x0015ad60: jal 0x15ae08
    g_002563e8 = v0;  // Global at 0x002563e8                   // 0x0015ad64: sw $v0, 0($v1)
    if (a0 == 0) goto label_0x15ada8;                           // 0x0015ad6c: beqz $a0, 0x15ada8
    /* nop */                                                   // 0x0015ad70: nop 
    v1 = 0xff03 << 16;                                          // 0x0015ad74: lui $v1, 0xff03
    v1 = v1 | 0xff05;                                           // 0x0015ad78: ori $v1, $v1, 0xff05
    if (a0 == v1) goto label_0x15adf8;                          // 0x0015ad7c: beql $a0, $v1, 0x15adf8
    /* nop */                                                   // 0x0015ad84: nop 
label_0x15ad88:
    /* nop */                                                   // 0x0015ad88: nop 
    /* nop */                                                   // 0x0015ad8c: nop 
    /* nop */                                                   // 0x0015ad90: nop 
    /* nop */                                                   // 0x0015ad94: nop 
    /* nop */                                                   // 0x0015ad98: nop 
    goto label_0x15ad88;                                        // 0x0015ad9c: b 0x15ad88
    /* nop */                                                   // 0x0015ada0: nop 
    /* nop */                                                   // 0x0015ada4: nop 
label_0x15ada8:
    func_0015ae80();  // 15ae80                                // 0x0015ada8: jal 0x15ae80
    /* nop */                                                   // 0x0015adac: nop 
    func_0015aea8();  // 15aea8                                // 0x0015adb0: jal 0x15aea8
    func_0015b020();  // 15b020                                // 0x0015adbc: jal 0x15b020
    v0 = 0x25 << 16;                                            // 0x0015adc4: lui $v0, 0x25
    func_00158ad0();  // 158ad0                                // 0x0015adc8: jal 0x158ad0
    s0 = g_00256440;  // Global at 0x00256440                   // 0x0015adcc: lw $s0, 0x6440($v0)
    func_0015aec8();  // 15aec8                                // 0x0015add0: jal 0x15aec8
    a0 = s0 + 0x6e0;                                            // 0x0015add4: addiu $a0, $s0, 0x6e0
    func_0015afa0();  // 15afa0                                // 0x0015add8: jal 0x15afa0
    /* nop */                                                   // 0x0015addc: nop 
    func_0015b018();  // 15b018                                // 0x0015ade0: jal 0x15b018
    func_0015b498();  // 15b498                                // 0x0015ade8: jal 0x15b498
    /* nop */                                                   // 0x0015adec: nop 
label_0x15adf8:
    return;                                                     // 0x0015ae00: jr $ra
    sp = sp + 0x20;                                             // 0x0015ae04: addiu $sp, $sp, 0x20
}