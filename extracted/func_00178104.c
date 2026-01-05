void func_00178104() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x140;                                           // 0x00178104: addiu $sp, $sp, -0x140
    v1 = v1 + -0x6c20;                                          // 0x00178108: addiu $v1, $v1, -0x6c20
    v0 = v1 & 7;                                                // 0x00178110: andi $v0, $v1, 7
    if (v0 == 0) goto label_0x178188;                           // 0x0017811c: beqz $v0, 0x178188
    v0 = v1 + 0x100;                                            // 0x00178124: addiu $v0, $v1, 0x100
label_0x178128:
    v1 = v1 + 0x20;                                             // 0x00178168: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x0017816c: nop 
    /* nop */                                                   // 0x00178170: nop 
    if (v1 != v0) goto label_0x178128;                          // 0x00178174: bne $v1, $v0, 0x178128
    a0 = a0 + 0x20;                                             // 0x00178178: addiu $a0, $a0, 0x20
    goto label_0x1781c0;                                        // 0x0017817c: b 0x1781c0
    /* nop */                                                   // 0x00178180: nop 
    /* nop */                                                   // 0x00178184: nop 
label_0x178188:
    v0 = v1 + 0x100;                                            // 0x00178188: addiu $v0, $v1, 0x100
label_0x17818c:
    v1 = v1 + 0x20;                                             // 0x001781ac: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x001781b0: nop 
    /* nop */                                                   // 0x001781b4: nop 
    if (v1 != v0) goto label_0x17818c;                          // 0x001781b8: bne $v1, $v0, 0x17818c
    a0 = a0 + 0x20;                                             // 0x001781bc: addiu $a0, $a0, 0x20
label_0x1781c0:
    a3 = *(int8_t*)((v1) + 0x10);                               // 0x001781d0: lb $a3, 0x10($v1)
    t0 = *(int8_t*)((v1) + 0x11);                               // 0x001781d4: lb $t0, 0x11($v1)
    g_00210050 = a3;  // Global at 0x00210050                   // 0x001781e8: sb $a3, 0x10($a0)
    v0 = 0x21 << 16;                                            // 0x001781ec: lui $v0, 0x21
    s1 = v0 + 0x57dc;                                           // 0x001781f0: addiu $s1, $v0, 0x57dc
    g_00210051 = t0;  // Global at 0x00210051                   // 0x001781f4: sb $t0, 0x11($a0)
    a0 = g_002157dc;  // Global at 0x002157dc                   // 0x001781f8: lw $a0, 0($s1)
    if (a0 == 0) goto label_0x178248;                           // 0x001781fc: beqz $a0, 0x178248
    v0 = 0x21 << 16;                                            // 0x00178200: lui $v0, 0x21
    a2 = g_002157d8;  // Global at 0x002157d8                   // 0x00178208: lw $a2, 0x57d8($v0)
    s0 = 0x21 << 16;                                            // 0x0017820c: lui $s0, 0x21
    func_00107c70();  // 107c70                                // 0x00178210: jal 0x107c70
    s0 = s0 + 0x57e4;                                           // 0x00178214: addiu $s0, $s0, 0x57e4
    v0 = g_002157dc;  // Global at 0x002157dc                   // 0x00178218: lw $v0, 0($s1)
    g_002157e4 = v0;  // Global at 0x002157e4                   // 0x00178220: sw $v0, 0($s0)
    func_0010ac68();  // 10ac68                                // 0x00178224: jal 0x10ac68
    func_0010ae00();  // 10ae00                                // 0x0017822c: jal 0x10ae00
    v1 = g_002157e4;  // Global at 0x002157e4                   // 0x00178234: lw $v1, 0($s0)
    a0 = 0x21 << 16;                                            // 0x00178238: lui $a0, 0x21
    v1 = v1 + v0;                                               // 0x0017823c: addu $v1, $v1, $v0
    g_002157e8 = v1;  // Global at 0x002157e8                   // 0x00178240: sw $v1, 0x57e8($a0)
    g_002157e4 = v1;  // Global at 0x002157e4                   // 0x00178244: sw $v1, 0($s0)
label_0x178248:
    return;                                                     // 0x00178254: jr $ra
    sp = sp + 0x140;                                            // 0x00178258: addiu $sp, $sp, 0x140
}