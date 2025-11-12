void func_001a9e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_194, local_19c, local_1d4;
    
    sp = sp + -0x210;                                           // 0x001a9e60: addiu $sp, $sp, -0x210
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x001a9e68: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001a9e70: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a9e78: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a9e84: addu.qb $zero, $sp, $s1
    v0 = g_002358d3;  // Global at 0x002358d3                   // 0x001a9e8c: lbu $v0, 3($a1)
    v0 = (v0 < 0x14) ? 1 : 0;                                   // 0x001a9e90: slti $v0, $v0, 0x14
    if (v0 != 0) goto label_0x1a9eac;                           // 0x001a9e94: bnez $v0, 0x1a9eac
    v0 = *(int32_t*)((s4) + 0x34);                              // 0x001a9e9c: lw $v0, 0x34($s4)
    g_00181460 = 0;  // Global at 0x00181460                    // 0x001a9ea0: sw $zero, 0x1460($v0)
    v0 = *(int32_t*)((s4) + 0x34);                              // 0x001a9ea4: lw $v0, 0x34($s4)
    g_00181464 = 0;  // Global at 0x00181464                    // 0x001a9ea8: sw $zero, 0x1464($v0)
label_0x1a9eac:
    at = 0x31 << 16;                                            // 0x001a9eac: lui $at, 0x31
    a0 = *(uint16_t*)((s4) + 0xbc8);                            // 0x001a9eb0: lhu $a0, 0xbc8($s4)
    if (a0 == 0) goto label_0x1a9f40;                           // 0x001a9eb4: beqz $a0, 0x1a9f40
    s2 = g_003137fc;  // Global at 0x003137fc                   // 0x001a9eb8: lw $s2, 0x37fc($at)
    v1 = *(uint8_t*)((s4) + 0x549);                             // 0x001a9ebc: lbu $v1, 0x549($s4)
    v0 = 1;                                                     // 0x001a9ec0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1a9ed4;                          // 0x001a9ec4: beq $v1, $v0, 0x1a9ed4
    /* nop */                                                   // 0x001a9ec8: nop 
    goto label_0x1a9ef8;                                        // 0x001a9ecc: b 0x1a9ef8
    a3 = a0 + -1;                                               // 0x001a9ed0: addiu $a3, $a0, -1
label_0x1a9ed4:
    a3 = *(uint8_t*)((s4) + 0xbb0);                             // 0x001a9ed4: lbu $a3, 0xbb0($s4)
    a1 = 0x23 << 16;                                            // 0x001a9ed8: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001a9edc: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001a9ee0: addiu $a0, $sp, 0x90
    a1 = &str_00235870;  // "COMMON\\"                          // 0x001a9ee4: addiu $a1, $a1, 0x5870
    func_0010a570();  // 0x10a4d8                                // 0x001a9ee8: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001a9eec: addiu $a2, $a2, 0x5880
    goto label_0x1a9fc8;                                        // 0x001a9ef0: b 0x1a9fc8
    a0 = sp + 0x90;                                             // 0x001a9ef4: addiu $a0, $sp, 0x90
label_0x1a9ef8:
    at = (a3 < 0xa) ? 1 : 0;                                    // 0x001a9ef8: slti $at, $a3, 0xa
    if (at == 0) goto label_0x1a9f24;                           // 0x001a9efc: beqz $at, 0x1a9f24
    a1 = 0x23 << 16;                                            // 0x001a9f00: lui $a1, 0x23
    a1 = 0x23 << 16;                                            // 0x001a9f04: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001a9f08: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001a9f0c: addiu $a0, $sp, 0x90
    a1 = &str_00235890;  // "%sNPC\\N%d.NBD"                    // 0x001a9f10: addiu $a1, $a1, 0x5890
    func_0010a570();  // 0x10a4d8                                // 0x001a9f14: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001a9f18: addiu $a2, $a2, 0x5880
    goto label_0x1a9fc4;                                        // 0x001a9f1c: b 0x1a9fc4
    /* nop */                                                   // 0x001a9f20: nop 
