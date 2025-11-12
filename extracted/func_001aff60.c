void func_001aff60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001aff60: addiu $sp, $sp, -0x10
    t0 = 0x31 << 16;                                            // 0x001aff64: lui $t0, 0x31
    t0 = t0 + 0x1d30;                                           // 0x001aff70: addiu $t0, $t0, 0x1d30
    a3 = gp + -0x7d08;                                          // 0x001aff78: addiu $a3, $gp, -0x7d08
label_0x1aff7c:
    a0 = t1 + t3;                                               // 0x001aff7c: addu $a0, $t1, $t3
    v1 = a3 + t3;                                               // 0x001aff80: addu $v1, $a3, $t3
    t2 = g_00313154;  // Global at 0x00313154                   // 0x001aff84: lbu $t2, 4($a0)
    a1 = t0 + t3;                                               // 0x001aff88: addu $a1, $t0, $t3
    a2 = g_0021c000;  // Global at 0x0021c000                   // 0x001aff8c: lbu $a2, 0($v1)
    t3 = t3 + 1;                                                // 0x001aff90: addiu $t3, $t3, 1
    a0 = g_0021c0f8;  // Global at 0x0021c0f8                   // 0x001aff94: lbu $a0, 8($a1)
    a2 = t2 & a2;                                               // 0x001aff98: and $a2, $t2, $a2
    v1 = (t3 < 8) ? 1 : 0;                                      // 0x001aff9c: slti $v1, $t3, 8
    a2 = a2 & 0xff;                                             // 0x001affa0: andi $a2, $a2, 0xff
    a0 = a0 | a2;                                               // 0x001affa4: or $a0, $a0, $a2
    if (v1 != 0) goto label_0x1aff7c;                           // 0x001affa8: bnez $v1, 0x1aff7c
    g_0021c0f8 = a0;  // Global at 0x0021c0f8                   // 0x001affac: sb $a0, 8($a1)
    t2 = 0x22 << 16;                                            // 0x001affb4: lui $t2, 0x22
    t2 = t2 + -0x3f00;                                          // 0x001affb8: addiu $t2, $t2, -0x3f00
label_0x1affbc:
    a1 = t3 << 2;                                               // 0x001affbc: sll $a1, $t3, 2
    a0 = t1 + a1;                                               // 0x001affc0: addu $a0, $t1, $a1
    v1 = t2 + a1;                                               // 0x001affc4: addu $v1, $t2, $a1
    a3 = g_0031315c;  // Global at 0x0031315c                   // 0x001affc8: lw $a3, 0xc($a0)
    a1 = t0 + a1;                                               // 0x001affcc: addu $a1, $t0, $a1
    a2 = g_0021c000;  // Global at 0x0021c000                   // 0x001affd0: lw $a2, 0($v1)
    t3 = t3 + 1;                                                // 0x001affd4: addiu $t3, $t3, 1
    a0 = g_0021c100;  // Global at 0x0021c100                   // 0x001affd8: lw $a0, 0x10($a1)
    a2 = a3 & a2;                                               // 0x001affdc: and $a2, $a3, $a2
    v1 = (t3 < 4) ? 1 : 0;                                      // 0x001affe0: slti $v1, $t3, 4
    a0 = a0 | a2;                                               // 0x001affe4: or $a0, $a0, $a2
    if (v1 != 0) goto label_0x1affbc;                           // 0x001affe8: bnez $v1, 0x1affbc
    g_0021c100 = a0;  // Global at 0x0021c100                   // 0x001affec: sw $a0, 0x10($a1)
    a2 = a3 << 2;                                               // 0x001afff4: sll $a2, $a3, 2
label_0x1afff8:
    a1 = 0x22 << 16;                                            // 0x001afff8: lui $a1, 0x22
    a1 = a1 + -0x3ef0;                                          // 0x001afffc: addiu $a1, $a1, -0x3ef0
    a2 = a2 + a3;                                               // 0x001b0000: addu $a2, $a2, $a3
    v1 = 1;                                                     // 0x001b0004: addiu $v1, $zero, 1
    t4 = 0xff;                                                  // 0x001b000c: addiu $t4, $zero, 0xff
    t6 = a1 + a2;                                               // 0x001b0010: addu $t6, $a1, $a2
    goto label_0x1b00a4;                                        // 0x001b0014: b 0x1b00a4
    t3 = 0x3e7;                                                 // 0x001b0018: addiu $t3, $zero, 0x3e7
