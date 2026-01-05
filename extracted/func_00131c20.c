void func_00131c20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00131c20: addiu $sp, $sp, -0x20
    v0 = *(uint8_t*)((s0) + 1);                                 // 0x00131c40: lbu $v0, 1($s0)
    v1 = v0 << 0x18;                                            // 0x00131c44: sll $v1, $v0, 0x18
    v0 = v0 + -3;                                               // 0x00131c48: addiu $v0, $v0, -3
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00131c4c: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x131c68;                           // 0x00131c50: beqz $v0, 0x131c68
    v1 = v1 >> 0x18;                                            // 0x00131c54: sra $v1, $v1, 0x18
    func_0012c3d8();  // 12c3d8                                // 0x00131c58: jal 0x12c3d8
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00131c5c: lw $a0, 0xc($s0)
    goto label_0x131cc4;                                        // 0x00131c60: b 0x131cc4
    v1 = *(int32_t*)((s0) + 0x88);                              // 0x00131c64: lw $v1, 0x88($s0)
label_0x131c68:
    v0 = 5;                                                     // 0x00131c68: addiu $v0, $zero, 5
    if (v1 != v0) goto label_0x131cb8;                          // 0x00131c6c: bnel $v1, $v0, 0x131cb8
    v0 = 1;                                                     // 0x00131c70: addiu $v0, $zero, 1
    func_0012d4c8();  // 12d4c8                                // 0x00131c74: jal 0x12d4c8
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00131c78: lw $a0, 4($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00131c7c: lw $a0, 4($s0)
    func_0012d450();  // 12d450                                // 0x00131c80: jal 0x12d450
    *(uint32_t*)(s1) = v0;                                      // 0x00131c84: sw $v0, 0($s1)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x00131c88: lw $a0, 4($s0)
    func_0012d480();  // 12d480                                // 0x00131c8c: jal 0x12d480
    *(uint32_t*)(s2) = v0;                                      // 0x00131c90: sw $v0, 0($s2)
    v1 = 0x10;                                                  // 0x00131c94: addiu $v1, $zero, 0x10
    /* divide: v1 / v0 -> hi:lo */                              // 0x00131c98: div $zero, $v1, $v0
    /* beqzl $v0, 0x131ca4 */                                   // 0x00131c9c: beqzl $v0, 0x131ca4
    /* break (trap) */                                          // 0x00131ca0: break 0, 7
    v0 = *(int32_t*)(s1);                                       // 0x00131ca4: lw $v0, 0($s1)
    /* mflo $v1 */                                              // 0x00131ca8
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00131cac: mult $ac2, $v0, $v1
    goto label_0x131cc0;                                        // 0x00131cb0: b 0x131cc0
    *(uint32_t*)(s1) = v0;                                      // 0x00131cb4: sw $v0, 0($s1)
label_0x131cb8:
    *(uint32_t*)(s1) = 0;                                       // 0x00131cb8: sw $zero, 0($s1)
    *(uint32_t*)(s2) = v0;                                      // 0x00131cbc: sw $v0, 0($s2)
label_0x131cc0:
    v1 = *(int32_t*)((s0) + 0x88);                              // 0x00131cc0: lw $v1, 0x88($s0)
label_0x131cc4:
    v0 = *(int32_t*)(s1);                                       // 0x00131cc4: lw $v0, 0($s1)
    v0 = v0 + v1;                                               // 0x00131ccc: addu $v0, $v0, $v1
    *(uint32_t*)(s1) = v0;                                      // 0x00131cd4: sw $v0, 0($s1)
    return;                                                     // 0x00131ce0: jr $ra
    sp = sp + 0x20;                                             // 0x00131ce4: addiu $sp, $sp, 0x20
}