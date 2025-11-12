void func_001882c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x80;                                            // 0x001882c8: addiu $sp, $sp, -0x80
    v0 = 0x24;                                                  // 0x001882cc: addiu $v0, $zero, 0x24
    v1 = 0x28 << 16;                                            // 0x001882d4: lui $v1, 0x28
    s1 = v1 + -0x2fb8;                                          // 0x001882e0: addiu $s1, $v1, -0x2fb8
    v0 = s1 + 4;                                                // 0x001882ec: addiu $v0, $s1, 4
    s3 = s0 + v0;                                               // 0x001882fc: addu $s3, $s0, $v0
    func_00188ec0();  // 0x188dc8                                // 0x00188308: jal 0x188dc8
    a0 = *(int32_t*)(s3);                                       // 0x0018830c: lw $a0, 0($s3)
    v1 = 3;                                                     // 0x00188310: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x188324;                          // 0x00188314: bne $v0, $v1, 0x188324
    a1 = s1 + s0;                                               // 0x00188318: addu $a1, $s1, $s0
    goto label_0x1883d8;                                        // 0x0018831c: b 0x1883d8
label_0x188324:
    s2 = 0x28 << 16;                                            // 0x00188324: lui $s2, 0x28
    t1 = 0x2080;                                                // 0x0018832c: addiu $t1, $zero, 0x2080
    a3 = g_0028000c;  // Global at 0x0028000c                   // 0x00188338: lw $a3, 0xc($v1)
    s0 = 0x21 << 16;                                            // 0x0018833c: lui $s0, 0x21
    t0 = g_0027f150;  // Global at 0x0027f150                   // 0x00188340: lw $t0, 0x10($a0)
    v1 = *(int32_t*)((a1) + 0x14);                              // 0x00188348: lw $v1, 0x14($a1)
    a0 = 0x28 << 16;                                            // 0x0018834c: lui $a0, 0x28
    a2 = g_0027d054;  // Global at 0x0027d054                   // 0x00188350: lw $a2, 8($v0)
    a0 = a0 + -0xec0;                                           // 0x00188354: addiu $a0, $a0, -0xec0
    g_0027d0c0 = s4;  // Global at 0x0027d0c0                   // 0x00188358: sw $s4, -0x2f40($s2)
    v0 = s2 + -0x2f40;                                          // 0x0018835c: addiu $v0, $s2, -0x2f40
    g_0027d0c8 = a2;  // Global at 0x0027d0c8                   // 0x00188360: sw $a2, 8($v0)
    g_0027d0e4 = v1;  // Global at 0x0027d0e4                   // 0x00188368: sw $v1, 0x24($v0)
    a2 = 0x100;                                                 // 0x0018836c: addiu $a2, $zero, 0x100
    g_0027d0cc = a3;  // Global at 0x0027d0cc                   // 0x00188370: sw $a3, 0xc($v0)
    s4 = 0x18 << 16;                                            // 0x00188374: lui $s4, 0x18
    g_0027d0d0 = t0;  // Global at 0x0027d0d0                   // 0x00188378: sw $t0, 0x10($v0)
    s3 = 1;                                                     // 0x0018837c: addiu $s3, $zero, 1
    local_0 = t1;                                               // 0x00188380: sw $t1, 0($sp)
    g_0027d0c4 = s5;  // Global at 0x0027d0c4                   // 0x00188384: sw $s5, 4($v0)
    g_0027d0d4 = 0;  // Global at 0x0027d0d4                    // 0x00188388: sw $zero, 0x14($v0)
    g_0027d0d8 = 0;  // Global at 0x0027d0d8                    // 0x0018838c: sw $zero, 0x18($v0)
    g_0027d0dc = 0;  // Global at 0x0027d0dc                    // 0x00188390: sw $zero, 0x1c($v0)
    func_00107d30();  // 0x107c70                                // 0x00188394: jal 0x107c70
    g_0027d0e0 = 0;  // Global at 0x0027d0e0                    // 0x00188398: sw $zero, 0x20($v0)
    v1 = 0xb;                                                   // 0x0018839c: addiu $v1, $zero, 0xb
    g_00216324 = v1;  // Global at 0x00216324                   // 0x001883a0: sw $v1, 0x6324($s0)
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x001883a4: lw $a0, 0($s1)
label_0x1883a8:
    a1 = g_00216324;  // Global at 0x00216324                   // 0x001883ac: lw $a1, 0x6324($s0)
    a3 = s2 + -0x2f40;                                          // 0x001883b0: addiu $a3, $s2, -0x2f40
    func_001895d8();  // 0x189470                                // 0x001883b4: jal 0x189470
    t0 = s4 + 0x7700;                                           // 0x001883b8: addiu $t0, $s4, 0x7700
    if (v0 != s3) goto label_0x1883a8;                          // 0x001883bc: bnel $v0, $s3, 0x1883a8
    a0 = g_0027d048;  // Global at 0x0027d048                   // 0x001883c0: lw $a0, 0($s1)
    func_001876a8();  // 0x1875d8                                // 0x001883c4: jal 0x1875d8
    /* nop */                                                   // 0x001883c8: nop 
    v1 = g_0027d0c8;  // Global at 0x0027d0c8                   // 0x001883cc: lw $v1, 8($v0)
    if (v1 != 0) v0 = s5;                                       // 0x001883d4: movn $v0, $s5, $v1
label_0x1883d8:
    return;                                                     // 0x001883f4: jr $ra
    sp = sp + 0x80;                                             // 0x001883f8: addiu $sp, $sp, 0x80
}