void func_00182a70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = -1;                                                    // 0x00182a74: addiu $v0, $zero, -1
    sp = sp + -0x90;                                            // 0x00182a78: addiu $sp, $sp, -0x90
    v0 = (v0 < a3) ? 1 : 0;                                     // 0x00182a7c: slt $v0, $v0, $a3
    v1 = a3 + 0xff;                                             // 0x00182a80: addiu $v1, $a3, 0xff
    if (v0 != 0) v1 = a3;                                       // 0x00182a88: movn $v1, $a3, $v0
    s2 = v1 >> 8;                                               // 0x00182a90: sra $s2, $v1, 8
    v0 = s2 << 8;                                               // 0x00182a9c: sll $v0, $s2, 8
    s2 = a3 - v0;                                               // 0x00182ab0: subu $s2, $a3, $v0
    func_001828c0();  // 1828c0                                // 0x00182abc: jal 0x1828c0
    v1 = *(int32_t*)(s3);                                       // 0x00182ac4: lw $v1, 0($s3)
    if (v1 != 0) goto label_0x182b5c;                           // 0x00182acc: bnez $v1, 0x182b5c
    v0 = 0x898;                                                 // 0x00182ad4: addiu $v0, $zero, 0x898
    s7 = 0x27 << 16;                                            // 0x00182ad8: lui $s7, 0x27
    s6 = s7 + 0x72c8;                                           // 0x00182ae0: addiu $s6, $s7, 0x72c8
    v0 = s6 + 0x800;                                            // 0x00182ae4: addiu $v0, $s6, 0x800
    s5 = s4 + v0;                                               // 0x00182ae8: addu $s5, $s4, $v0
    v1 = *(int32_t*)(s5);                                       // 0x00182aec: lw $v1, 0($s5)
    if (v1 == s0) goto label_0x182b3c;                          // 0x00182af0: beq $v1, $s0, 0x182b3c
    v1 = 0x898;                                                 // 0x00182af4: addiu $v1, $zero, 0x898
    func_001829e0();  // 1829e0                                // 0x00182af8: jal 0x1829e0
    if (v0 == 0) goto label_0x182b24;                           // 0x00182b00: beqz $v0, 0x182b24
    a1 = s6 + 0x400;                                            // 0x00182b04: addiu $a1, $s6, 0x400
    a1 = s4 + a1;                                               // 0x00182b0c: addu $a1, $s4, $a1
    func_00186dc8();  // 186dc8                                // 0x00182b14: jal 0x186dc8
    a3 = 1;                                                     // 0x00182b18: addiu $a3, $zero, 1
    /* bnezl $v0, 0x182b38 */                                   // 0x00182b1c: bnezl $v0, 0x182b38
    *(uint32_t*)(s5) = s0;                                      // 0x00182b20: sw $s0, 0($s5)
label_0x182b24:
    v1 = 0x8101 << 16;                                          // 0x00182b24: lui $v1, 0x8101
    v1 = v1 | 0x6f;                                             // 0x00182b2c: ori $v1, $v1, 0x6f
    goto label_0x182b5c;                                        // 0x00182b30: b 0x182b5c
    *(uint32_t*)(s3) = v1;                                      // 0x00182b34: sw $v1, 0($s3)
    v1 = 0x898;                                                 // 0x00182b38: addiu $v1, $zero, 0x898
label_0x182b3c:
    a0 = s2 << 2;                                               // 0x00182b3c: sll $a0, $s2, 2
    /* multiply: s1 * v1 -> hi:lo */                            // 0x00182b40: mult $ac3, $s1, $v1
    v0 = s7 + 0x72c8;                                           // 0x00182b44: addiu $v0, $s7, 0x72c8
    a0 = a0 + v1;                                               // 0x00182b48: addu $a0, $a0, $v1
    v0 = v0 + a0;                                               // 0x00182b4c: addu $v0, $v0, $a0
    s0 = g_002776c8;  // Global at 0x002776c8                   // 0x00182b50: lw $s0, 0x400($v0)
    *(uint32_t*)(s3) = 0;                                       // 0x00182b54: sw $zero, 0($s3)
label_0x182b5c:
    return;                                                     // 0x00182b80: jr $ra
    sp = sp + 0x90;                                             // 0x00182b84: addiu $sp, $sp, 0x90
}