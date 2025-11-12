void func_00131ce8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00131ce8: addiu $sp, $sp, -0x30
    v0 = *(uint8_t*)((s2) + 1);                                 // 0x00131d0c: lbu $v0, 1($s2)
    v1 = v0 << 0x18;                                            // 0x00131d10: sll $v1, $v0, 0x18
    v0 = v0 + -3;                                               // 0x00131d14: addiu $v0, $v0, -3
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00131d18: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x131d70;                           // 0x00131d1c: beqz $v0, 0x131d70
    v1 = v1 >> 0x18;                                            // 0x00131d20: sra $v1, $v1, 0x18
    func_0012d468();  // 0x12d450                                // 0x00131d24: jal 0x12d450
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00131d28: lw $a0, 4($s2)
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00131d2c: lw $a0, 4($s2)
    func_0012d3a8();  // 0x12d3a0                                // 0x00131d30: jal 0x12d3a0
    *(uint32_t*)(s0) = v0;                                      // 0x00131d34: sw $v0, 0($s0)
    a0 = *(int32_t*)((s2) + 0xc);                               // 0x00131d38: lw $a0, 0xc($s2)
    func_0012c408();  // 0x12c3f0                                // 0x00131d3c: jal 0x12c3f0
    func_00132730();  // 0x1326c8                                // 0x00131d4c: jal 0x1326c8
    v1 = *(int32_t*)((s2) + 0xa4);                              // 0x00131d54: lw $v1, 0xa4($s2)
    s1 = s1 + v0;                                               // 0x00131d58: addu $s1, $s1, $v0
    s0 = s0 - s1;                                               // 0x00131d5c: subu $s0, $s0, $s1
    s0 = s0 + v1;                                               // 0x00131d60: addu $s0, $s0, $v1
    goto label_0x131dd8;                                        // 0x00131d64: b 0x131dd8
    *(uint32_t*)(s3) = s0;                                      // 0x00131d68: sw $s0, 0($s3)
    /* nop */                                                   // 0x00131d6c: nop 
label_0x131d70:
    v0 = 5;                                                     // 0x00131d70: addiu $v0, $zero, 5
    if (v1 != v0) goto label_0x131dd0;                          // 0x00131d74: bnel $v1, $v0, 0x131dd0
    v0 = 1;                                                     // 0x00131d78: addiu $v0, $zero, 1
    func_0012d4e0();  // 0x12d4c8                                // 0x00131d7c: jal 0x12d4c8
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00131d80: lw $a0, 4($s2)
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00131d84: lw $a0, 4($s2)
    func_0012d468();  // 0x12d450                                // 0x00131d88: jal 0x12d450
    *(uint32_t*)(s3) = v0;                                      // 0x00131d8c: sw $v0, 0($s3)
    a0 = *(int32_t*)((s2) + 4);                                 // 0x00131d90: lw $a0, 4($s2)
    func_0012d498();  // 0x12d480                                // 0x00131d94: jal 0x12d480
    *(uint32_t*)(s0) = v0;                                      // 0x00131d98: sw $v0, 0($s0)
    v1 = 0x10;                                                  // 0x00131d9c: addiu $v1, $zero, 0x10
    /* divide: v1 / v0 -> hi:lo */                              // 0x00131da0: div $zero, $v1, $v0
    /* beqzl $v0, 0x131dac */                                   // 0x00131da4: beqzl $v0, 0x131dac
    /* break (trap) */                                          // 0x00131da8: break 0, 7
    v0 = *(int32_t*)(s3);                                       // 0x00131dac: lw $v0, 0($s3)
    /* mflo $v1 */                                              // 0x00131db0
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00131db4: mult $ac2, $v0, $v1
    *(uint32_t*)(s3) = v0;                                      // 0x00131db8: sw $v0, 0($s3)
    v1 = *(int32_t*)((s2) + 0xa4);                              // 0x00131dbc: lw $v1, 0xa4($s2)
    v0 = v0 + v1;                                               // 0x00131dc0: addu $v0, $v0, $v1
    goto label_0x131dd8;                                        // 0x00131dc4: b 0x131dd8
    *(uint32_t*)(s3) = v0;                                      // 0x00131dc8: sw $v0, 0($s3)
    /* nop */                                                   // 0x00131dcc: nop 
label_0x131dd0:
    *(uint32_t*)(s3) = 0;                                       // 0x00131dd0: sw $zero, 0($s3)
    *(uint32_t*)(s0) = v0;                                      // 0x00131dd4: sw $v0, 0($s0)
label_0x131dd8:
    v1 = *(int32_t*)((s2) + 0x88);                              // 0x00131dd8: lw $v1, 0x88($s2)
    v0 = *(int32_t*)(s3);                                       // 0x00131ddc: lw $v0, 0($s3)
    v0 = v0 + v1;                                               // 0x00131de4: addu $v0, $v0, $v1
    *(uint32_t*)(s3) = v0;                                      // 0x00131dec: sw $v0, 0($s3)
    return;                                                     // 0x00131dfc: jr $ra
    sp = sp + 0x30;                                             // 0x00131e00: addiu $sp, $sp, 0x30
}