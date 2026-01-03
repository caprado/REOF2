void func_00107e00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00107e00: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((s0) + 0x4c);                              // 0x00107e18: lw $v1, 0x4c($s0)
    if (v1 != 0) goto label_0x107e38;                           // 0x00107e1c: bnez $v1, 0x107e38
    a1 = 4;                                                     // 0x00107e20: addiu $a1, $zero, 4
    func_00103940();  // 103940                                // 0x00107e24: jal 0x103940
    a2 = 0x10;                                                  // 0x00107e28: addiu $a2, $zero, 0x10
    if (v1 == 0) goto label_0x107e90;                           // 0x00107e30: beqz $v1, 0x107e90
    *(uint32_t*)((s0) + 0x4c) = v1;                             // 0x00107e34: sw $v1, 0x4c($s0)
label_0x107e38:
    v0 = s1 << 2;                                               // 0x00107e38: sll $v0, $s1, 2
    a0 = v0 + v1;                                               // 0x00107e3c: addu $a0, $v0, $v1
    v1 = *(int32_t*)(a0);                                       // 0x00107e40: lw $v1, 0($a0)
    if (v1 == 0) goto label_0x107e58;                           // 0x00107e44: beqz $v1, 0x107e58
    v0 = 1;                                                     // 0x00107e48: addiu $v0, $zero, 1
    v0 = *(int32_t*)(v1);                                       // 0x00107e4c: lw $v0, 0($v1)
    goto label_0x107e84;                                        // 0x00107e50: b 0x107e84
    *(uint32_t*)(a0) = v0;                                      // 0x00107e54: sw $v0, 0($a0)
label_0x107e58:
    s0 = v0 << s1;                                              // 0x00107e5c: sllv $s0, $v0, $s1
    a1 = 1;                                                     // 0x00107e60: addiu $a1, $zero, 1
    a2 = s0 << 2;                                               // 0x00107e64: sll $a2, $s0, 2
    func_00103940();  // 103940                                // 0x00107e68: jal 0x103940
    a2 = a2 + 0x14;                                             // 0x00107e6c: addiu $a2, $a2, 0x14
    /* beqzl $v1, 0x107e94 */                                   // 0x00107e74: beqzl $v1, 0x107e94
    *(uint32_t*)((v1) + 4) = s1;                                // 0x00107e7c: sw $s1, 4($v1)
    *(uint32_t*)((v1) + 8) = s0;                                // 0x00107e80: sw $s0, 8($v1)
label_0x107e84:
    *(uint32_t*)((v1) + 0x10) = 0;                              // 0x00107e84: sw $zero, 0x10($v1)
    *(uint32_t*)((v1) + 0xc) = 0;                               // 0x00107e8c: sw $zero, 0xc($v1)
label_0x107e90:
    return;                                                     // 0x00107e9c: jr $ra
    sp = sp + 0x20;                                             // 0x00107ea0: addiu $sp, $sp, 0x20
}