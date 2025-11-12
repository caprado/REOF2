void func_0011cd90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011cd90: addiu $sp, $sp, -0x40
    a0 = 0x22 << 16;                                            // 0x0011cd94: lui $a0, 0x22
    a0 = &str_00221450;  // "# TLB over flow (1)"               // 0x0011cd9c: addiu $a0, $a0, 0x1450
    s2 = 0x1f << 16;                                            // 0x0011cda4: lui $s2, 0x1f
    s0 = s2 + 0xa38;                                            // 0x0011cdb0: addiu $s0, $s2, 0xa38
    a1 = g_001f0a38;  // Global at 0x001f0a38                   // 0x0011cdb4: lw $a1, 0xa38($s2)
    a3 = g_001f0a3c;  // Global at 0x001f0a3c                   // 0x0011cdb8: lw $a3, 4($s0)
    t1 = g_001f0a40;  // Global at 0x001f0a40                   // 0x0011cdbc: lw $t1, 8($s0)
    a3 = a1 + a3;                                               // 0x0011cdc4: addu $a3, $a1, $a3
    t1 = a3 + t1;                                               // 0x0011cdc8: addu $t1, $a3, $t1
    a1 = a1 + -1;                                               // 0x0011cdd0: addiu $a1, $a1, -1
    t1 = t1 + -1;                                               // 0x0011cdd4: addiu $t1, $t1, -1
    func_00116508();  // 0x1164d0                                // 0x0011cdd8: jal 0x1164d0
    a3 = a3 + -1;                                               // 0x0011cddc: addiu $a3, $a3, -1
    COP0_REG6 = 0;  // Write system control register            // 0x0011cde0: mtc0 $zero, $6, 0
    /* memory sync */                                           // 0x0011cde4: sync 0x10
    s1 = g_001f0a38;  // Global at 0x001f0a38                   // 0x0011cde8: lw $s1, 0xa38($s2)
    v0 = (s1 < 0x31) ? 1 : 0;                                   // 0x0011cdec: slti $v0, $s1, 0x31
    if (v0 != 0) goto label_0x11ce0c;                           // 0x0011cdf0: bnez $v0, 0x11ce0c
    a0 = 0x22 << 16;                                            // 0x0011cdf8: lui $a0, 0x22
    func_00116508();  // 0x1164d0                                // 0x0011cdfc: jal 0x1164d0
    a0 = &str_00221488;  // "# TLB over flow (2)"               // 0x0011ce00: addiu $a0, $a0, 0x1488
    func_0011d9f0();  // 0x11d9c8                                // 0x0011ce04: jal 0x11d9c8
    a0 = 1;                                                     // 0x0011ce08: addiu $a0, $zero, 1
label_0x11ce0c:
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011ce0c: slt $v0, $t9, $s1
    if (v0 == 0) goto label_0x11ce48;                           // 0x0011ce10: beqz $v0, 0x11ce48
    s0 = g_001f0a48;  // Global at 0x001f0a48                   // 0x0011ce14: lw $s0, 0x10($s0)
    a1 = g_001f0a38;  // Global at 0x001f0a38                   // 0x0011ce18: lw $a1, 0($s0)
    /* nop */                                                   // 0x0011ce1c: nop 
    a2 = g_001f0a3c;  // Global at 0x001f0a3c                   // 0x0011ce24: lw $a2, 4($s0)
    a3 = g_001f0a40;  // Global at 0x001f0a40                   // 0x0011ce28: lw $a3, 8($s0)
    t0 = g_001f0a44;  // Global at 0x001f0a44                   // 0x0011ce2c: lw $t0, 0xc($s0)
    func_0011ccc0();  // 0x11ccb0                                // 0x0011ce30: jal 0x11ccb0
    s0 = s0 + 0x10;                                             // 0x0011ce34: addiu $s0, $s0, 0x10
    t9 = t9 + 1;                                                // 0x0011ce38: addiu $t9, $t9, 1
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011ce3c: slt $v0, $t9, $s1
    /* bnezl $v0, 0x11ce20 */                                   // 0x0011ce40: bnezl $v0, 0x11ce20
    a1 = g_001f0a48;  // Global at 0x001f0a48                   // 0x0011ce44: lw $a1, 0($s0)
