void func_00170b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00170b20: addiu $sp, $sp, -0x50
    PollSema();  // 0x114320                                    // 0x00170b50: jal 0x114320
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x00170b54: lw $a0, 0x40($s1)
    v1 = *(int32_t*)((s1) + 0x44);                              // 0x00170b58: lw $v1, 0x44($s1)
    if (v1 != 0) goto label_0x170b78;                           // 0x00170b5c: bnez $v1, 0x170b78
    /* nop */                                                   // 0x00170b60: nop 
    iSignalSema();  // 0x114300                                 // 0x00170b64: jal 0x114300
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x00170b68: lw $a0, 0x40($s1)
    goto label_0x170cf0;                                        // 0x00170b6c: b 0x170cf0
    /* nop */                                                   // 0x00170b74: nop 
label_0x170b78:
    func_00170780();  // 0x170718                                // 0x00170b78: jal 0x170718
    a0 = 5;                                                     // 0x00170b7c: addiu $a0, $zero, 5
    v0 = 0x1000 << 16;                                          // 0x00170b80: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x00170b84: lui $v1, 0x1000
    v0 = v0 | 0xb400;                                           // 0x00170b88: ori $v0, $v0, 0xb400
    v1 = v1 | 0xb410;                                           // 0x00170b8c: ori $v1, $v1, 0xb410
    s5 = g_10000000;  // Global at 0x10000000                   // 0x00170b90: lw $s5, 0($v0)
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00170b94: lw $a1, 0($v1)
    func_001706b0();  // 0x170660                                // 0x00170b98: jal 0x170660
    a2 = *(int32_t*)((s1) + 8);                                 // 0x00170ba0: lw $a2, 8($s1)
    v1 = *(int32_t*)((s1) + 0xc);                               // 0x00170ba4: lw $v1, 0xc($s1)
    v0 = v0 + a2;                                               // 0x00170ba8: addu $v0, $v0, $a2
    /* beqzl $a2, 0x170bb4 */                                   // 0x00170bac: beqzl $a2, 0x170bb4
    /* break (trap) */                                          // 0x00170bb0: break 0, 7
    v0 = v0 - v1;                                               // 0x00170bb4: subu $v0, $v0, $v1
    /* divide: v0 / a2 -> hi:lo */                              // 0x00170bb8: div $zero, $v0, $a2
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x00170bbc: lw $v0, 0x10($s1)
    /* mfhi $a0 */                                              // 0x00170bc0
    v1 = v1 + a0;                                               // 0x00170bc4: addu $v1, $v1, $a0
    v0 = v0 - a0;                                               // 0x00170bc8: subu $v0, $v0, $a0
    /* divide: v1 / a2 -> hi:lo */                              // 0x00170bcc: div $zero, $v1, $a2
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x00170bd0: sw $v0, 0x10($s1)
    /* mfhi $a1 */                                              // 0x00170bd4
    a3 = a1 + v0;                                               // 0x00170bd8: addu $a3, $a1, $v0
    *(uint32_t*)((s1) + 0xc) = a1;                              // 0x00170bdc: sw $a1, 0xc($s1)
    /* divide: a3 / a2 -> hi:lo */                              // 0x00170be0: div $zero, $a3, $a2
    a0 = *(int32_t*)((s1) + 0x14);                              // 0x00170be4: lw $a0, 0x14($s1)
    v1 = (a0 < 0) ? 1 : 0;                                      // 0x00170be8: slti $v1, $a0, 0
    a1 = a0 + 0x7ff;                                            // 0x00170bec: addiu $a1, $a0, 0x7ff
    if (v1 != 0) v0 = a1;                                       // 0x00170bf4: movn $v0, $a1, $v1
    s3 = v0 >> 0xb;                                             // 0x00170bf8: sra $s3, $v0, 0xb
    v1 = s3 << 0xb;                                             // 0x00170bfc: sll $v1, $s3, 0xb
    a0 = a0 - v1;                                               // 0x00170c00: subu $a0, $a0, $v1
    /* mfhi $s0 */                                              // 0x00170c04
    if (s3 <= 0) goto label_0x170c50;                           // 0x00170c08: blez $s3, 0x170c50
    *(uint32_t*)((s1) + 0x14) = a0;                             // 0x00170c0c: sw $a0, 0x14($s1)
    v0 = a3 + a2;                                               // 0x00170c10: addu $v0, $a3, $a2
    a3 = 0x80;                                                  // 0x00170c14: addiu $a3, $zero, 0x80
    v0 = v0 + -1;                                               // 0x00170c18: addiu $v0, $v0, -1
    /* beqzl $a2, 0x170c24 */                                   // 0x00170c1c: beqzl $a2, 0x170c24
    /* break (trap) */                                          // 0x00170c20: break 0, 7
    /* divide: v0 / a2 -> hi:lo */                              // 0x00170c24: div $zero, $v0, $a2
    a2 = 3;                                                     // 0x00170c28: addiu $a2, $zero, 3
    t0 = *(int32_t*)((s1) + 4);                                 // 0x00170c2c: lw $t0, 4($s1)
    s7 = 1;                                                     // 0x00170c30: addiu $s7, $zero, 1
    v1 = *(int32_t*)(s1);                                       // 0x00170c34: lw $v1, 0($s1)
    /* mfhi $a0 */                                              // 0x00170c38
    a1 = a0 << 0xb;                                             // 0x00170c3c: sll $a1, $a0, 0xb
    a0 = a0 << 4;                                               // 0x00170c40: sll $a0, $a0, 4
    a0 = t0 + a0;                                               // 0x00170c44: addu $a0, $t0, $a0
    func_001707a8();  // 0x170780                                // 0x00170c48: jal 0x170780
    a1 = v1 + a1;                                               // 0x00170c4c: addu $a1, $v1, $a1
