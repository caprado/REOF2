void func_00180848() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_14, local_20, local_4, local_64, local_68, local_74, local_8;
    uint32_t local_c;
    
    sp = sp + -0x100;                                           // 0x00180848: addiu $sp, $sp, -0x100
    s4 = 0x21 << 16;                                            // 0x00180850: lui $s4, 0x21
    v0 = g_00216010;  // Global at 0x00216010                   // 0x00180858: lw $v0, 0x6010($s4)
    s2 = 1;                                                     // 0x0018085c: addiu $s2, $zero, 1
    if (v0 != s2) goto label_0x180884;                          // 0x00180874: bne $v0, $s2, 0x180884
    func_00180ac8();  // 0x1809f0                                // 0x0018087c: jal 0x1809f0
    /* nop */                                                   // 0x00180880: nop 
label_0x180884:
    v1 = 0x23 << 16;                                            // 0x00180884: lui $v1, 0x23
    v0 = -1;                                                    // 0x00180888: addiu $v0, $zero, -1
    s6 = 0x27 << 16;                                            // 0x0018088c: lui $s6, 0x27
    v1 = &str_00229e80;  // "sceMc2_sema_start"                 // 0x00180890: addiu $v1, $v1, -0x6180
    s0 = 0x27 << 16;                                            // 0x00180894: lui $s0, 0x27
    local_74 = v1;                                              // 0x00180898: sw $v1, 0x74($sp)
    g_0026b1ac = v0;  // Global at 0x0026b1ac                   // 0x0018089c: sw $v0, -0x4e54($s0)
    s5 = s6 + -0x4e60;                                          // 0x001808a0: addiu $s5, $s6, -0x4e60
    g_0026b1a0 = v0;  // Global at 0x0026b1a0                   // 0x001808a4: sw $v0, -0x4e60($s6)
    s1 = sp + 0x60;                                             // 0x001808a8: addiu $s1, $sp, 0x60
    g_0026b1a4 = v0;  // Global at 0x0026b1a4                   // 0x001808ac: sw $v0, 4($s5)
    s3 = 0x7f;                                                  // 0x001808b0: addiu $s3, $zero, 0x7f
    g_0026b1a8 = v0;  // Global at 0x0026b1a8                   // 0x001808b4: sw $v0, 8($s5)
    local_68 = s2;                                              // 0x001808bc: sw $s2, 0x68($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001808c0: jal 0x1142e0
    local_64 = s3;                                              // 0x001808c4: sw $s3, 0x64($sp)
    if (v0 < 0) goto label_0x180990;                            // 0x001808c8: bltz $v0, 0x180990
    g_0026b1ac = v0;  // Global at 0x0026b1ac                   // 0x001808cc: sw $v0, -0x4e54($s0)
    v0 = 0x23 << 16;                                            // 0x001808d0: lui $v0, 0x23
    local_68 = 0;                                               // 0x001808d4: sw $zero, 0x68($sp)
    v0 = &str_00229e98;  // "sceMc2_sema_end"                   // 0x001808d8: addiu $v0, $v0, -0x6168
    local_64 = s3;                                              // 0x001808dc: sw $s3, 0x64($sp)
    local_74 = v0;                                              // 0x001808e0: sw $v0, 0x74($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001808e4: jal 0x1142e0
    if (v0 < 0) goto label_0x180990;                            // 0x001808ec: bltz $v0, 0x180990
    g_0026b1a4 = v0;  // Global at 0x0026b1a4                   // 0x001808f0: sw $v0, 4($s5)
    v0 = 0x23 << 16;                                            // 0x001808f4: lui $v0, 0x23
    local_64 = s3;                                              // 0x001808f8: sw $s3, 0x64($sp)
    v0 = &str_00229eb0;  // "sceMc2_basic_thread"               // 0x001808fc: addiu $v0, $v0, -0x6150
    local_74 = v0;                                              // 0x00180904: sw $v0, 0x74($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00180908: jal 0x1142e0
    local_68 = 0;                                               // 0x0018090c: sw $zero, 0x68($sp)
    if (v0 < 0) goto label_0x180990;                            // 0x00180910: bltz $v0, 0x180990
    g_0026b1a8 = v0;  // Global at 0x0026b1a8                   // 0x00180914: sw $v0, 8($s5)
    v1 = 0x18 << 16;                                            // 0x00180918: lui $v1, 0x18
    a1 = 0x27 << 16;                                            // 0x0018091c: lui $a1, 0x27
    a2 = 0x25 << 16;                                            // 0x00180920: lui $a2, 0x25
    a3 = 0x23 << 16;                                            // 0x00180924: lui $a3, 0x23
    v1 = v1 + 0x1b18;                                           // 0x00180928: addiu $v1, $v1, 0x1b18
    a1 = a1 + -0x4e40;                                          // 0x0018092c: addiu $a1, $a1, -0x4e40
    a2 = a2 + 0x10f0;                                           // 0x00180930: addiu $a2, $a2, 0x10f0
    a3 = &str_00229ec0;  // "libmc2: TerminateTread faild\n"    // 0x00180934: addiu $a3, $a3, -0x6140
    v0 = 0x27 << 16;                                            // 0x00180938: lui $v0, 0x27
    t0 = 0 | 0xc000;                                            // 0x0018093c: ori $t0, $zero, 0xc000
    g_0026ac84 = 0;  // Global at 0x0026ac84                    // 0x00180940: sw $zero, -0x537c($v0)
    local_4 = v1;                                               // 0x00180948: sw $v1, 4($sp)
    local_8 = a1;                                               // 0x0018094c: sw $a1, 8($sp)
    local_c = t0;                                               // 0x00180950: sw $t0, 0xc($sp)
    local_10 = a2;                                              // 0x00180954: sw $a2, 0x10($sp)
    local_20 = a3;                                              // 0x00180958: sw $a3, 0x20($sp)
    DeleteThread();  // 0x1140e0                                // 0x0018095c: jal 0x1140e0
    local_14 = s2;                                              // 0x00180960: sw $s2, 0x14($sp)
    if (v0 >= 0) goto label_0x180980;                           // 0x00180964: bgez $v0, 0x180980
    g_0026b1a0 = v0;  // Global at 0x0026b1a0                   // 0x00180968: sw $v0, -0x4e60($s6)
    func_00180ac8();  // 0x1809f0                                // 0x0018096c: jal 0x1809f0
    g_00216010 = s2;  // Global at 0x00216010                   // 0x00180970: sw $s2, 0x6010($s4)
    v0 = 0x8101 << 16;                                          // 0x00180974: lui $v0, 0x8101
    goto label_0x1809c8;                                        // 0x00180978: b 0x1809c8
    v0 = v0 | 0x8004;                                           // 0x0018097c: ori $v0, $v0, 0x8004
