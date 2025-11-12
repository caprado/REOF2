void func_00137860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00137860: addiu $sp, $sp, -0x30
    v1 = 1;                                                     // 0x00137864: addiu $v1, $zero, 1
    v0 = *(int32_t*)((s1) + 4);                                 // 0x00137878: lw $v0, 4($s1)
    if (v0 != v1) goto label_0x1378dc;                          // 0x0013787c: bne $v0, $v1, 0x1378dc
    a0 = *(uint8_t*)((s1) + 2);                                 // 0x00137880: lbu $a0, 2($s1)
    v1 = *(int8_t*)((s1) + 2);                                  // 0x00137884: lb $v1, 2($s1)
    v0 = ((unsigned)v1 < (unsigned)0xa) ? 1 : 0;                // 0x00137888: sltiu $v0, $v1, 0xa
    /* beqzl $v0, 0x1378dc */                                   // 0x0013788c: beqzl $v0, 0x1378dc
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00137890: sw $zero, 4($s1)
    v0 = v1 << 2;                                               // 0x00137894: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x00137898: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0013789c: addu $v1, $v1, $v0
    v1 = g_00224e20;  // Global at 0x00224e20                   // 0x001378a0: lw $v1, 0x4e20($v1)
    /* jump to address in v1 */                                 // 0x001378a4: jr $v1
    /* nop */                                                   // 0x001378a8: nop 
    /* nop */                                                   // 0x001378ac: nop 
    func_001373f8();  // 0x137328                                // 0x001378b0: jal 0x137328
    *(uint8_t*)((s1) + 2) = 0;                                  // 0x001378b8: sb $zero, 2($s1)
    v1 = 0x20 << 16;                                            // 0x001378bc: lui $v1, 0x20
    v1 = v1 + 0x21e4;                                           // 0x001378c0: addiu $v1, $v1, 0x21e4
    v0 = g_002021e4;  // Global at 0x002021e4                   // 0x001378c4: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x001378c8: addiu $v0, $v0, 1
    g_002021e4 = v0;  // Global at 0x002021e4                   // 0x001378cc: sw $v0, 0($v1)
    *(uint8_t*)((s1) + 2) = 0;                                  // 0x001378d0: sb $zero, 2($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001378d8: sw $zero, 4($s1)
label_0x1378dc:
    v0 = a0 << 0x18;                                            // 0x001378dc: sll $v0, $a0, 0x18
    v1 = 1;                                                     // 0x001378e0: addiu $v1, $zero, 1
    v0 = v0 >> 0x18;                                            // 0x001378e4: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x13799c;                          // 0x001378e8: bnel $v0, $v1, 0x13799c
    v0 = a0 << 0x18;                                            // 0x001378ec: sll $v0, $a0, 0x18
    func_00137fb0();  // 0x137ec8                                // 0x001378f0: jal 0x137ec8
    a0 = 0x2000;                                                // 0x001378f4: addiu $a0, $zero, 0x2000
    a0 = *(int32_t*)((s1) + 0x30);                              // 0x001378fc: lw $a0, 0x30($s1)
    func_00138160();  // 0x1380a8                                // 0x00137904: jal 0x1380a8
    a0 = 0x2001;                                                // 0x0013790c: addiu $a0, $zero, 0x2001
    func_00137fb0();  // 0x137ec8                                // 0x00137910: jal 0x137ec8
    if (s0 >= 0) goto label_0x137930;                           // 0x00137918: bgez $s0, 0x137930
    v0 = 9;                                                     // 0x0013791c: addiu $v0, $zero, 9
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x00137928: sb $v0, 2($s1)
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x0013792c: sw $v1, 0x34($s1)
label_0x137930:
    func_00137fb0();  // 0x137ec8                                // 0x00137930: jal 0x137ec8
    a0 = 0x2100;                                                // 0x00137934: addiu $a0, $zero, 0x2100
    a0 = *(int32_t*)((s1) + 0x30);                              // 0x00137938: lw $a0, 0x30($s1)
    a1 = *(int32_t*)((s1) + 0x18);                              // 0x0013793c: lw $a1, 0x18($s1)
    func_00138310();  // 0x138298                                // 0x00137940: jal 0x138298
    a2 = *(int32_t*)((s1) + 0x20);                              // 0x00137944: lw $a2, 0x20($s1)
    a0 = 0x2101;                                                // 0x00137948: addiu $a0, $zero, 0x2101
    func_00137fb0();  // 0x137ec8                                // 0x0013794c: jal 0x137ec8
    if (s0 < 0) goto label_0x137980;                            // 0x00137954: bltz $s0, 0x137980
    v0 = 2;                                                     // 0x00137958: addiu $v0, $zero, 2
    v1 = 0x20 << 16;                                            // 0x0013795c: lui $v1, 0x20
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x00137960: sb $v0, 2($s1)
    v1 = v1 + 0x21e0;                                           // 0x00137964: addiu $v1, $v1, 0x21e0
    a0 = 2;                                                     // 0x00137968: addiu $a0, $zero, 2
    v0 = g_002021e0;  // Global at 0x002021e0                   // 0x0013796c: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00137970: addiu $v0, $v0, 1
    g_002021e0 = v0;  // Global at 0x002021e0                   // 0x00137974: sw $v0, 0($v1)
    goto label_0x13799c;                                        // 0x00137978: b 0x13799c
    v0 = a0 << 0x18;                                            // 0x0013797c: sll $v0, $a0, 0x18
