void func_0018cff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0018cff0: addiu $sp, $sp, -0x40
    v0 = 1;                                                     // 0x0018cff4: addiu $v0, $zero, 1
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018d000: addu.qb $zero, $sp, $s1
    s2 = 0x29 << 16;                                            // 0x0018d004: lui $s2, 0x29
    if (a0 == v0) goto label_0x18d01c;                          // 0x0018d00c: beq $a0, $v0, 0x18d01c
    s2 = s2 + -0x350;                                           // 0x0018d010: addiu $s2, $s2, -0x350
    goto label_0x18d2c8;                                        // 0x0018d014: b 0x18d2c8
    /* nop */                                                   // 0x0018d018: nop 
label_0x18d01c:
    v1 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d01c: lw $v1, 0($s2)
    v0 = 0x21 << 16;                                            // 0x0018d020: lui $v0, 0x21
    v0 = v0 + 0x63f0;                                           // 0x0018d024: addiu $v0, $v0, 0x63f0
    v1 = v1 << 2;                                               // 0x0018d028: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x0018d02c: addu $v0, $v0, $v1
    v0 = g_002163f0;  // Global at 0x002163f0                   // 0x0018d030: lw $v0, 0($v0)
    a0 = g_002163f0;  // Global at 0x002163f0                   // 0x0018d034: lw $a0, 0($v0)
    v0 = a0 & 0x100;                                            // 0x0018d038: andi $v0, $a0, 0x100
    if (v0 != 0) goto label_0x18d2c8;                           // 0x0018d03c: bnez $v0, 0x18d2c8
    v1 = a0 & 0xc;                                              // 0x0018d040: andi $v1, $a0, 0xc
    v0 = 4;                                                     // 0x0018d044: addiu $v0, $zero, 4
    if (v1 != v0) goto label_0x18d070;                          // 0x0018d048: bne $v1, $v0, 0x18d070
    v0 = a0 & 0x80;                                             // 0x0018d04c: andi $v0, $a0, 0x80
    if (v0 == 0) goto label_0x18d2c8;                           // 0x0018d050: beqz $v0, 0x18d2c8
    /* nop */                                                   // 0x0018d054: nop 
    v0 = 0x8000 << 16;                                          // 0x0018d058: lui $v0, 0x8000
    v0 = a0 & v0;                                               // 0x0018d05c: and $v0, $a0, $v0
    if (v0 != 0) goto label_0x18d088;                           // 0x0018d060: bnez $v0, 0x18d088
    /* nop */                                                   // 0x0018d064: nop 
    goto label_0x18d2c8;                                        // 0x0018d068: b 0x18d2c8
    /* nop */                                                   // 0x0018d06c: nop 
label_0x18d070:
    if (v1 != 0) goto label_0x18d2c8;                           // 0x0018d070: bnez $v1, 0x18d2c8
    /* nop */                                                   // 0x0018d074: nop 
    v0 = g_0028fce0;  // Global at 0x0028fce0                   // 0x0018d078: lw $v0, 0x30($s2)
    v0 = v0 & 1;                                                // 0x0018d07c: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x18d2c8;                           // 0x0018d080: beqz $v0, 0x18d2c8
    /* nop */                                                   // 0x0018d084: nop 