label_0x1b001c:
    a1 = g_0021c110;  // Global at 0x0021c110                   // 0x001b001c: lbu $a1, 0($a1)
    if (a1 == t4) goto label_0x1b00b0;                          // 0x001b0020: beq $a1, $t4, 0x1b00b0
    t2 = 0x36 << 16;                                            // 0x001b0024: lui $t2, 0x36
    a2 = a1 & 0xffff;                                           // 0x001b0028: andi $a2, $a1, 0xffff
    t2 = t2 + -0x5f80;                                          // 0x001b002c: addiu $t2, $t2, -0x5f80
    goto label_0x1b004c;                                        // 0x001b0030: b 0x1b004c
label_0x1b0038:
    if (a1 == a2) goto label_0x1b0058;                          // 0x001b0038: beq $a1, $a2, 0x1b0058
    /* nop */                                                   // 0x001b003c: nop 
    a1 = t5 + 1;                                                // 0x001b0040: addiu $a1, $t5, 1
    t2 = t2 + 0xc;                                              // 0x001b0044: addiu $t2, $t2, 0xc
    t5 = a1 & 0xff;                                             // 0x001b0048: andi $t5, $a1, 0xff
label_0x1b004c:
    a1 = g_0035a08c;  // Global at 0x0035a08c                   // 0x001b004c: lhu $a1, 0($t2)
    if (a1 != t3) goto label_0x1b0038;                          // 0x001b0050: bne $a1, $t3, 0x1b0038
    /* nop */                                                   // 0x001b0054: nop 
label_0x1b0058:
    if (a1 == t3) goto label_0x1b00a0;                          // 0x001b0058: beq $a1, $t3, 0x1b00a0
    /* nop */                                                   // 0x001b005c: nop 
    t5 = t5 & 0xff;                                             // 0x001b0060: andi $t5, $t5, 0xff
    a2 = t5 >> 5;                                               // 0x001b0064: sra $a2, $t5, 5
    a1 = t5 & 0x1f;                                             // 0x001b0068: andi $a1, $t5, 0x1f
    a2 = a2 << 2;                                               // 0x001b006c: sll $a2, $a2, 2
    if (t5 >= 0) goto label_0x1b0084;                           // 0x001b0070: bgez $t5, 0x1b0084
    t2 = t0 + a2;                                               // 0x001b0074: addu $t2, $t0, $a2
    if (a1 == 0) goto label_0x1b0088;                           // 0x001b0078: beqz $a1, 0x1b0088
    a2 = v1 << a1;                                              // 0x001b007c: sllv $a2, $v1, $a1
    a1 = a1 + -0x20;                                            // 0x001b0080: addiu $a1, $a1, -0x20
label_0x1b0084:
    a2 = v1 << a1;                                              // 0x001b0084: sllv $a2, $v1, $a1
label_0x1b0088:
    a1 = g_0035a09c;  // Global at 0x0035a09c                   // 0x001b0088: lw $a1, 0x10($t2)
    a1 = a1 & a2;                                               // 0x001b008c: and $a1, $a1, $a2
    if (a1 != 0) goto label_0x1b00a0;                           // 0x001b0090: bnez $a1, 0x1b00a0
    /* nop */                                                   // 0x001b0094: nop 
    goto label_0x1b00b0;                                        // 0x001b0098: b 0x1b00b0
label_0x1b00a0:
    a0 = a0 + 1;                                                // 0x001b00a0: addiu $a0, $a0, 1
label_0x1b00a4:
    a1 = (a0 < 5) ? 1 : 0;                                      // 0x001b00a4: slti $a1, $a0, 5
    if (a1 != 0) goto label_0x1b001c;                           // 0x001b00a8: bnez $a1, 0x1b001c
    a1 = t6 + a0;                                               // 0x001b00ac: addu $a1, $t6, $a0