label_0x137980:
    v0 = 9;                                                     // 0x00137988: addiu $v0, $zero, 9
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x0013798c: sb $v0, 2($s1)
    a0 = 9;                                                     // 0x00137990: addiu $a0, $zero, 9
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x00137994: sw $v1, 0x34($s1)
    v0 = a0 << 0x18;                                            // 0x00137998: sll $v0, $a0, 0x18
label_0x13799c:
    v1 = 2;                                                     // 0x0013799c: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x001379a0: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x137a1c;                          // 0x001379a4: bne $v0, $v1, 0x137a1c
    func_00137fb0();  // 0x137ec8                                // 0x001379ac: jal 0x137ec8
    a0 = 0x2200;                                                // 0x001379b0: addiu $a0, $zero, 0x2200
    a0 = *(int32_t*)((s1) + 0x30);                              // 0x001379b4: lw $a0, 0x30($s1)
    a1 = 1;                                                     // 0x001379b8: addiu $a1, $zero, 1
    func_001381d8();  // 0x138160                                // 0x001379bc: jal 0x138160
    if (v0 >= 0) goto label_0x1379e8;                           // 0x001379c4: bgez $v0, 0x1379e8
    /* nop */                                                   // 0x001379c8: nop 
    func_00137fb0();  // 0x137ec8                                // 0x001379cc: jal 0x137ec8
    a0 = 0x2201;                                                // 0x001379d0: addiu $a0, $zero, 0x2201
    v0 = 9;                                                     // 0x001379d4: addiu $v0, $zero, 9
    v1 = -1;                                                    // 0x001379d8: addiu $v1, $zero, -1
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x001379dc: sb $v0, 2($s1)
    goto label_0x137a18;                                        // 0x001379e0: b 0x137a18
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x001379e4: sw $v1, 0x34($s1)
label_0x1379e8:
    func_00137fb0();  // 0x137ec8                                // 0x001379e8: jal 0x137ec8
    a0 = 0x2202;                                                // 0x001379ec: addiu $a0, $zero, 0x2202
    v0 = local_0;                                               // 0x001379f0: lw $v0, 0($sp)
    if (v0 != 0) goto label_0x137a1c;                           // 0x001379f4: bnez $v0, 0x137a1c
    v0 = 3;                                                     // 0x001379fc: addiu $v0, $zero, 3
    v1 = 0x20 << 16;                                            // 0x00137a00: lui $v1, 0x20
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x00137a04: sb $v0, 2($s1)
    v1 = v1 + 0x21e4;                                           // 0x00137a08: addiu $v1, $v1, 0x21e4
    v0 = g_002021e4;  // Global at 0x002021e4                   // 0x00137a0c: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00137a10: addiu $v0, $v0, 1
    g_002021e4 = v0;  // Global at 0x002021e4                   // 0x00137a14: sw $v0, 0($v1)
label_0x137a18:
label_0x137a1c:
    return;                                                     // 0x00137a24: jr $ra
    sp = sp + 0x30;                                             // 0x00137a28: addiu $sp, $sp, 0x30
}