label_0x18d088:
    at = 0x29 << 16;                                            // 0x0018d088: lui $at, 0x29
    v0 = g_00290374;  // Global at 0x00290374                   // 0x0018d08c: lw $v0, 0x374($at)
    s0 = v0 ^ 1;                                                // 0x0018d090: xori $s0, $v0, 1
    v0 = s0 << 2;                                               // 0x0018d094: sll $v0, $s0, 2
    v0 = v0 + s2;                                               // 0x0018d098: addu $v0, $v0, $s2
    func_0018db10();  // 0x18db00                                // 0x0018d09c: jal 0x18db00
    a0 = g_8000000c;  // Global at 0x8000000c                   // 0x0018d0a0: lw $a0, 0xc($v0)
    v1 = s0 << 2;                                               // 0x0018d0a4: sll $v1, $s0, 2
    a1 = v1 + s2;                                               // 0x0018d0a8: addu $a1, $v1, $s2
    v1 = *(int32_t*)((a1) + 0x14);                              // 0x0018d0ac: lw $v1, 0x14($a1)
    v1 = v1 + -1;                                               // 0x0018d0b0: addiu $v1, $v1, -1
    *(uint32_t*)((a1) + 0x14) = v1;                             // 0x0018d0b4: sw $v1, 0x14($a1)
    v1 = *(int32_t*)((a1) + 0x24);                              // 0x0018d0b8: lw $v1, 0x24($a1)
    a0 = v1 + 1;                                                // 0x0018d0bc: addiu $a0, $v1, 1
    v1 = v1 << 2;                                               // 0x0018d0c0: sll $v1, $v1, 2
    *(uint32_t*)((a1) + 0x24) = a0;                             // 0x0018d0c4: sw $a0, 0x24($a1)
    v1 = v0 + v1;                                               // 0x0018d0c8: addu $v1, $v0, $v1
    a0 = *(int32_t*)((a1) + 0x24);                              // 0x0018d0cc: lw $a0, 0x24($a1)
    s1 = g_0022a3cf;  // Global at 0x0022a3cf                   // 0x0018d0d0: lw $s1, 0($v1)
    v1 = g_0028fcb4;  // Global at 0x0028fcb4                   // 0x0018d0d4: lw $v1, 4($s2)
    if (a0 != v1) goto label_0x18d0e4;                          // 0x0018d0d8: bne $a0, $v1, 0x18d0e4
    a0 = 0xf000 << 16;                                          // 0x0018d0dc: lui $a0, 0xf000
    *(uint32_t*)((a1) + 0x24) = 0;                              // 0x0018d0e0: sw $zero, 0x24($a1)
label_0x18d0e4:
    v1 = 2;                                                     // 0x0018d0e4: addiu $v1, $zero, 2
    a0 = s1 & a0;                                               // 0x0018d0e8: and $a0, $s1, $a0
    a0 = (unsigned)a0 >> 0x1c;                                  // 0x0018d0ec: srl $a0, $a0, 0x1c
    if (a0 == v1) goto label_0x18d100;                          // 0x0018d0f0: beq $a0, $v1, 0x18d100
    /* nop */                                                   // 0x0018d0f4: nop 
    goto label_0x18d134;                                        // 0x0018d0f8: b 0x18d134
    v1 = s0 << 2;                                               // 0x0018d0fc: sll $v1, $s0, 2
label_0x18d100:
    g_0028fce0 = 0;  // Global at 0x0028fce0                    // 0x0018d100: sw $zero, 0x30($s2)
    at = 0x1000 << 16;                                          // 0x0018d104: lui $at, 0x1000
    g_10003c00 = 0;  // Global at 0x10003c00                    // 0x0018d108: sw $zero, 0x3c00($at)
    at = 0x1200 << 16;                                          // 0x0018d10c: lui $at, 0x1200
    at = 0x1200 << 16;                                          // 0x0018d118: lui $at, 0x1200
    at = 0x21 << 16;                                            // 0x0018d120: lui $at, 0x21
    /* FPU: ld.b $w15, 0x23($t4) */                             // 0x0018d124: ld.b $w15, 0x23($t4)
    at = 0x1000 << 16;                                          // 0x0018d128: lui $at, 0x1000
    v1 = s0 << 2;                                               // 0x0018d130: sll $v1, $s0, 2
