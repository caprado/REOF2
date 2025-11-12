void func_001c2930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c2930: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001c2934: lui $at, 0x31
    v1 = 2;                                                     // 0x001c293c: addiu $v1, $zero, 2
    a0 = g_003160b0;  // Global at 0x003160b0                   // 0x001c2944: lw $a0, 0x60b0($at)
    s0 = 0x31 << 16;                                            // 0x001c2948: lui $s0, 0x31
    if (a0 == v1) goto label_0x1c2990;                          // 0x001c294c: beq $a0, $v1, 0x1c2990
    s0 = s0 + 0x60b0;                                           // 0x001c2950: addiu $s0, $s0, 0x60b0
    v1 = 1;                                                     // 0x001c2954: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1c2970;                          // 0x001c2958: beq $a0, $v1, 0x1c2970
    /* nop */                                                   // 0x001c295c: nop 
    if (a0 == 0) goto label_0x1c2a28;                           // 0x001c2960: beqz $a0, 0x1c2a28
    /* nop */                                                   // 0x001c2964: nop 
    goto label_0x1c2a2c;                                        // 0x001c2968: b 0x1c2a2c
    v1 = g_003160b0;  // Global at 0x003160b0                   // 0x001c296c: lw $v1, 0($s0)
label_0x1c2970:
    a0 = g_003160b4;  // Global at 0x003160b4                   // 0x001c2970: lw $a0, 4($s0)
    v1 = g_003160c0;  // Global at 0x003160c0                   // 0x001c2974: lw $v1, 0x10($s0)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001c2978: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1c2a28;                           // 0x001c297c: bnez $v1, 0x1c2a28
    /* nop */                                                   // 0x001c2980: nop 
    v1 = g_003160b0;  // Global at 0x003160b0                   // 0x001c2984: lw $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x001c2988: addiu $v1, $v1, 1
    g_003160b0 = v1;  // Global at 0x003160b0                   // 0x001c298c: sw $v1, 0($s0)
label_0x1c2990:
    a0 = g_003160b4;  // Global at 0x003160b4                   // 0x001c2990: lw $a0, 4($s0)
    v1 = g_003160c4;  // Global at 0x003160c4                   // 0x001c2994: lw $v1, 0x14($s0)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001c2998: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1c29d0;                           // 0x001c299c: bnez $v1, 0x1c29d0
    /* nop */                                                   // 0x001c29a0: nop 
    v1 = g_003160bc;  // Global at 0x003160bc                   // 0x001c29a4: lw $v1, 0xc($s0)
    v1 = *(int32_t*)(v1);                                       // 0x001c29a8: lw $v1, 0($v1)
    if (v1 >= 0) goto label_0x1c29bc;                           // 0x001c29ac: bgez $v1, 0x1c29bc
    goto label_0x1c2a28;                                        // 0x001c29b4: b 0x1c2a28
    g_003160b0 = 0;  // Global at 0x003160b0                    // 0x001c29b8: sw $zero, 0($s0)
label_0x1c29bc:
    func_001c28b0();  // 0x1c27a0                                // 0x001c29bc: jal 0x1c27a0
    /* nop */                                                   // 0x001c29c0: nop 
    v1 = 1;                                                     // 0x001c29c4: addiu $v1, $zero, 1
    goto label_0x1c2970;                                        // 0x001c29c8: b 0x1c2970
    g_003160b0 = v1;  // Global at 0x003160b0                   // 0x001c29cc: sw $v1, 0($s0)
label_0x1c29d0:
    v1 = g_003160c8;  // Global at 0x003160c8                   // 0x001c29d0: lb $v1, 0x18($s0)
    if (v1 == 0) goto label_0x1c29fc;                           // 0x001c29d4: beqz $v1, 0x1c29fc
    /* nop */                                                   // 0x001c29d8: nop 
    a2 = g_003162c8;  // Global at 0x003162c8                   // 0x001c29dc: lw $a2, 0x218($s0)
    if (a2 == 0) goto label_0x1c29fc;                           // 0x001c29e0: beqz $a2, 0x1c29fc
    a0 = 1;                                                     // 0x001c29e4: addiu $a0, $zero, 1
    t0 = 0x18;                                                  // 0x001c29f0: addiu $t0, $zero, 0x18
    func_001b4380();  // 0x1b42c0                                // 0x001c29f4: jal 0x1b42c0
    t1 = s0 + 0x18;                                             // 0x001c29f8: addiu $t1, $s0, 0x18
label_0x1c29fc:
    v1 = g_003161c8;  // Global at 0x003161c8                   // 0x001c29fc: lb $v1, 0x118($s0)
    if (v1 == 0) goto label_0x1c2a28;                           // 0x001c2a00: beqz $v1, 0x1c2a28
    /* nop */                                                   // 0x001c2a04: nop 
    a2 = g_003162cc;  // Global at 0x003162cc                   // 0x001c2a08: lw $a2, 0x21c($s0)
    if (a2 == 0) goto label_0x1c2a28;                           // 0x001c2a0c: beqz $a2, 0x1c2a28
    a0 = 1;                                                     // 0x001c2a10: addiu $a0, $zero, 1
    t0 = 0x18;                                                  // 0x001c2a1c: addiu $t0, $zero, 0x18
    func_001b4380();  // 0x1b42c0                                // 0x001c2a20: jal 0x1b42c0
    t1 = s0 + 0x118;                                            // 0x001c2a24: addiu $t1, $s0, 0x118
label_0x1c2a28:
    v1 = g_003160b0;  // Global at 0x003160b0                   // 0x001c2a28: lw $v1, 0($s0)
label_0x1c2a2c:
    if (v1 == 0) goto label_0x1c2a40;                           // 0x001c2a2c: beqz $v1, 0x1c2a40
    /* nop */                                                   // 0x001c2a30: nop 
    v1 = g_003160b4;  // Global at 0x003160b4                   // 0x001c2a34: lw $v1, 4($s0)
    v1 = v1 + 1;                                                // 0x001c2a38: addiu $v1, $v1, 1
    g_003160b4 = v1;  // Global at 0x003160b4                   // 0x001c2a3c: sw $v1, 4($s0)
label_0x1c2a40:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2a44: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c2a48: jr $ra
    sp = sp + 0x20;                                             // 0x001c2a4c: addiu $sp, $sp, 0x20
}