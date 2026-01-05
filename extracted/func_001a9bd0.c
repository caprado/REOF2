void func_001a9bd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_194, local_1a4, local_1c4;
    
    a0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a9bd8: lw $a0, -0x63ec($gp)
    return func_001a9770();  // Tail call                        // 0x001a9be0: j 0x1a9660
    /* nop */                                                   // 0x001a9be8: nop 
    /* nop */                                                   // 0x001a9bec: nop 
    sp = sp + -0x1d0;                                           // 0x001a9bf0: addiu $sp, $sp, -0x1d0
    a3 = a1 & 0xff;                                             // 0x001a9bf4: andi $a3, $a1, 0xff
    v0 = a0 & 0xff;                                             // 0x001a9bfc: andi $v0, $a0, 0xff
    t0 = a2 & 0xff;                                             // 0x001a9c04: andi $t0, $a2, 0xff
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001a9c08: subu.qb $zero, $sp, $s5
    a1 = 0x23 << 16;                                            // 0x001a9c0c: lui $a1, 0x23
    at = 0x31 << 16;                                            // 0x001a9c14: lui $at, 0x31
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a9c18: dpa.w.ph $ac0, $sp, $s3
    a0 = sp + 0x80;                                             // 0x001a9c1c: addiu $a0, $sp, 0x80
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a9c28: addu.qb $zero, $sp, $s1
    s3 = g_003137fc;  // Global at 0x003137fc                   // 0x001a9c30: lw $s3, 0x37fc($at)
    func_0010a4d8();  // 10a4d8                                // 0x001a9c34: jal 0x10a4d8
    a1 = &str_00235850;  // "%sPL\\HP%02d.NBD"                  // 0x001a9c38: addiu $a1, $a1, 0x5850
    a0 = sp + 0x80;                                             // 0x001a9c3c: addiu $a0, $sp, 0x80
    func_001a9b30();  // 1a9b30                                // 0x001a9c40: jal 0x1a9b30
    if (v0 <= 0) goto label_0x1a9e2c;                           // 0x001a9c48: blez $v0, 0x1a9e2c
    a0 = sp + 0x180;                                            // 0x001a9c4c: addiu $a0, $sp, 0x180
    func_00107ab8();  // 107ab8                                // 0x001a9c54: jal 0x107ab8
    a2 = 0x50;                                                  // 0x001a9c58: addiu $a2, $zero, 0x50
    a1 = *(uint8_t*)((gp) + -0x6114);                           // 0x001a9c5c: lbu $a1, -0x6114($gp)
    at = 0x31 << 16;                                            // 0x001a9c60: lui $at, 0x31
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001a9c64: lw $a0, 0x37fc($at)
    v1 = 0x18 << 16;                                            // 0x001a9c68: lui $v1, 0x18
    a2 = sp + 0x184;                                            // 0x001a9c6c: addiu $a2, $sp, 0x184
    v0 = 0xc << 16;                                             // 0x001a9c70: lui $v0, 0xc
    a1 = a1 ^ 1;                                                // 0x001a9c78: xori $a1, $a1, 1
    s2 = a0 + v1;                                               // 0x001a9c7c: addu $s2, $a0, $v1
    *(uint8_t*)((gp) + -0x6114) = a1;                           // 0x001a9c80: sb $a1, -0x6114($gp)
    v1 = *(int32_t*)(a2);                                       // 0x001a9c84: lw $v1, 0($a2)
    s5 = s2 + v0;                                               // 0x001a9c88: addu $s5, $s2, $v0
    v0 = *(uint8_t*)((gp) + -0x6114);                           // 0x001a9c8c: lbu $v0, -0x6114($gp)
    s1 = s3 + v1;                                               // 0x001a9c90: addu $s1, $s3, $v1
    s6 = g_0038fe64;  // Global at 0x0038fe64                   // 0x001a9c94: lw $s6, 0($s1)
    v0 = v0 << 7;                                               // 0x001a9c98: sll $v0, $v0, 7
    s0 = v0 + 0x1800;                                           // 0x001a9c9c: addiu $s0, $v0, 0x1800
    goto label_0x1a9cdc;                                        // 0x001a9ca0: b 0x1a9cdc
    s1 = s1 + 4;                                                // 0x001a9ca4: addiu $s1, $s1, 4
