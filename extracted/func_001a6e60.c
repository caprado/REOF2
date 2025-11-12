void func_001a6e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a6e60: lui $at, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a6e64: lui $v1, 0x2a
    t1 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a6e68: lw $t1, 0xf70($at)
    v1 = v1 + 0xf80;                                            // 0x001a6e6c: addiu $v1, $v1, 0xf80
    v0 = t1 << 1;                                               // 0x001a6e70: sll $v0, $t1, 1
    v0 = v0 + t1;                                               // 0x001a6e74: addu $v0, $v0, $t1
    v0 = v0 << 2;                                               // 0x001a6e78: sll $v0, $v0, 2
    v1 = v1 + v0;                                               // 0x001a6e7c: addu $v1, $v1, $v0
    t1 = g_002a0f80;  // Global at 0x002a0f80                   // 0x001a6e80: lw $t1, 0($v1)
    if (t1 < 0) goto label_0x1a6e94;                            // 0x001a6e84: bltz $t1, 0x1a6e94
    goto label_0x1a6f60;                                        // 0x001a6e8c: b 0x1a6f60
    v0 = -1;                                                    // 0x001a6e90: addiu $v0, $zero, -1
label_0x1a6e94:
    at = 0x2a << 16;                                            // 0x001a6e94: lui $at, 0x2a
    t2 = (a0 < 0) ? 1 : 0;                                      // 0x001a6ea4: slt $t2, $a0, $zero
    t2 = t2 ^ 1;                                                // 0x001a6eac: xori $t2, $t2, 1
    t1 = (a0 < 0) ? 1 : 0;                                      // 0x001a6eb4: slt $t1, $a0, $zero
    t1 = t1 ^ 1;                                                // 0x001a6eb8: xori $t1, $t1, 1
    a0 = t2 & 1;                                                // 0x001a6ebc: andi $a0, $t2, 1
    t1 = t1 & 1;                                                // 0x001a6ec0: andi $t1, $t1, 1
    a0 = a0 << 1;                                               // 0x001a6ec4: sll $a0, $a0, 1
    t4 = t1 | a0;                                               // 0x001a6ec8: or $t4, $t1, $a0
    t1 = (a0 < 0) ? 1 : 0;                                      // 0x001a6ed4: slt $t1, $a0, $zero
    t1 = t1 ^ 1;                                                // 0x001a6ed8: xori $t1, $t1, 1
    a0 = 0x2a << 16;                                            // 0x001a6edc: lui $a0, 0x2a
    t1 = t1 << 2;                                               // 0x001a6ee0: sll $t1, $t1, 2
    a0 = a0 + 0xf84;                                            // 0x001a6ee4: addiu $a0, $a0, 0xf84
    t1 = t1 | t4;                                               // 0x001a6ee8: or $t1, $t1, $t4
    t2 = a0 + v0;                                               // 0x001a6eec: addu $t2, $a0, $v0
    a0 = 0x2a << 16;                                            // 0x001a6ef4: lui $a0, 0x2a
    a0 = a0 + 0xf85;                                            // 0x001a6efc: addiu $a0, $a0, 0xf85
    t4 = t4 << 0x18;                                            // 0x001a6f00: sll $t4, $t4, 0x18
    t1 = a0 + v0;                                               // 0x001a6f04: addu $t1, $a0, $v0
    t3 = t4 | t3;                                               // 0x001a6f08: or $t3, $t4, $t3
    a0 = 0x2a << 16;                                            // 0x001a6f0c: lui $a0, 0x2a
    g_002a0f80 = t3;  // Global at 0x002a0f80                   // 0x001a6f10: sw $t3, 0($v1)
    a0 = a0 + 0xf86;                                            // 0x001a6f14: addiu $a0, $a0, 0xf86
    v1 = 0x2a << 16;                                            // 0x001a6f18: lui $v1, 0x2a
    *(uint8_t*)(t2) = a1;                                       // 0x001a6f1c: sb $a1, 0($t2)
    a0 = a0 + v0;                                               // 0x001a6f20: addu $a0, $a0, $v0
    v1 = v1 + 0xf88;                                            // 0x001a6f24: addiu $v1, $v1, 0xf88
    *(uint8_t*)(t1) = a2;                                       // 0x001a6f28: sb $a2, 0($t1)
    v0 = v1 + v0;                                               // 0x001a6f2c: addu $v0, $v1, $v0
    g_002a0f86 = a3;  // Global at 0x002a0f86                   // 0x001a6f30: sh $a3, 0($a0)
    *(uint8_t*)(v0) = t0;                                       // 0x001a6f34: sb $t0, 0($v0)
    v0 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a6f38: lw $v0, 0xf70($at)
    v1 = v0 + 1;                                                // 0x001a6f3c: addiu $v1, $v0, 1
    if (v1 >= 0) goto label_0x1a6f54;                           // 0x001a6f40: bgez $v1, 0x1a6f54
    v0 = v1 & 0x1f;                                             // 0x001a6f44: andi $v0, $v1, 0x1f
    if (v0 == 0) goto label_0x1a6f54;                           // 0x001a6f48: beqz $v0, 0x1a6f54
    /* nop */                                                   // 0x001a6f4c: nop 
    v0 = v0 + -0x20;                                            // 0x001a6f50: addiu $v0, $v0, -0x20
label_0x1a6f54:
    at = 0x2a << 16;                                            // 0x001a6f54: lui $at, 0x2a
    g_002a0f70 = v0;  // Global at 0x002a0f70                   // 0x001a6f58: sw $v0, 0xf70($at)
label_0x1a6f60:
    return;                                                     // 0x001a6f60: jr $ra
    /* nop */                                                   // 0x001a6f64: nop 
}