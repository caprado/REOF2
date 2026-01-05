void func_00144bf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_b0, local_b8, local_c0;
    
    sp = sp + -0xb0;                                            // 0x00144bf8: addiu $sp, $sp, -0xb0
    v0 = 1;                                                     // 0x00144bfc: addiu $v0, $zero, 1
    local_0 = a3;                                               // 0x00144c3c: sw $a3, 0($sp)
    s6 = local_b0;                                              // 0x00144c40: lw $s6, 0xb0($sp)
    s3 = local_b8;                                              // 0x00144c44: lw $s3, 0xb8($sp)
    if (t1 != v0) goto label_0x144c80;                          // 0x00144c48: bne $t1, $v0, 0x144c80
    fp = local_c0;                                              // 0x00144c4c: lw $fp, 0xc0($sp)
    /* bnezl $t2, 0x144d2c */                                   // 0x00144c50: bnezl $t2, 0x144d2c
    s0 = s0 << 3;                                               // 0x00144c54: sll $s0, $s0, 3
    /* bnezl $s3, 0x144d2c */                                   // 0x00144c58: bnezl $s3, 0x144d2c
    s0 = s0 << 3;                                               // 0x00144c5c: sll $s0, $s0, 3
    func_001456a8();  // 1456a8                                // 0x00144c60: jal 0x1456a8
    a1 = 1;                                                     // 0x00144c64: addiu $a1, $zero, 1
    a0 = local_0;                                               // 0x00144c68: lw $a0, 0($sp)
    v1 = s0 << 2;                                               // 0x00144c6c: sll $v1, $s0, 2
    v1 = v1 + a0;                                               // 0x00144c70: addu $v1, $v1, $a0
    *(uint32_t*)((v1) + 8) = v0;                                // 0x00144c74: sw $v0, 8($v1)
    goto label_0x144d28;                                        // 0x00144c78: b 0x144d28
    *(uint32_t*)(v1) = v0;                                      // 0x00144c7c: sw $v0, 0($v1)
label_0x144c80:
    func_001456a8();  // 1456a8                                // 0x00144c84: jal 0x1456a8
    a1 = 1;                                                     // 0x00144c88: addiu $a1, $zero, 1
    s1 = s0 << 3;                                               // 0x00144c8c: sll $s1, $s0, 3
    v1 = local_0;                                               // 0x00144c90: lw $v1, 0($sp)
    s0 = s0 << 2;                                               // 0x00144c94: sll $s0, $s0, 2
    a1 = s4 + s1;                                               // 0x00144c98: addu $a1, $s4, $s1
    s0 = s0 + v1;                                               // 0x00144ca0: addu $s0, $s0, $v1
    *(uint32_t*)(s0) = v0;                                      // 0x00144ca8: sw $v0, 0($s0)
    func_00144d98();  // 144d98                                // 0x00144cbc: jal 0x144d98
    func_001456a8();  // 1456a8                                // 0x00144cc8: jal 0x1456a8
    a1 = 1;                                                     // 0x00144ccc: addiu $a1, $zero, 1
    s1 = s1 + 0x10;                                             // 0x00144cd0: addiu $s1, $s1, 0x10
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00144cd4: sw $v0, 8($s0)
    a1 = s4 + s1;                                               // 0x00144cd8: addu $a1, $s4, $s1
    return func_00144ee8();  // Tail call                        // 0x00144d20: j 0x144d98
    sp = sp + 0xb0;                                             // 0x00144d24: addiu $sp, $sp, 0xb0
label_0x144d28:
    s0 = s0 << 3;                                               // 0x00144d28: sll $s0, $s0, 3
    s0 = s4 + s0;                                               // 0x00144d30: addu $s0, $s4, $s0
    func_00144d98();  // 144d98                                // 0x00144d4c: jal 0x144d98
    v0 = *(int32_t*)(s0);                                       // 0x00144d54: lw $v0, 0($s0)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00144d58: lw $v1, 4($s0)
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x00144d5c: sw $v0, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x00144d60: sw $v1, 0x14($s0)
    return;                                                     // 0x00144d8c: jr $ra
    sp = sp + 0xb0;                                             // 0x00144d90: addiu $sp, $sp, 0xb0
}