label_0x1a9ca8:
    a1 = g_0038fe68;  // Global at 0x0038fe68                   // 0x001a9ca8: lw $a1, 0($s1)
    a0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9cb0: lw $a0, -0x63e8($gp)
    func_001a97d0();  // 1a97d0                                // 0x001a9cb4: jal 0x1a97d0
    s1 = s1 + 4;                                                // 0x001a9cb8: addiu $s1, $s1, 4
    func_001aee20();  // 1aee20                                // 0x001a9cc0: jal 0x1aee20
    func_001d3a30();  // 1d3a30                                // 0x001a9ccc: jal 0x1d3a30
    s0 = s0 + 1;                                                // 0x001a9cd4: addiu $s0, $s0, 1
    s4 = s4 + 1;                                                // 0x001a9cd8: addiu $s4, $s4, 1
label_0x1a9cdc:
    v0 = (s4 < s6) ? 1 : 0;                                     // 0x001a9cdc: slt $v0, $s4, $s6
    if (v0 != 0) goto label_0x1a9ca8;                           // 0x001a9ce0: bnez $v0, 0x1a9ca8
    /* nop */                                                   // 0x001a9ce4: nop 
    func_0018db10();  // 18db10                                // 0x001a9ce8: jal 0x18db10
    /* nop */                                                   // 0x001a9cec: nop 
    v0 = *(uint8_t*)((gp) + -0x6114);                           // 0x001a9cf0: lbu $v0, -0x6114($gp)
    v0 = v0 << 7;                                               // 0x001a9cf4: sll $v0, $v0, 7
    func_001d3c20();  // 1d3c20                                // 0x001a9cf8: jal 0x1d3c20
    a0 = v0 + 0x1800;                                           // 0x001a9cfc: addiu $a0, $v0, 0x1800
    s0 = 0x47 << 16;                                            // 0x001a9d00: lui $s0, 0x47
    a0 = 0x80;                                                  // 0x001a9d04: addiu $a0, $zero, 0x80
    a1 = 6;                                                     // 0x001a9d08: addiu $a1, $zero, 6
    func_001b2780();  // 1b2780                                // 0x001a9d0c: jal 0x1b2780
    s0 = s0 + 0x4840;                                           // 0x001a9d10: addiu $s0, $s0, 0x4840
    g_00475048 = v0;  // Global at 0x00475048                   // 0x001a9d14: sw $v0, 0x808($s0)
    g_00475058 = 0;  // Global at 0x00475058                    // 0x001a9d1c: sw $zero, 0x818($s0)
    a1 = 2;                                                     // 0x001a9d20: addiu $a1, $zero, 2
    v1 = local_194;                                             // 0x001a9d24: lw $v1, 0x194($sp)
    v0 = local_1a4;                                             // 0x001a9d2c: lw $v0, 0x1a4($sp)
    a2 = s3 + v1;                                               // 0x001a9d30: addu $a2, $s3, $v1
    func_001d61c0();  // 1d61c0                                // 0x001a9d34: jal 0x1d61c0
    a3 = s3 + v0;                                               // 0x001a9d38: addu $a3, $s3, $v0
    func_0018db10();  // 18db10                                // 0x001a9d3c: jal 0x18db10
    /* nop */                                                   // 0x001a9d40: nop 
    a0 = 0x47 << 16;                                            // 0x001a9d44: lui $a0, 0x47
    a1 = 1;                                                     // 0x001a9d4c: addiu $a1, $zero, 1
    goto label_0x1a9d64;                                        // 0x001a9d50: b 0x1a9d64
    a0 = a0 + 0x47e0;                                           // 0x001a9d54: addiu $a0, $a0, 0x47e0
label_0x1a9d58:
    v1 = a0 + a2;                                               // 0x001a9d58: addu $v1, $a0, $a2
    g_001808a0 = a1;  // Global at 0x001808a0                   // 0x001a9d5c: sb $a1, 0x8a0($v1)
    a2 = a2 + 1;                                                // 0x001a9d60: addiu $a2, $a2, 1
