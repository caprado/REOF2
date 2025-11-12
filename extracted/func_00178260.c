void func_00178260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_18, local_1a0, local_20, local_28, local_30, local_38;
    uint32_t local_40, local_48, local_50, local_58, local_60, local_68, local_70, local_78;
    uint32_t local_8, local_80, local_88, local_90;
    
    sp = sp + -0x200;                                           // 0x00178260: addiu $sp, $sp, -0x200
    v1 = 0x21 << 16;                                            // 0x00178264: lui $v1, 0x21
    v1 = v1 + 0x57dc;                                           // 0x00178270: addiu $v1, $v1, 0x57dc
    v0 = g_002157dc;  // Global at 0x002157dc                   // 0x00178294: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x178478;                           // 0x00178298: beqz $v0, 0x178478
    v0 = 0x23 << 16;                                            // 0x001782a4: lui $v0, 0x23
    s4 = &str_002294f8;  // " SFH Version 1.15SFH_VER_DATE"     // 0x001782ac: addiu $s4, $v0, -0x6b08
    func_0010fe58();  // 0x10f7c0                                // 0x001782b4: jal 0x10f7c0
    func_00111078();  // 0x110fd0                                // 0x001782c8: jal 0x110fd0
    local_1a0 = v0;                                             // 0x001782cc: sw $v0, 0x1a0($sp)
    func_00111078();  // 0x110fd0                                // 0x001782d4: jal 0x110fd0
    func_00111e20();  // 0x111ce0                                // 0x001782e0: jal 0x111ce0
    at = 0x23 << 16;                                            // 0x001782e8: lui $at, 0x23
    func_00111ce0();  // 0x111a58                                // 0x001782f0: jal 0x111a58
    a1 = 0 | 0xff80;                                            // 0x001782f8: ori $a1, $zero, 0xff80
    func_001119f0();  // 0x111998                                // 0x00178300: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0017830c: jal 0x112048
    func_00112048();  // 0x111f90                                // 0x00178318: jal 0x111f90
    func_00111f90();  // 0x111f40                                // 0x00178324: jal 0x111f40
    t0 = s1 + -1;                                               // 0x0017832c: addiu $t0, $s1, -1
    v0 = (0 < v0) ? 1 : 0;                                      // 0x00178334: slt $v0, $zero, $v0
    t3 = 0x7fff << 16;                                          // 0x0017833c: lui $t3, 0x7fff
    t3 = t3 | 0xffff;                                           // 0x00178340: ori $t3, $t3, 0xffff
    if (v0 == 0) t0 = s1;                                       // 0x00178348: movz $t0, $s1, $v0
    t9 = *(int32_t*)((fp) + 0x128);                             // 0x0017834c: lw $t9, 0x128($fp)
    t8 = *(int32_t*)((fp) + 0x1b0);                             // 0x00178354: lw $t8, 0x1b0($fp)
    t7 = *(int32_t*)((fp) + 0x1a0);                             // 0x0017835c: lw $t7, 0x1a0($fp)
    t6 = *(int32_t*)((fp) + 0x190);                             // 0x00178364: lw $t6, 0x190($fp)
    s1 = *(int32_t*)((fp) + 8);                                 // 0x0017836c: lw $s1, 8($fp)
    t3 = s2 & t3;                                               // 0x00178370: and $t3, $s2, $t3
    v1 = *(int32_t*)((fp) + 0x198);                             // 0x00178374: lw $v1, 0x198($fp)
    s0 = *(int32_t*)((fp) + 0x19c);                             // 0x00178380: lw $s0, 0x19c($fp)
    v0 = *(int32_t*)((fp) + 0x194);                             // 0x0017838c: lw $v0, 0x194($fp)
    a0 = sp + 0xa0;                                             // 0x00178390: addiu $a0, $sp, 0xa0
    s6 = *(int32_t*)((fp) + 0x108);                             // 0x00178394: lw $s6, 0x108($fp)
    s3 = *(int32_t*)((fp) + 0x1ac);                             // 0x0017839c: lw $s3, 0x1ac($fp)
    s7 = *(int32_t*)((fp) + 0x1b4);                             // 0x001783a8: lw $s7, 0x1b4($fp)
    s5 = *(int32_t*)((fp) + 0x1b8);                             // 0x001783ac: lw $s5, 0x1b8($fp)
    s4 = *(int32_t*)((fp) + 4);                                 // 0x001783b0: lw $s4, 4($fp)
    s2 = *(int32_t*)((fp) + 0x188);                             // 0x001783b4: lw $s2, 0x188($fp)
    t2 = *(int32_t*)((fp) + 0x118);                             // 0x001783b8: lw $t2, 0x118($fp)
    a3 = local_1a0;                                             // 0x001783bc: lw $a3, 0x1a0($sp)
    local_20 = t4;                                              // 0x001783c0: sw $t4, 0x20($sp)
    local_50 = s1;                                              // 0x001783c4: sw $s1, 0x50($sp)
    local_58 = s0;                                              // 0x001783c8: sw $s0, 0x58($sp)
    local_0 = s2;                                               // 0x001783cc: sw $s2, 0($sp)
    local_8 = s6;                                               // 0x001783d0: sw $s6, 8($sp)
    local_10 = t9;                                              // 0x001783d4: sw $t9, 0x10($sp)
    local_18 = t5;                                              // 0x001783d8: sw $t5, 0x18($sp)
    local_28 = s3;                                              // 0x001783dc: sw $s3, 0x28($sp)
    local_30 = t8;                                              // 0x001783e0: sw $t8, 0x30($sp)
    local_38 = s7;                                              // 0x001783e4: sw $s7, 0x38($sp)
    local_40 = s5;                                              // 0x001783e8: sw $s5, 0x40($sp)
    local_48 = s4;                                              // 0x001783ec: sw $s4, 0x48($sp)
    local_60 = t7;                                              // 0x001783f0: sw $t7, 0x60($sp)
    local_68 = t6;                                              // 0x001783f4: sw $t6, 0x68($sp)
    local_70 = v0;                                              // 0x001783f8: sw $v0, 0x70($sp)
    v0 = 0x21 << 16;                                            // 0x001783fc: lui $v0, 0x21
    local_78 = v1;                                              // 0x00178400: sw $v1, 0x78($sp)
    t4 = g_00215568;  // Global at 0x00215568                   // 0x00178404: lw $t4, 0x5568($v0)
    v1 = *(int32_t*)((fp) + 0x1a8);                             // 0x00178408: lw $v1, 0x1a8($fp)
    v0 = *(int32_t*)((fp) + 0x1a4);                             // 0x0017840c: lw $v0, 0x1a4($fp)
    local_88 = v1;                                              // 0x00178410: sw $v1, 0x88($sp)
    local_80 = v0;                                              // 0x00178414: sw $v0, 0x80($sp)
    func_0010a570();  // 0x10a4d8                                // 0x00178418: jal 0x10a4d8
    local_90 = t4;                                              // 0x0017841c: sw $t4, 0x90($sp)
    v0 = 0x21 << 16;                                            // 0x00178424: lui $v0, 0x21
    s1 = v0 + 0x57e4;                                           // 0x00178428: addiu $s1, $v0, 0x57e4
    a1 = sp + 0xa0;                                             // 0x0017842c: addiu $a1, $sp, 0xa0
    func_0010ae00();  // 0x10ac68                                // 0x00178430: jal 0x10ac68
    a0 = g_002157e4;  // Global at 0x002157e4                   // 0x00178434: lw $a0, 0($s1)
    v1 = g_002157e4;  // Global at 0x002157e4                   // 0x00178438: lw $v1, 0($s1)
    a1 = 0x21 << 16;                                            // 0x0017843c: lui $a1, 0x21
    a0 = 0x21 << 16;                                            // 0x00178440: lui $a0, 0x21
    a1 = a1 + 0x57dc;                                           // 0x00178444: addiu $a1, $a1, 0x57dc
    v1 = v1 + s0;                                               // 0x00178448: addu $v1, $v1, $s0
    v0 = g_002157dc;  // Global at 0x002157dc                   // 0x0017844c: lw $v0, 0($a1)
    a1 = g_002157d8;  // Global at 0x002157d8                   // 0x00178450: lw $a1, 0x57d8($a0)
    g_002157e4 = v1;  // Global at 0x002157e4                   // 0x00178454: sw $v1, 0($s1)
    v0 = v0 + a1;                                               // 0x00178458: addu $v0, $v0, $a1
    v0 = v0 + -0x400;                                           // 0x0017845c: addiu $v0, $v0, -0x400
    v1 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x00178460: sltu $v1, $v1, $v0
    if (v1 != 0) goto label_0x17847c;                           // 0x00178464: bnez $v1, 0x17847c
    v0 = 0x21 << 16;                                            // 0x0017846c: lui $v0, 0x21
    v1 = g_002157e8;  // Global at 0x002157e8                   // 0x00178470: lw $v1, 0x57e8($v0)
    g_002157e4 = v1;  // Global at 0x002157e4                   // 0x00178474: sw $v1, 0($s1)
label_0x178478:
label_0x17847c:
    return;                                                     // 0x001784a0: jr $ra
    sp = sp + 0x200;                                            // 0x001784a4: addiu $sp, $sp, 0x200
}