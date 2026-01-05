void func_00106d20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00106d20: addiu $sp, $sp, -0x30
    v0 = ((unsigned)s0 < (unsigned)0x11) ? 1 : 0;               // 0x00106d2c: sltiu $v0, $s0, 0x11
    if (v0 == 0) goto label_0x106d70;                           // 0x00106d48: beqz $v0, 0x106d70
    return func_00107908();  // Tail call                        // 0x00106d68: j 0x1071e0
    sp = sp + 0x30;                                             // 0x00106d6c: addiu $sp, $sp, 0x30
label_0x106d70:
    a1 = a1 + 0x13;                                             // 0x00106d70: addiu $a1, $a1, 0x13
    v0 = ((unsigned)s0 < (unsigned)0x10) ? 1 : 0;               // 0x00106d74: sltiu $v0, $s0, 0x10
    v1 = 0x10;                                                  // 0x00106d78: addiu $v1, $zero, 0x10
    a0 = ((unsigned)a1 < (unsigned)0x1f) ? 1 : 0;               // 0x00106d7c: sltiu $a0, $a1, 0x1f
    if (a0 != 0) goto label_0x106d98;                           // 0x00106d80: bnez $a0, 0x106d98
    if (v0 != 0) s0 = v1;                                       // 0x00106d84: movn $s0, $v1, $v0
    v0 = -0x10;                                                 // 0x00106d88: addiu $v0, $zero, -0x10
    goto label_0x106d9c;                                        // 0x00106d8c: b 0x106d9c
    s3 = a1 & v0;                                               // 0x00106d90: and $s3, $a1, $v0
    /* nop */                                                   // 0x00106d94: nop 
label_0x106d98:
    s3 = 0x10;                                                  // 0x00106d98: addiu $s3, $zero, 0x10
label_0x106d9c:
    a1 = s3 + s0;                                               // 0x00106d9c: addu $a1, $s3, $s0
    func_001071e0();  // 1071e0                                // 0x00106da4: jal 0x1071e0
    a1 = a1 + 0x10;                                             // 0x00106da8: addiu $a1, $a1, 0x10
    /* beqzl $s1, 0x106ecc */                                   // 0x00106db0: beqzl $s1, 0x106ecc
    func_00107d30();  // 107d30                                // 0x00106dbc: jal 0x107d30
    s2 = s1 + -8;                                               // 0x00106dc0: addiu $s2, $s1, -8
    func_00110a68();  // 110a68                                // 0x00106dcc: jal 0x110a68
    if (v0 == 0) goto label_0x106e48;                           // 0x00106dd4: beqz $v0, 0x106e48
    a3 = s1 + s0;                                               // 0x00106dd8: addu $a3, $s1, $s0
    v0 = -s0;                                                   // 0x00106ddc: negu $v0, $s0
    a3 = a3 + -1;                                               // 0x00106de0: addiu $a3, $a3, -1
    a2 = *(int32_t*)((s2) + 4);                                 // 0x00106de4: lw $a2, 4($s2)
    a3 = a3 & v0;                                               // 0x00106de8: and $a3, $a3, $v0
    v1 = -4;                                                    // 0x00106dec: addiu $v1, $zero, -4
    a3 = a3 + -8;                                               // 0x00106df0: addiu $a3, $a3, -8
    a2 = a2 & v1;                                               // 0x00106df4: and $a2, $a2, $v1
    v0 = a3 - s2;                                               // 0x00106df8: subu $v0, $a3, $s2
    v0 = (v0 < 0x10) ? 1 : 0;                                   // 0x00106e00: slti $v0, $v0, 0x10
    /* multiply: v0 * s0 -> hi:lo */                            // 0x00106e08: mult $ac3, $v0, $s0
    a3 = v1 + a3;                                               // 0x00106e0c: addu $a3, $v1, $a3
    t0 = a3 - s2;                                               // 0x00106e10: subu $t0, $a3, $s2
    a2 = a2 - t0;                                               // 0x00106e14: subu $a2, $a2, $t0
    v1 = a2 | 1;                                                // 0x00106e18: ori $v1, $a2, 1
    a2 = a3 + a2;                                               // 0x00106e1c: addu $a2, $a3, $a2
    *(uint32_t*)((a3) + 4) = v1;                                // 0x00106e20: sw $v1, 4($a3)
    v0 = *(int32_t*)((a2) + 4);                                 // 0x00106e24: lw $v0, 4($a2)
    v0 = v0 | 1;                                                // 0x00106e28: ori $v0, $v0, 1
    *(uint32_t*)((a2) + 4) = v0;                                // 0x00106e2c: sw $v0, 4($a2)
    v1 = *(int32_t*)((s2) + 4);                                 // 0x00106e30: lw $v1, 4($s2)
    v1 = v1 & 1;                                                // 0x00106e34: andi $v1, $v1, 1
    v1 = v1 | t0;                                               // 0x00106e38: or $v1, $v1, $t0
    *(uint32_t*)((s2) + 4) = v1;                                // 0x00106e3c: sw $v1, 4($s2)
    func_001058e0();  // 1058e0                                // 0x00106e40: jal 0x1058e0
