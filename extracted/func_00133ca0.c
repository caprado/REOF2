void func_00133ca0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_24;
    
    sp = sp + -0x60;                                            // 0x00133ca0: addiu $sp, $sp, -0x60
    s0 = 0x800;                                                 // 0x00133ca8: addiu $s0, $zero, 0x800
    local_20 = 0;                                               // 0x00133cc4: sw $zero, 0x20($sp)
    s3 = *(int32_t*)((s1) + 4);                                 // 0x00133cc8: lw $s3, 4($s1)
    v0 = *(uint8_t*)((s1) + 2);                                 // 0x00133ccc: lbu $v0, 2($s1)
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00133cd0: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x133d38;                           // 0x00133cd4: beqz $v0, 0x133d38
    local_24 = 0;                                               // 0x00133cd8: sw $zero, 0x24($sp)
    v1 = *(int8_t*)((s1) + 0xac);                               // 0x00133cdc: lb $v1, 0xac($s1)
    v0 = 1;                                                     // 0x00133ce0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x133d38;                          // 0x00133ce4: bne $v1, $v0, 0x133d38
    /* nop */                                                   // 0x00133ce8: nop 
    func_00130278();  // 130278                                // 0x00133cec: jal 0x130278
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00133cf0: lw $a0, 8($s1)
    v1 = 2;                                                     // 0x00133cf4: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x13405c;                          // 0x00133cf8: beql $v0, $v1, 0x13405c
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x00133d00: lw $a0, 0x10($s1)
    /* beqzl $a0, 0x133d20 */                                   // 0x00133d04: beqzl $a0, 0x133d20
    a1 = *(int32_t*)((s1) + 0xb4);                              // 0x00133d08: lw $a1, 0xb4($s1)
    v1 = str_00223f70;  // "E02080842 ADXT_ExecHndl: parameter error" // 0x00133d0c: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x14);                              // 0x00133d10: lw $v0, 0x14($v1)
    /* call function at address in v0 */                        // 0x00133d14: jalr $v0
    /* nop */                                                   // 0x00133d18: nop 
    a1 = *(int32_t*)((s1) + 0xb4);                              // 0x00133d1c: lw $a1, 0xb4($s1)
    a2 = *(int32_t*)((s1) + 0xb8);                              // 0x00133d24: lw $a2, 0xb8($s1)
    a3 = *(int32_t*)((s1) + 0xbc);                              // 0x00133d28: lw $a3, 0xbc($s1)
    func_00131910();  // 131910                                // 0x00133d2c: jal 0x131910
    t0 = *(int32_t*)((s1) + 0xc0);                              // 0x00133d30: lw $t0, 0xc0($s1)
    *(uint8_t*)((s1) + 0xac) = 0;                               // 0x00133d34: sb $zero, 0xac($s1)
label_0x133d38:
    func_0012c878();  // 12c878                                // 0x00133d38: jal 0x12c878
    v1 = 2;                                                     // 0x00133d40: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x13405c;                          // 0x00133d44: bnel $v0, $v1, 0x13405c
    func_0012d468();  // 12d468                                // 0x00133d4c: jal 0x12d468
    a1 = *(int8_t*)((s1) + 3);                                  // 0x00133d54: lb $a1, 3($s1)
    v0 = (a1 < s2) ? 1 : 0;                                     // 0x00133d5c: slt $v0, $a1, $s2
    if (v0 == 0) goto label_0x133d98;                           // 0x00133d60: beqz $v0, 0x133d98
    func_00127f60();  // 127f60                                // 0x00133d6c: jal 0x127f60
    a3 = 0x10;                                                  // 0x00133d70: addiu $a3, $zero, 0x10
    a0 = 0x22 << 16;                                            // 0x00133d74: lui $a0, 0x22
    a0 = &str_00223f70;  // "E02080842 ADXT_ExecHndl: parameter error" // 0x00133d78: addiu $a0, $a0, 0x3f70
    func_00127de8();  // 127de8                                // 0x00133d7c: jal 0x127de8
    func_00131af8();  // 131af8                                // 0x00133d84: jal 0x131af8
    goto label_0x13405c;                                        // 0x00133d8c: b 0x13405c
    /* nop */                                                   // 0x00133d94: nop 