label_0x170c50:
    if (s3 <= 0) goto label_0x170cb4;                           // 0x00170c50: blez $s3, 0x170cb4
    s4 = s3 + -1;                                               // 0x00170c58: addiu $s4, $s3, -1
    s6 = 3;                                                     // 0x00170c5c: addiu $s6, $zero, 3
label_0x170c60:
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00170c60: lw $v1, 4($s1)
    a3 = s2 ^ s4;                                               // 0x00170c64: xor $a3, $s2, $s4
    v0 = *(int32_t*)(s1);                                       // 0x00170c68: lw $v0, 0($s1)
    a0 = s0 << 4;                                               // 0x00170c6c: sll $a0, $s0, 4
    a1 = s0 << 0xb;                                             // 0x00170c70: sll $a1, $s0, 0xb
    a0 = v1 + a0;                                               // 0x00170c78: addu $a0, $v1, $a0
    a1 = v0 + a1;                                               // 0x00170c7c: addu $a1, $v0, $a1
    if (a3 != 0) a2 = s6;                                       // 0x00170c80: movn $a2, $s6, $a3
    func_001707a8();  // 0x170780                                // 0x00170c84: jal 0x170780
    a3 = 0x80;                                                  // 0x00170c88: addiu $a3, $zero, 0x80
    v1 = s0 + 1;                                                // 0x00170c8c: addiu $v1, $s0, 1
    v0 = *(int32_t*)((s1) + 8);                                 // 0x00170c90: lw $v0, 8($s1)
    s2 = s2 + 1;                                                // 0x00170c94: addiu $s2, $s2, 1
    a1 = (s2 < s3) ? 1 : 0;                                     // 0x00170c98: slt $a1, $s2, $s3
    /* divide: v1 / v0 -> hi:lo */                              // 0x00170c9c: div $zero, $v1, $v0
    /* beqzl $v0, 0x170ca8 */                                   // 0x00170ca0: beqzl $v0, 0x170ca8
    /* break (trap) */                                          // 0x00170ca4: break 0, 7
    /* mfhi $a0 */                                              // 0x00170ca8
    if (a1 != 0) goto label_0x170c60;                           // 0x00170cac: bnez $a1, 0x170c60
label_0x170cb4:
    v0 = *(int32_t*)((s1) + 0x10);                              // 0x00170cb4: lw $v0, 0x10($s1)
    v0 = v0 + s3;                                               // 0x00170cb8: addu $v0, $v0, $s3
    if (v0 == 0) goto label_0x170ce4;                           // 0x00170cbc: beqz $v0, 0x170ce4
    *(uint32_t*)((s1) + 0x10) = v0;                             // 0x00170cc0: sw $v0, 0x10($s1)
    if (s7 == 0) goto label_0x170cdc;                           // 0x00170cc4: beqz $s7, 0x170cdc
    v0 = 0xfff << 16;                                           // 0x00170cc8: lui $v0, 0xfff
    v1 = 0x3000 << 16;                                          // 0x00170ccc: lui $v1, 0x3000
    v0 = v0 | 0xffff;                                           // 0x00170cd0: ori $v0, $v0, 0xffff
    v0 = s5 & v0;                                               // 0x00170cd4: and $v0, $s5, $v0
    s5 = v0 | v1;                                               // 0x00170cd8: or $s5, $v0, $v1
label_0x170cdc:
    func_00170780();  // 0x170718                                // 0x00170cdc: jal 0x170718
    a0 = s5 | 0x100;                                            // 0x00170ce0: ori $a0, $s5, 0x100
label_0x170ce4:
    iSignalSema();  // 0x114300                                 // 0x00170ce4: jal 0x114300
    a0 = *(int32_t*)((s1) + 0x40);                              // 0x00170ce8: lw $a0, 0x40($s1)
    v0 = 1;                                                     // 0x00170cec: addiu $v0, $zero, 1
label_0x170cf0:
    return;                                                     // 0x00170d14: jr $ra
    sp = sp + 0x50;                                             // 0x00170d18: addiu $sp, $sp, 0x50
}