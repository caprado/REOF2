void func_001d4c80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d4c80: addiu $sp, $sp, -0x20
    v0 = (a0 < 0x2000) ? 1 : 0;                                 // 0x001d4c84: slti $v0, $a0, 0x2000
    if (v0 != 0) goto label_0x1d4cbc;                           // 0x001d4c90: bnez $v0, 0x1d4cbc
    at = (a0 < 0x2100) ? 1 : 0;                                 // 0x001d4c98: slti $at, $a0, 0x2100
    if (at == 0) goto label_0x1d4cc0;                           // 0x001d4c9c: beqz $at, 0x1d4cc0
    v0 = (a0 < 0x2400) ? 1 : 0;                                 // 0x001d4ca0: slti $v0, $a0, 0x2400
    thunk_func_001a2a40();  // 0x1da410                          // 0x001d4cac: jal 0x1da410
    goto label_0x1d4d9c;                                        // 0x001d4cb4: b 0x1d4d9c
label_0x1d4cbc:
    v0 = (a0 < 0x2400) ? 1 : 0;                                 // 0x001d4cbc: slti $v0, $a0, 0x2400
label_0x1d4cc0:
    if (v0 != 0) goto label_0x1d4ce8;                           // 0x001d4cc0: bnez $v0, 0x1d4ce8
    v0 = (a0 < 0x2a00) ? 1 : 0;                                 // 0x001d4cc4: slti $v0, $a0, 0x2a00
    at = (a0 < 0x2500) ? 1 : 0;                                 // 0x001d4cc8: slti $at, $a0, 0x2500
    if (at == 0) goto label_0x1d4ce8;                           // 0x001d4ccc: beqz $at, 0x1d4ce8
    thunk_func_001a2a40();  // 0x1da410                          // 0x001d4cd8: jal 0x1da410
    a2 = 1;                                                     // 0x001d4cdc: addiu $a2, $zero, 1
    goto label_0x1d4d98;                                        // 0x001d4ce0: b 0x1d4d98
    /* nop */                                                   // 0x001d4ce4: nop 
label_0x1d4ce8:
    if (v0 != 0) goto label_0x1d4d0c;                           // 0x001d4ce8: bnez $v0, 0x1d4d0c
    at = (a0 < 0x3000) ? 1 : 0;                                 // 0x001d4cec: slti $at, $a0, 0x3000
    if (at == 0) goto label_0x1d4d10;                           // 0x001d4cf0: beqz $at, 0x1d4d10
    v0 = (a0 < 0x1800) ? 1 : 0;                                 // 0x001d4cf4: slti $v0, $a0, 0x1800
    func_001da1f0();  // 0x1d9fc0                                // 0x001d4cfc: jal 0x1d9fc0
    goto label_0x1d4d98;                                        // 0x001d4d04: b 0x1d4d98
    /* nop */                                                   // 0x001d4d08: nop 
label_0x1d4d0c:
    v0 = (a0 < 0x1800) ? 1 : 0;                                 // 0x001d4d0c: slti $v0, $a0, 0x1800
label_0x1d4d10:
    if (v0 != 0) goto label_0x1d4d44;                           // 0x001d4d10: bnez $v0, 0x1d4d44
    v0 = (a0 < 0x2100) ? 1 : 0;                                 // 0x001d4d14: slti $v0, $a0, 0x2100
    at = (a0 < 0x2000) ? 1 : 0;                                 // 0x001d4d18: slti $at, $a0, 0x2000
    if (at == 0) goto label_0x1d4d44;                           // 0x001d4d1c: beqz $at, 0x1d4d44
    a3 = 0x48 << 16;                                            // 0x001d4d24: lui $a3, 0x48
    a2 = 0x47 << 16;                                            // 0x001d4d28: lui $a2, 0x47
    a2 = a2 + 0x5300;                                           // 0x001d4d30: addiu $a2, $a2, 0x5300
    func_001d9ea0();  // 0x1d9b70                                // 0x001d4d34: jal 0x1d9b70
    a3 = a3 + -0x62e0;                                          // 0x001d4d38: addiu $a3, $a3, -0x62e0
    goto label_0x1d4d98;                                        // 0x001d4d3c: b 0x1d4d98
    /* nop */                                                   // 0x001d4d40: nop 
label_0x1d4d44:
    if (v0 != 0) goto label_0x1d4d6c;                           // 0x001d4d44: bnez $v0, 0x1d4d6c
    at = (a0 < 0x2400) ? 1 : 0;                                 // 0x001d4d4c: slti $at, $a0, 0x2400
    if (at == 0) goto label_0x1d4d6c;                           // 0x001d4d50: beqz $at, 0x1d4d6c
    /* nop */                                                   // 0x001d4d54: nop 
    func_001d9fc0();  // 0x1d9ea0                                // 0x001d4d5c: jal 0x1d9ea0
    goto label_0x1d4d98;                                        // 0x001d4d64: b 0x1d4d98
    /* nop */                                                   // 0x001d4d68: nop 
label_0x1d4d6c:
    func_001d9b70();  // 0x1d9ac0                                // 0x001d4d6c: jal 0x1d9ac0
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001d4d74: lw $v1, 4($s0)
    if (v1 == 0) goto label_0x1d4d98;                           // 0x001d4d78: beqz $v1, 0x1d4d98
    /* nop */                                                   // 0x001d4d7c: nop 
    a0 = *(uint8_t*)((s0) + 0x81c);                             // 0x001d4d80: lbu $a0, 0x81c($s0)
    v1 = 1;                                                     // 0x001d4d84: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1d4d98;                          // 0x001d4d88: beq $a0, $v1, 0x1d4d98
    func_001da690();  // 0x1da620                                // 0x001d4d90: jal 0x1da620
    /* nop */                                                   // 0x001d4d94: nop 
label_0x1d4d98:
label_0x1d4d9c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d4d9c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d4da0: jr $ra
    sp = sp + 0x20;                                             // 0x001d4da4: addiu $sp, $sp, 0x20
}