void func_001bce10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_60;
    
    sp = sp + -0x1b0;                                           // 0x001bce10: addiu $sp, $sp, -0x1b0
    a0 = 0x31 << 16;                                            // 0x001bce14: lui $a0, 0x31
    a0 = a0 + 0x38c0;                                           // 0x001bce1c: addiu $a0, $a0, 0x38c0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001bce28: dpa.w.ph $ac0, $sp, $s3
    a2 = 0x340;                                                 // 0x001bce2c: addiu $a2, $zero, 0x340
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bce34: addu.qb $zero, $sp, $s1
    func_00107c70();  // 107c70                                // 0x001bce3c: jal 0x107c70
    *(uint32_t*)((gp) + -0x6310) = 0;                           // 0x001bce40: sw $zero, -0x6310($gp)
    a0 = 0x24 << 16;                                            // 0x001bce44: lui $a0, 0x24
    a1 = 0x4802;                                                // 0x001bce48: addiu $a1, $zero, 0x4802
    a0 = &str_0023df90;  // "dev9x:"                            // 0x001bce4c: addiu $a0, $a0, -0x2070
    func_0011af08();  // 11af08                                // 0x001bce5c: jal 0x11af08
    if (v0 >= 0) goto label_0x1bce74;                           // 0x001bce64: bgez $v0, 0x1bce74
    goto label_0x1bd054;                                        // 0x001bce6c: b 0x1bd054
label_0x1bce74:
    a0 = 0x24 << 16;                                            // 0x001bce74: lui $a0, 0x24
    a1 = 0x4801;                                                // 0x001bce78: addiu $a1, $zero, 0x4801
    a0 = &str_0023df90;  // "dev9x:"                            // 0x001bce7c: addiu $a0, $a0, -0x2070
    func_0011af08();  // 11af08                                // 0x001bce8c: jal 0x11af08
    if (v0 >= 0) goto label_0x1bcea4;                           // 0x001bce94: bgez $v0, 0x1bcea4
    goto label_0x1bd050;                                        // 0x001bce9c: b 0x1bd050
    /* nop */                                                   // 0x001bcea0: nop 
label_0x1bcea4:
    goto label_0x1bcf10;                                        // 0x001bcea4: b 0x1bcf10
    s0 = 4 << 16;                                               // 0x001bcea8: lui $s0, 4
label_0x1bceac:
    a0 = *(int32_t*)((gp) + -0x6310);                           // 0x001bceac: lw $a0, -0x6310($gp)
    v1 = 0x31 << 16;                                            // 0x001bceb0: lui $v1, 0x31
    v0 = 0x20 << 16;                                            // 0x001bceb4: lui $v0, 0x20
    v1 = v1 + 0x38c0;                                           // 0x001bceb8: addiu $v1, $v1, 0x38c0
    v0 = ((unsigned)s0 < (unsigned)v0) ? 1 : 0;                 // 0x001bcebc: sltu $v0, $s0, $v0
    a0 = a0 << 5;                                               // 0x001bcec0: sll $a0, $a0, 5
    v1 = v1 + a0;                                               // 0x001bcec4: addu $v1, $v1, $a0
    if (v0 != 0) goto label_0x1bceec;                           // 0x001bcec8: bnez $v0, 0x1bceec
    g_003138cc = s0;  // Global at 0x003138cc                   // 0x001bcecc: sw $s0, 0xc($v1)
    a1 = 0x24 << 16;                                            // 0x001bced0: lui $a1, 0x24
    a0 = v1 + 0x10;                                             // 0x001bced4: addiu $a0, $v1, 0x10
    a2 = (unsigned)s0 >> 0x15;                                  // 0x001bced8: srl $a2, $s0, 0x15
    func_0010a4d8();  // 10a4d8                                // 0x001bcedc: jal 0x10a4d8
    a1 = a1 + -0x2040;                                          // 0x001bcee0: addiu $a1, $a1, -0x2040
    goto label_0x1bcf04;                                        // 0x001bcee4: b 0x1bcf04
    v0 = *(int32_t*)((gp) + -0x6310);                           // 0x001bcee8: lw $v0, -0x6310($gp)
