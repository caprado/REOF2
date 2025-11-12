void func_001b5dd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b5dd0: addiu $sp, $sp, -0x10
    if (a1 != 0) goto label_0x1b5e14;                           // 0x001b5dd4: bnez $a1, 0x1b5e14
    func_001b5d40();  // 0x1b5c60                                // 0x001b5ddc: jal 0x1b5c60
    /* nop */                                                   // 0x001b5de0: nop 
    v1 = (unsigned)a0 >> 8;                                     // 0x001b5de8: srl $v1, $a0, 8
    v0 = v0 & 0xff;                                             // 0x001b5dec: andi $v0, $v0, 0xff
    a0 = v1 + -0x21;                                            // 0x001b5df0: addiu $a0, $v1, -0x21
    v0 = v0 + -0x21;                                            // 0x001b5df4: addiu $v0, $v0, -0x21
    v1 = a0 << 1;                                               // 0x001b5df8: sll $v1, $a0, 1
    v1 = v1 + a0;                                               // 0x001b5dfc: addu $v1, $v1, $a0
    v1 = v1 << 4;                                               // 0x001b5e00: sll $v1, $v1, 4
    v1 = v1 - a0;                                               // 0x001b5e04: subu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001b5e08: sll $v1, $v1, 1
    goto label_0x1b5e48;                                        // 0x001b5e0c: b 0x1b5e48
    v0 = v1 + v0;                                               // 0x001b5e10: addu $v0, $v1, $v0
label_0x1b5e14:
    func_001b5dd0();  // 0x1b5d40                                // 0x001b5e14: jal 0x1b5d40
    /* nop */                                                   // 0x001b5e18: nop 
    v1 = (unsigned)v0 >> 8;                                     // 0x001b5e1c: srl $v1, $v0, 8
    v1 = v1 & 0xff;                                             // 0x001b5e20: andi $v1, $v1, 0xff
    v0 = v0 & 0xff;                                             // 0x001b5e24: andi $v0, $v0, 0xff
    a0 = v1 + -0x21;                                            // 0x001b5e28: addiu $a0, $v1, -0x21
    v0 = v0 + -0x21;                                            // 0x001b5e2c: addiu $v0, $v0, -0x21
    v1 = a0 << 1;                                               // 0x001b5e30: sll $v1, $a0, 1
    v1 = v1 + a0;                                               // 0x001b5e34: addu $v1, $v1, $a0
    v1 = v1 << 4;                                               // 0x001b5e38: sll $v1, $v1, 4
    v1 = v1 - a0;                                               // 0x001b5e3c: subu $v1, $v1, $a0
    v1 = v1 << 1;                                               // 0x001b5e40: sll $v1, $v1, 1
    v0 = v0 + v1;                                               // 0x001b5e44: addu $v0, $v0, $v1
label_0x1b5e48:
    return;                                                     // 0x001b5e4c: jr $ra
    sp = sp + 0x10;                                             // 0x001b5e50: addiu $sp, $sp, 0x10
}