label_0x106e48:
    v0 = *(int32_t*)((s2) + 4);                                 // 0x00106e48: lw $v0, 4($s2)
    v1 = -4;                                                    // 0x00106e4c: addiu $v1, $zero, -4
    v0 = v0 & v1;                                               // 0x00106e50: and $v0, $v0, $v1
    a0 = ((unsigned)v0 < (unsigned)s3) ? 1 : 0;                 // 0x00106e54: sltu $a0, $v0, $s3
    /* beqzl $a0, 0x106e78 */                                   // 0x00106e58: beqzl $a0, 0x106e78
    v0 = v0 - s3;                                               // 0x00106e5c: subu $v0, $v0, $s3
    v0 = s3 - v0;                                               // 0x00106e60: subu $v0, $s3, $v0
    goto label_0x106e80;                                        // 0x00106e6c: b 0x106e80
    /* nop */                                                   // 0x00106e74: nop 
label_0x106e80:
    v0 = (a0 < 0x10) ? 1 : 0;                                   // 0x00106e80: slti $v0, $a0, 0x10
    if (v0 != 0) goto label_0x106ebc;                           // 0x00106e84: bnez $v0, 0x106ebc
    v0 = 1;                                                     // 0x00106e88: addiu $v0, $zero, 1
    a2 = s2 + s3;                                               // 0x00106e8c: addu $a2, $s2, $s3
    v0 = a0 | v0;                                               // 0x00106e90: or $v0, $a0, $v0
    a1 = a2 + 8;                                                // 0x00106ea0: addiu $a1, $a2, 8
    *(uint32_t*)((a2) + 4) = v0;                                // 0x00106ea4: sw $v0, 4($a2)
    v1 = *(int32_t*)((s2) + 4);                                 // 0x00106ea8: lw $v1, 4($s2)
    v1 = v1 & 1;                                                // 0x00106eac: andi $v1, $v1, 1
    v1 = v1 | s3;                                               // 0x00106eb0: or $v1, $v1, $s3
    func_001058e0();  // 1058e0                                // 0x00106eb4: jal 0x1058e0
    *(uint32_t*)((s2) + 4) = v1;                                // 0x00106eb8: sw $v1, 4($s2)
label_0x106ebc:
    func_00107db0();  // 107db0                                // 0x00106ebc: jal 0x107db0
    v0 = s2 + 8;                                                // 0x00106ec4: addiu $v0, $s2, 8
    return;                                                     // 0x00106ee0: jr $ra
    sp = sp + 0x30;                                             // 0x00106ee4: addiu $sp, $sp, 0x30
}