label_0x133d98:
    func_0012d450();  // 12d450                                // 0x00133d98: jal 0x12d450
    func_0012d4f8();  // 12d4f8                                // 0x00133da4: jal 0x12d4f8
    if (s2 <= 0) goto label_0x133de0;                           // 0x00133db0: blezl $s2, 0x133de0
    v1 = *(int32_t*)((s1) + 0x38);                              // 0x00133db4: lw $v1, 0x38($s1)
    v0 = *(int32_t*)((s1) + 0x38);                              // 0x00133db8: lw $v0, 0x38($s1)
    /* divide: s4 / v0 -> hi:lo */                              // 0x00133dbc: div $zero, $s4, $v0
    /* beqzl $v0, 0x133dc8 */                                   // 0x00133dc0: beqzl $v0, 0x133dc8
    /* break (trap) */                                          // 0x00133dc4: break 0, 7
    /* mflo $a0 */                                              // 0x00133dc8
    v1 = a0 << 1;                                               // 0x00133dcc: sll $v1, $a0, 1
    v1 = v1 + a0;                                               // 0x00133dd0: addu $v1, $v1, $a0
    goto label_0x133e08;                                        // 0x00133dd4: b 0x133e08
    *(uint32_t*)((s1) + 0x48) = v1;                             // 0x00133dd8: sw $v1, 0x48($s1)
    /* nop */                                                   // 0x00133ddc: nop 
label_0x133de0:
    /* divide: s4 / v1 -> hi:lo */                              // 0x00133de0: div $zero, $s4, $v1
    /* beqzl $v1, 0x133dec */                                   // 0x00133de4: beqzl $v1, 0x133dec
    /* break (trap) */                                          // 0x00133de8: break 0, 7
    /* mflo $a0 */                                              // 0x00133dec
    v0 = a0 << 1;                                               // 0x00133df0: sll $v0, $a0, 1
    v0 = v0 + a0;                                               // 0x00133df4: addu $v0, $v0, $a0
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x00133df8: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x00133dfc: addu $v0, $v0, $v1
    v0 = v0 >> 1;                                               // 0x00133e00: sra $v0, $v0, 1
    *(uint32_t*)((s1) + 0x48) = v0;                             // 0x00133e04: sw $v0, 0x48($s1)
label_0x133e08:
    func_0012d498();  // 12d498                                // 0x00133e08: jal 0x12d498
    a1 = *(int32_t*)((s1) + 0x48);                              // 0x00133e10: lw $a1, 0x48($s1)
    v0 = v0 << 1;                                               // 0x00133e14: sll $v0, $v0, 1
    a1 = a1 + v0;                                               // 0x00133e1c: addu $a1, $a1, $v0
    /* beqzl $v0, 0x133e28 */                                   // 0x00133e20: beqzl $v0, 0x133e28
    /* break (trap) */                                          // 0x00133e24: break 0, 7
    /* divide: a1 / v0 -> hi:lo */                              // 0x00133e28: div $zero, $a1, $v0
    /* mflo $a1 */                                              // 0x00133e2c
    func_0012c8d0();  // 12c8d0                                // 0x00133e34: jal 0x12c8d0
    *(uint32_t*)((s1) + 0x48) = a1;                             // 0x00133e38: sw $a1, 0x48($s1)
    if (s2 <= 0) goto label_0x133f10;                           // 0x00133e3c: blezl $s2, 0x133f10
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00133e40: lw $a0, 8($s1)
    v1 = *(int8_t*)((s1) + 2);                                  // 0x00133e44: lb $v1, 2($s1)
    v0 = 2;                                                     // 0x00133e48: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x133e60;                          // 0x00133e4c: bne $v1, $v0, 0x133e60
    /* nop */                                                   // 0x00133e50: nop 
    goto label_0x133ebc;                                        // 0x00133e54: b 0x133ebc
    *(uint32_t*)((s1) + 0x50) = 0;                              // 0x00133e58: sw $zero, 0x50($s1)
    /* nop */                                                   // 0x00133e5c: nop 
