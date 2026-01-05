void func_0011def0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011def0: addiu $sp, $sp, -0x20
    func_0011d320();  // 11d320                                // 0x0011defc: jal 0x11d320
    /* nop */                                                   // 0x0011df00: nop 
    v0 = 0x1000 << 16;                                          // 0x0011df08: lui $v0, 0x1000
    v0 = v0 | 0x1010;                                           // 0x0011df0c: ori $v0, $v0, 0x1010
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0011df10: lw $v0, 0($v0)
    v1 = v0 & 0x80;                                             // 0x0011df14: andi $v1, $v0, 0x80
    if (v1 != 0) goto label_0x11df38;                           // 0x0011df18: bnez $v1, 0x11df38
    /* nop */                                                   // 0x0011df1c: nop 
    if (s0 == 0) goto label_0x11df5c;                           // 0x0011df20: beqz $s0, 0x11df5c
    func_0011d378();  // 11d378                                // 0x0011df28: jal 0x11d378
    /* nop */                                                   // 0x0011df2c: nop 
    goto label_0x11df5c;                                        // 0x0011df30: b 0x11df5c
label_0x11df38:
    a0 = 0xffff << 16;                                          // 0x0011df38: lui $a0, 0xffff
    a0 = a0 | 0xf37f;                                           // 0x0011df3c: ori $a0, $a0, 0xf37f
    func_0011dc00();  // 11dc00                                // 0x0011df40: jal 0x11dc00
    a0 = v0 & a0;                                               // 0x0011df44: and $a0, $v0, $a0
    if (s0 == 0) goto label_0x11df5c;                           // 0x0011df48: beqz $s0, 0x11df5c
    v0 = 1;                                                     // 0x0011df4c: addiu $v0, $zero, 1
    func_0011d378();  // 11d378                                // 0x0011df50: jal 0x11d378
    /* nop */                                                   // 0x0011df54: nop 
    v0 = 1;                                                     // 0x0011df58: addiu $v0, $zero, 1
label_0x11df5c:
    return;                                                     // 0x0011df64: jr $ra
    sp = sp + 0x20;                                             // 0x0011df68: addiu $sp, $sp, 0x20
}