label_0x1a9d64:
    v1 = g_00475052;  // Global at 0x00475052                   // 0x001a9d64: lhu $v1, 0x812($s0)
    v1 = (a2 < v1) ? 1 : 0;                                     // 0x001a9d68: slt $v1, $a2, $v1
    if (v1 != 0) goto label_0x1a9d58;                           // 0x001a9d6c: bnez $v1, 0x1a9d58
    /* nop */                                                   // 0x001a9d70: nop 
    s0 = sp + 0x1b4;                                            // 0x001a9d74: addiu $s0, $sp, 0x1b4
    v1 = g_00474840;  // Global at 0x00474840                   // 0x001a9d78: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x1a9e2c;                           // 0x001a9d7c: beqz $v1, 0x1a9e2c
    /* nop */                                                   // 0x001a9d80: nop 
    v1 = *(uint8_t*)((gp) + -0x6114);                           // 0x001a9d84: lbu $v1, -0x6114($gp)
    v0 = v1 << 1;                                               // 0x001a9d88: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x001a9d8c: addu $v0, $v0, $v1
    v0 = v0 << 4;                                               // 0x001a9d90: sll $v0, $v0, 4
    func_001d3c20();  // 1d3c20                                // 0x001a9d94: jal 0x1d3c20
    a0 = v0 + 0x2100;                                           // 0x001a9d98: addiu $a0, $v0, 0x2100
    a0 = 0x15;                                                  // 0x001a9d9c: addiu $a0, $zero, 0x15
    func_001aefd0();  // 1aefd0                                // 0x001a9da0: jal 0x1aefd0
    a0 = 1;                                                     // 0x001a9da8: addiu $a0, $zero, 1
    func_001aefd0();  // 1aefd0                                // 0x001a9dac: jal 0x1aefd0
    a0 = 0x12;                                                  // 0x001a9db4: addiu $a0, $zero, 0x12
    func_001aefd0();  // 1aefd0                                // 0x001a9db8: jal 0x1aefd0
    a0 = 0x62;                                                  // 0x001a9dc0: addiu $a0, $zero, 0x62
    func_001aefd0();  // 1aefd0                                // 0x001a9dc4: jal 0x1aefd0
    a0 = 0xc;                                                   // 0x001a9dcc: addiu $a0, $zero, 0xc
    func_001aefd0();  // 1aefd0                                // 0x001a9dd0: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001a9dd8: addiu $a0, $zero, 0x66
    func_001aefd0();  // 1aefd0                                // 0x001a9ddc: jal 0x1aefd0
    a1 = 1;                                                     // 0x001a9de0: addiu $a1, $zero, 1
    a0 = 2;                                                     // 0x001a9de4: addiu $a0, $zero, 2
    func_001aefd0();  // 1aefd0                                // 0x001a9de8: jal 0x1aefd0
    s1 = 0x39 << 16;                                            // 0x001a9df0: lui $s1, 0x39
    a0 = 0x400;                                                 // 0x001a9df4: addiu $a0, $zero, 0x400
    a1 = 7;                                                     // 0x001a9df8: addiu $a1, $zero, 7
    func_001b2780();  // 1b2780                                // 0x001a9dfc: jal 0x1b2780
    s1 = s1 + -0x19c;                                           // 0x001a9e00: addiu $s1, $s1, -0x19c
    g_0039066c = v0;  // Global at 0x0039066c                   // 0x001a9e04: sw $v0, 0x808($s1)
    g_0039067c = 0;  // Global at 0x0039067c                    // 0x001a9e0c: sw $zero, 0x818($s1)
    a1 = 2;                                                     // 0x001a9e10: addiu $a1, $zero, 2
    v1 = g_00474840;  // Global at 0x00474840                   // 0x001a9e14: lw $v1, 0($s0)
    v0 = local_1c4;                                             // 0x001a9e1c: lw $v0, 0x1c4($sp)
    a2 = s3 + v1;                                               // 0x001a9e20: addu $a2, $s3, $v1
    func_001d61c0();  // 1d61c0                                // 0x001a9e24: jal 0x1d61c0
    a3 = s3 + v0;                                               // 0x001a9e28: addu $a3, $s3, $v0
label_0x1a9e2c:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001a9e30: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001a9e34: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001a9e38: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a9e40: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a9e44: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a9e48: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a9e4c: jr $ra
    sp = sp + 0x1d0;                                            // 0x001a9e50: addiu $sp, $sp, 0x1d0
}