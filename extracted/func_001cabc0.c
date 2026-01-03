void func_001cabc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_8a, local_8e;
    
    sp = sp + -0x90;                                            // 0x001cabc0: addiu $sp, $sp, -0x90
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001cabcc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001cabdc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cabe4: addu.qb $zero, $sp, $s1
    if (a0 < 0) goto label_0x1cac00;                            // 0x001cabec: bltz $a0, 0x1cac00
    local_8e = 0;                                               // 0x001cabf0: sh $zero, 0x8e($sp)
    v0 = (a0 < 3) ? 1 : 0;                                      // 0x001cabf4: slti $v0, $a0, 3
    if (v0 != 0) goto label_0x1cac18;                           // 0x001cabf8: bnez $v0, 0x1cac18
    /* nop */                                                   // 0x001cabfc: nop 
label_0x1cac00:
    v0 = 9;                                                     // 0x001cac00: addiu $v0, $zero, 9
    at = 0x31 << 16;                                            // 0x001cac04: lui $at, 0x31
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001cac08: sw $v0, 0x7698($at)
    goto label_0x1cae70;                                        // 0x001cac0c: b 0x1cae70
    v0 = -1;                                                    // 0x001cac10: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001cac14: nop 
label_0x1cac18:
    v0 = 0x31 << 16;                                            // 0x001cac18: lui $v0, 0x31
    s2 = a0 << 2;                                               // 0x001cac1c: sll $s2, $a0, 2
    v0 = v0 + 0x76a0;                                           // 0x001cac20: addiu $v0, $v0, 0x76a0
    s0 = v0 + s2;                                               // 0x001cac24: addu $s0, $v0, $s2
    v0 = *(int32_t*)(s0);                                       // 0x001cac28: lw $v0, 0($s0)
    if (v0 >= 0) goto label_0x1cae60;                           // 0x001cac2c: bgez $v0, 0x1cae60
    v1 = 9;                                                     // 0x001cac30: addiu $v1, $zero, 9
    at = 0x31 << 16;                                            // 0x001cac34: lui $at, 0x31
    v0 = -1;                                                    // 0x001cac38: addiu $v0, $zero, -1
    goto label_0x1cae70;                                        // 0x001cac3c: b 0x1cae70
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001cac40: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001cac44: nop 
label_0x1cac48:
    func_001ca260();  // 1ca260                                // 0x001cac48: jal 0x1ca260
    /* nop */                                                   // 0x001cac4c: nop 
    v1 = *(int32_t*)(s1);                                       // 0x001cac50: lw $v1, 0($s1)
    v0 = 1;                                                     // 0x001cac54: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1cac88;                          // 0x001cac58: bne $v1, $v0, 0x1cac88
    v0 = 0x31 << 16;                                            // 0x001cac5c: lui $v0, 0x31
    a0 = -1;                                                    // 0x001cac60: addiu $a0, $zero, -1
    v0 = v0 + 0x7680;                                           // 0x001cac64: addiu $v0, $v0, 0x7680
    at = 0x31 << 16;                                            // 0x001cac68: lui $at, 0x31
    v1 = v0 + s2;                                               // 0x001cac6c: addu $v1, $v0, $s2
    v0 = 0x71;                                                  // 0x001cac70: addiu $v0, $zero, 0x71
    *(uint32_t*)(v1) = a0;                                      // 0x001cac74: sw $a0, 0($v1)
    func_001ca270();  // 1ca270                                // 0x001cac78: jal 0x1ca270
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001cac7c: sw $v0, 0x7698($at)
    goto label_0x1cae70;                                        // 0x001cac80: b 0x1cae70
    v0 = -1;                                                    // 0x001cac84: addiu $v0, $zero, -1
label_0x1cac88:
    func_001ca270();  // 1ca270                                // 0x001cac88: jal 0x1ca270
    /* nop */                                                   // 0x001cac8c: nop 
    v0 = s4 + 1;                                                // 0x001cac98: addiu $v0, $s4, 1
    at = (v0 < 0x41a0) ? 1 : 0;                                 // 0x001caca8: slti $at, $v0, 0x41a0
    if (at == 0) goto label_0x1cad38;                           // 0x001cacac: beqz $at, 0x1cad38
    v0 = 0x31 << 16;                                            // 0x001cacb4: lui $v0, 0x31
    v0 = v0 + 0x76a0;                                           // 0x001cacb8: addiu $v0, $v0, 0x76a0
    s3 = v0 + s2;                                               // 0x001cacbc: addu $s3, $v0, $s2
