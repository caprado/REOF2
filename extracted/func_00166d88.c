void func_00166d88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00166d88: addiu $sp, $sp, -0x10
    goto label_0x166db8;                                        // 0x00166d98: j 0x166db8
    sp = sp + 0x10;                                             // 0x00166d9c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00166da0: addiu $sp, $sp, -0x10
    a3 = 1;                                                     // 0x00166da4: addiu $a3, $zero, 1
    goto label_0x166db8;                                        // 0x00166db0: j 0x166db8
    sp = sp + 0x10;                                             // 0x00166db4: addiu $sp, $sp, 0x10
label_0x166db8:
    sp = sp + -0x60;                                            // 0x00166db8: addiu $sp, $sp, -0x60
    v1 = s5 << 3;                                               // 0x00166dc8: sll $v1, $s5, 3
    v1 = v1 - s5;                                               // 0x00166dd0: subu $v1, $v1, $s5
    v1 = v1 << 2;                                               // 0x00166dd8: sll $v1, $v1, 2
    a0 = s6 + 0x1140;                                           // 0x00166ddc: addiu $a0, $s6, 0x1140
    v1 = v1 + s5;                                               // 0x00166de0: addu $v1, $v1, $s5
    v1 = v1 << 2;                                               // 0x00166de8: sll $v1, $v1, 2
    a0 = a0 + v1;                                               // 0x00166e04: addu $a0, $a0, $v1
    s2 = a0 + 0x10;                                             // 0x00166e0c: addiu $s2, $a0, 0x10
    if (s3 == 0) goto label_0x166ee0;                           // 0x00166e18: beqz $s3, 0x166ee0
    s1 = *(int32_t*)((s2) + 4);                                 // 0x00166e1c: lw $s1, 4($s2)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00166e20: lw $v0, 4($a0)
    if (v0 == 0) goto label_0x166ee0;                           // 0x00166e24: beqz $v0, 0x166ee0
    /* beqzl $s1, 0x166ee4 */                                   // 0x00166e2c: beqzl $s1, 0x166ee4
    func_00169ba0();  // 0x169b88                                // 0x00166e34: jal 0x169b88
    func_001670f0();  // 0x167098                                // 0x00166e44: jal 0x167098
    v0 = (v1 < s3) ? 1 : 0;                                     // 0x00166e50: slt $v0, $v1, $s3
    /* beqzl $v0, 0x166e94 */                                   // 0x00166e54: beqzl $v0, 0x166e94
    v0 = 1;                                                     // 0x00166e58: addiu $v0, $zero, 1
    s0 = s3 - v1;                                               // 0x00166e5c: subu $s0, $s3, $v1
    func_001670f0();  // 0x167098                                // 0x00166e68: jal 0x167098
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00166e70: slt $v0, $v0, $s0
    /* beqzl $v0, 0x166e94 */                                   // 0x00166e74: beqzl $v0, 0x166e94
    v0 = 1;                                                     // 0x00166e78: addiu $v0, $zero, 1
    a1 = 0xff00 << 16;                                          // 0x00166e7c: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x00166e84: jal 0x1698d0
    a1 = a1 | 0x40b;                                            // 0x00166e88: ori $a1, $a1, 0x40b
    v0 = 1;                                                     // 0x00166e90: addiu $v0, $zero, 1
    if (s4 != v0) goto label_0x166ec0;                          // 0x00166e94: bnel $s4, $v0, 0x166ec0
    v0 = *(int32_t*)((s2) + 0x20);                              // 0x00166e98: lw $v0, 0x20($s2)
    if (s5 != s4) goto label_0x166eb0;                          // 0x00166e9c: bnel $s5, $s4, 0x166eb0
    v0 = *(int32_t*)((s2) + 0x24);                              // 0x00166ea0: lw $v0, 0x24($s2)
    func_00166fa0();  // 0x166f10                                // 0x00166ea4: jal 0x166f10
    v0 = *(int32_t*)((s2) + 0x24);                              // 0x00166eac: lw $v0, 0x24($s2)
label_0x166eb0:
    if (v0 < 0) goto label_0x166ecc;                            // 0x00166eb0: bltz $v0, 0x166ecc
    v0 = v0 + s3;                                               // 0x00166eb4: addu $v0, $v0, $s3
    goto label_0x166ecc;                                        // 0x00166eb8: b 0x166ecc
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x00166ebc: sw $v0, 0x24($s2)
label_0x166ec0:
    if (v0 < 0) goto label_0x166ecc;                            // 0x00166ec0: bltz $v0, 0x166ecc
    v0 = v0 + s3;                                               // 0x00166ec4: addu $v0, $v0, $s3
    *(uint32_t*)((s2) + 0x20) = v0;                             // 0x00166ec8: sw $v0, 0x20($s2)
label_0x166ecc:
    v0 = 1;                                                     // 0x00166ecc: addiu $v0, $zero, 1
    func_00169bc8();  // 0x169ba0                                // 0x00166ed4: jal 0x169ba0
    *(uint32_t*)((s6) + 0x44) = v0;                             // 0x00166ed8: sw $v0, 0x44($s6)
label_0x166ee0:
    return;                                                     // 0x00166f04: jr $ra
    sp = sp + 0x60;                                             // 0x00166f08: addiu $sp, $sp, 0x60
}