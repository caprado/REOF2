void func_001c0d00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001c0d00: addiu $sp, $sp, -0x40
    v1 = 0x22 << 16;                                            // 0x001c0d04: lui $v1, 0x22
    v1 = v1 + -0x30e8;                                          // 0x001c0d0c: addiu $v1, $v1, -0x30e8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c0d14: addu.qb $zero, $sp, $s1
    a0 = *(int32_t*)((a0) + 0xd4);                              // 0x001c0d20: lw $a0, 0xd4($a0)
    a0 = a0 << 2;                                               // 0x001c0d24: sll $a0, $a0, 2
    v1 = v1 + a0;                                               // 0x001c0d28: addu $v1, $v1, $a0
    s1 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001c0d2c: lw $s1, 0($v1)
    v1 = *(int32_t*)((s1) + 0x48);                              // 0x001c0d30: lw $v1, 0x48($s1)
    if (v1 == 0) goto label_0x1c0e38;                           // 0x001c0d34: beqz $v1, 0x1c0e38
    /* nop */                                                   // 0x001c0d38: nop 
    s2 = *(int32_t*)((s1) + 0x10);                              // 0x001c0d3c: lw $s2, 0x10($s1)
    func_0010ae00();  // 10ae00                                // 0x001c0d40: jal 0x10ae00
    a0 = *(int32_t*)(s1);                                       // 0x001c0d44: lw $a0, 0($s1)
    *(uint16_t*)((s2) + 6) = v0;                                // 0x001c0d48: sh $v0, 6($s2)
    a1 = 0x24 << 16;                                            // 0x001c0d4c: lui $a1, 0x24
    a2 = *(int32_t*)(s1);                                       // 0x001c0d50: lw $a2, 0($s1)
    a0 = s2 + 0xc0;                                             // 0x001c0d54: addiu $a0, $s2, 0xc0
    a3 = *(int32_t*)((s1) + 4);                                 // 0x001c0d58: lw $a3, 4($s1)
    func_0010a4d8();  // 10a4d8                                // 0x001c0d5c: jal 0x10a4d8
    a1 = a1 + -0x1e50;                                          // 0x001c0d60: addiu $a1, $a1, -0x1e50
    a1 = *(int32_t*)((s1) + 0x1c);                              // 0x001c0d64: lw $a1, 0x1c($s1)
    func_0010ac68();  // 10ac68                                // 0x001c0d68: jal 0x10ac68
    a0 = s2 + 0x104;                                            // 0x001c0d6c: addiu $a0, $s2, 0x104
    a1 = *(int32_t*)((s1) + 0x2c);                              // 0x001c0d70: lw $a1, 0x2c($s1)
    func_0010ac68();  // 10ac68                                // 0x001c0d74: jal 0x10ac68
    a0 = s2 + 0x144;                                            // 0x001c0d78: addiu $a0, $s2, 0x144
    a1 = *(int32_t*)((s1) + 0x3c);                              // 0x001c0d7c: lw $a1, 0x3c($s1)
    func_0010ac68();  // 10ac68                                // 0x001c0d80: jal 0x10ac68
    a0 = s2 + 0x184;                                            // 0x001c0d84: addiu $a0, $s2, 0x184
    a0 = *(int32_t*)((s0) + 0xd4);                              // 0x001c0d88: lw $a0, 0xd4($s0)
    v1 = 1;                                                     // 0x001c0d8c: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1c0de8;                          // 0x001c0d90: beq $a0, $v1, 0x1c0de8
    a2 = 0x40;                                                  // 0x001c0d94: addiu $a2, $zero, 0x40
    if (a0 == 0) goto label_0x1c0da8;                           // 0x001c0d98: beqz $a0, 0x1c0da8
    a1 = 0x22 << 16;                                            // 0x001c0d9c: lui $a1, 0x22
    goto label_0x1c0e3c;                                        // 0x001c0da0: b 0x1c0e3c
