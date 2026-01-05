void func_001712b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001712b0: addiu $sp, $sp, -0x50
    v0 = 0x21 << 16;                                            // 0x001712b4: lui $v0, 0x21
    v1 = g_002157c0;  // Global at 0x002157c0                   // 0x001712e4: lw $v1, 0x57c0($v0)
    a1 = *(int32_t*)((s2) + 0x1b30);                            // 0x001712e8: lw $a1, 0x1b30($s2)
    a2 = a1 + 4;                                                // 0x001712ec: addiu $a2, $a1, 4
    s1 = a1 + 0x9d8;                                            // 0x001712f0: addiu $s1, $a1, 0x9d8
    s3 = a1 + 0xa00;                                            // 0x001712f4: addiu $s3, $a1, 0xa00
    if (v1 != 0) goto label_0x171308;                           // 0x001712f8: bnez $v1, 0x171308
    fp = a1 + 0xaa8;                                            // 0x001712fc: addiu $fp, $a1, 0xaa8
    goto label_0x171494;                                        // 0x00171300: b 0x171494
    *(uint32_t*)(s1) = 0;                                       // 0x00171304: sw $zero, 0($s1)
label_0x171308:
    a0 = g_00171694;  // Global at 0x00171694                   // 0x00171308: lw $a0, 0xc($a2)
    v1 = g_00171690;  // Global at 0x00171690                   // 0x0017130c: lw $v1, 8($a2)
    a3 = *(int32_t*)((a1) + 0x28);                              // 0x00171310: lw $a3, 0x28($a1)
    /* multiply: v1 * a0 -> hi:lo */                            // 0x00171314: mult $ac3, $v1, $a0
    v0 = v1 << 3;                                               // 0x00171318: sll $v0, $v1, 3
    v0 = v0 + v1;                                               // 0x0017131c: addu $v0, $v0, $v1
    a0 = (unsigned)v0 >> 0x1f;                                  // 0x00171320: srl $a0, $v0, 0x1f
    v0 = v0 + a0;                                               // 0x00171324: addu $v0, $v0, $a0
    v0 = v0 >> 1;                                               // 0x00171328: sra $v0, $v0, 1
    if (a3 != 0) goto label_0x171358;                           // 0x0017132c: bnez $a3, 0x171358
    s4 = v0 + 0x2800;                                           // 0x00171330: addiu $s4, $v0, 0x2800
    v0 = g_00171698;  // Global at 0x00171698                   // 0x00171334: lw $v0, 0x10($a2)
    a0 = -0x40;                                                 // 0x00171338: addiu $a0, $zero, -0x40
    v0 = v0 + 0x3f;                                             // 0x0017133c: addiu $v0, $v0, 0x3f
    v0 = v0 & a0;                                               // 0x00171340: and $v0, $v0, $a0
    v1 = v0 + s4;                                               // 0x00171344: addu $v1, $v0, $s4
    *(uint32_t*)((a1) + 0x28) = v0;                             // 0x00171348: sw $v0, 0x28($a1)
    v1 = v1 + 0x3f;                                             // 0x0017134c: addiu $v1, $v1, 0x3f
    goto label_0x171374;                                        // 0x00171350: b 0x171374
    v0 = v1 & a0;                                               // 0x00171354: and $v0, $v1, $a0
label_0x171358:
    v0 = *(int32_t*)((a1) + 0x2c);                              // 0x00171358: lw $v0, 0x2c($a1)
    a0 = -0x40;                                                 // 0x0017135c: addiu $a0, $zero, -0x40
    v1 = a3 + 0x3f;                                             // 0x00171360: addiu $v1, $a3, 0x3f
    v0 = v0 + 0x3f;                                             // 0x00171364: addiu $v0, $v0, 0x3f
    v1 = v1 & a0;                                               // 0x00171368: and $v1, $v1, $a0
    v0 = v0 & a0;                                               // 0x0017136c: and $v0, $v0, $a0
    *(uint32_t*)((a1) + 0x28) = v1;                             // 0x00171370: sw $v1, 0x28($a1)