label_0x133e60:
    func_0012d588();  // 12d588                                // 0x00133e60: jal 0x12d588
    /* beqzl $s0, 0x133e70 */                                   // 0x00133e68: beqzl $s0, 0x133e70
    /* break (trap) */                                          // 0x00133e6c: break 0, 7
    /* divide: v0 / s0 -> hi:lo */                              // 0x00133e70: div $zero, $v0, $s0
    v0 = v0 + 0x7ff;                                            // 0x00133e74: addiu $v0, $v0, 0x7ff
    /* mfhi $v1 */                                              // 0x00133e78
    /* divide: v0 / s0 -> hi:lo */                              // 0x00133e7c: div $zero, $v0, $s0
    v1 = s0 - v1;                                               // 0x00133e80: subu $v1, $s0, $v1
    *(uint32_t*)((s1) + 0x50) = v1;                             // 0x00133e84: sw $v1, 0x50($s1)
    /* mflo $v0 */                                              // 0x00133e88
    /* divide: v1 / s0 -> hi:lo */                              // 0x00133e8c: div $zero, $v1, $s0
    /* mfhi $a0 */                                              // 0x00133e94
    *(uint32_t*)((s1) + 0x50) = a0;                             // 0x00133e98: sw $a0, 0x50($s1)
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00133e9c: lw $a0, 8($s1)
    func_00130468();  // 130468                                // 0x00133ea0: jal 0x130468
    *(uint32_t*)((s1) + 0x8c) = v0;                             // 0x00133ea4: sw $v0, 0x8c($s1)
    a1 = 0x13 << 16;                                            // 0x00133ea8: lui $a1, 0x13
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00133eac: lw $a0, 8($s1)
    a1 = a1 + 0x3778;                                           // 0x00133eb0: addiu $a1, $a1, 0x3778
    func_00130458();  // 130458                                // 0x00133eb4: jal 0x130458
label_0x133ebc:
    func_0012d570();  // 12d570                                // 0x00133ebc: jal 0x12d570
    func_0012d528();  // 12d528                                // 0x00133ec4: jal 0x12d528
    *(uint32_t*)((s1) + 0x90) = v0;                             // 0x00133ed0: sw $v0, 0x90($s1)
    func_0012d408();  // 12d408                                // 0x00133ed4: jal 0x12d408
    func_0012d428();  // 12d428                                // 0x00133ee0: jal 0x12d428
    func_0012d418();  // 12d418                                // 0x00133eec: jal 0x12d418
    a1 = 0x13 << 16;                                            // 0x00133ef4: lui $a1, 0x13
    a1 = a1 + 0x3530;                                           // 0x00133ef8: addiu $a1, $a1, 0x3530
    func_0012d3f8();  // 12d3f8                                // 0x00133f00: jal 0x12d3f8
    goto label_0x133f64;                                        // 0x00133f08: b 0x133f64
    /* nop */                                                   // 0x00133f0c: nop 
label_0x133f10:
    if (a0 == 0) goto label_0x133f24;                           // 0x00133f10: beqz $a0, 0x133f24
    /* nop */                                                   // 0x00133f14: nop 
    a1 = 0x7fff << 16;                                          // 0x00133f18: lui $a1, 0x7fff
    func_00130468();  // 130468                                // 0x00133f1c: jal 0x130468
    a1 = a1 | 0xffff;                                           // 0x00133f20: ori $a1, $a1, 0xffff
label_0x133f24:
    func_0012d4c8();  // 12d4c8                                // 0x00133f24: jal 0x12d4c8
    func_0012d408();  // 12d408                                // 0x00133f30: jal 0x12d408
    func_0012d428();  // 12d428                                // 0x00133f3c: jal 0x12d428
    func_0012d418();  // 12d418                                // 0x00133f48: jal 0x12d418
    a1 = 0x13 << 16;                                            // 0x00133f50: lui $a1, 0x13
    a1 = a1 + 0x39d0;                                           // 0x00133f54: addiu $a1, $a1, 0x39d0
    func_0012d3f8();  // 12d3f8                                // 0x00133f5c: jal 0x12d3f8