label_0x1a9f24:
    a2 = 0x23 << 16;                                            // 0x001a9f24: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001a9f28: addiu $a0, $sp, 0x90
    a1 = a1 + 0x58a0;                                           // 0x001a9f2c: addiu $a1, $a1, 0x58a0
    func_0010a570();  // 0x10a4d8                                // 0x001a9f30: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001a9f34: addiu $a2, $a2, 0x5880
    goto label_0x1a9fc4;                                        // 0x001a9f38: b 0x1a9fc4
    /* nop */                                                   // 0x001a9f3c: nop 
label_0x1a9f40:
    v1 = *(uint8_t*)((s4) + 0x549);                             // 0x001a9f40: lbu $v1, 0x549($s4)
    if (v1 == 0) goto label_0x1a9f80;                           // 0x001a9f44: beqz $v1, 0x1a9f80
    v0 = 1;                                                     // 0x001a9f48: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1a9f5c;                          // 0x001a9f4c: beq $v1, $v0, 0x1a9f5c
    /* nop */                                                   // 0x001a9f50: nop 
    goto label_0x1a9fa8;                                        // 0x001a9f54: b 0x1a9fa8
    a3 = *(uint8_t*)((s4) + 0xbb0);                             // 0x001a9f58: lbu $a3, 0xbb0($s4)
label_0x1a9f5c:
    a3 = *(uint8_t*)((s4) + 0xbb0);                             // 0x001a9f5c: lbu $a3, 0xbb0($s4)
    a1 = 0x23 << 16;                                            // 0x001a9f60: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001a9f64: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001a9f68: addiu $a0, $sp, 0x90
    a1 = &str_00235870;  // "COMMON\\"                          // 0x001a9f6c: addiu $a1, $a1, 0x5870
    func_0010a570();  // 0x10a4d8                                // 0x001a9f70: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001a9f74: addiu $a2, $a2, 0x5880
    goto label_0x1a9fc4;                                        // 0x001a9f78: b 0x1a9fc4
    /* nop */                                                   // 0x001a9f7c: nop 
label_0x1a9f80:
    a3 = *(uint8_t*)((s4) + 0xbb0);                             // 0x001a9f80: lbu $a3, 0xbb0($s4)
    a1 = 0x23 << 16;                                            // 0x001a9f84: lui $a1, 0x23
    t0 = *(uint8_t*)((s4) + 0xbd0);                             // 0x001a9f88: lbu $t0, 0xbd0($s4)
    a2 = 0x23 << 16;                                            // 0x001a9f8c: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001a9f90: addiu $a0, $sp, 0x90
    a1 = &str_002358b0;  // "%sPL\\EP%02d_%02d.NBD"             // 0x001a9f94: addiu $a1, $a1, 0x58b0
    func_0010a570();  // 0x10a4d8                                // 0x001a9f98: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001a9f9c: addiu $a2, $a2, 0x5880
    goto label_0x1a9fc4;                                        // 0x001a9fa0: b 0x1a9fc4
    /* nop */                                                   // 0x001a9fa4: nop 
label_0x1a9fa8:
    a1 = 0x23 << 16;                                            // 0x001a9fa8: lui $a1, 0x23
    t0 = *(uint8_t*)((s4) + 0xbd0);                             // 0x001a9fac: lbu $t0, 0xbd0($s4)
    a2 = 0x23 << 16;                                            // 0x001a9fb0: lui $a2, 0x23
    a0 = sp + 0x90;                                             // 0x001a9fb4: addiu $a0, $sp, 0x90
    a1 = &str_002358d0;  // "%s.NBD"                            // 0x001a9fb8: addiu $a1, $a1, 0x58d0
    func_0010a570();  // 0x10a4d8                                // 0x001a9fbc: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001a9fc0: addiu $a2, $a2, 0x5880
label_0x1a9fc4:
    a0 = sp + 0x90;                                             // 0x001a9fc4: addiu $a0, $sp, 0x90
