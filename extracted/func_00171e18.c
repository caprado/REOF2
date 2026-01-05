void func_00171e18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171e18: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x00171e20: addiu $v0, $zero, 1
    if (a2 == v0) goto label_0x171e60;                          // 0x00171e2c: beq $a2, $v0, 0x171e60
    /* beqzl $a2, 0x171e78 */                                   // 0x00171e34: beqzl $a2, 0x171e78
    v0 = *(int32_t*)((v1) + 0x54);                              // 0x00171e38: lw $v0, 0x54($v1)
    v0 = 2;                                                     // 0x00171e3c: addiu $v0, $zero, 2
    if (a2 != v0) goto label_0x171e98;                          // 0x00171e40: bne $a2, $v0, 0x171e98
    v1 = *(int32_t*)((v1) + 0x48);                              // 0x00171e48: lw $v1, 0x48($v1)
    v0 = 4;                                                     // 0x00171e4c: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x171e9c;                          // 0x00171e50: bne $v1, $v0, 0x171e9c
    goto label_0x171e88;                                        // 0x00171e58: b 0x171e88
    /* nop */                                                   // 0x00171e5c: nop 
label_0x171e60:
    v0 = *(int32_t*)((v1) + 0x54);                              // 0x00171e60: lw $v0, 0x54($v1)
    v0 = v0 + 1;                                                // 0x00171e64: addiu $v0, $v0, 1
    if (v0 != a2) goto label_0x171e94;                          // 0x00171e68: bne $v0, $a2, 0x171e94
    *(uint32_t*)((v1) + 0x54) = v0;                             // 0x00171e6c: sw $v0, 0x54($v1)
    goto label_0x171e88;                                        // 0x00171e70: b 0x171e88
    /* nop */                                                   // 0x00171e74: nop 
    v0 = v0 + -1;                                               // 0x00171e78: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x171e94;                           // 0x00171e7c: bnez $v0, 0x171e94
    *(uint32_t*)((v1) + 0x54) = v0;                             // 0x00171e80: sw $v0, 0x54($v1)
label_0x171e88:
    func_00171ea8();  // 171ea8                                // 0x00171e88: jal 0x171ea8
    /* nop */                                                   // 0x00171e8c: nop 
label_0x171e94:
label_0x171e98:
label_0x171e9c:
    return;                                                     // 0x00171e9c: jr $ra
    sp = sp + 0x10;                                             // 0x00171ea0: addiu $sp, $sp, 0x10
}