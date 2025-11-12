void func_001d7a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x170;                                           // 0x001d7a60: addiu $sp, $sp, -0x170
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d7a6c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d7a78: addu.qb $zero, $sp, $s1
    v1 = *(uint8_t*)((gp) + -0x6114);                           // 0x001d7a88: lbu $v1, -0x6114($gp)
    v0 = v1 << 1;                                               // 0x001d7a8c: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x001d7a90: addu $v0, $v0, $v1
    v0 = v0 << 4;                                               // 0x001d7a94: sll $v0, $v0, 4
    func_001d3c30();  // 0x1d3c20                                // 0x001d7a98: jal 0x1d3c20
    a0 = v0 + 0x2100;                                           // 0x001d7a9c: addiu $a0, $v0, 0x2100
    a0 = 0x15;                                                  // 0x001d7aa0: addiu $a0, $zero, 0x15
    func_001aefe0();  // 0x1aefd0                                // 0x001d7aa4: jal 0x1aefd0
    a0 = 1;                                                     // 0x001d7aac: addiu $a0, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d7ab0: jal 0x1aefd0
    a0 = 0x12;                                                  // 0x001d7ab8: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001d7abc: jal 0x1aefd0
    a0 = 0x62;                                                  // 0x001d7ac4: addiu $a0, $zero, 0x62
    func_001aefe0();  // 0x1aefd0                                // 0x001d7ac8: jal 0x1aefd0
    a0 = 0xc;                                                   // 0x001d7ad0: addiu $a0, $zero, 0xc
    func_001aefe0();  // 0x1aefd0                                // 0x001d7ad4: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d7adc: addiu $a0, $zero, 0x66
    func_001aefe0();  // 0x1aefd0                                // 0x001d7ae0: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d7ae4: addiu $a1, $zero, 1
    a0 = 2;                                                     // 0x001d7ae8: addiu $a0, $zero, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001d7aec: jal 0x1aefd0
    at = 0x31 << 16;                                            // 0x001d7af4: lui $at, 0x31
    s0 = 0x39 << 16;                                            // 0x001d7af8: lui $s0, 0x39
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d7afc: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d7b48;                           // 0x001d7b00: bnez $v0, 0x1d7b48
    s0 = s0 + -0x19c;                                           // 0x001d7b04: addiu $s0, $s0, -0x19c
    a0 = 0x400;                                                 // 0x001d7b08: addiu $a0, $zero, 0x400
    func_001b28a0();  // 0x1b2780                                // 0x001d7b0c: jal 0x1b2780
    a1 = 7;                                                     // 0x001d7b10: addiu $a1, $zero, 7
    g_0039066c = v0;  // Global at 0x0039066c                   // 0x001d7b14: sw $v0, 0x808($s0)
    v0 = s3 & 0xff;                                             // 0x001d7b1c: andi $v0, $s3, 0xff
    a1 = -1;                                                    // 0x001d7b20: addiu $a1, $zero, -1
    a0 = v0 << 0x10;                                            // 0x001d7b24: sll $a0, $v0, 0x10
    a3 = 2;                                                     // 0x001d7b28: addiu $a3, $zero, 2
    v0 = s2 & 0xff;                                             // 0x001d7b2c: andi $v0, $s2, 0xff
    g_0039067c = 0;  // Global at 0x0039067c                    // 0x001d7b30: sw $zero, 0x818($s0)
    v1 = v0 << 8;                                               // 0x001d7b34: sll $v1, $v0, 8
    v0 = s1 & 0xff;                                             // 0x001d7b38: andi $v0, $s1, 0xff
    v1 = a0 | v1;                                               // 0x001d7b3c: or $v1, $a0, $v1
    func_001d4f30();  // 0x1d4db0                                // 0x001d7b40: jal 0x1d4db0
    a0 = v0 | v1;                                               // 0x001d7b44: or $a0, $v0, $v1
