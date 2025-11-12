void func_001a7070() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a7070: lui $at, 0x2a
    v1 = 0x2a << 16;                                            // 0x001a7074: lui $v1, 0x2a
    t0 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a7078: lw $t0, 0xf70($at)
    v1 = v1 + 0xf80;                                            // 0x001a707c: addiu $v1, $v1, 0xf80
    v0 = t0 << 1;                                               // 0x001a7080: sll $v0, $t0, 1
    v0 = v0 + t0;                                               // 0x001a7084: addu $v0, $v0, $t0
    v0 = v0 << 2;                                               // 0x001a7088: sll $v0, $v0, 2
    t2 = v1 + v0;                                               // 0x001a708c: addu $t2, $v1, $v0
    v1 = *(int32_t*)(t2);                                       // 0x001a7090: lw $v1, 0($t2)
    if (v1 < 0) goto label_0x1a70a4;                            // 0x001a7094: bltz $v1, 0x1a70a4
    goto label_0x1a7188;                                        // 0x001a709c: b 0x1a7188
    v0 = -1;                                                    // 0x001a70a0: addiu $v0, $zero, -1
label_0x1a70a4:
    v1 = (v1 < 0) ? 1 : 0;                                      // 0x001a70b0: slt $v1, $v1, $zero
    t1 = (t0 < 0) ? 1 : 0;                                      // 0x001a70b4: slt $t1, $t0, $zero
    v1 = v1 ^ 1;                                                // 0x001a70b8: xori $v1, $v1, 1
    t1 = t1 ^ 1;                                                // 0x001a70bc: xori $t1, $t1, 1
    t0 = v1 & 1;                                                // 0x001a70c0: andi $t0, $v1, 1
    v1 = t1 & 1;                                                // 0x001a70c4: andi $v1, $t1, 1
    t0 = t0 | 8;                                                // 0x001a70c8: ori $t0, $t0, 8
    v1 = v1 << 1;                                               // 0x001a70cc: sll $v1, $v1, 1
    t1 = t0 | v1;                                               // 0x001a70d0: or $t1, $t0, $v1
    t0 = (v1 < 0) ? 1 : 0;                                      // 0x001a70dc: slt $t0, $v1, $zero
    t0 = t0 ^ 1;                                                // 0x001a70e0: xori $t0, $t0, 1
    v1 = 8;                                                     // 0x001a70e4: addiu $v1, $zero, 8
    t0 = t0 << 2;                                               // 0x001a70e8: sll $t0, $t0, 2
    t0 = t0 | t1;                                               // 0x001a70ec: or $t0, $t0, $t1
    if (t0 != v1) goto label_0x1a7108;                          // 0x001a70f8: bne $t0, $v1, 0x1a7108
    /* nop */                                                   // 0x001a70fc: nop 
    goto label_0x1a7188;                                        // 0x001a7100: b 0x1a7188
    v0 = 1;                                                     // 0x001a7104: addiu $v0, $zero, 1
label_0x1a7108:
    t0 = t0 << 0x18;                                            // 0x001a710c: sll $t0, $t0, 0x18
    at = 0x2a << 16;                                            // 0x001a7114: lui $at, 0x2a
    a0 = t0 | v1;                                               // 0x001a7118: or $a0, $t0, $v1
    v1 = 0x2a << 16;                                            // 0x001a711c: lui $v1, 0x2a
    *(uint32_t*)(t2) = a0;                                      // 0x001a7120: sw $a0, 0($t2)
    v1 = v1 + 0xf84;                                            // 0x001a7124: addiu $v1, $v1, 0xf84
    v1 = v1 + v0;                                               // 0x001a7128: addu $v1, $v1, $v0
    g_002a0f84 = a1;  // Global at 0x002a0f84                   // 0x001a712c: sb $a1, 0($v1)
    v1 = 0x2a << 16;                                            // 0x001a7130: lui $v1, 0x2a
    v1 = v1 + 0xf85;                                            // 0x001a7134: addiu $v1, $v1, 0xf85
    a0 = v1 + v0;                                               // 0x001a7138: addu $a0, $v1, $v0
    v1 = 0x2a << 16;                                            // 0x001a713c: lui $v1, 0x2a
    *(uint8_t*)(a0) = a2;                                       // 0x001a7140: sb $a2, 0($a0)
    v1 = v1 + 0xf86;                                            // 0x001a7144: addiu $v1, $v1, 0xf86
    v1 = v1 + v0;                                               // 0x001a7148: addu $v1, $v1, $v0
    g_002a0f86 = a3;  // Global at 0x002a0f86                   // 0x001a714c: sh $a3, 0($v1)
    v1 = 0x2a << 16;                                            // 0x001a7150: lui $v1, 0x2a
    v1 = v1 + 0xf88;                                            // 0x001a7154: addiu $v1, $v1, 0xf88
    v0 = v1 + v0;                                               // 0x001a7158: addu $v0, $v1, $v0
    *(uint8_t*)(v0) = 0;                                        // 0x001a715c: sb $zero, 0($v0)
    v0 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a7160: lw $v0, 0xf70($at)
    v1 = v0 + 1;                                                // 0x001a7164: addiu $v1, $v0, 1
    if (v1 >= 0) goto label_0x1a717c;                           // 0x001a7168: bgez $v1, 0x1a717c
    v0 = v1 & 0x1f;                                             // 0x001a716c: andi $v0, $v1, 0x1f
    if (v0 == 0) goto label_0x1a717c;                           // 0x001a7170: beqz $v0, 0x1a717c
    /* nop */                                                   // 0x001a7174: nop 
    v0 = v0 + -0x20;                                            // 0x001a7178: addiu $v0, $v0, -0x20
label_0x1a717c:
    at = 0x2a << 16;                                            // 0x001a717c: lui $at, 0x2a
    g_002a0f70 = v0;  // Global at 0x002a0f70                   // 0x001a7180: sw $v0, 0xf70($at)
label_0x1a7188:
    return;                                                     // 0x001a7188: jr $ra
    /* nop */                                                   // 0x001a718c: nop 
}