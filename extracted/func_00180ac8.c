void func_00180ac8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00180ac8: lui $v0, 0x21
    sp = sp + -0x20;                                            // 0x00180acc: addiu $sp, $sp, -0x20
    v1 = g_00216010;  // Global at 0x00216010                   // 0x00180ad0: lw $v1, 0x6010($v0)
    if (v1 != 0) goto label_0x180aec;                           // 0x00180ad8: bnez $v1, 0x180aec
    v0 = 0x8101 << 16;                                          // 0x00180ae0: lui $v0, 0x8101
    goto label_0x180b48;                                        // 0x00180ae4: b 0x180b48
    v0 = v0 | 0x8001;                                           // 0x00180ae8: ori $v0, $v0, 0x8001
label_0x180aec:
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00180aec: lw $v0, 4($a0)
    v0 = v0 + -2;                                               // 0x00180af0: addiu $v0, $v0, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00180af4: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x180b0c;                           // 0x00180af8: beqz $v0, 0x180b0c
    /* nop */                                                   // 0x00180afc: nop 
    v0 = *(int32_t*)((a0) + 8);                                 // 0x00180b00: lw $v0, 8($a0)
    if (v0 == 0) goto label_0x180b18;                           // 0x00180b04: beqz $v0, 0x180b18
    /* nop */                                                   // 0x00180b08: nop 
label_0x180b0c:
    v0 = 0x8101 << 16;                                          // 0x00180b0c: lui $v0, 0x8101
    goto label_0x180b48;                                        // 0x00180b10: b 0x180b48
    v0 = v0 | 0x16;                                             // 0x00180b14: ori $v0, $v0, 0x16
label_0x180b18:
    func_001886c0();  // 0x1885a0                                // 0x00180b18: jal 0x1885a0
    /* nop */                                                   // 0x00180b1c: nop 
    if (s0 >= 0) goto label_0x180b38;                           // 0x00180b24: bgez $s0, 0x180b38
    /* nop */                                                   // 0x00180b28: nop 
    v0 = 0x8101 << 16;                                          // 0x00180b2c: lui $v0, 0x8101
    goto label_0x180b48;                                        // 0x00180b30: b 0x180b48
    v0 = v0 | 0x17;                                             // 0x00180b34: ori $v0, $v0, 0x17
label_0x180b38:
    func_001828c0();  // 0x182858                                // 0x00180b38: jal 0x182858
    func_001887d0();  // 0x1887a0                                // 0x00180b40: jal 0x1887a0
label_0x180b48:
    return;                                                     // 0x00180b50: jr $ra
    sp = sp + 0x20;                                             // 0x00180b54: addiu $sp, $sp, 0x20
}