label_0x1d7b48:
    v1 = 0x39 << 16;                                            // 0x001d7b48: lui $v1, 0x39
    s4 = 0x36 << 16;                                            // 0x001d7b4c: lui $s4, 0x36
    v1 = v1 + -0x19c;                                           // 0x001d7b50: addiu $v1, $v1, -0x19c
    at = 0x36 << 16;                                            // 0x001d7b54: lui $at, 0x36
    g_00365114 = v1;  // Global at 0x00365114                   // 0x001d7b58: sw $v1, 0x5114($at)
    s4 = s4 + 0x50fc;                                           // 0x001d7b5c: addiu $s4, $s4, 0x50fc
    g_00365114 = v1;  // Global at 0x00365114                   // 0x001d7b60: sw $v1, 0x18($s4)
    at = 0x31 << 16;                                            // 0x001d7b64: lui $at, 0x31
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d7b68: lw $v1, 0x37fc($at)
    v0 = 0x20 << 16;                                            // 0x001d7b6c: lui $v0, 0x20
    a0 = sp + 0x60;                                             // 0x001d7b70: addiu $a0, $sp, 0x60
    a2 = 0x100;                                                 // 0x001d7b78: addiu $a2, $zero, 0x100
    g_0036511c = 0;  // Global at 0x0036511c                    // 0x001d7b7c: sw $zero, 0x20($s4)
    s3 = v1 + v0;                                               // 0x001d7b80: addu $s3, $v1, $v0
    g_00365120 = 0;  // Global at 0x00365120                    // 0x001d7b84: sw $zero, 0x24($s4)
    func_00107d30();  // 0x107c70                                // 0x001d7b88: jal 0x107c70
    g_00365124 = 0;  // Global at 0x00365124                    // 0x001d7b8c: sw $zero, 0x28($s4)
    at = 0x31 << 16;                                            // 0x001d7b90: lui $at, 0x31
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d7b94: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d7bf0;                           // 0x001d7b98: bnez $v0, 0x1d7bf0
    at = 0x31 << 16;                                            // 0x001d7b9c: lui $at, 0x31
    at = 0x31 << 16;                                            // 0x001d7ba0: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d7ba4: lui $a1, 0x24
    a3 = g_003137ba;  // Global at 0x003137ba                   // 0x001d7ba8: lhu $a3, 0x37ba($at)
    a0 = sp + 0x60;                                             // 0x001d7bac: addiu $a0, $sp, 0x60
    a1 = &str_00247560;  // "e%03d%02d%02d.bin"                 // 0x001d7bb0: addiu $a1, $a1, 0x7560
    at = 0x31 << 16;                                            // 0x001d7bb4: lui $at, 0x31
    t1 = g_003137bc;  // Global at 0x003137bc                   // 0x001d7bb8: lhu $t1, 0x37bc($at)
    at = 0x31 << 16;                                            // 0x001d7bbc: lui $at, 0x31
    t2 = g_003137be;  // Global at 0x003137be                   // 0x001d7bc0: lhu $t2, 0x37be($at)
    at = 0x25 << 16;                                            // 0x001d7bc4: lui $at, 0x25
    a2 = g_00249644;  // Global at 0x00249644                   // 0x001d7bc8: lw $a2, -0x69bc($at)
    func_0010a570();  // 0x10a4d8                                // 0x001d7bcc: jal 0x10a4d8
    a0 = sp + 0x60;                                             // 0x001d7bd4: addiu $a0, $sp, 0x60
    a2 = 1;                                                     // 0x001d7bdc: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d7be0: jal 0x1d3390
    goto label_0x1d7c24;                                        // 0x001d7be8: b 0x1d7c24
