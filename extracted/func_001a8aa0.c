void func_001a8aa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_b8, local_e0;
    
    sp = sp + -0x2b0;                                           // 0x001a8aa0: addiu $sp, $sp, -0x2b0
    func_00102838();  // 0x102810                                // 0x001a8aa8: jal 0x102810
    func_00102b68();  // 0x102b40                                // 0x001a8ab0: jal 0x102b40
    /* nop */                                                   // 0x001a8ab4: nop 
    func_00101e50();  // 0x101e38                                // 0x001a8ab8: jal 0x101e38
    /* nop */                                                   // 0x001a8abc: nop 
    func_00102388();  // 0x102370                                // 0x001a8ac0: jal 0x102370
    /* nop */                                                   // 0x001a8ac4: nop 
    func_00112418();  // 0x1123b0                                // 0x001a8ac8: jal 0x1123b0
    /* nop */                                                   // 0x001a8acc: nop 
    func_00103188();  // 0x1030a8                                // 0x001a8ad0: jal 0x1030a8
    a0 = 1;                                                     // 0x001a8ad4: addiu $a0, $zero, 1
    a0 = 0x100 << 16;                                           // 0x001a8ad8: lui $a0, 0x100
    func_00107d30();  // 0x107c70                                // 0x001a8ae0: jal 0x107c70
    a2 = 4 << 16;                                               // 0x001a8ae4: lui $a2, 4
    v0 = s0 << 6;                                               // 0x001a8aec: sll $v0, $s0, 6
label_0x1a8af0:
    a0 = sp + 0x20;                                             // 0x001a8af0: addiu $a0, $sp, 0x20
    a2 = 0x10;                                                  // 0x001a8b00: addiu $a2, $zero, 0x10
    t2 = 0x400;                                                 // 0x001a8b0c: addiu $t2, $zero, 0x400
    func_00113630();  // 0x113448                                // 0x001a8b10: jal 0x113448
    t3 = 0x40;                                                  // 0x001a8b14: addiu $t3, $zero, 0x40
    iFlushCache();  // 0x114560                                 // 0x001a8b18: jal 0x114560
    a0 = sp + 0x20;                                             // 0x001a8b20: addiu $a0, $sp, 0x20
    func_001137b0();  // 0x113630                                // 0x001a8b24: jal 0x113630
    a1 = 0x100 << 16;                                           // 0x001a8b28: lui $a1, 0x100
    func_00113448();  // 0x113130                                // 0x001a8b30: jal 0x113130
    s0 = s0 + 1;                                                // 0x001a8b38: addiu $s0, $s0, 1
    v0 = (s0 < 0x10) ? 1 : 0;                                   // 0x001a8b3c: slti $v0, $s0, 0x10
    if (v0 != 0) goto label_0x1a8af0;                           // 0x001a8b40: bnez $v0, 0x1a8af0
    v0 = s0 << 6;                                               // 0x001a8b44: sll $v0, $s0, 6
    a1 = 1;                                                     // 0x001a8b4c: addiu $a1, $zero, 1
    a2 = 2;                                                     // 0x001a8b50: addiu $a2, $zero, 2
    func_001123a0();  // 0x112210                                // 0x001a8b54: jal 0x112210
label_0x1a8b60:
    func_00113130();  // 0x113098                                // 0x001a8b60: jal 0x113098
    s0 = s0 + 1;                                                // 0x001a8b68: addiu $s0, $s0, 1
    v0 = (s0 < 0x14) ? 1 : 0;                                   // 0x001a8b6c: slti $v0, $s0, 0x14
    /* nop */                                                   // 0x001a8b70: nop 
    if (v0 != 0) goto label_0x1a8b60;                           // 0x001a8b74: bnez $v0, 0x1a8b60
    /* nop */                                                   // 0x001a8b78: nop 
    a0 = sp + 0x80;                                             // 0x001a8b7c: addiu $a0, $sp, 0x80
    a2 = 0x280;                                                 // 0x001a8b84: addiu $a2, $zero, 0x280
    a3 = 0x1c0;                                                 // 0x001a8b88: addiu $a3, $zero, 0x1c0
    func_00113038();  // 0x112da0                                // 0x001a8b94: jal 0x112da0
    t2 = 1;                                                     // 0x001a8b98: addiu $t2, $zero, 1
    v1 = local_e0;                                              // 0x001a8b9c: lhu $v1, 0xe0($sp)
    a0 = -0x200;                                                // 0x001a8ba0: addiu $a0, $zero, -0x200
    v0 = local_b8;                                              // 0x001a8ba4: lhu $v0, 0xb8($sp)
    v1 = v1 & a0;                                               // 0x001a8bac: and $v1, $v1, $a0
    v1 = v1 | a1;                                               // 0x001a8bb0: or $v1, $v1, $a1
    v0 = v0 & a0;                                               // 0x001a8bb4: and $v0, $v0, $a0
    local_e0 = v1;                                              // 0x001a8bb8: sh $v1, 0xe0($sp)
    v1 = v1 & 0x1ff;                                            // 0x001a8bbc: andi $v1, $v1, 0x1ff
    v0 = v0 | v1;                                               // 0x001a8bc0: or $v0, $v0, $v1
    local_b8 = v0;                                              // 0x001a8bc4: sh $v0, 0xb8($sp)