label_0x1bceec:
    a1 = 0x24 << 16;                                            // 0x001bceec: lui $a1, 0x24
    a0 = v1 + 0x10;                                             // 0x001bcef0: addiu $a0, $v1, 0x10
    a2 = (unsigned)s0 >> 0xb;                                   // 0x001bcef4: srl $a2, $s0, 0xb
    func_0010a4d8();  // 10a4d8                                // 0x001bcef8: jal 0x10a4d8
    a1 = a1 + -0x2038;                                          // 0x001bcefc: addiu $a1, $a1, -0x2038
    v0 = *(int32_t*)((gp) + -0x6310);                           // 0x001bcf00: lw $v0, -0x6310($gp)
label_0x1bcf04:
    s0 = s0 << 1;                                               // 0x001bcf04: sll $s0, $s0, 1
    v0 = v0 + 1;                                                // 0x001bcf08: addiu $v0, $v0, 1
    *(uint32_t*)((gp) + -0x6310) = v0;                          // 0x001bcf0c: sw $v0, -0x6310($gp)
label_0x1bcf10:
    at = ((unsigned)s2 < (unsigned)s0) ? 1 : 0;                 // 0x001bcf10: sltu $at, $s2, $s0
    if (at == 0) goto label_0x1bceac;                           // 0x001bcf14: beqz $at, 0x1bceac
    a0 = 0x24 << 16;                                            // 0x001bcf18: lui $a0, 0x24
    func_00119f30();  // 119f30                                // 0x001bcf1c: jal 0x119f30
    a0 = &str_0023df90;  // "dev9x:"                            // 0x001bcf20: addiu $a0, $a0, -0x2070
    if (v0 >= 0) goto label_0x1bcf34;                           // 0x001bcf24: bgez $v0, 0x1bcf34
    goto label_0x1bd050;                                        // 0x001bcf2c: b 0x1bd050
    /* nop */                                                   // 0x001bcf30: nop 
label_0x1bcf34:
    goto label_0x1bcfa0;                                        // 0x001bcf38: b 0x1bcfa0
    s0 = sp + 0x68;                                             // 0x001bcf3c: addiu $s0, $sp, 0x68
label_0x1bcf40:
    v1 = g_00040000;  // Global at 0x00040000                   // 0x001bcf40: lw $v1, 0($s0)
    v0 = local_60;                                              // 0x001bcf44: lw $v0, 0x60($sp)
    if (v0 != 0) goto label_0x1bcfa0;                           // 0x001bcf48: bnez $v0, 0x1bcfa0
    s1 = s1 + v1;                                               // 0x001bcf4c: addu $s1, $s1, $v1
    a3 = *(int32_t*)((gp) + -0x6310);                           // 0x001bcf50: lw $a3, -0x6310($gp)
    a0 = 0x31 << 16;                                            // 0x001bcf54: lui $a0, 0x31
    goto label_0x1bcf94;                                        // 0x001bcf5c: b 0x1bcf94
    a0 = a0 + 0x38c0;                                           // 0x001bcf60: addiu $a0, $a0, 0x38c0
label_0x1bcf64:
    v1 = g_00040000;  // Global at 0x00040000                   // 0x001bcf64: lw $v1, 0($s0)
    a2 = a0 + v0;                                               // 0x001bcf68: addu $a2, $a0, $v0
    v0 = g_0020000e;  // Global at 0x0020000e                   // 0x001bcf6c: lw $v0, 0xc($a2)
    if (v1 != v0) goto label_0x1bcf90;                          // 0x001bcf70: bne $v1, $v0, 0x1bcf90
    /* nop */                                                   // 0x001bcf74: nop 
    v0 = g_00200002;  // Global at 0x00200002                   // 0x001bcf78: lw $v0, 0($a2)
    v0 = v0 + 1;                                                // 0x001bcf7c: addiu $v0, $v0, 1
    g_00200002 = v0;  // Global at 0x00200002                   // 0x001bcf80: sw $v0, 0($a2)
    v0 = g_0020000a;  // Global at 0x0020000a                   // 0x001bcf84: lw $v0, 8($a2)
    v0 = v0 + 1;                                                // 0x001bcf88: addiu $v0, $v0, 1
    g_0020000a = v0;  // Global at 0x0020000a                   // 0x001bcf8c: sw $v0, 8($a2)
label_0x1bcf90:
    a1 = a1 + 1;                                                // 0x001bcf90: addiu $a1, $a1, 1
label_0x1bcf94:
    v0 = ((unsigned)a1 < (unsigned)a3) ? 1 : 0;                 // 0x001bcf94: sltu $v0, $a1, $a3
    if (v0 != 0) goto label_0x1bcf64;                           // 0x001bcf98: bnez $v0, 0x1bcf64
    v0 = a1 << 5;                                               // 0x001bcf9c: sll $v0, $a1, 5