label_0x133f64:
    func_0012d450();  // 12d450                                // 0x00133f64: jal 0x12d450
    func_0012d468();  // 12d468                                // 0x00133f70: jal 0x12d468
    func_0012d4c8();  // 12d4c8                                // 0x00133f7c: jal 0x12d4c8
    func_0012d480();  // 12d480                                // 0x00133f88: jal 0x12d480
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00133f90: lw $a0, 0xc($s1)
    func_0012c4f0();  // 12c4f0                                // 0x00133f94: jal 0x12c4f0
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00133f9c: lw $a0, 0xc($s1)
    func_0012c4a0();  // 12c4a0                                // 0x00133fa0: jal 0x12c4a0
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00133fa8: lw $a0, 0xc($s1)
    func_0012c488();  // 12c488                                // 0x00133fac: jal 0x12c488
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00133fb4: lw $a0, 0xc($s1)
    func_0012c598();  // 12c598                                // 0x00133fb8: jal 0x12c598
    func_0012d5b8();  // 12d5b8                                // 0x00133fc0: jal 0x12d5b8
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00133fc4: lw $a0, 4($s1)
    a1 = *(int16_t*)((s1) + 0x40);                              // 0x00133fc8: lh $a1, 0x40($s1)
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00133fcc: lw $a0, 0xc($s1)
    func_0012c4b8();  // 12c4b8                                // 0x00133fd0: jal 0x12c4b8
    a1 = a1 + v0;                                               // 0x00133fd4: addu $a1, $a1, $v0
    a1 = sp + 0x20;                                             // 0x00133fdc: addiu $a1, $sp, 0x20
    func_00132ca8();  // 132ca8                                // 0x00133fe0: jal 0x132ca8
    a2 = sp + 0x24;                                             // 0x00133fe4: addiu $a2, $sp, 0x24
    a1 = local_20;                                              // 0x00133fe8: lw $a1, 0x20($sp)
    if (a1 != 0) goto label_0x133ffc;                           // 0x00133fec: bnez $a1, 0x133ffc
    a2 = local_24;                                              // 0x00133ff0: lw $a2, 0x24($sp)
    if (a2 == 0) goto label_0x134004;                           // 0x00133ff4: beqz $a2, 0x134004
    /* nop */                                                   // 0x00133ff8: nop 
label_0x133ffc:
    func_00132ca0();  // 132ca0                                // 0x00133ffc: jal 0x132ca0
label_0x134004:
    func_00133808();  // 133808                                // 0x00134004: jal 0x133808
    a0 = *(int32_t*)((s1) + 0x74);                              // 0x0013400c: lw $a0, 0x74($s1)
    /* beqzl $a0, 0x134024 */                                   // 0x00134010: beqzl $a0, 0x134024
    func_00122ad0();  // 122ad0                                // 0x00134018: jal 0x122ad0
    func_0012d438();  // 12d438                                // 0x00134024: jal 0x12d438
    s0 = 2;                                                     // 0x00134028: addiu $s0, $zero, 2
    if (v0 != s0) goto label_0x13404c;                          // 0x0013402c: bnel $v0, $s0, 0x13404c
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00134030: lw $a0, 0xc($s1)
    func_0012d6f0();  // 12d6f0                                // 0x00134034: jal 0x12d6f0
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x0013403c: lw $a0, 0xc($s1)
    func_0012c5b8();  // 12c5b8                                // 0x00134040: jal 0x12c5b8
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x00134048: lw $a0, 0xc($s1)
label_0x13404c:
    func_0012c3a8();  // 12c3a8                                // 0x0013404c: jal 0x12c3a8
    a1 = 1;                                                     // 0x00134050: addiu $a1, $zero, 1
    *(uint8_t*)((s1) + 1) = s0;                                 // 0x00134054: sb $s0, 1($s1)
label_0x13405c:
    return;                                                     // 0x00134070: jr $ra
    sp = sp + 0x60;                                             // 0x00134074: addiu $sp, $sp, 0x60
}