label_0x180980:
    func_001877c0();  // 0x187730                                // 0x00180980: jal 0x187730
    /* nop */                                                   // 0x00180984: nop 
    if (v0 != 0) goto label_0x1809a4;                           // 0x00180988: bnez $v0, 0x1809a4
    /* nop */                                                   // 0x0018098c: nop 
label_0x180990:
    func_00180ac8();  // 0x1809f0                                // 0x00180990: jal 0x1809f0
    g_00216010 = s2;  // Global at 0x00216010                   // 0x00180994: sw $s2, 0x6010($s4)
    v0 = 0x8101 << 16;                                          // 0x00180998: lui $v0, 0x8101
    goto label_0x1809c8;                                        // 0x0018099c: b 0x1809c8
    v0 = v0 | 0x8003;                                           // 0x001809a0: ori $v0, $v0, 0x8003
label_0x1809a4:
    func_00186b30();  // 0x186af8                                // 0x001809a4: jal 0x186af8
    /* nop */                                                   // 0x001809a8: nop 
    func_00182858();  // 0x1827f8                                // 0x001809ac: jal 0x1827f8
    /* nop */                                                   // 0x001809b0: nop 
    a0 = g_0026b1a0;  // Global at 0x0026b1a0                   // 0x001809b4: lw $a0, -0x4e60($s6)
    ExitDeleteThread();  // 0x114100                            // 0x001809b8: jal 0x114100
    g_00216010 = s2;  // Global at 0x00216010                   // 0x001809c0: sw $s2, 0x6010($s4)
label_0x1809c8:
    return;                                                     // 0x001809e8: jr $ra
    sp = sp + 0x100;                                            // 0x001809ec: addiu $sp, $sp, 0x100
}