label_0x1d7bf0:
    a1 = 0x24 << 16;                                            // 0x001d7bf0: lui $a1, 0x24
    a2 = g_002537ba;  // Global at 0x002537ba                   // 0x001d7bf4: lhu $a2, 0x37ba($at)
    a0 = sp + 0x60;                                             // 0x001d7bf8: addiu $a0, $sp, 0x60
    at = 0x31 << 16;                                            // 0x001d7bfc: lui $at, 0x31
    a3 = g_003137bc;  // Global at 0x003137bc                   // 0x001d7c00: lhu $a3, 0x37bc($at)
    at = 0x31 << 16;                                            // 0x001d7c04: lui $at, 0x31
    t0 = g_003137be;  // Global at 0x003137be                   // 0x001d7c08: lhu $t0, 0x37be($at)
    func_0010a570();  // 0x10a4d8                                // 0x001d7c0c: jal 0x10a4d8
    a1 = &str_00247580;  // "ROOM EFFECT OVER!! (num %d)"       // 0x001d7c10: addiu $a1, $a1, 0x7580
    a0 = sp + 0x60;                                             // 0x001d7c14: addiu $a0, $sp, 0x60
    func_001a9b80();  // 0x1a9b30                                // 0x001d7c18: jal 0x1a9b30
label_0x1d7c24:
    if (s0 == 0) goto label_0x1d7de0;                           // 0x001d7c24: beqz $s0, 0x1d7de0
    /* nop */                                                   // 0x001d7c28: nop 
    s2 = *(int32_t*)(s3);                                       // 0x001d7c2c: lw $s2, 0($s3)
    a0 = 0x36 << 16;                                            // 0x001d7c30: lui $a0, 0x36
    a0 = a0 + 0x5090;                                           // 0x001d7c34: addiu $a0, $a0, 0x5090
    s3 = s3 + 4;                                                // 0x001d7c38: addiu $s3, $s3, 4
    s1 = s2 << 3;                                               // 0x001d7c3c: sll $s1, $s2, 3
    func_00107b68();  // 0x107ab8                                // 0x001d7c44: jal 0x107ab8
    v0 = -4;                                                    // 0x001d7c4c: addiu $v0, $zero, -4
    a0 = 0x36 << 16;                                            // 0x001d7c50: lui $a0, 0x36
    v0 = s1 & v0;                                               // 0x001d7c54: and $v0, $s1, $v0
    a0 = a0 + 0x4a70;                                           // 0x001d7c58: addiu $a0, $a0, 0x4a70
    s3 = s3 + v0;                                               // 0x001d7c5c: addu $s3, $s3, $v0
    v0 = *(int32_t*)(s3);                                       // 0x001d7c60: lw $v0, 0($s3)
    g_00365124 = v0;  // Global at 0x00365124                   // 0x001d7c64: sw $v0, 0x28($s4)
    s3 = s3 + 4;                                                // 0x001d7c68: addiu $s3, $s3, 4
    v1 = g_00365124;  // Global at 0x00365124                   // 0x001d7c6c: lw $v1, 0x28($s4)
    v0 = v1 << 1;                                               // 0x001d7c74: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x001d7c78: addu $v0, $v0, $v1
    func_00107b68();  // 0x107ab8                                // 0x001d7c7c: jal 0x107ab8
    a2 = v0 << 2;                                               // 0x001d7c80: sll $a2, $v0, 2
    a1 = g_00365124;  // Global at 0x00365124                   // 0x001d7c84: lw $a1, 0x28($s4)
    v1 = -4;                                                    // 0x001d7c88: addiu $v1, $zero, -4
    v0 = *(int16_t*)((gp) + -0x6348);                           // 0x001d7c8c: lh $v0, -0x6348($gp)
    a0 = a1 << 1;                                               // 0x001d7c90: sll $a0, $a1, 1
    a0 = a0 + a1;                                               // 0x001d7c94: addu $a0, $a0, $a1
    a0 = a0 << 2;                                               // 0x001d7c98: sll $a0, $a0, 2
    v1 = a0 & v1;                                               // 0x001d7c9c: and $v1, $a0, $v1
    s3 = s3 + v1;                                               // 0x001d7ca0: addu $s3, $s3, $v1
    s1 = *(int32_t*)(s3);                                       // 0x001d7ca4: lw $s1, 0($s3)
    if (v0 == 0) goto label_0x1d7d98;                           // 0x001d7ca8: beqz $v0, 0x1d7d98
    s3 = s3 + 4;                                                // 0x001d7cac: addiu $s3, $s3, 4
    at = (s1 < 0x21) ? 1 : 0;                                   // 0x001d7cb0: slti $at, $s1, 0x21
    if (at == 0) goto label_0x1d7d70;                           // 0x001d7cb4: beqz $at, 0x1d7d70
    /* nop */                                                   // 0x001d7cb8: nop 
    at = ((unsigned)s0 < (unsigned)0x5001) ? 1 : 0;             // 0x001d7cbc: sltiu $at, $s0, 0x5001
    if (at != 0) goto label_0x1d7d90;                           // 0x001d7cc0: bnez $at, 0x1d7d90
    a0 = 0xc;                                                   // 0x001d7cc4: addiu $a0, $zero, 0xc
    goto label_0x1d7d70;                                        // 0x001d7cc8: b 0x1d7d70
    /* nop */                                                   // 0x001d7ccc: nop 
