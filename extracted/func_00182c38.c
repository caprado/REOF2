void func_00182c38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -1;                                                    // 0x00182c38: addiu $v0, $zero, -1
    sp = sp + -0xa0;                                            // 0x00182c3c: addiu $sp, $sp, -0xa0
    v0 = (v0 < a1) ? 1 : 0;                                     // 0x00182c40: slt $v0, $v0, $a1
    v1 = a1 + 0xff;                                             // 0x00182c44: addiu $v1, $a1, 0xff
    if (v0 != 0) v1 = a1;                                       // 0x00182c48: movn $v1, $a1, $v0
    s3 = v1 >> 8;                                               // 0x00182c50: sra $s3, $v1, 8
    v0 = s3 << 8;                                               // 0x00182c5c: sll $v0, $s3, 8
    s3 = a1 - v0;                                               // 0x00182c74: subu $s3, $a1, $v0
    func_001828c0();  // 1828c0                                // 0x00182c8c: jal 0x1828c0
    v0 = *(int32_t*)(s4);                                       // 0x00182c98: lw $v0, 0($s4)
    if (v0 != 0) goto label_0x182d38;                           // 0x00182c9c: bnez $v0, 0x182d38
    v0 = 0x898;                                                 // 0x00182ca4: addiu $v0, $zero, 0x898
    s7 = 0x27 << 16;                                            // 0x00182ca8: lui $s7, 0x27
    s6 = s7 + 0x72c8;                                           // 0x00182cb0: addiu $s6, $s7, 0x72c8
    v0 = s6 + 0x800;                                            // 0x00182cb4: addiu $v0, $s6, 0x800
    s5 = s2 + v0;                                               // 0x00182cb8: addu $s5, $s2, $v0
    v1 = *(int32_t*)(s5);                                       // 0x00182cbc: lw $v1, 0($s5)
    if (v1 == s1) goto label_0x182d0c;                          // 0x00182cc0: beq $v1, $s1, 0x182d0c
    a0 = 0x898;                                                 // 0x00182cc4: addiu $a0, $zero, 0x898
    func_001829e0();  // 1829e0                                // 0x00182cc8: jal 0x1829e0
    if (v0 == 0) goto label_0x182cf4;                           // 0x00182cd0: beqz $v0, 0x182cf4
    a1 = s6 + 0x400;                                            // 0x00182cd4: addiu $a1, $s6, 0x400
    a1 = s2 + a1;                                               // 0x00182cdc: addu $a1, $s2, $a1
    func_00186dc8();  // 186dc8                                // 0x00182ce4: jal 0x186dc8
    a3 = 1;                                                     // 0x00182ce8: addiu $a3, $zero, 1
    /* bnezl $v0, 0x182d08 */                                   // 0x00182cec: bnezl $v0, 0x182d08
    *(uint32_t*)(s5) = s1;                                      // 0x00182cf0: sw $s1, 0($s5)
label_0x182cf4:
    v1 = 0x8101 << 16;                                          // 0x00182cf4: lui $v1, 0x8101
    v1 = v1 | 0x6f;                                             // 0x00182cfc: ori $v1, $v1, 0x6f
    goto label_0x182d38;                                        // 0x00182d00: b 0x182d38
    *(uint32_t*)(s4) = v1;                                      // 0x00182d04: sw $v1, 0($s4)
    a0 = 0x898;                                                 // 0x00182d08: addiu $a0, $zero, 0x898
label_0x182d0c:
    a1 = s3 << 2;                                               // 0x00182d0c: sll $a1, $s3, 2
    v1 = s7 + 0x72c8;                                           // 0x00182d14: addiu $v1, $s7, 0x72c8
    a2 = 1;                                                     // 0x00182d18: addiu $a2, $zero, 1
    v0 = 1;                                                     // 0x00182d1c: addiu $v0, $zero, 1
    a1 = a1 + a0;                                               // 0x00182d20: addu $a1, $a1, $a0
    a0 = v1 + a0;                                               // 0x00182d24: addu $a0, $v1, $a0
    v1 = v1 + a1;                                               // 0x00182d28: addu $v1, $v1, $a1
    g_002776c8 = fp;  // Global at 0x002776c8                   // 0x00182d2c: sw $fp, 0x400($v1)
    *(uint32_t*)((a0) + 0x894) = a2;                            // 0x00182d30: sw $a2, 0x894($a0)
    *(uint32_t*)(s4) = 0;                                       // 0x00182d34: sw $zero, 0($s4)
label_0x182d38:
    return;                                                     // 0x00182d60: jr $ra
    sp = sp + 0xa0;                                             // 0x00182d64: addiu $sp, $sp, 0xa0
}