label_0x1a9fc8:
    func_001a9bf0();  // 0x1a9bd0                                // 0x001a9fc8: jal 0x1a9bd0
    if (v0 <= 0) goto label_0x1aa1bc;                           // 0x001a9fd0: blez $v0, 0x1aa1bc
    a0 = sp + 0x190;                                            // 0x001a9fd4: addiu $a0, $sp, 0x190
    func_00107b68();  // 0x107ab8                                // 0x001a9fdc: jal 0x107ab8
    a2 = 0x80;                                                  // 0x001a9fe0: addiu $a2, $zero, 0x80
    v1 = *(uint8_t*)((s4) + 0x549);                             // 0x001a9fe4: lbu $v1, 0x549($s4)
    v0 = 1;                                                     // 0x001a9fe8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1aa000;                          // 0x001a9fec: bne $v1, $v0, 0x1aa000
    v0 = s0 << 3;                                               // 0x001a9ff0: sll $v0, $s0, 3
    v0 = s0 << 3;                                               // 0x001a9ff4: sll $v0, $s0, 3
    goto label_0x1aa004;                                        // 0x001a9ff8: b 0x1aa004
    s0 = v0 + 0x1100;                                           // 0x001a9ffc: addiu $s0, $v0, 0x1100
label_0x1aa000:
    s0 = v0 + 0x1000;                                           // 0x001aa000: addiu $s0, $v0, 0x1000
label_0x1aa004:
    func_001d3c30();  // 0x1d3c20                                // 0x001aa004: jal 0x1d3c20
    v1 = local_194;                                             // 0x001aa00c: lw $v1, 0x194($sp)
    if (v1 == 0) goto label_0x1aa1bc;                           // 0x001aa010: beqz $v1, 0x1aa1bc
    s7 = local_19c;                                             // 0x001aa014: lw $s7, 0x19c($sp)
    s1 = s2 + v1;                                               // 0x001aa018: addu $s1, $s2, $v1
    at = 0x31 << 16;                                            // 0x001aa01c: lui $at, 0x31
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa020: lw $v1, 0x37fc($at)
    v0 = 0x18 << 16;                                            // 0x001aa024: lui $v0, 0x18
    goto label_0x1aa060;                                        // 0x001aa02c: b 0x1aa060
    s5 = v1 + v0;                                               // 0x001aa030: addu $s5, $v1, $v0
label_0x1aa034:
    s6 = *(int32_t*)(s1);                                       // 0x001aa034: lw $s6, 0($s1)
    a0 = s1 + 4;                                                // 0x001aa038: addiu $a0, $s1, 4
    func_001aeef0();  // 0x1aee20                                // 0x001aa03c: jal 0x1aee20
    func_001d3a90();  // 0x1d3a30                                // 0x001aa048: jal 0x1d3a30
    v0 = s1 + 4;                                                // 0x001aa050: addiu $v0, $s1, 4
    s0 = s0 + 1;                                                // 0x001aa054: addiu $s0, $s0, 1
    s1 = v0 + s6;                                               // 0x001aa058: addu $s1, $v0, $s6
    s3 = s3 + 1;                                                // 0x001aa05c: addiu $s3, $s3, 1