label_0x1a8bc8:
    func_00113130();  // 0x113098                                // 0x001a8bc8: jal 0x113098
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001a8bd0: sltu $v0, $zero, $v0
    v0 = v0 ^ 1;                                                // 0x001a8bd4: xori $v0, $v0, 1
    /* nop */                                                   // 0x001a8bd8: nop 
    if (v0 != 0) goto label_0x1a8bc8;                           // 0x001a8bdc: bnez $v0, 0x1a8bc8
    /* nop */                                                   // 0x001a8be0: nop 
    func_00113448();  // 0x113130                                // 0x001a8be8: jal 0x113130
    t0 = 0x21 << 16;                                            // 0x001a8bf0: lui $t0, 0x21
    t1 = 0x21 << 16;                                            // 0x001a8bf4: lui $t1, 0x21
    t0 = t0 + 0x7770;                                           // 0x001a8bf8: addiu $t0, $t0, 0x7770
    t1 = t1 + 0x77b0;                                           // 0x001a8bfc: addiu $t1, $t1, 0x77b0
    a3 = 0x100 << 16;                                           // 0x001a8c00: lui $a3, 0x100
label_0x1a8c08:
    a1 = g_002177b0;  // Global at 0x002177b0                   // 0x001a8c08: lbu $a1, 0($t1)
    a2 = a2 + 1;                                                // 0x001a8c0c: addiu $a2, $a2, 1
    v0 = (a2 < 0x1000) ? 1 : 0;                                 // 0x001a8c10: slti $v0, $a2, 0x1000
    v1 = a1 >> 4;                                               // 0x001a8c14: sra $v1, $a1, 4
    t1 = t1 + 1;                                                // 0x001a8c18: addiu $t1, $t1, 1
    a0 = v1 & 0xff;                                             // 0x001a8c1c: andi $a0, $v1, 0xff
    a0 = a0 << 2;                                               // 0x001a8c20: sll $a0, $a0, 2
    v1 = a1 & 0xf;                                              // 0x001a8c24: andi $v1, $a1, 0xf
    a0 = t0 + a0;                                               // 0x001a8c28: addu $a0, $t0, $a0
    v1 = v1 << 2;                                               // 0x001a8c2c: sll $v1, $v1, 2
    a0 = g_01000000;  // Global at 0x01000000                   // 0x001a8c30: lw $a0, 0($a0)
    v1 = t0 + v1;                                               // 0x001a8c34: addu $v1, $t0, $v1
    g_01000000 = a0;  // Global at 0x01000000                   // 0x001a8c38: sw $a0, 0($a3)
    v1 = *(int32_t*)(v1);                                       // 0x001a8c3c: lw $v1, 0($v1)
    g_01000004 = v1;  // Global at 0x01000004                   // 0x001a8c40: sw $v1, 4($a3)
    if (v0 != 0) goto label_0x1a8c08;                           // 0x001a8c44: bnez $v0, 0x1a8c08
    a3 = a3 + 8;                                                // 0x001a8c48: addiu $a3, $a3, 8
    a0 = sp + 0x20;                                             // 0x001a8c4c: addiu $a0, $sp, 0x20
    a2 = 0xa;                                                   // 0x001a8c54: addiu $a2, $zero, 0xa
    t0 = 0x10;                                                  // 0x001a8c5c: addiu $t0, $zero, 0x10
    t1 = 0x190;                                                 // 0x001a8c60: addiu $t1, $zero, 0x190
    t2 = 0x100;                                                 // 0x001a8c64: addiu $t2, $zero, 0x100
    func_00113630();  // 0x113448                                // 0x001a8c68: jal 0x113448
    t3 = 0x20;                                                  // 0x001a8c6c: addiu $t3, $zero, 0x20
    iFlushCache();  // 0x114560                                 // 0x001a8c70: jal 0x114560
    a0 = sp + 0x80;                                             // 0x001a8c78: addiu $a0, $sp, 0x80
    func_00113098();  // 0x113038                                // 0x001a8c7c: jal 0x113038
    a1 = 1;                                                     // 0x001a8c80: addiu $a1, $zero, 1
    a0 = sp + 0x20;                                             // 0x001a8c84: addiu $a0, $sp, 0x20
    func_001137b0();  // 0x113630                                // 0x001a8c88: jal 0x113630
    a1 = 0x100 << 16;                                           // 0x001a8c8c: lui $a1, 0x100
    func_00113130();  // 0x113098                                // 0x001a8c90: jal 0x113098
    iFlushCache();  // 0x114560                                 // 0x001a8c98: jal 0x114560
    func_00113448();  // 0x113130                                // 0x001a8ca4: jal 0x113130
    a0 = sp + 0x80;                                             // 0x001a8cac: addiu $a0, $sp, 0x80
    func_00113098();  // 0x113038                                // 0x001a8cb0: jal 0x113038
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a8cbc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a8cc0: jr $ra
    sp = sp + 0x2b0;                                            // 0x001a8cc4: addiu $sp, $sp, 0x2b0
}