label_0x1cacc0:
    a0 = *(int16_t*)(s3);                                       // 0x001cacc0: lh $a0, 0($s3)
    a1 = sp + 0x8e;                                             // 0x001cacc4: addiu $a1, $sp, 0x8e
    a2 = sp + 0x8c;                                             // 0x001cacc8: addiu $a2, $sp, 0x8c
    func_001c7b50();  // 1c7b50                                // 0x001caccc: jal 0x1c7b50
    a3 = sp + 0x8a;                                             // 0x001cacd0: addiu $a3, $sp, 0x8a
    if (v0 >= 0) goto label_0x1cacf8;                           // 0x001cacdc: bgez $v0, 0x1cacf8
    v1 = 0x68;                                                  // 0x001cace0: addiu $v1, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001cace4: lui $at, 0x31
    v0 = -1;                                                    // 0x001cace8: addiu $v0, $zero, -1
    goto label_0x1cae70;                                        // 0x001cacec: b 0x1cae70
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001cacf0: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001cacf4: nop 
label_0x1cacf8:
    v1 = local_8e;                                              // 0x001cacf8: lh $v1, 0x8e($sp)
    v0 = 2;                                                     // 0x001cacfc: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1cad10;                          // 0x001cad00: beq $v1, $v0, 0x1cad10
    v0 = 3;                                                     // 0x001cad04: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1cad38;                          // 0x001cad08: bne $v1, $v0, 0x1cad38
    /* nop */                                                   // 0x001cad0c: nop 
label_0x1cad10:
    func_001cb250();  // 1cb250                                // 0x001cad10: jal 0x1cb250
    /* nop */                                                   // 0x001cad14: nop 
    v0 = s4 + 1;                                                // 0x001cad1c: addiu $v0, $s4, 1
    v0 = (v0 < 0x41a0) ? 1 : 0;                                 // 0x001cad2c: slti $v0, $v0, 0x41a0
    if (v0 != 0) goto label_0x1cacc0;                           // 0x001cad30: bnez $v0, 0x1cacc0
label_0x1cad38:
    a0 = local_8e;                                              // 0x001cad38: lh $a0, 0x8e($sp)
    v0 = 5;                                                     // 0x001cad3c: addiu $v0, $zero, 5
    if (a0 != v0) goto label_0x1cad60;                          // 0x001cad40: bne $a0, $v0, 0x1cad60
    /* nop */                                                   // 0x001cad44: nop 
    v1 = local_8a;                                              // 0x001cad48: lh $v1, 0x8a($sp)
    if (v1 != 0) goto label_0x1cad98;                           // 0x001cad4c: bnez $v1, 0x1cad98
    /* nop */                                                   // 0x001cad50: nop 
    goto label_0x1cadb8;                                        // 0x001cad54: b 0x1cadb8
    /* nop */                                                   // 0x001cad58: nop 
    /* nop */                                                   // 0x001cad5c: nop 
label_0x1cad60:
    v0 = -1;                                                    // 0x001cad60: addiu $v0, $zero, -1
    if (a0 != v0) goto label_0x1cad80;                          // 0x001cad64: bne $a0, $v0, 0x1cad80
    /* nop */                                                   // 0x001cad68: nop 
    v1 = local_8a;                                              // 0x001cad6c: lh $v1, 0x8a($sp)
    if (v1 != 0) goto label_0x1cad98;                           // 0x001cad70: bnez $v1, 0x1cad98
    /* nop */                                                   // 0x001cad74: nop 
    goto label_0x1cadb8;                                        // 0x001cad78: b 0x1cadb8
    /* nop */                                                   // 0x001cad7c: nop 
