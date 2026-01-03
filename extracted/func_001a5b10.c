void func_001a5b10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a5b10: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a5b1c: addu.qb $zero, $sp, $s1
    func_001a5cf0();  // 1a5cf0                                // 0x001a5b20: jal 0x1a5cf0
    if (v0 == 0) goto label_0x1a5bb8;                           // 0x001a5b28: beqz $v0, 0x1a5bb8
    at = 0x2a << 16;                                            // 0x001a5b2c: lui $at, 0x2a
    s1 = 0x2a << 16;                                            // 0x001a5b30: lui $s1, 0x2a
    v0 = g_002a0f25;  // Global at 0x002a0f25                   // 0x001a5b34: lbu $v0, 0xf25($at)
    s1 = s1 + 0xf40;                                            // 0x001a5b38: addiu $s1, $s1, 0xf40
    v1 = 0x21 << 16;                                            // 0x001a5b3c: lui $v1, 0x21
    s0 = gp + -0x6400;                                          // 0x001a5b40: addiu $s0, $gp, -0x6400
    v1 = v1 + 0x7720;                                           // 0x001a5b44: addiu $v1, $v1, 0x7720
    g_002a0f46 = v0;  // Global at 0x002a0f46                   // 0x001a5b48: sb $v0, 6($s1)
    v0 = g_002a0f48;  // Global at 0x002a0f48                   // 0x001a5b4c: lw $v0, 8($s1)
    a1 = v0 & 0xf;                                              // 0x001a5b50: andi $a1, $v0, 0xf
    v1 = v1 + a1;                                               // 0x001a5b54: addu $v1, $v1, $a1
    v0 = v0 & 0xfff0;                                           // 0x001a5b58: andi $v0, $v0, 0xfff0
    v1 = g_00217720;  // Global at 0x00217720                   // 0x001a5b5c: lbu $v1, 0($v1)
    v0 = v0 | v1;                                               // 0x001a5b60: or $v0, $v0, $v1
    g_002a0f48 = v0;  // Global at 0x002a0f48                   // 0x001a5b64: sw $v0, 8($s1)
    a1 = *(int16_t*)((s0) + 2);                                 // 0x001a5b68: lh $a1, 2($s0)
    func_001a6030();  // 1a6030                                // 0x001a5b6c: jal 0x1a6030
    a0 = s1 + 0xc;                                              // 0x001a5b70: addiu $a0, $s1, 0xc
    a1 = *(int16_t*)((s0) + 4);                                 // 0x001a5b74: lh $a1, 4($s0)
    func_001a6030();  // 1a6030                                // 0x001a5b78: jal 0x1a6030
    a0 = s1 + 0x18;                                             // 0x001a5b7c: addiu $a0, $s1, 0x18
    func_001a6180();  // 1a6180                                // 0x001a5b80: jal 0x1a6180
    a0 = s1 + 0xc;                                              // 0x001a5b84: addiu $a0, $s1, 0xc
    s0 = v0 & 0xff;                                             // 0x001a5b88: andi $s0, $v0, 0xff
    func_001a6180();  // 1a6180                                // 0x001a5b8c: jal 0x1a6180
    a0 = s1 + 0x18;                                             // 0x001a5b90: addiu $a0, $s1, 0x18
    v1 = v0 & 0xff;                                             // 0x001a5b94: andi $v1, $v0, 0xff
    a1 = s0 << 0x10;                                            // 0x001a5b98: sll $a1, $s0, 0x10
    a0 = v1 << 0x14;                                            // 0x001a5b9c: sll $a0, $v1, 0x14
    v1 = g_002a0f48;  // Global at 0x002a0f48                   // 0x001a5ba0: lw $v1, 8($s1)
    v1 = v1 | a1;                                               // 0x001a5ba4: or $v1, $v1, $a1
    g_002a0f48 = v1;  // Global at 0x002a0f48                   // 0x001a5ba8: sw $v1, 8($s1)
    v1 = g_002a0f48;  // Global at 0x002a0f48                   // 0x001a5bac: lw $v1, 8($s1)
    v1 = v1 | a0;                                               // 0x001a5bb0: or $v1, $v1, $a0
    g_002a0f48 = v1;  // Global at 0x002a0f48                   // 0x001a5bb4: sw $v1, 8($s1)
label_0x1a5bb8:
    v1 = *(uint8_t*)((gp) + -0x6408);                           // 0x001a5bb8: lbu $v1, -0x6408($gp)
    *(uint8_t*)((gp) + -0x640c) = v1;                           // 0x001a5bbc: sb $v1, -0x640c($gp)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a5bc4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a5bc8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a5bcc: jr $ra
    sp = sp + 0x30;                                             // 0x001a5bd0: addiu $sp, $sp, 0x30
}