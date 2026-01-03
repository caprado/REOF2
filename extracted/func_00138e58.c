void func_00138e58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00138e58: addiu $sp, $sp, -0x20
    v1 = 0x20 << 16;                                            // 0x00138e5c: lui $v1, 0x20
    v1 = v1 + 0x2a28;                                           // 0x00138e6c: addiu $v1, $v1, 0x2a28
    a0 = 1;                                                     // 0x00138e74: addiu $a0, $zero, 1
    v0 = g_00202a28;  // Global at 0x00202a28                   // 0x00138e78: lw $v0, 0($v1)
    a1 = *(int8_t*)((s0) + 1);                                  // 0x00138e7c: lb $a1, 1($s0)
    v0 = v0 + 1;                                                // 0x00138e80: addiu $v0, $v0, 1
    if (a1 != a0) goto label_0x138ee0;                          // 0x00138e84: bne $a1, $a0, 0x138ee0
    g_00202a28 = v0;  // Global at 0x00202a28                   // 0x00138e88: sw $v0, 0($v1)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00138e8c: lw $v0, 0x14($s0)
    v1 = *(int32_t*)((s0) + 8);                                 // 0x00138e90: lw $v1, 8($s0)
    a0 = g_0fff003d;  // Global at 0x0fff003d                   // 0x00138e94: lw $a0, 0x3c($v0)
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x00138e98: slt $v1, $v1, $a0
    /* beqzl $v1, 0x138ee4 */                                   // 0x00138e9c: beqzl $v1, 0x138ee4
    v0 = *(int32_t*)(s0);                                       // 0x00138ea0: lw $v0, 0($s0)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00138ea4: lw $v0, 0x10($s0)
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00138ea8: lw $a1, 0xc($s0)
    a1 = a1 + v0;                                               // 0x00138eb0: addu $a1, $a1, $v0
    func_00114d18();  // 114d18                                // 0x00138eb4: jal 0x114d18
    a1 = a1 + -1;                                               // 0x00138eb8: addiu $a1, $a1, -1
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x00138ebc: lw $v1, 0x20($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x00138ec0: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00138ec4: lw $a1, 0xc($s0)
    /* call function at address in v1 */                        // 0x00138ec8: jalr $v1
    a2 = *(int32_t*)((s0) + 0x10);                              // 0x00138ecc: lw $a2, 0x10($s0)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00138ed0: lw $v0, 0x14($s0)
    v1 = g_0fff003d;  // Global at 0x0fff003d                   // 0x00138ed4: lw $v1, 0x3c($v0)
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x00138ed8: sb $zero, 1($s0)
    *(uint32_t*)((s0) + 8) = v1;                                // 0x00138edc: sw $v1, 8($s0)
label_0x138ee0:
    v0 = *(int32_t*)(s0);                                       // 0x00138ee0: lw $v0, 0($s0)
    v1 = 0xff << 16;                                            // 0x00138ee4: lui $v1, 0xff
    v1 = v1 | 0xff00;                                           // 0x00138ee8: ori $v1, $v1, 0xff00
    a0 = 1 << 16;                                               // 0x00138eec: lui $a0, 1
    v0 = v0 & v1;                                               // 0x00138ef0: and $v0, $v0, $v1
    if (v0 != a0) goto label_0x138fa8;                          // 0x00138ef4: bnel $v0, $a0, 0x138fa8
    v0 = 0x20 << 16;                                            // 0x00138efc: lui $v0, 0x20
    v1 = 1;                                                     // 0x00138f00: addiu $v1, $zero, 1
    s1 = g_00202a1c;  // Global at 0x00202a1c                   // 0x00138f04: lw $s1, 0x2a1c($v0)
    if (s1 != v1) goto label_0x138fa8;                          // 0x00138f08: bnel $s1, $v1, 0x138fa8
    a2 = *(int32_t*)((s0) + 0x10);                              // 0x00138f10: lw $a2, 0x10($s0)
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x00138f14: lw $a0, 0x2c($s0)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x00138f18: lw $v0, 0x28($s0)
    /* call function at address in v0 */                        // 0x00138f1c: jalr $v0
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00138f20: lw $a1, 0xc($s0)
    v1 = *(int32_t*)((s0) + 8);                                 // 0x00138f24: lw $v1, 8($s0)
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00138f28: lw $v0, 0x14($s0)
    v1 = v1 + 1;                                                // 0x00138f2c: addiu $v1, $v1, 1
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00138f30: lw $a1, 0xc($s0)
    *(uint32_t*)((s0) + 8) = v1;                                // 0x00138f34: sw $v1, 8($s0)
    g_0020003c = v1;  // Global at 0x0020003c                   // 0x00138f38: sw $v1, 0x3c($v0)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00138f40: lw $v0, 0x10($s0)
    a1 = a1 + v0;                                               // 0x00138f44: addu $a1, $a1, $v0
    func_00114bd8();  // 114bd8                                // 0x00138f48: jal 0x114bd8
    a1 = a1 + -1;                                               // 0x00138f4c: addiu $a1, $a1, -1
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00138f50: lw $a1, 0xc($s0)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00138f54: lw $v0, 0x10($s0)
    a1 = a1 + v0;                                               // 0x00138f5c: addu $a1, $a1, $v0
    func_00114d18();  // 114d18                                // 0x00138f60: jal 0x114d18
    a1 = a1 + 0x3f;                                             // 0x00138f64: addiu $a1, $a1, 0x3f
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x00138f68: lw $v1, 0xc($s0)
    v0 = 0xfff << 16;                                           // 0x00138f6c: lui $v0, 0xfff
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x00138f70: lw $a0, 0x18($s0)
    a1 = *(int32_t*)((s0) + 0x1c);                              // 0x00138f74: lw $a1, 0x1c($s0)
    v0 = v0 | 0xffff;                                           // 0x00138f78: ori $v0, $v0, 0xffff
    v1 = v1 & v0;                                               // 0x00138f7c: and $v1, $v1, $v0
    *(uint32_t*)((s0) + 0x34) = a0;                             // 0x00138f80: sw $a0, 0x34($s0)
    *(uint32_t*)((s0) + 0x38) = a1;                             // 0x00138f84: sw $a1, 0x38($s0)
    a1 = 1;                                                     // 0x00138f88: addiu $a1, $zero, 1
    *(uint32_t*)((s0) + 0x30) = v1;                             // 0x00138f8c: sw $v1, 0x30($s0)
    a0 = s0 + 0x30;                                             // 0x00138f90: addiu $a0, $s0, 0x30
    isceSifSetDma();  // 0x1146a0                               // 0x00138f94: jal 0x1146a0
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x00138f98: sw $zero, 0x3c($s0)
    *(uint8_t*)((s0) + 1) = s1;                                 // 0x00138f9c: sb $s1, 1($s0)
    *(uint32_t*)((s0) + 0x40) = v0;                             // 0x00138fa0: sw $v0, 0x40($s0)
label_0x138fa8:
    return;                                                     // 0x00138fb0: jr $ra
    sp = sp + 0x20;                                             // 0x00138fb4: addiu $sp, $sp, 0x20
}