label_0x1cad80:
    v1 = 4;                                                     // 0x001cad80: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1cad98;                          // 0x001cad84: beq $a0, $v1, 0x1cad98
    v1 = 0x68;                                                  // 0x001cad88: addiu $v1, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001cad8c: lui $at, 0x31
    goto label_0x1cae70;                                        // 0x001cad90: b 0x1cae70
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001cad94: sw $v1, 0x7698($at)
label_0x1cad98:
    v1 = local_8a;                                              // 0x001cad98: lh $v1, 0x8a($sp)
    v0 = (0 < v1) ? 1 : 0;                                      // 0x001cad9c: slt $v0, $zero, $v1
    if (v0 != 0) goto label_0x1cadb8;                           // 0x001cada0: bnez $v0, 0x1cadb8
    /* nop */                                                   // 0x001cada4: nop 
    func_001cb250();  // 1cb250                                // 0x001cada8: jal 0x1cb250
    /* nop */                                                   // 0x001cadac: nop 
    goto label_0x1cac48;                                        // 0x001cadb0: b 0x1cac48
    /* nop */                                                   // 0x001cadb4: nop 
label_0x1cadb8:
    if (v1 != 0) goto label_0x1cadc8;                           // 0x001cadb8: bnez $v1, 0x1cadc8
    goto label_0x1cae50;                                        // 0x001cadc0: b 0x1cae50
    /* nop */                                                   // 0x001cadc4: nop 
label_0x1cadc8:
    at = ((unsigned)v1 < (unsigned)s5) ? 1 : 0;                 // 0x001cadc8: sltu $at, $v1, $s5
    if (at == 0) goto label_0x1cade0;                           // 0x001cadcc: beqz $at, 0x1cade0
    /* nop */                                                   // 0x001cadd0: nop 
    /* nop */                                                   // 0x001caddc: nop 
label_0x1cade0:
    a0 = *(int16_t*)(s0);                                       // 0x001cade0: lh $a0, 0($s0)
    func_001c7d70();  // 1c7d70                                // 0x001cadec: jal 0x1c7d70
    if (a0 >= 0) goto label_0x1cae18;                           // 0x001cadfc: bgez $a0, 0x1cae18
    v1 = 0x68;                                                  // 0x001cae00: addiu $v1, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001cae04: lui $at, 0x31
    v0 = -1;                                                    // 0x001cae08: addiu $v0, $zero, -1
    goto label_0x1cae70;                                        // 0x001cae0c: b 0x1cae70
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001cae10: sw $v1, 0x7698($at)
    /* nop */                                                   // 0x001cae14: nop 
label_0x1cae18:
    v1 = local_8e;                                              // 0x001cae18: lh $v1, 0x8e($sp)
    v0 = 5;                                                     // 0x001cae1c: addiu $v0, $zero, 5
    if (v1 == v0) goto label_0x1cae30;                          // 0x001cae20: beq $v1, $v0, 0x1cae30
    v0 = -1;                                                    // 0x001cae24: addiu $v0, $zero, -1
    if (v1 != v0) goto label_0x1cae50;                          // 0x001cae28: bne $v1, $v0, 0x1cae50
    /* nop */                                                   // 0x001cae2c: nop 
label_0x1cae30:
    if (a0 != s5) goto label_0x1cae50;                          // 0x001cae30: bne $a0, $s5, 0x1cae50
    /* nop */                                                   // 0x001cae34: nop 
    v0 = local_8a;                                              // 0x001cae38: lh $v0, 0x8a($sp)
    if (a0 != v0) goto label_0x1cae50;                          // 0x001cae3c: bne $a0, $v0, 0x1cae50
    v0 = 0x68;                                                  // 0x001cae40: addiu $v0, $zero, 0x68
    at = 0x31 << 16;                                            // 0x001cae44: lui $at, 0x31
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001cae48: sw $v0, 0x7698($at)
    /* nop */                                                   // 0x001cae4c: nop 
label_0x1cae50:
    goto label_0x1cae70;                                        // 0x001cae54: b 0x1cae70
    /* nop */                                                   // 0x001cae5c: nop 
label_0x1cae60:
    v0 = 0x31 << 16;                                            // 0x001cae60: lui $v0, 0x31
    v0 = v0 + 0x7680;                                           // 0x001cae64: addiu $v0, $v0, 0x7680
    goto label_0x1cac48;                                        // 0x001cae68: b 0x1cac48
    s1 = v0 + s2;                                               // 0x001cae6c: addu $s1, $v0, $s2
label_0x1cae70:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001cae74: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001cae78: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001cae7c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001cae84: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cae88: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cae8c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cae90: jr $ra
    sp = sp + 0x90;                                             // 0x001cae94: addiu $sp, $sp, 0x90
}