label_0x1aa060:
    v0 = (s3 < s7) ? 1 : 0;                                     // 0x001aa060: slt $v0, $s3, $s7
    if (v0 != 0) goto label_0x1aa034;                           // 0x001aa064: bnez $v0, 0x1aa034
    /* nop */                                                   // 0x001aa068: nop 
    func_0018db40();  // 0x18db10                                // 0x001aa06c: jal 0x18db10
    /* nop */                                                   // 0x001aa070: nop 
    s0 = sp + 0x1a4;                                            // 0x001aa074: addiu $s0, $sp, 0x1a4
    v1 = g_00181001;  // Global at 0x00181001                   // 0x001aa078: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x1aa1bc;                           // 0x001aa07c: beqz $v1, 0x1aa1bc
    s1 = sp + 0x1b4;                                            // 0x001aa080: addiu $s1, $sp, 0x1b4
    v1 = *(int32_t*)(s1);                                       // 0x001aa084: lw $v1, 0($s1)
    if (v1 == 0) goto label_0x1aa1bc;                           // 0x001aa088: beqz $v1, 0x1aa1bc
    /* nop */                                                   // 0x001aa08c: nop 
    a1 = *(uint8_t*)((s4) + 0xbb0);                             // 0x001aa090: lbu $a1, 0xbb0($s4)
    a2 = *(uint8_t*)((s4) + 0xbd0);                             // 0x001aa094: lbu $a2, 0xbd0($s4)
    func_001d7340();  // 0x1d71b0                                // 0x001aa098: jal 0x1d71b0
    v0 = *(int32_t*)(s1);                                       // 0x001aa0a0: lw $v0, 0($s1)
    a0 = 0x48 << 16;                                            // 0x001aa0a4: lui $a0, 0x48
    t2 = *(uint8_t*)((s4) + 3);                                 // 0x001aa0a8: lbu $t2, 3($s4)
    t1 = 0x1468;                                                // 0x001aa0ac: addiu $t1, $zero, 0x1468
    v1 = g_00181001;  // Global at 0x00181001                   // 0x001aa0b0: lw $v1, 0($s0)
    a0 = a0 + 0x4530;                                           // 0x001aa0b4: addiu $a0, $a0, 0x4530
    a1 = 2;                                                     // 0x001aa0b8: addiu $a1, $zero, 2
    a3 = s2 + v0;                                               // 0x001aa0c0: addu $a3, $s2, $v0
    /* multiply: t2 * t1 -> hi:lo */                            // 0x001aa0c4: mult $ac2, $t2, $t1
    a2 = s2 + v1;                                               // 0x001aa0c8: addu $a2, $s2, $v1
    func_001d6250();  // 0x1d61c0                                // 0x001aa0cc: jal 0x1d61c0
    a0 = a0 + v0;                                               // 0x001aa0d0: addu $a0, $a0, $v0
    func_0018db40();  // 0x18db10                                // 0x001aa0d4: jal 0x18db10
    /* nop */                                                   // 0x001aa0d8: nop 
    a1 = *(uint8_t*)((s4) + 0xbb0);                             // 0x001aa0dc: lbu $a1, 0xbb0($s4)
    func_0063f420();  // 0x63f420                               // 0x001aa0e0: jal 0x63f420
    v1 = *(uint16_t*)((s4) + 0xbc8);                            // 0x001aa0e8: lhu $v1, 0xbc8($s4)
    if (v1 != 0) goto label_0x1aa1bc;                           // 0x001aa0ec: bnez $v1, 0x1aa1bc
    at = 0x31 << 16;                                            // 0x001aa0f0: lui $at, 0x31
    v1 = g_00313860;  // Global at 0x00313860                   // 0x001aa0f4: lw $v1, 0x3860($at)
    *(uint32_t*)((gp) + -0x60f4) = v1;                          // 0x001aa0f8: sw $v1, -0x60f4($gp)
    v1 = *(int32_t*)((gp) + -0x60f4);                           // 0x001aa0fc: lw $v1, -0x60f4($gp)
    if (v1 == 0) goto label_0x1aa144;                           // 0x001aa100: beqz $v1, 0x1aa144
    /* nop */                                                   // 0x001aa104: nop 
    a0 = local_1d4;                                             // 0x001aa108: lw $a0, 0x1d4($sp)
    if (a0 == 0) goto label_0x1aa144;                           // 0x001aa10c: beqz $a0, 0x1aa144
    /* nop */                                                   // 0x001aa110: nop 
    v0 = *(uint8_t*)((s4) + 3);                                 // 0x001aa114: lbu $v0, 3($s4)
    a2 = 0x1324;                                                // 0x001aa118: addiu $a2, $zero, 0x1324
    a1 = s2 + a0;                                               // 0x001aa11c: addu $a1, $s2, $a0
    /* multiply: v0 * a2 -> hi:lo */                            // 0x001aa120: mult $ac2, $v0, $a2
    s0 = v1 + v0;                                               // 0x001aa124: addu $s0, $v1, $v0
    func_0018da60();  // 0x18da10                                // 0x001aa128: jal 0x18da10
    v1 = *(int32_t*)((s4) + 0x34);                              // 0x001aa130: lw $v1, 0x34($s4)
    a0 = s0 + 0x74;                                             // 0x001aa134: addiu $a0, $s0, 0x74
    *(uint32_t*)((v1) + 0x1460) = s0;                           // 0x001aa138: sw $s0, 0x1460($v1)
    v1 = *(int32_t*)((s4) + 0x34);                              // 0x001aa13c: lw $v1, 0x34($s4)
    *(uint32_t*)((v1) + 0x1464) = a0;                           // 0x001aa140: sw $a0, 0x1464($v1)