label_0x171374:
    *(uint32_t*)((a1) + 0x2c) = v0;                             // 0x00171374: sw $v0, 0x2c($a1)
    s6 = *(int32_t*)((a1) + 0x2c);                              // 0x00171378: lw $s6, 0x2c($a1)
    a0 = -0x40;                                                 // 0x0017137c: addiu $a0, $zero, -0x40
    s0 = *(int32_t*)((a1) + 0x28);                              // 0x00171380: lw $s0, 0x28($a1)
    v0 = 8 << 16;                                               // 0x00171384: lui $v0, 8
    v0 = v0 | 0x3f;                                             // 0x00171388: ori $v0, $v0, 0x3f
    v0 = v0 + s6;                                               // 0x0017138c: addu $v0, $v0, $s6
    s5 = v0 & a0;                                               // 0x00171390: and $s5, $v0, $a0
    v1 = s5 + 0x104f;                                           // 0x00171394: addiu $v1, $s5, 0x104f
    func_001738c0();  // 1738c0                                // 0x00171398: jal 0x1738c0
    s7 = v1 & a0;                                               // 0x0017139c: and $s7, $v1, $a0
    v1 = 1;                                                     // 0x001713a0: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x171420;                          // 0x001713a4: beq $v0, $v1, 0x171420
    func_00147798();  // 147798                                // 0x001713b0: jal 0x147798
    a2 = 0x17 << 16;                                            // 0x001713b8: lui $a2, 0x17
    a2 = a2 + 0x14d8;                                           // 0x001713bc: addiu $a2, $a2, 0x14d8
    func_00147bf0();  // 147bf0                                // 0x001713c8: jal 0x147bf0
    a2 = 0x17 << 16;                                            // 0x001713d0: lui $a2, 0x17
    a2 = a2 + 0x15e0;                                           // 0x001713d4: addiu $a2, $a2, 0x15e0
    a1 = 1;                                                     // 0x001713dc: addiu $a1, $zero, 1
    func_00147bf0();  // 147bf0                                // 0x001713e0: jal 0x147bf0
    a2 = 0x17 << 16;                                            // 0x001713e8: lui $a2, 0x17
    a2 = a2 + 0x1660;                                           // 0x001713ec: addiu $a2, $a2, 0x1660
    a1 = 2;                                                     // 0x001713f4: addiu $a1, $zero, 2
    func_00147bf0();  // 147bf0                                // 0x001713f8: jal 0x147bf0
    a2 = 0x17 << 16;                                            // 0x00171400: lui $a2, 0x17
    a2 = a2 + 0x1688;                                           // 0x00171408: addiu $a2, $a2, 0x1688
    func_00147bf0();  // 147bf0                                // 0x00171410: jal 0x147bf0
    a1 = 3;                                                     // 0x00171414: addiu $a1, $zero, 3
    goto label_0x17142c;                                        // 0x00171418: b 0x17142c
    s0 = s1 + 0x70;                                             // 0x0017141c: addiu $s0, $s1, 0x70
label_0x171420:
    func_00171760();  // 171760                                // 0x00171420: jal 0x171760
    s0 = s1 + 0x70;                                             // 0x00171428: addiu $s0, $s1, 0x70
label_0x17142c:
    a3 = 0x100;                                                 // 0x00171438: addiu $a3, $zero, 0x100
    t1 = 0x200;                                                 // 0x0017143c: addiu $t1, $zero, 0x200
    func_001707a8();  // 1707a8                                // 0x00171440: jal 0x1707a8
    func_00170b20();  // 170b20                                // 0x00171448: jal 0x170b20
    func_00170d20();  // 170d20                                // 0x00171450: jal 0x170d20
    v1 = 1;                                                     // 0x00171458: addiu $v1, $zero, 1
    v0 = -1;                                                    // 0x0017145c: addiu $v0, $zero, -1
    *(uint8_t*)((s1) + 0x10) = 0;                               // 0x00171460: sb $zero, 0x10($s1)
    *(uint8_t*)((s1) + 0x11) = 0;                               // 0x00171464: sb $zero, 0x11($s1)
    *(uint8_t*)((s1) + 0x12) = 0;                               // 0x00171468: sb $zero, 0x12($s1)
    *(uint32_t*)(s1) = v1;                                      // 0x0017146c: sw $v1, 0($s1)
    *(uint32_t*)((s1) + 0x20) = 0;                              // 0x00171470: sw $zero, 0x20($s1)
    *(uint32_t*)(fp) = v0;                                      // 0x00171474: sw $v0, 0($fp)
    *(uint32_t*)((fp) + 4) = 0;                                 // 0x00171478: sw $zero, 4($fp)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0017147c: sw $zero, 4($s1)
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x00171480: sw $zero, 8($s1)
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x00171484: sw $zero, 0xc($s1)
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x00171488: sw $zero, 0x14($s1)
    *(uint32_t*)((s1) + 0x18) = 0;                              // 0x0017148c: sw $zero, 0x18($s1)
    *(uint32_t*)((s1) + 0x1c) = 0;                              // 0x00171490: sw $zero, 0x1c($s1)
label_0x171494:
    return;                                                     // 0x001714bc: jr $ra
    sp = sp + 0x50;                                             // 0x001714c0: addiu $sp, $sp, 0x50
}