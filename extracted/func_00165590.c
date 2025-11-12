void func_00165590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00165590: addiu $sp, $sp, -0x60
    v0 = 0x26 << 16;                                            // 0x00165594: lui $v0, 0x26
    t0 = v0 + 0x1ed0;                                           // 0x001655a4: addiu $t0, $v0, 0x1ed0
    a1 = 0xff00 << 16;                                          // 0x001655b4: lui $a1, 0xff00
    v0 = g_00261ed8;  // Global at 0x00261ed8                   // 0x001655b8: lw $v0, 8($t0)
    if (v0 == 0) goto label_0x1655d0;                           // 0x001655bc: beqz $v0, 0x1655d0
    a1 = a1 | 0xc06;                                            // 0x001655c0: ori $a1, $a1, 0xc06
    v0 = g_00261ee8;  // Global at 0x00261ee8                   // 0x001655c4: lw $v0, 0x18($t0)
    if (v0 != 0) goto label_0x1655e0;                           // 0x001655c8: bnez $v0, 0x1655e0
    v0 = 0x16 << 16;                                            // 0x001655cc: lui $v0, 0x16
label_0x1655d0:
    func_00169940();  // 0x1698d0                                // 0x001655d0: jal 0x1698d0
    /* nop */                                                   // 0x001655d4: nop 
    goto label_0x165730;                                        // 0x001655d8: b 0x165730
label_0x1655e0:
    a2 = -1;                                                    // 0x001655e0: addiu $a2, $zero, -1
    v1 = 1;                                                     // 0x001655e4: addiu $v1, $zero, 1
    v0 = v0 + 0x48e8;                                           // 0x001655e8: addiu $v0, $v0, 0x48e8
    t3 = g_00261ee8;  // Global at 0x00261ee8                   // 0x00165604: lw $t3, 0x18($t0)
    *(uint32_t*)((a3) + 0x20) = t3;                             // 0x00165620: sw $t3, 0x20($a3)
    a1 = 0x3f;                                                  // 0x00165624: addiu $a1, $zero, 0x3f
    *(uint32_t*)((a3) + 0x28) = v1;                             // 0x00165628: sw $v1, 0x28($a3)
    s1 = 0xf << 16;                                             // 0x0016562c: lui $s1, 0xf
    s1 = s1 | 0x4240;                                           // 0x00165630: ori $s1, $s1, 0x4240
    *(uint32_t*)((a3) + 0x3c) = v0;                             // 0x00165634: sw $v0, 0x3c($a3)
    s0 = s2 + 0xf60;                                            // 0x00165638: addiu $s0, $s2, 0xf60
    *(uint32_t*)((a3) + 0x44) = a2;                             // 0x0016563c: sw $a2, 0x44($a3)
    *(uint32_t*)((a3) + 0x48) = 0;                              // 0x00165640: sw $zero, 0x48($a3)
    *(uint32_t*)(a3) = 0;                                       // 0x00165644: sw $zero, 0($a3)
    *(uint32_t*)((a3) + 4) = 0;                                 // 0x00165648: sw $zero, 4($a3)
    *(uint32_t*)((a3) + 0x24) = a2;                             // 0x0016564c: sw $a2, 0x24($a3)
    *(uint32_t*)((a3) + 0x2c) = 0;                              // 0x00165650: sw $zero, 0x2c($a3)
    *(uint32_t*)((a3) + 0x30) = 0;                              // 0x00165654: sw $zero, 0x30($a3)
    *(uint32_t*)((a3) + 0x34) = 0;                              // 0x00165658: sw $zero, 0x34($a3)
    *(uint32_t*)((a3) + 0x38) = 0;                              // 0x0016565c: sw $zero, 0x38($a3)
    func_001752f8();  // 0x1752e8                                // 0x00165660: jal 0x1752e8
    *(uint32_t*)((a3) + 0x40) = 0;                              // 0x00165664: sw $zero, 0x40($a3)
    a1 = 0x40;                                                  // 0x0016566c: addiu $a1, $zero, 0x40
    func_001752f8();  // 0x1752e8                                // 0x00165674: jal 0x1752e8
    a1 = 0x41;                                                  // 0x00165680: addiu $a1, $zero, 0x41
    func_001752f8();  // 0x1752e8                                // 0x00165688: jal 0x1752e8
    a1 = 0x42;                                                  // 0x00165690: addiu $a1, $zero, 0x42
    func_001752f8();  // 0x1752e8                                // 0x0016569c: jal 0x1752e8
    func_00177a50();  // 0x177970                                // 0x001656ac: jal 0x177970
    func_001752f8();  // 0x1752e8                                // 0x001656b8: jal 0x1752e8
    a1 = 0x48;                                                  // 0x001656bc: addiu $a1, $zero, 0x48
    func_00177a98();  // 0x177a90                                // 0x001656c4: jal 0x177a90
    func_00177ab0();  // 0x177a98                                // 0x001656d0: jal 0x177a98
    func_00177ac8();  // 0x177ab0                                // 0x001656dc: jal 0x177ab0
    a1 = sp + 0x10;                                             // 0x001656e0: addiu $a1, $sp, 0x10
    func_00177ae0();  // 0x177ac8                                // 0x001656e8: jal 0x177ac8
    a1 = sp + 0x20;                                             // 0x001656ec: addiu $a1, $sp, 0x20
    func_00177af8();  // 0x177ae0                                // 0x001656f4: jal 0x177ae0
    a1 = sp + 0x30;                                             // 0x001656f8: addiu $a1, $sp, 0x30
    func_001752f8();  // 0x1752e8                                // 0x00165700: jal 0x1752e8
    a1 = 0x3e;                                                  // 0x00165704: addiu $a1, $zero, 0x3e
    func_00177b10();  // 0x177af8                                // 0x0016570c: jal 0x177af8
    func_001752f8();  // 0x1752e8                                // 0x00165718: jal 0x1752e8
    a1 = 0x3d;                                                  // 0x0016571c: addiu $a1, $zero, 0x3d
    func_0017e530();  // 0x17e438                                // 0x00165720: jal 0x17e438
label_0x165730:
    return;                                                     // 0x0016573c: jr $ra
    sp = sp + 0x60;                                             // 0x00165740: addiu $sp, $sp, 0x60
}