label_0x1aa144:
    a0 = *(uint8_t*)((s4) + 0x549);                             // 0x001aa144: lbu $a0, 0x549($s4)
    v1 = 1;                                                     // 0x001aa148: addiu $v1, $zero, 1
    if (a0 != v1) goto label_0x1aa1bc;                          // 0x001aa14c: bne $a0, $v1, 0x1aa1bc
    s0 = sp + 0x1e4;                                            // 0x001aa150: addiu $s0, $sp, 0x1e4
    v1 = g_00181001;  // Global at 0x00181001                   // 0x001aa154: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x1aa1bc;                           // 0x001aa158: beqz $v1, 0x1aa1bc
    /* nop */                                                   // 0x001aa15c: nop 
    a1 = *(uint8_t*)((s4) + 0xbb0);                             // 0x001aa160: lbu $a1, 0xbb0($s4)
    func_001d7470();  // 0x1d7340                                // 0x001aa164: jal 0x1d7340
    a2 = *(uint8_t*)((s4) + 3);                                 // 0x001aa16c: lbu $a2, 3($s4)
    a0 = 0x3c << 16;                                            // 0x001aa170: lui $a0, 0x3c
    a0 = a0 + -0xa70;                                           // 0x001aa174: addiu $a0, $a0, -0xa70
    v1 = 1;                                                     // 0x001aa178: addiu $v1, $zero, 1
    a1 = a2 << 6;                                               // 0x001aa17c: sll $a1, $a2, 6
    a1 = a1 + a2;                                               // 0x001aa180: addu $a1, $a1, $a2
    a1 = a1 << 3;                                               // 0x001aa184: sll $a1, $a1, 3
    a1 = a1 + a2;                                               // 0x001aa188: addu $a1, $a1, $a2
    a1 = a1 << 2;                                               // 0x001aa18c: sll $a1, $a1, 2
    a1 = a0 + a1;                                               // 0x001aa190: addu $a1, $a0, $a1
    a0 = str_002358d0;  // "%s.NBD"                             // 0x001aa194: lb $a0, 0($a1)
    if (a0 != v1) goto label_0x1aa1bc;                          // 0x001aa198: bne $a0, $v1, 0x1aa1bc
    /* nop */                                                   // 0x001aa19c: nop 
    v0 = g_00181001;  // Global at 0x00181001                   // 0x001aa1a0: lw $v0, 0($s0)
    a0 = a1 + 4;                                                // 0x001aa1a4: addiu $a0, $a1, 4
    a1 = 2;                                                     // 0x001aa1a8: addiu $a1, $zero, 2
    func_001d6250();  // 0x1d61c0                                // 0x001aa1b4: jal 0x1d61c0
    a2 = s2 + v0;                                               // 0x001aa1b8: addu $a2, $s2, $v0
label_0x1aa1bc:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001aa1c4: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001aa1c8: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001aa1cc: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aa1d4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aa1d8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aa1dc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aa1e0: jr $ra
    sp = sp + 0x210;                                            // 0x001aa1e4: addiu $sp, $sp, 0x210
}