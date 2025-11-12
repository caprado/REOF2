void func_00188400() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x80;                                            // 0x00188400: addiu $sp, $sp, -0x80
    v0 = 0x24;                                                  // 0x00188404: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x0018840c: lui $v1, 0x28
    s1 = v1 + -0x2fb8;                                          // 0x00188418: addiu $s1, $v1, -0x2fb8
    v0 = s1 + 4;                                                // 0x00188424: addiu $v0, $s1, 4
    s2 = s0 + v0;                                               // 0x00188434: addu $s2, $s0, $v0
    func_00188ec0();  // 0x188dc8                                // 0x0018843c: jal 0x188dc8
    a0 = *(int32_t*)(s2);                                       // 0x00188440: lw $a0, 0($s2)
    v1 = 3;                                                     // 0x00188444: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x188458;                          // 0x00188448: bne $v0, $v1, 0x188458
    a0 = s1 + s0;                                               // 0x0018844c: addu $a0, $s1, $s0
    goto label_0x18850c;                                        // 0x00188450: b 0x18850c
label_0x188458:
    s3 = 0x28 << 16;                                            // 0x00188458: lui $s3, 0x28
    t1 = *(int32_t*)((a0) + 0x10);                              // 0x00188460: lw $t1, 0x10($a0)
    a2 = g_0027d054;  // Global at 0x0027d054                   // 0x00188468: lw $a2, 8($v0)
    t0 = g_0028000c;  // Global at 0x0028000c                   // 0x0018846c: lw $t0, 0xc($v1)
    v0 = s3 + -0x2f40;                                          // 0x00188470: addiu $v0, $s3, -0x2f40
    v1 = 1;                                                     // 0x00188474: addiu $v1, $zero, 1
    g_0027d0e0 = s4;  // Global at 0x0027d0e0                   // 0x00188478: sw $s4, 0x20($v0)
    g_0027d0c8 = a2;  // Global at 0x0027d0c8                   // 0x0018847c: sw $a2, 8($v0)
    a3 = 0x2080;                                                // 0x00188480: addiu $a3, $zero, 0x2080
    g_0027d0c4 = v1;  // Global at 0x0027d0c4                   // 0x00188484: sw $v1, 4($v0)
    s0 = 0x28 << 16;                                            // 0x00188488: lui $s0, 0x28
    g_0027d0cc = t0;  // Global at 0x0027d0cc                   // 0x0018848c: sw $t0, 0xc($v0)
    s0 = s0 + -0xec0;                                           // 0x00188490: addiu $s0, $s0, -0xec0
    g_0027d0d0 = t1;  // Global at 0x0027d0d0                   // 0x00188494: sw $t1, 0x10($v0)
    local_0 = a3;                                               // 0x0018849c: sw $a3, 0($sp)
    g_0027d0c0 = 0;  // Global at 0x0027d0c0                    // 0x001884a4: sw $zero, -0x2f40($s3)
    a2 = 0x100;                                                 // 0x001884a8: addiu $a2, $zero, 0x100
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x001884ac: sw $zero, 0x14($v0)
    s1 = 0x21 << 16;                                            // 0x001884b0: lui $s1, 0x21
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x001884b4: sw $zero, 0x18($v0)
    s5 = 0x18 << 16;                                            // 0x001884b8: lui $s5, 0x18
    g_0027d0dc = 0;  // Global at 0x0027d0dc                    // 0x001884bc: sw $zero, 0x1c($v0)
    func_00107d30();  // 0x107c70                                // 0x001884c0: jal 0x107c70
    s4 = 1;                                                     // 0x001884c4: addiu $s4, $zero, 1
    func_00114c70();  // 0x114bd8                                // 0x001884cc: jal 0x114bd8
    a1 = a0 + 0xff;                                             // 0x001884d0: addiu $a1, $a0, 0xff
    v0 = 9;                                                     // 0x001884d4: addiu $v0, $zero, 9
    g_00216324 = v0;  // Global at 0x00216324                   // 0x001884d8: sw $v0, 0x6324($s1)
    a0 = *(int32_t*)(s2);                                       // 0x001884dc: lw $a0, 0($s2)
label_0x1884e0:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x001884e4: lw $a1, 0x6324($s1)
    a3 = s3 + -0x2f40;                                          // 0x001884e8: addiu $a3, $s3, -0x2f40
    func_001895d8();  // 0x189470                                // 0x001884ec: jal 0x189470
    t0 = s5 + 0x7700;                                           // 0x001884f0: addiu $t0, $s5, 0x7700
    if (v0 != s4) goto label_0x1884e0;                          // 0x001884f4: bnel $v0, $s4, 0x1884e0
    a0 = *(int32_t*)(s2);                                       // 0x001884f8: lw $a0, 0($s2)
    func_001876a8();  // 0x1875d8                                // 0x001884fc: jal 0x1875d8
    /* nop */                                                   // 0x00188500: nop 
    v0 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x00188504: lw $v0, 8($v0)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00188508: sltu $v0, $zero, $v0
label_0x18850c:
    return;                                                     // 0x00188528: jr $ra
    sp = sp + 0x80;                                             // 0x0018852c: addiu $sp, $sp, 0x80
}