label_0x18d134:
    v1 = v1 + s2;                                               // 0x0018d134: addu $v1, $v1, $s2
    a0 = g_0022a3eb;  // Global at 0x0022a3eb                   // 0x0018d138: lw $a0, 0x1c($v1)
    v1 = g_0022a3f3;  // Global at 0x0022a3f3                   // 0x0018d13c: lw $v1, 0x24($v1)
    if (a0 == v1) goto label_0x18d2c8;                          // 0x0018d140: beq $a0, $v1, 0x18d2c8
    a0 = v1 << 2;                                               // 0x0018d144: sll $a0, $v1, 2
    v0 = v0 + a0;                                               // 0x0018d148: addu $v0, $v0, $a0
    v1 = 0xf000 << 16;                                          // 0x0018d14c: lui $v1, 0xf000
    s1 = g_80000000;  // Global at 0x80000000                   // 0x0018d150: lw $s1, 0($v0)
    v0 = s1 & v1;                                               // 0x0018d154: and $v0, $s1, $v1
    g_0028fcdc = s1;  // Global at 0x0028fcdc                   // 0x0018d158: sw $s1, 0x2c($s2)
    if (s1 == 0) goto label_0x18d2c8;                           // 0x0018d164: beqz $s1, 0x18d2c8
    a0 = (unsigned)v0 >> 0x1c;                                  // 0x0018d168: srl $a0, $v0, 0x1c
    at = ((unsigned)a0 < (unsigned)6) ? 1 : 0;                  // 0x0018d16c: sltiu $at, $a0, 6
    if (at == 0) goto label_0x18d2c8;                           // 0x0018d170: beqz $at, 0x18d2c8
    v1 = 0x23 << 16;                                            // 0x0018d174: lui $v1, 0x23
    v0 = a0 << 2;                                               // 0x0018d178: sll $v0, $a0, 2
    v1 = v1 + -0x5c30;                                          // 0x0018d17c: addiu $v1, $v1, -0x5c30
    v0 = v0 + v1;                                               // 0x0018d180: addu $v0, $v0, $v1
    v0 = g_80000000;  // Global at 0x80000000                   // 0x0018d184: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x0018d188: jr $v0
    /* nop */                                                   // 0x0018d18c: nop 
    a3 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d190: lw $a3, 0($s2)
    t1 = 0x29 << 16;                                            // 0x0018d194: lui $t1, 0x29
    t1 = t1 + 0x334;                                            // 0x0018d198: addiu $t1, $t1, 0x334
    a0 = -0x41;                                                 // 0x0018d19c: addiu $a0, $zero, -0x41
    v0 = -0x81;                                                 // 0x0018d1a4: addiu $v0, $zero, -0x81
    a3 = a3 << 2;                                               // 0x0018d1ac: sll $a3, $a3, 2
    a3 = t1 + a3;                                               // 0x0018d1b0: addu $a3, $t1, $a3
    t0 = *(int32_t*)(a3);                                       // 0x0018d1b4: lw $t0, 0($a3)
    a3 = *(uint8_t*)(t0);                                       // 0x0018d1b8: lbu $a3, 0($t0)
    a0 = a3 & a0;                                               // 0x0018d1bc: and $a0, $a3, $a0
    a0 = a0 | a2;                                               // 0x0018d1c0: or $a0, $a0, $a2
    *(uint8_t*)(t0) = a0;                                       // 0x0018d1c4: sb $a0, 0($t0)
    a0 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d1c8: lw $a0, 0($s2)
    a0 = a0 << 2;                                               // 0x0018d1cc: sll $a0, $a0, 2
    a0 = t1 + a0;                                               // 0x0018d1d0: addu $a0, $t1, $a0
    a2 = g_f0000000;  // Global at 0xf0000000                   // 0x0018d1d4: lw $a2, 0($a0)
    a0 = *(uint8_t*)(a2);                                       // 0x0018d1d8: lbu $a0, 0($a2)
    v0 = a0 & v0;                                               // 0x0018d1dc: and $v0, $a0, $v0
    v0 = v0 | v1;                                               // 0x0018d1e0: or $v0, $v0, $v1
    *(uint8_t*)(a2) = v0;                                       // 0x0018d1e4: sb $v0, 0($a2)
    v0 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d1e8: lw $v0, 0($s2)
    v0 = v0 << 2;                                               // 0x0018d1ec: sll $v0, $v0, 2
    v0 = t1 + v0;                                               // 0x0018d1f0: addu $v0, $t1, $v0
    a0 = g_80000000;  // Global at 0x80000000                   // 0x0018d1f4: lw $a0, 0($v0)
    func_00103418();  // 0x1033b0                                // 0x0018d1f8: jal 0x1033b0
    goto label_0x18d2c8;                                        // 0x0018d200: b 0x18d2c8
    /* nop */                                                   // 0x0018d204: nop 
    a1 = *(int32_t*)((s1) + 0x80);                              // 0x0018d208: lw $a1, 0x80($s1)
    v0 = -0x201;                                                // 0x0018d20c: addiu $v0, $zero, -0x201
    v1 = 2;                                                     // 0x0018d210: addiu $v1, $zero, 2
    at = 0x1200 << 16;                                          // 0x0018d214: lui $at, 0x1200
    *(uint32_t*)((gp) + -0x64f0) = a1;                          // 0x0018d220: sw $a1, -0x64f0($gp)
    a1 = *(int32_t*)((s1) + 0x84);                              // 0x0018d224: lw $a1, 0x84($s1)
    *(uint32_t*)((gp) + -0x64ec) = a1;                          // 0x0018d228: sw $a1, -0x64ec($gp)
    at = 0x1200 << 16;                                          // 0x0018d230: lui $at, 0x1200
    at = 0x1200 << 16;                                          // 0x0018d23c: lui $at, 0x1200
    func_00114f80();  // 0x114f60                                // 0x0018d240: jal 0x114f60
    a3 = g_0028fce0;  // Global at 0x0028fce0                   // 0x0018d248: lw $a3, 0x30($s2)
    v0 = 0 & 1;                                                 // 0x0018d24c: andi $v0, $zero, 1
    t1 = 0x29 << 16;                                            // 0x0018d250: lui $t1, 0x29
    a0 = -0x41;                                                 // 0x0018d254: addiu $a0, $zero, -0x41
    t1 = t1 + 0x334;                                            // 0x0018d258: addiu $t1, $t1, 0x334
    a2 = v0 << 6;                                               // 0x0018d25c: sll $a2, $v0, 6
    v1 = v0 << 7;                                               // 0x0018d260: sll $v1, $v0, 7
    v0 = -0x81;                                                 // 0x0018d264: addiu $v0, $zero, -0x81
    a3 = a3 | 1;                                                // 0x0018d268: ori $a3, $a3, 1
    g_0028fce0 = a3;  // Global at 0x0028fce0                   // 0x0018d26c: sw $a3, 0x30($s2)
    a3 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d270: lw $a3, 0($s2)
    a3 = a3 << 2;                                               // 0x0018d274: sll $a3, $a3, 2
    a3 = t1 + a3;                                               // 0x0018d278: addu $a3, $t1, $a3
    t0 = *(int32_t*)(a3);                                       // 0x0018d27c: lw $t0, 0($a3)
    a3 = *(uint8_t*)(t0);                                       // 0x0018d280: lbu $a3, 0($t0)
    a0 = a3 & a0;                                               // 0x0018d284: and $a0, $a3, $a0
    a0 = a0 | a2;                                               // 0x0018d288: or $a0, $a0, $a2
    *(uint8_t*)(t0) = a0;                                       // 0x0018d28c: sb $a0, 0($t0)
    a0 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d290: lw $a0, 0($s2)
    a0 = a0 << 2;                                               // 0x0018d294: sll $a0, $a0, 2
    a0 = t1 + a0;                                               // 0x0018d298: addu $a0, $t1, $a0
    a2 = g_f0000000;  // Global at 0xf0000000                   // 0x0018d29c: lw $a2, 0($a0)
    a0 = *(uint8_t*)(a2);                                       // 0x0018d2a0: lbu $a0, 0($a2)
    v0 = a0 & v0;                                               // 0x0018d2a4: and $v0, $a0, $v0
    v0 = v0 | v1;                                               // 0x0018d2a8: or $v0, $v0, $v1
    *(uint8_t*)(a2) = v0;                                       // 0x0018d2ac: sb $v0, 0($a2)
    v0 = g_0028fcb0;  // Global at 0x0028fcb0                   // 0x0018d2b0: lw $v0, 0($s2)
    v0 = v0 << 2;                                               // 0x0018d2b4: sll $v0, $v0, 2
    v0 = t1 + v0;                                               // 0x0018d2b8: addu $v0, $t1, $v0
    a0 = g_80000000;  // Global at 0x80000000                   // 0x0018d2bc: lw $a0, 0($v0)
    func_00103418();  // 0x1033b0                                // 0x0018d2c0: jal 0x1033b0
label_0x18d2c8:
    /* memory sync */                                           // 0x0018d2c8: sync 
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018d2d8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018d2dc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018d2e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018d2e4: jr $ra
    sp = sp + 0x40;                                             // 0x0018d2e8: addiu $sp, $sp, 0x40
}