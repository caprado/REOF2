void func_00111ce0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_20, local_24, local_28, local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x00111ce0: addiu $sp, $sp, -0x60
    a0 = sp + 0x40;                                             // 0x00111ce8: addiu $a0, $sp, 0x40
    func_00111678();  // 111678                                // 0x00111cf8: jal 0x111678
    s0 = sp + 0x20;                                             // 0x00111d00: addiu $s0, $sp, 0x20
    a0 = sp + 0x48;                                             // 0x00111d04: addiu $a0, $sp, 0x48
    func_00111678();  // 111678                                // 0x00111d08: jal 0x111678
    a2 = local_0;                                               // 0x00111d10: lw $a2, 0($sp)
    v0 = ((unsigned)a2 < (unsigned)2) ? 1 : 0;                  // 0x00111d18: sltiu $v0, $a2, 2
    if (v0 != 0) goto label_0x111e08;                           // 0x00111d1c: bnez $v0, 0x111e08
    a1 = local_20;                                              // 0x00111d24: lw $a1, 0x20($sp)
    v0 = ((unsigned)a1 < (unsigned)2) ? 1 : 0;                  // 0x00111d28: sltiu $v0, $a1, 2
    if (v0 != 0) goto label_0x111e08;                           // 0x00111d2c: bnez $v0, 0x111e08
    v0 = local_4;                                               // 0x00111d34: lw $v0, 4($sp)
    a0 = a2 ^ 4;                                                // 0x00111d38: xori $a0, $a2, 4
    v1 = local_24;                                              // 0x00111d3c: lw $v1, 0x24($sp)
    v0 = v0 ^ v1;                                               // 0x00111d40: xor $v0, $v0, $v1
    if (a0 == 0) goto label_0x111d58;                           // 0x00111d44: beqz $a0, 0x111d58
    local_4 = v0;                                               // 0x00111d48: sw $v0, 4($sp)
    v0 = a2 ^ 2;                                                // 0x00111d4c: xori $v0, $a2, 2
    if (v0 != 0) goto label_0x111d70;                           // 0x00111d50: bnez $v0, 0x111d70
    v0 = a1 ^ 4;                                                // 0x00111d54: xori $v0, $a1, 4
label_0x111d58:
    if (a2 != a1) goto label_0x111e08;                          // 0x00111d58: bnel $a2, $a1, 0x111e08
    v0 = 0x22 << 16;                                            // 0x00111d60: lui $v0, 0x22
    goto label_0x111e08;                                        // 0x00111d64: b 0x111e08
    a0 = v0 + 0xe20;                                            // 0x00111d68: addiu $a0, $v0, 0xe20
    /* nop */                                                   // 0x00111d6c: nop 
label_0x111d70:
    /* bnezl $v0, 0x111d88 */                                   // 0x00111d70: bnezl $v0, 0x111d88
    v0 = a1 ^ 2;                                                // 0x00111d74: xori $v0, $a1, 2
    goto label_0x111e08;                                        // 0x00111d80: b 0x111e08
    local_8 = 0;                                                // 0x00111d84: sw $zero, 8($sp)
    /* bnezl $v0, 0x111da0 */                                   // 0x00111d88: bnezl $v0, 0x111da0
    v1 = local_8;                                               // 0x00111d8c: lw $v1, 8($sp)
    v0 = 4;                                                     // 0x00111d90: addiu $v0, $zero, 4
    goto label_0x111e08;                                        // 0x00111d98: b 0x111e08
    local_0 = v0;                                               // 0x00111d9c: sw $v0, 0($sp)
    v0 = local_28;                                              // 0x00111da0: lw $v0, 0x28($sp)
    v0 = v1 - v0;                                               // 0x00111dac: subu $v0, $v1, $v0
    a1 = ((unsigned)a0 < (unsigned)a2) ? 1 : 0;                 // 0x00111db0: sltu $a1, $a0, $a2
    if (a1 == 0) goto label_0x111dcc;                           // 0x00111db4: beqz $a1, 0x111dcc
    local_8 = v0;                                               // 0x00111db8: sw $v0, 8($sp)
    v0 = v0 + -1;                                               // 0x00111dbc: addiu $v0, $v0, -1
    local_8 = v0;                                               // 0x00111dc4: sw $v0, 8($sp)
    a1 = ((unsigned)a0 < (unsigned)a2) ? 1 : 0;                 // 0x00111dc8: sltu $a1, $a0, $a2
label_0x111dcc:
    v1 = 0 | 0x8000;                                            // 0x00111dcc: ori $v1, $zero, 0x8000
label_0x111dd8:
    if (a1 != 0) goto label_0x111df0;                           // 0x00111dd8: bnez $a1, 0x111df0
    a3 = a3 | v1;                                               // 0x00111de4: or $a3, $a3, $v1
    /* nop */                                                   // 0x00111dec: nop 
label_0x111df0:
    a1 = ((unsigned)v0 < (unsigned)a2) ? 1 : 0;                 // 0x00111df4: sltu $a1, $v0, $a2
    if (v1 != 0) goto label_0x111dd8;                           // 0x00111df8: bnez $v1, 0x111dd8
label_0x111e08:
    func_001115a0();  // 1115a0                                // 0x00111e08: jal 0x1115a0
    /* nop */                                                   // 0x00111e0c: nop 
    return;                                                     // 0x00111e18: jr $ra
    sp = sp + 0x60;                                             // 0x00111e1c: addiu $sp, $sp, 0x60
}