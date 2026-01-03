void func_00188118() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v1 = 0x24;                                                  // 0x00188118: addiu $v1, $zero, 0x24
    v0 = 0x28 << 16;                                            // 0x0018811c: lui $v0, 0x28
    /* multiply: a0 * v1 -> hi:lo */                            // 0x00188120: mult $ac3, $a0, $v1
    v0 = v0 + -0x2fb8;                                          // 0x00188124: addiu $v0, $v0, -0x2fb8
    v0 = v0 + v1;                                               // 0x00188128: addu $v0, $v0, $v1
    return func_00188118();  // Tail call                        // 0x0018812c: j 0x187f80
    t0 = g_0027d05c;  // Global at 0x0027d05c                   // 0x00188130: lw $t0, 0x14($v0)
    /* nop */                                                   // 0x00188134: nop 
    sp = sp + -0x90;                                            // 0x00188138: addiu $sp, $sp, -0x90
    v0 = 0x24;                                                  // 0x0018813c: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x00188144: lui $v1, 0x28
    s1 = v1 + -0x2fb8;                                          // 0x00188150: addiu $s1, $v1, -0x2fb8
    v0 = s1 + 4;                                                // 0x0018815c: addiu $v0, $s1, 4
    s4 = s0 + v0;                                               // 0x0018816c: addu $s4, $s0, $v0
    func_00188dc8();  // 188dc8                                // 0x00188180: jal 0x188dc8
    a0 = *(int32_t*)(s4);                                       // 0x00188184: lw $a0, 0($s4)
    v1 = 3;                                                     // 0x00188188: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x18819c;                          // 0x0018818c: bne $v0, $v1, 0x18819c
    v0 = s1 + s0;                                               // 0x00188190: addu $v0, $s1, $s0
    goto label_0x1882a0;                                        // 0x00188194: b 0x1882a0
label_0x18819c:
    t4 = g_0027d054;  // Global at 0x0027d054                   // 0x0018819c: lw $t4, 8($v0)
    v0 = ((unsigned)t3 < (unsigned)0x2001) ? 1 : 0;             // 0x001881a4: sltiu $v0, $t3, 0x2001
    if (v0 != 0) goto label_0x1881c4;                           // 0x001881a8: bnez $v0, 0x1881c4
    a2 = s1 + s0;                                               // 0x001881ac: addu $a2, $s1, $s0
    a0 = 0x23 << 16;                                            // 0x001881b0: lui $a0, 0x23
    func_00116508();  // 116508                                // 0x001881b4: jal 0x116508
    a0 = &str_0022a000;  // "MC2SOCKET"                         // 0x001881b8: addiu $a0, $a0, -0x6000
    goto label_0x1882a0;                                        // 0x001881bc: b 0x1882a0
label_0x1881c4:
    s3 = 0x28 << 16;                                            // 0x001881c4: lui $s3, 0x28
    s1 = 0x21 << 16;                                            // 0x001881cc: lui $s1, 0x21
    t0 = g_00280010;  // Global at 0x00280010                   // 0x001881d8: lw $t0, 0x10($v1)
    t1 = g_0022a020;  // Global at 0x0022a020                   // 0x001881e0: lw $t1, 0x20($a0)
    t2 = g_0027d203;  // Global at 0x0027d203                   // 0x001881e4: lw $t2, 0x1c($a1)
    v1 = *(int32_t*)((a2) + 0x14);                              // 0x001881e8: lw $v1, 0x14($a2)
    a3 = g_0027d058;  // Global at 0x0027d058                   // 0x001881f0: lw $a3, 0xc($v0)
    v0 = s3 + -0x2f40;                                          // 0x001881f8: addiu $v0, $s3, -0x2f40
    g_0027d0c0 = s6;  // Global at 0x0027d0c0                   // 0x001881fc: sw $s6, -0x2f40($s3)
    a0 = v0 + 0x28;                                             // 0x00188200: addiu $a0, $v0, 0x28
    g_0027d0c8 = t4;  // Global at 0x0027d0c8                   // 0x00188204: sw $t4, 8($v0)
    g_0027d0cc = a3;  // Global at 0x0027d0cc                   // 0x00188208: sw $a3, 0xc($v0)
    s6 = 0x18 << 16;                                            // 0x0018820c: lui $s6, 0x18
    g_0027d0d0 = t0;  // Global at 0x0027d0d0                   // 0x00188210: sw $t0, 0x10($v0)
    s5 = 1;                                                     // 0x00188214: addiu $s5, $zero, 1
    g_0027d0d4 = t1;  // Global at 0x0027d0d4                   // 0x00188218: sw $t1, 0x14($v0)
    g_0027d0d8 = t2;  // Global at 0x0027d0d8                   // 0x0018821c: sw $t2, 0x18($v0)
    g_0027d0e4 = v1;  // Global at 0x0027d0e4                   // 0x00188220: sw $v1, 0x24($v0)
    g_0027d0c4 = s2;  // Global at 0x0027d0c4                   // 0x00188224: sw $s2, 4($v0)
    g_0027d0dc = 0;  // Global at 0x0027d0dc                    // 0x00188228: sw $zero, 0x1c($v0)
    func_00107ab8();  // 107ab8                                // 0x0018822c: jal 0x107ab8
    g_0027d0e0 = 0;  // Global at 0x0027d0e0                    // 0x00188230: sw $zero, 0x20($v0)
    s0 = 0x28 << 16;                                            // 0x00188234: lui $s0, 0x28
    v0 = 0x2080;                                                // 0x00188238: addiu $v0, $zero, 0x2080
    s0 = s0 + -0xec0;                                           // 0x0018823c: addiu $s0, $s0, -0xec0
    local_0 = v0;                                               // 0x00188240: sw $v0, 0($sp)
    func_00107c70();  // 107c70                                // 0x0018824c: jal 0x107c70
    a2 = 0x100;                                                 // 0x00188250: addiu $a2, $zero, 0x100
    func_00114bd8();  // 114bd8                                // 0x00188258: jal 0x114bd8
    a1 = a0 + 0xff;                                             // 0x0018825c: addiu $a1, $a0, 0xff
    v0 = 2;                                                     // 0x00188260: addiu $v0, $zero, 2
    g_00216324 = v0;  // Global at 0x00216324                   // 0x00188264: sw $v0, 0x6324($s1)
    a0 = *(int32_t*)(s4);                                       // 0x00188268: lw $a0, 0($s4)
    /* nop */                                                   // 0x0018826c: nop 
label_0x188270:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x00188274: lw $a1, 0x6324($s1)
    a3 = s3 + -0x2f40;                                          // 0x00188278: addiu $a3, $s3, -0x2f40
    func_00189470();  // 189470                                // 0x0018827c: jal 0x189470
    t0 = s6 + 0x7700;                                           // 0x00188280: addiu $t0, $s6, 0x7700
    if (v0 != s5) goto label_0x188270;                          // 0x00188284: bnel $v0, $s5, 0x188270
    a0 = *(int32_t*)(s4);                                       // 0x00188288: lw $a0, 0($s4)
    func_001875d8();  // 1875d8                                // 0x0018828c: jal 0x1875d8
    /* nop */                                                   // 0x00188290: nop 
    v1 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x00188294: lw $v1, 8($v0)
    if (v1 != 0) v0 = s2;                                       // 0x0018829c: movn $v0, $s2, $v1
label_0x1882a0:
    return;                                                     // 0x001882c0: jr $ra
    sp = sp + 0x90;                                             // 0x001882c4: addiu $sp, $sp, 0x90
}