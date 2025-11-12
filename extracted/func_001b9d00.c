void func_001b9d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b9d00: addiu $sp, $sp, -0x10
    v1 = 0xff;                                                  // 0x001b9d0c: addiu $v1, $zero, 0xff
    a0 = *(uint8_t*)((a0) + 0x119);                             // 0x001b9d10: lbu $a0, 0x119($a0)
    if (a0 == v1) goto label_0x1b9d2c;                          // 0x001b9d14: beq $a0, $v1, 0x1b9d2c
    func_006372c0();  // 0x6372c0                               // 0x001b9d1c: jal 0x6372c0
    a1 = *(uint8_t*)((a1) + 0x11a);                             // 0x001b9d20: lbu $a1, 0x11a($a1)
    goto label_0x1b9d40;                                        // 0x001b9d24: b 0x1b9d40
    /* nop */                                                   // 0x001b9d28: nop 
label_0x1b9d2c:
    a0 = *(uint8_t*)((a1) + 0x117);                             // 0x001b9d2c: lbu $a0, 0x117($a1)
    if (a0 == v1) goto label_0x1b9d40;                          // 0x001b9d30: beq $a0, $v1, 0x1b9d40
    /* nop */                                                   // 0x001b9d34: nop 
    func_006372c0();  // 0x6372c0                               // 0x001b9d38: jal 0x6372c0
    a1 = *(uint8_t*)((a1) + 0x118);                             // 0x001b9d3c: lbu $a1, 0x118($a1)
label_0x1b9d40:
    if (v0 != 0) goto label_0x1b9d50;                           // 0x001b9d40: bnez $v0, 0x1b9d50
    /* nop */                                                   // 0x001b9d44: nop 
    goto label_0x1b9db4;                                        // 0x001b9d48: b 0x1b9db4
label_0x1b9d50:
    a0 = *(uint8_t*)((v0) + 2);                                 // 0x001b9d50: lbu $a0, 2($v0)
    v1 = 2;                                                     // 0x001b9d54: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1b9d90;                          // 0x001b9d58: beq $a0, $v1, 0x1b9d90
    v1 = 1;                                                     // 0x001b9d5c: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1b9d78;                          // 0x001b9d60: beq $a0, $v1, 0x1b9d78
    /* nop */                                                   // 0x001b9d64: nop 
    if (a0 == 0) goto label_0x1b9d78;                           // 0x001b9d68: beqz $a0, 0x1b9d78
    /* nop */                                                   // 0x001b9d6c: nop 
    goto label_0x1b9da8;                                        // 0x001b9d70: b 0x1b9da8
label_0x1b9d78:
    v0 = *(int32_t*)((v0) + 0xbb8);                             // 0x001b9d78: lw $v0, 0xbb8($v0)
    v0 = v0 & 8;                                                // 0x001b9d7c: andi $v0, $v0, 8
    if (v0 == 0) goto label_0x1b9db0;                           // 0x001b9d80: beqz $v0, 0x1b9db0
    /* nop */                                                   // 0x001b9d84: nop 
    goto label_0x1b9db4;                                        // 0x001b9d88: b 0x1b9db4
label_0x1b9d90:
    v0 = *(int32_t*)((v0) + 0xcb0);                             // 0x001b9d90: lw $v0, 0xcb0($v0)
    v0 = v0 & 0x400;                                            // 0x001b9d94: andi $v0, $v0, 0x400
    if (v0 == 0) goto label_0x1b9db0;                           // 0x001b9d98: beqz $v0, 0x1b9db0
    /* nop */                                                   // 0x001b9d9c: nop 
    goto label_0x1b9db4;                                        // 0x001b9da0: b 0x1b9db4
label_0x1b9da8:
    goto label_0x1b9db8;                                        // 0x001b9da8: b 0x1b9db8
label_0x1b9db0:
    v0 = 1;                                                     // 0x001b9db0: addiu $v0, $zero, 1
label_0x1b9db4:
label_0x1b9db8:
    return;                                                     // 0x001b9db8: jr $ra
    sp = sp + 0x10;                                             // 0x001b9dbc: addiu $sp, $sp, 0x10
}