label_0x11ce48:
    s0 = s2 + 0xa38;                                            // 0x0011ce48: addiu $s0, $s2, 0xa38
    v0 = g_001f0a3c;  // Global at 0x001f0a3c                   // 0x0011ce4c: lw $v0, 4($s0)
    s1 = t9 + v0;                                               // 0x0011ce50: addu $s1, $t9, $v0
    v1 = (s1 < 0x31) ? 1 : 0;                                   // 0x0011ce54: slti $v1, $s1, 0x31
    if (v1 != 0) goto label_0x11ce78;                           // 0x0011ce58: bnez $v1, 0x11ce78
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011ce5c: slt $v0, $t9, $s1
    a0 = 0x22 << 16;                                            // 0x0011ce60: lui $a0, 0x22
    func_00116508();  // 0x1164d0                                // 0x0011ce64: jal 0x1164d0
    a0 = &str_002214a0;  // "# TLB over flow (3)"               // 0x0011ce68: addiu $a0, $a0, 0x14a0
    func_0011d9f0();  // 0x11d9c8                                // 0x0011ce6c: jal 0x11d9c8
    a0 = 1;                                                     // 0x0011ce70: addiu $a0, $zero, 1
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011ce74: slt $v0, $t9, $s1
label_0x11ce78:
    if (v0 == 0) goto label_0x11ceb0;                           // 0x0011ce78: beqz $v0, 0x11ceb0
    s0 = g_001f0a4c;  // Global at 0x001f0a4c                   // 0x0011ce7c: lw $s0, 0x14($s0)
    a1 = g_001f0a38;  // Global at 0x001f0a38                   // 0x0011ce80: lw $a1, 0($s0)
    /* nop */                                                   // 0x0011ce84: nop 
    a2 = g_001f0a3c;  // Global at 0x001f0a3c                   // 0x0011ce8c: lw $a2, 4($s0)
    a3 = g_001f0a40;  // Global at 0x001f0a40                   // 0x0011ce90: lw $a3, 8($s0)
    t0 = g_001f0a44;  // Global at 0x001f0a44                   // 0x0011ce94: lw $t0, 0xc($s0)
    func_0011ccc0();  // 0x11ccb0                                // 0x0011ce98: jal 0x11ccb0
    s0 = s0 + 0x10;                                             // 0x0011ce9c: addiu $s0, $s0, 0x10
    t9 = t9 + 1;                                                // 0x0011cea0: addiu $t9, $t9, 1
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011cea4: slt $v0, $t9, $s1
    /* bnezl $v0, 0x11ce88 */                                   // 0x0011cea8: bnezl $v0, 0x11ce88
    a1 = g_001f0a48;  // Global at 0x001f0a48                   // 0x0011ceac: lw $a1, 0($s0)