label_0x1d7cd0:
    func_001b06a0();  // 0x1b0430                                // 0x001d7cd0: jal 0x1b0430
    /* nop */                                                   // 0x001d7cd4: nop 
    func_001aef60();  // 0x1aeef0                                // 0x001d7cd8: jal 0x1aeef0
    a0 = 1;                                                     // 0x001d7cdc: addiu $a0, $zero, 1
    at = (s1 < 0x21) ? 1 : 0;                                   // 0x001d7ce0: slti $at, $s1, 0x21
    if (at != 0) goto label_0x1d7d14;                           // 0x001d7ce4: bnez $at, 0x1d7d14
    t0 = 0x24 << 16;                                            // 0x001d7ce8: lui $t0, 0x24
    t0 = 0x24 << 16;                                            // 0x001d7cec: lui $t0, 0x24
    a0 = 0xd;                                                   // 0x001d7cf0: addiu $a0, $zero, 0xd
    a1 = 0xa;                                                   // 0x001d7cf4: addiu $a1, $zero, 0xa
    a2 = 2;                                                     // 0x001d7cf8: addiu $a2, $zero, 2
    a3 = -1;                                                    // 0x001d7cfc: addiu $a3, $zero, -1
    t0 = &str_002475a0;  // "ROOM EFFECT OVER!! (size %x)"      // 0x001d7d00: addiu $t0, $t0, 0x75a0
    func_001b3340();  // 0x1b3260                                // 0x001d7d04: jal 0x1b3260
    goto label_0x1d7d30;                                        // 0x001d7d0c: b 0x1d7d30
    /* nop */                                                   // 0x001d7d10: nop 
label_0x1d7d14:
    a0 = 0xd;                                                   // 0x001d7d14: addiu $a0, $zero, 0xd
    a1 = 0xa;                                                   // 0x001d7d18: addiu $a1, $zero, 0xa
    a2 = 2;                                                     // 0x001d7d1c: addiu $a2, $zero, 2
    a3 = -1;                                                    // 0x001d7d20: addiu $a3, $zero, -1
    t0 = t0 + 0x75c0;                                           // 0x001d7d24: addiu $t0, $t0, 0x75c0
    func_001b3340();  // 0x1b3260                                // 0x001d7d28: jal 0x1b3260