label_0x1bcfa0:
    func_0011a160();  // 11a160                                // 0x001bcfa4: jal 0x11a160
    a1 = sp + 0x60;                                             // 0x001bcfa8: addiu $a1, $sp, 0x60
    if (v0 > 0) goto label_0x1bcf40;                            // 0x001bcfac: bgtz $v0, 0x1bcf40
    func_00119ff8();  // 119ff8                                // 0x001bcfb4: jal 0x119ff8
    /* nop */                                                   // 0x001bcfb8: nop 
    v0 = *(int32_t*)((gp) + -0x6310);                           // 0x001bcfbc: lw $v0, -0x6310($gp)
    a2 = v0 + -1;                                               // 0x001bcfc0: addiu $a2, $v0, -1
    v1 = 0x31 << 16;                                            // 0x001bcfc4: lui $v1, 0x31
    v1 = v1 + 0x38c0;                                           // 0x001bcfc8: addiu $v1, $v1, 0x38c0
label_0x1bcfd0:
    goto label_0x1bd02c;                                        // 0x001bcfd0: b 0x1bd02c
label_0x1bcfd8:
    /* divide: s1 / a0 -> hi:lo */                              // 0x001bcfd8: divu $zero, $s1, $a0
    /* nop */                                                   // 0x001bcfdc: nop 
    /* nop */                                                   // 0x001bcfe0: nop 
    /* mfhi $v0 */                                              // 0x001bcfe4
    if (v0 != 0) goto label_0x1bd024;                           // 0x001bcfe8: bnez $v0, 0x1bd024
    v0 = s1 + a0;                                               // 0x001bcfec: addu $v0, $s1, $a0
    at = ((unsigned)v0 < (unsigned)s3) ? 1 : 0;                 // 0x001bcff0: sltu $at, $v0, $s3
    if (at == 0) goto label_0x1bd024;                           // 0x001bcff4: beqz $at, 0x1bd024
    /* nop */                                                   // 0x001bcff8: nop 
    v0 = a1 << 5;                                               // 0x001bcffc: sll $v0, $a1, 5
    s1 = s1 + a0;                                               // 0x001bd000: addu $s1, $s1, $a0
    a1 = v1 + v0;                                               // 0x001bd004: addu $a1, $v1, $v0
    v0 = g_0023dfcd;  // Global at 0x0023dfcd                   // 0x001bd008: lw $v0, 4($a1)
    v0 = v0 + 1;                                                // 0x001bd00c: addiu $v0, $v0, 1
    g_0023dfcd = v0;  // Global at 0x0023dfcd                   // 0x001bd010: sw $v0, 4($a1)
    v0 = g_0023dfd1;  // Global at 0x0023dfd1                   // 0x001bd014: lw $v0, 8($a1)
    v0 = v0 + 1;                                                // 0x001bd018: addiu $v0, $v0, 1
    goto label_0x1bd03c;                                        // 0x001bd01c: b 0x1bd03c
    g_0023dfd1 = v0;  // Global at 0x0023dfd1                   // 0x001bd020: sw $v0, 8($a1)
label_0x1bd024:
    a1 = a1 + -1;                                               // 0x001bd024: addiu $a1, $a1, -1
    a0 = (unsigned)a0 >> 1;                                     // 0x001bd028: srl $a0, $a0, 1
label_0x1bd02c:
    at = 4 << 16;                                               // 0x001bd02c: lui $at, 4
    at = ((unsigned)a0 < (unsigned)at) ? 1 : 0;                 // 0x001bd030: sltu $at, $a0, $at
    if (at == 0) goto label_0x1bcfd8;                           // 0x001bd034: beqz $at, 0x1bcfd8
    /* nop */                                                   // 0x001bd038: nop 
label_0x1bd03c:
    at = 4 << 16;                                               // 0x001bd03c: lui $at, 4
    at = ((unsigned)a0 < (unsigned)at) ? 1 : 0;                 // 0x001bd040: sltu $at, $a0, $at
    if (at == 0) goto label_0x1bcfd0;                           // 0x001bd044: beqz $at, 0x1bcfd0
label_0x1bd050:
label_0x1bd054:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001bd054: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bd05c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bd060: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd064: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd068: jr $ra
    sp = sp + 0x1b0;                                            // 0x001bd06c: addiu $sp, $sp, 0x1b0
}