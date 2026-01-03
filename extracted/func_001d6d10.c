void func_001d6d10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001d6d10: addiu $sp, $sp, -0x70
    a1 = 0xff;                                                  // 0x001d6d14: addiu $a1, $zero, 0xff
    a0 = sp + 0x50;                                             // 0x001d6d1c: addiu $a0, $sp, 0x50
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d6d20: addu.qb $zero, $sp, $s1
    a2 = 0x20;                                                  // 0x001d6d24: addiu $a2, $zero, 0x20
    func_00107c70();  // 107c70                                // 0x001d6d28: jal 0x107c70
    a0 = sp + 0x30;                                             // 0x001d6d30: addiu $a0, $sp, 0x30
    a1 = 0xff;                                                  // 0x001d6d34: addiu $a1, $zero, 0xff
    func_00107c70();  // 107c70                                // 0x001d6d38: jal 0x107c70
    a2 = 0x20;                                                  // 0x001d6d3c: addiu $a2, $zero, 0x20
    a0 = sp + 0x50;                                             // 0x001d6d40: addiu $a0, $sp, 0x50
    func_001d6c90();  // 1d6c90                                // 0x001d6d44: jal 0x1d6c90
    a1 = sp + 0x30;                                             // 0x001d6d48: addiu $a1, $sp, 0x30
    at = 0x31 << 16;                                            // 0x001d6d4c: lui $at, 0x31
    v1 = 0x49 << 16;                                            // 0x001d6d50: lui $v1, 0x49
    a0 = g_003137c2;  // Global at 0x003137c2                   // 0x001d6d54: lhu $a0, 0x37c2($at)
    v1 = v1 + -0xf90;                                           // 0x001d6d58: addiu $v1, $v1, -0xf90
    a0 = a0 << 4;                                               // 0x001d6d60: sll $a0, $a0, 4
    t0 = v1 + a0;                                               // 0x001d6d64: addu $t0, $v1, $a0
    a0 = 0 | 0xffff;                                            // 0x001d6d68: ori $a0, $zero, 0xffff
label_0x1d6d6c:
    a3 = *(uint16_t*)(t0);                                      // 0x001d6d6c: lhu $a3, 0($t0)
    v1 = *(uint16_t*)((t0) + 2);                                // 0x001d6d70: lhu $v1, 2($t0)
    if (a3 != a0) goto label_0x1d6d88;                          // 0x001d6d74: bne $a3, $a0, 0x1d6d88
    t0 = t0 + 4;                                                // 0x001d6d78: addiu $t0, $t0, 4
    v1 = v1 & 0xffff;                                           // 0x001d6d7c: andi $v1, $v1, 0xffff
    if (v1 == 0) goto label_0x1d6dd0;                           // 0x001d6d80: beqz $v1, 0x1d6dd0
    /* nop */                                                   // 0x001d6d84: nop 
label_0x1d6d88:
    if (a3 == a0) goto label_0x1d6dd0;                          // 0x001d6d88: beq $a3, $a0, 0x1d6dd0
    a2 = t1 << 1;                                               // 0x001d6d90: sll $a2, $t1, 1
label_0x1d6d94:
    v1 = a2 + sp;                                               // 0x001d6d94: addu $v1, $a2, $sp
    a1 = v1 + 0x50;                                             // 0x001d6d98: addiu $a1, $v1, 0x50
    v1 = g_0048f0c0;  // Global at 0x0048f0c0                   // 0x001d6d9c: lhu $v1, 0($a1)
    if (a3 != v1) goto label_0x1d6dac;                          // 0x001d6da0: bne $a3, $v1, 0x1d6dac
    v1 = a2 + sp;                                               // 0x001d6da4: addu $v1, $a2, $sp
    g_0048f0c0 = a0;  // Global at 0x0048f0c0                   // 0x001d6da8: sh $a0, 0($a1)
label_0x1d6dac:
    a1 = v1 + 0x30;                                             // 0x001d6dac: addiu $a1, $v1, 0x30
    v1 = g_0048f0a0;  // Global at 0x0048f0a0                   // 0x001d6db0: lhu $v1, 0($a1)
    if (a3 != v1) goto label_0x1d6dc0;                          // 0x001d6db4: bne $a3, $v1, 0x1d6dc0
    /* nop */                                                   // 0x001d6db8: nop 
    g_0048f0a0 = a0;  // Global at 0x0048f0a0                   // 0x001d6dbc: sh $a0, 0($a1)