label_0x1c0da8:
    a0 = s2 + 0x50;                                             // 0x001c0da8: addiu $a0, $s2, 0x50
    a1 = a1 + -0x30a0;                                          // 0x001c0dac: addiu $a1, $a1, -0x30a0
    func_00107ab8();  // 107ab8                                // 0x001c0db0: jal 0x107ab8
    a2 = 0x30;                                                  // 0x001c0db4: addiu $a2, $zero, 0x30
    a1 = 0x22 << 16;                                            // 0x001c0db8: lui $a1, 0x22
    a0 = s2 + 0x80;                                             // 0x001c0dbc: addiu $a0, $s2, 0x80
    a1 = a1 + -0x3070;                                          // 0x001c0dc0: addiu $a1, $a1, -0x3070
    func_00107ab8();  // 107ab8                                // 0x001c0dc4: jal 0x107ab8
    a2 = 0x30;                                                  // 0x001c0dc8: addiu $a2, $zero, 0x30
    a1 = 0x22 << 16;                                            // 0x001c0dcc: lui $a1, 0x22
    a0 = s2 + 0xb0;                                             // 0x001c0dd0: addiu $a0, $s2, 0xb0
    a1 = a1 + -0x3040;                                          // 0x001c0dd4: addiu $a1, $a1, -0x3040
    func_00107ab8();  // 107ab8                                // 0x001c0dd8: jal 0x107ab8
    a2 = 0x10;                                                  // 0x001c0ddc: addiu $a2, $zero, 0x10
    goto label_0x1c0e38;                                        // 0x001c0de0: b 0x1c0e38
    /* nop */                                                   // 0x001c0de4: nop 
label_0x1c0de8:
    a1 = 0x22 << 16;                                            // 0x001c0de8: lui $a1, 0x22
    a0 = s2 + 0x10;                                             // 0x001c0dec: addiu $a0, $s2, 0x10
    *(uint32_t*)((s2) + 0xc) = a2;                              // 0x001c0df0: sw $a2, 0xc($s2)
    func_00107ab8();  // 107ab8                                // 0x001c0df4: jal 0x107ab8
    a1 = a1 + -0x3030;                                          // 0x001c0df8: addiu $a1, $a1, -0x3030
    a1 = 0x22 << 16;                                            // 0x001c0dfc: lui $a1, 0x22
    a0 = s2 + 0x50;                                             // 0x001c0e00: addiu $a0, $s2, 0x50
    a1 = a1 + -0x2ff0;                                          // 0x001c0e04: addiu $a1, $a1, -0x2ff0
    func_00107ab8();  // 107ab8                                // 0x001c0e08: jal 0x107ab8
    a2 = 0x30;                                                  // 0x001c0e0c: addiu $a2, $zero, 0x30
    a1 = 0x22 << 16;                                            // 0x001c0e10: lui $a1, 0x22
    a0 = s2 + 0x80;                                             // 0x001c0e14: addiu $a0, $s2, 0x80
    a1 = a1 + -0x2fc0;                                          // 0x001c0e18: addiu $a1, $a1, -0x2fc0
    func_00107ab8();  // 107ab8                                // 0x001c0e1c: jal 0x107ab8
    a2 = 0x30;                                                  // 0x001c0e20: addiu $a2, $zero, 0x30
    a1 = 0x22 << 16;                                            // 0x001c0e24: lui $a1, 0x22
    a0 = s2 + 0xb0;                                             // 0x001c0e28: addiu $a0, $s2, 0xb0
    a1 = a1 + -0x2f90;                                          // 0x001c0e2c: addiu $a1, $a1, -0x2f90
    func_00107ab8();  // 107ab8                                // 0x001c0e30: jal 0x107ab8
    a2 = 0x10;                                                  // 0x001c0e34: addiu $a2, $zero, 0x10
label_0x1c0e38:
label_0x1c0e3c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001c0e3c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c0e40: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0e44: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0e48: jr $ra
    sp = sp + 0x40;                                             // 0x001c0e4c: addiu $sp, $sp, 0x40
}