label_0x1b00b0:
    if (v1 == 0) goto label_0x1b00cc;                           // 0x001b00b0: beqz $v1, 0x1b00cc
    a1 = a3 + 0x16;                                             // 0x001b00b4: addiu $a1, $a3, 0x16
    func_001aff00();  // 0x1afed0                                // 0x001b00b8: jal 0x1afed0
    a0 = t0 + 0x13bc;                                           // 0x001b00bc: addiu $a0, $t0, 0x13bc
    a1 = a3 + 0x16;                                             // 0x001b00c0: addiu $a1, $a3, 0x16
    func_001aff00();  // 0x1afed0                                // 0x001b00c4: jal 0x1afed0
    a0 = t0 + 0x1420;                                           // 0x001b00c8: addiu $a0, $t0, 0x1420
label_0x1b00cc:
    a3 = a3 + 1;                                                // 0x001b00cc: addiu $a3, $a3, 1
    v1 = (a3 < 0x10) ? 1 : 0;                                   // 0x001b00d0: slti $v1, $a3, 0x10
    if (v1 != 0) goto label_0x1afff8;                           // 0x001b00d4: bnez $v1, 0x1afff8
    a2 = a3 << 2;                                               // 0x001b00d8: sll $a2, $a3, 2
    goto label_0x1b0128;                                        // 0x001b00dc: b 0x1b0128
label_0x1b00e4:
    v0 = 0x22 << 16;                                            // 0x001b00e4: lui $v0, 0x22
    v0 = v0 + -0x4020;                                          // 0x001b00e8: addiu $v0, $v0, -0x4020
    v0 = v0 + a3;                                               // 0x001b00ec: addu $v0, $v0, $a3
    a1 = g_0021bfe0;  // Global at 0x0021bfe0                   // 0x001b00f0: lbu $a1, 0($v0)
    func_001afed0();  // 0x1afea0                                // 0x001b00f4: jal 0x1afea0
    a0 = t1 + 0x40f4;                                           // 0x001b00f8: addiu $a0, $t1, 0x40f4
    if (v0 == 0) goto label_0x1b0124;                           // 0x001b00fc: beqz $v0, 0x1b0124
    v1 = 0x22 << 16;                                            // 0x001b0100: lui $v1, 0x22
    v1 = v1 + -0x4000;                                          // 0x001b0104: addiu $v1, $v1, -0x4000
    t2 = v1 + a3;                                               // 0x001b0108: addu $t2, $v1, $a3
    a1 = g_0035a08c;  // Global at 0x0035a08c                   // 0x001b010c: lbu $a1, 0($t2)
    func_001aff00();  // 0x1afed0                                // 0x001b0110: jal 0x1afed0
    a0 = t0 + 0x13bc;                                           // 0x001b0114: addiu $a0, $t0, 0x13bc
    a1 = g_0035a08c;  // Global at 0x0035a08c                   // 0x001b0118: lbu $a1, 0($t2)
    func_001aff00();  // 0x1afed0                                // 0x001b011c: jal 0x1afed0
    a0 = t0 + 0x1420;                                           // 0x001b0120: addiu $a0, $t0, 0x1420
label_0x1b0124:
    a3 = a3 + 1;                                                // 0x001b0124: addiu $a3, $a3, 1
label_0x1b0128:
    v1 = ((unsigned)a3 < (unsigned)0x1f) ? 1 : 0;               // 0x001b0128: sltiu $v1, $a3, 0x1f
    if (v1 != 0) goto label_0x1b00e4;                           // 0x001b012c: bnez $v1, 0x1b00e4
    /* nop */                                                   // 0x001b0130: nop 
    v1 = g_00313128;  // Global at 0x00313128                   // 0x001b0134: lw $v1, 0x13f8($t0)
    v1 = v1 | 0x100;                                            // 0x001b0138: ori $v1, $v1, 0x100
    g_00313128 = v1;  // Global at 0x00313128                   // 0x001b013c: sw $v1, 0x13f8($t0)
    return;                                                     // 0x001b0144: jr $ra
    sp = sp + 0x10;                                             // 0x001b0148: addiu $sp, $sp, 0x10
}