label_0x1d6dc0:
    t1 = t1 + 1;                                                // 0x001d6dc0: addiu $t1, $t1, 1
    v1 = (t1 < 0x10) ? 1 : 0;                                   // 0x001d6dc4: slti $v1, $t1, 0x10
    if (v1 != 0) goto label_0x1d6d94;                           // 0x001d6dc8: bnez $v1, 0x1d6d94
    a2 = t1 << 1;                                               // 0x001d6dcc: sll $a2, $t1, 1
label_0x1d6dd0:
    t2 = t2 + 1;                                                // 0x001d6dd0: addiu $t2, $t2, 1
    v1 = (t2 < 4) ? 1 : 0;                                      // 0x001d6dd4: slti $v1, $t2, 4
    if (v1 != 0) goto label_0x1d6d6c;                           // 0x001d6dd8: bnez $v1, 0x1d6d6c
    s1 = s0 << 1;                                               // 0x001d6de0: sll $s1, $s0, 1
label_0x1d6de4:
    v1 = 0 | 0xffff;                                            // 0x001d6de4: ori $v1, $zero, 0xffff
    a0 = s1 + sp;                                               // 0x001d6de8: addu $a0, $s1, $sp
    a2 = *(uint16_t*)((a0) + 0x50);                             // 0x001d6dec: lhu $a2, 0x50($a0)
    if (a2 == v1) goto label_0x1d6e08;                          // 0x001d6df0: beq $a2, $v1, 0x1d6e08
    a0 = s1 + sp;                                               // 0x001d6df4: addu $a0, $s1, $sp
    a0 = 4;                                                     // 0x001d6df8: addiu $a0, $zero, 4
    func_001d5990();  // 1d5990                                // 0x001d6dfc: jal 0x1d5990
    a1 = 2;                                                     // 0x001d6e00: addiu $a1, $zero, 2
    a0 = s1 + sp;                                               // 0x001d6e04: addu $a0, $s1, $sp
label_0x1d6e08:
    v1 = 0 | 0xffff;                                            // 0x001d6e08: ori $v1, $zero, 0xffff
    a3 = a0 + 0x30;                                             // 0x001d6e0c: addiu $a3, $a0, 0x30
    a0 = *(uint16_t*)(a3);                                      // 0x001d6e10: lhu $a0, 0($a3)
    if (a0 == v1) goto label_0x1d6e40;                          // 0x001d6e14: beq $a0, $v1, 0x1d6e40
    a1 = a0 & 0xffff;                                           // 0x001d6e18: andi $a1, $a0, 0xffff
    func_001d5410();  // 1d5410                                // 0x001d6e1c: jal 0x1d5410
    a0 = 2;                                                     // 0x001d6e20: addiu $a0, $zero, 2
    if (v0 == 0) goto label_0x1d6e30;                           // 0x001d6e24: beqz $v0, 0x1d6e30
    v1 = 1;                                                     // 0x001d6e28: addiu $v1, $zero, 1
    *(uint8_t*)(v0) = v1;                                       // 0x001d6e2c: sb $v1, 0($v0)
label_0x1d6e30:
    a2 = *(uint16_t*)(a3);                                      // 0x001d6e30: lhu $a2, 0($a3)
    a0 = 4;                                                     // 0x001d6e34: addiu $a0, $zero, 4
    func_001d5530();  // 1d5530                                // 0x001d6e38: jal 0x1d5530
    a1 = 2;                                                     // 0x001d6e3c: addiu $a1, $zero, 2
label_0x1d6e40:
    s0 = s0 + 1;                                                // 0x001d6e40: addiu $s0, $s0, 1
    v1 = (s0 < 0x10) ? 1 : 0;                                   // 0x001d6e44: slti $v1, $s0, 0x10
    if (v1 != 0) goto label_0x1d6de4;                           // 0x001d6e48: bnez $v1, 0x1d6de4
    s1 = s0 << 1;                                               // 0x001d6e4c: sll $s1, $s0, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d6e54: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d6e58: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d6e5c: jr $ra
    sp = sp + 0x70;                                             // 0x001d6e60: addiu $sp, $sp, 0x70
}