label_0x1d7d30:
    t0 = 0x24 << 16;                                            // 0x001d7d30: lui $t0, 0x24
    a0 = 0xd;                                                   // 0x001d7d34: addiu $a0, $zero, 0xd
    a1 = 0xb;                                                   // 0x001d7d38: addiu $a1, $zero, 0xb
    a2 = 2;                                                     // 0x001d7d3c: addiu $a2, $zero, 2
    a3 = -1;                                                    // 0x001d7d40: addiu $a3, $zero, -1
    func_001b3340();  // 0x1b3260                                // 0x001d7d44: jal 0x1b3260
    t0 = &str_002475e0;  // "   PUSH START"                     // 0x001d7d48: addiu $t0, $t0, 0x75e0
    a0 = 0xd;                                                   // 0x001d7d4c: addiu $a0, $zero, 0xd
    t0 = 0x24 << 16;                                            // 0x001d7d50: lui $t0, 0x24
    a2 = 2;                                                     // 0x001d7d54: addiu $a2, $zero, 2
    a3 = -1;                                                    // 0x001d7d5c: addiu $a3, $zero, -1
    func_001b3340();  // 0x1b3260                                // 0x001d7d60: jal 0x1b3260
    t0 = &str_002475f0;  // "ef%02d"                            // 0x001d7d64: addiu $t0, $t0, 0x75f0
    func_001ba310();  // 0x1ba2a0                                // 0x001d7d68: jal 0x1ba2a0
    a0 = 1;                                                     // 0x001d7d6c: addiu $a0, $zero, 1
label_0x1d7d70:
    at = 0x31 << 16;                                            // 0x001d7d70: lui $at, 0x31
    v0 = g_003136e0;  // Global at 0x003136e0                   // 0x001d7d74: lw $v0, 0x36e0($at)
    v0 = v0 & 0x8000;                                           // 0x001d7d78: andi $v0, $v0, 0x8000
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001d7d7c: sltu $v0, $zero, $v0
    v0 = v0 ^ 1;                                                // 0x001d7d80: xori $v0, $v0, 1
    if (v0 != 0) goto label_0x1d7cd0;                           // 0x001d7d84: bnez $v0, 0x1d7cd0
    /* nop */                                                   // 0x001d7d88: nop 
    a0 = 0xc;                                                   // 0x001d7d8c: addiu $a0, $zero, 0xc
label_0x1d7d90:
    func_001aef60();  // 0x1aeef0                                // 0x001d7d90: jal 0x1aeef0
    /* nop */                                                   // 0x001d7d94: nop 
label_0x1d7d98:
    v0 = s1 << 1;                                               // 0x001d7d98: sll $v0, $s1, 1
    a0 = 0x36 << 16;                                            // 0x001d7d9c: lui $a0, 0x36
    v0 = v0 + s1;                                               // 0x001d7da0: addu $v0, $v0, $s1
    a0 = a0 + 0x4a90;                                           // 0x001d7da4: addiu $a0, $a0, 0x4a90
    s0 = v0 << 4;                                               // 0x001d7da8: sll $s0, $v0, 4
    func_00107b68();  // 0x107ab8                                // 0x001d7db0: jal 0x107ab8
    v0 = -4;                                                    // 0x001d7db8: addiu $v0, $zero, -4
    a2 = 0x38 << 16;                                            // 0x001d7dbc: lui $a2, 0x38
    v0 = s0 & v0;                                               // 0x001d7dc0: and $v0, $s0, $v0
    s3 = s3 + v0;                                               // 0x001d7dc8: addu $s3, $s3, $v0
    a2 = a2 + 0x130;                                            // 0x001d7dcc: addiu $a2, $a2, 0x130
    func_00563c90();  // 0x563c90                               // 0x001d7dd0: jal 0x563c90
    g_0036511c = s2;  // Global at 0x0036511c                   // 0x001d7dd8: sw $s2, 0x20($s4)
    g_00365120 = s1;  // Global at 0x00365120                   // 0x001d7ddc: sw $s1, 0x24($s4)
label_0x1d7de0:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d7de4: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d7dec: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d7df0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7df4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d7df8: jr $ra
    sp = sp + 0x170;                                            // 0x001d7dfc: addiu $sp, $sp, 0x170
}