label_0x11ceb0:
    s0 = s2 + 0xa38;                                            // 0x0011ceb0: addiu $s0, $s2, 0xa38
    g_001f0a44 = t9;  // Global at 0x001f0a44                   // 0x0011ceb4: sw $t9, 0xc($s0)
    COP0_REG6 = t9;  // Write system control register           // 0x0011ceb8: mtc0 $t9, $6, 0
    /* memory sync */                                           // 0x0011cebc: sync 0x10
    v0 = g_001f0a40;  // Global at 0x001f0a40                   // 0x0011cec0: lw $v0, 8($s0)
    if (v0 <= 0) goto label_0x11cf2c;                           // 0x0011cec4: blezl $v0, 0x11cf2c
    s1 = t9 + v0;                                               // 0x0011cecc: addu $s1, $t9, $v0
    v0 = (s1 < 0x31) ? 1 : 0;                                   // 0x0011ced0: slti $v0, $s1, 0x31
    if (v0 != 0) goto label_0x11cef4;                           // 0x0011ced4: bnez $v0, 0x11cef4
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011ced8: slt $v0, $t9, $s1
    a0 = 0x22 << 16;                                            // 0x0011cedc: lui $a0, 0x22
    func_00116508();  // 0x1164d0                                // 0x0011cee0: jal 0x1164d0
    a0 = &str_002214b8;  // "\nSKG/PS2EE Ver.0.64 Build:Jul 28 2003 17:49:54\n" // 0x0011cee4: addiu $a0, $a0, 0x14b8
    func_0011d9f0();  // 0x11d9c8                                // 0x0011cee8: jal 0x11d9c8
    a0 = 1;                                                     // 0x0011ceec: addiu $a0, $zero, 1
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011cef0: slt $v0, $t9, $s1
label_0x11cef4:
    if (v0 == 0) goto label_0x11cf28;                           // 0x0011cef4: beqz $v0, 0x11cf28
    s0 = g_001f0a50;  // Global at 0x001f0a50                   // 0x0011cef8: lw $s0, 0x18($s0)
    a1 = g_001f0a38;  // Global at 0x001f0a38                   // 0x0011cefc: lw $a1, 0($s0)
    a2 = g_001f0a3c;  // Global at 0x001f0a3c                   // 0x0011cf04: lw $a2, 4($s0)
    a3 = g_001f0a40;  // Global at 0x001f0a40                   // 0x0011cf08: lw $a3, 8($s0)
    t0 = g_001f0a44;  // Global at 0x001f0a44                   // 0x0011cf0c: lw $t0, 0xc($s0)
    func_0011ccc0();  // 0x11ccb0                                // 0x0011cf10: jal 0x11ccb0
    s0 = s0 + 0x10;                                             // 0x0011cf14: addiu $s0, $s0, 0x10
    t9 = t9 + 1;                                                // 0x0011cf18: addiu $t9, $t9, 1
    v0 = (t9 < s1) ? 1 : 0;                                     // 0x0011cf1c: slt $v0, $t9, $s1
    /* bnezl $v0, 0x11cf00 */                                   // 0x0011cf20: bnezl $v0, 0x11cf00
    a1 = g_001f0a48;  // Global at 0x001f0a48                   // 0x0011cf24: lw $a1, 0($s0)
label_0x11cf28:
label_0x11cf2c:
    v0 = (s0 < 0x30) ? 1 : 0;                                   // 0x0011cf2c: slti $v0, $s0, 0x30
    if (v0 == 0) goto label_0x11cf68;                           // 0x0011cf30: beqz $v0, 0x11cf68
    t9 = t9 << 0xd;                                             // 0x0011cf34: sll $t9, $t9, 0xd
    v0 = 0xe000 << 16;                                          // 0x0011cf38: lui $v0, 0xe000
    s1 = t9 + v0;                                               // 0x0011cf3c: addu $s1, $t9, $v0
label_0x11cf40:
    func_0011ccc0();  // 0x11ccb0                                // 0x0011cf54: jal 0x11ccb0
    s0 = s0 + 1;                                                // 0x0011cf58: addiu $s0, $s0, 1
    v0 = (s0 < 0x30) ? 1 : 0;                                   // 0x0011cf5c: slti $v0, $s0, 0x30
    if (v0 != 0) goto label_0x11cf40;                           // 0x0011cf60: bnez $v0, 0x11cf40
    s1 = s1 + 0x2000;                                           // 0x0011cf64: addiu $s1, $s1, 0x2000
label_0x11cf68:
    return;                                                     // 0x0011cf7c: jr $ra
    sp = sp + 0x40;                                             // 0x0011cf80: addiu $sp, $sp, 0x40
}