void func_001b9dc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b9dc0: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x1b9e54;                           // 0x001b9dc4: beqz $a0, 0x1b9e54
    a2 = *(uint8_t*)((a0) + 2);                                 // 0x001b9dcc: lbu $a2, 2($a0)
    v1 = 9;                                                     // 0x001b9dd0: addiu $v1, $zero, 9
    if (a2 == v1) goto label_0x1b9dfc;                          // 0x001b9dd4: beq $a2, $v1, 0x1b9dfc
    /* nop */                                                   // 0x001b9dd8: nop 
    if (a2 == 0) goto label_0x1b9dec;                           // 0x001b9ddc: beqz $a2, 0x1b9dec
    /* nop */                                                   // 0x001b9de0: nop 
    goto label_0x1b9e44;                                        // 0x001b9de4: b 0x1b9e44
    v0 = a1 & 0xff;                                             // 0x001b9de8: andi $v0, $a1, 0xff
label_0x1b9dec:
    func_001b9d00();  // 0x1b9ca0                                // 0x001b9dec: jal 0x1b9ca0
    /* nop */                                                   // 0x001b9df0: nop 
    goto label_0x1b9e58;                                        // 0x001b9df4: b 0x1b9e58
label_0x1b9dfc:
    a0 = *(int32_t*)((a0) + 0x28);                              // 0x001b9dfc: lw $a0, 0x28($a0)
    if (a0 == 0) goto label_0x1b9e54;                           // 0x001b9e00: beqz $a0, 0x1b9e54
    /* nop */                                                   // 0x001b9e04: nop 
    v0 = *(uint8_t*)((a0) + 2);                                 // 0x001b9e08: lbu $v0, 2($a0)
    if (v0 == 0) goto label_0x1b9e1c;                           // 0x001b9e0c: beqz $v0, 0x1b9e1c
    /* nop */                                                   // 0x001b9e10: nop 
    goto label_0x1b9e2c;                                        // 0x001b9e14: b 0x1b9e2c
    v0 = a1 & 0xff;                                             // 0x001b9e18: andi $v0, $a1, 0xff
label_0x1b9e1c:
    func_001b9d00();  // 0x1b9ca0                                // 0x001b9e1c: jal 0x1b9ca0
    /* nop */                                                   // 0x001b9e20: nop 
    goto label_0x1b9e54;                                        // 0x001b9e24: b 0x1b9e54
    /* nop */                                                   // 0x001b9e28: nop 
label_0x1b9e2c:
    a1 = v0 & 0x7f;                                             // 0x001b9e2c: andi $a1, $v0, 0x7f
    v0 = v0 & 0x80;                                             // 0x001b9e30: andi $v0, $v0, 0x80
    func_001b8a80();  // 0x1b8950                                // 0x001b9e34: jal 0x1b8950
    a2 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001b9e38: sltu $a2, $zero, $v0
    goto label_0x1b9e54;                                        // 0x001b9e3c: b 0x1b9e54
    /* nop */                                                   // 0x001b9e40: nop 
label_0x1b9e44:
    a1 = v0 & 0x7f;                                             // 0x001b9e44: andi $a1, $v0, 0x7f
    v0 = v0 & 0x80;                                             // 0x001b9e48: andi $v0, $v0, 0x80
    func_001b8a80();  // 0x1b8950                                // 0x001b9e4c: jal 0x1b8950
    a2 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001b9e50: sltu $a2, $zero, $v0
label_0x1b9e54:
label_0x1b9e58:
    return;                                                     // 0x001b9e58: jr $ra
    sp = sp + 0x10;                                             // 0x001b9e5c: addiu $sp, $sp, 0x10
}