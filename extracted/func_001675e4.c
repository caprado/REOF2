void func_001675e4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x001675e4: addiu $sp, $sp, -0x60
    v0 = v0 - a1;                                               // 0x001675e8: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001675f0: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x001675f8: addu $v0, $v0, $a1
    a3 = a0 + 0x1140;                                           // 0x00167604: addiu $a3, $a0, 0x1140
    v0 = v0 << 2;                                               // 0x0016760c: sll $v0, $v0, 2
    a3 = a3 + v0;                                               // 0x00167614: addu $a3, $a3, $v0
    v1 = *(int32_t*)((a3) + 4);                                 // 0x00167628: lw $v1, 4($a3)
    if (v1 != 0) goto label_0x167648;                           // 0x0016762c: bnez $v1, 0x167648
    a1 = 0xff00 << 16;                                          // 0x00167634: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x00167638: jal 0x1698d0
    a1 = a1 | 0x401;                                            // 0x0016763c: ori $a1, $a1, 0x401
    goto label_0x167764;                                        // 0x00167640: b 0x167764
label_0x167648:
    s0 = a3 + 0x10;                                             // 0x00167648: addiu $s0, $a3, 0x10
    func_00169b88();  // 169b88                                // 0x0016764c: jal 0x169b88
    s4 = *(int32_t*)((s0) + 8);                                 // 0x00167654: lw $s4, 8($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x00167658: lw $v0, 0x1c($s0)
    s3 = *(int32_t*)((s0) + 0x2c);                              // 0x00167660: lw $s3, 0x2c($s0)
    s1 = *(int32_t*)((s0) + 0x28);                              // 0x00167664: lw $s1, 0x28($s0)
    s6 = *(int32_t*)((s0) + 0xc);                               // 0x00167668: lw $s6, 0xc($s0)
    s2 = *(int32_t*)((s0) + 0x10);                              // 0x0016766c: lw $s2, 0x10($s0)
    s7 = *(int32_t*)((s0) + 0x14);                              // 0x00167670: lw $s7, 0x14($s0)
    fp = *(int32_t*)((s0) + 0x18);                              // 0x00167674: lw $fp, 0x18($s0)
    local_4 = v0;                                               // 0x00167678: sw $v0, 4($sp)
    v1 = *(int32_t*)((s0) + 0x20);                              // 0x0016767c: lw $v1, 0x20($s0)
    local_8 = v1;                                               // 0x00167680: sw $v1, 8($sp)
    func_00169ba0();  // 169ba0                                // 0x00167684: jal 0x169ba0
    s0 = *(int32_t*)((s0) + 0x24);                              // 0x00167688: lw $s0, 0x24($s0)
    v0 = (s3 < s1) ? 1 : 0;                                     // 0x0016768c: slt $v0, $s3, $s1
    *(uint32_t*)(s5) = s4;                                      // 0x00167690: sw $s4, 0($s5)
    *(uint32_t*)((s5) + 8) = s2;                                // 0x00167694: sw $s2, 8($s5)
    *(uint32_t*)((s5) + 4) = s6;                                // 0x00167698: sw $s6, 4($s5)
    *(uint32_t*)((s5) + 0x24) = s1;                             // 0x0016769c: sw $s1, 0x24($s5)
    if (v0 != 0) goto label_0x1676c0;                           // 0x001676a0: bnez $v0, 0x1676c0
    *(uint32_t*)((s5) + 0x28) = s3;                             // 0x001676a4: sw $s3, 0x28($s5)
    *(uint32_t*)((s5) + 0x20) = 0;                              // 0x001676a8: sw $zero, 0x20($s5)
    *(uint32_t*)((s5) + 0xc) = 0;                               // 0x001676ac: sw $zero, 0xc($s5)
    *(uint32_t*)((s5) + 0x14) = 0;                              // 0x001676b0: sw $zero, 0x14($s5)
    goto label_0x167708;                                        // 0x001676b4: b 0x167708
    *(uint32_t*)((s5) + 0x18) = 0;                              // 0x001676b8: sw $zero, 0x18($s5)
    /* nop */                                                   // 0x001676bc: nop 
label_0x1676c0:
    v1 = local_8;                                               // 0x001676c0: lw $v1, 8($sp)
    v0 = (s0 < v1) ? 1 : 0;                                     // 0x001676c4: slt $v0, $s0, $v1
    /* beqzl $v0, 0x167718 */                                   // 0x001676c8: beqzl $v0, 0x167718
    v1 = local_4;                                               // 0x001676cc: lw $v1, 4($sp)
    v0 = v1 - s0;                                               // 0x001676d0: subu $v0, $v1, $s0
    v1 = (s6 < 9) ? 1 : 0;                                      // 0x001676d4: slti $v1, $s6, 9
    *(uint32_t*)((s5) + 0xc) = v0;                              // 0x001676d8: sw $v0, 0xc($s5)
    if (v1 != 0) goto label_0x1676ec;                           // 0x001676dc: bnez $v1, 0x1676ec
    v0 = s7 + s0;                                               // 0x001676e0: addu $v0, $s7, $s0
    v0 = s0 << 1;                                               // 0x001676e4: sll $v0, $s0, 1
    v0 = s7 + v0;                                               // 0x001676e8: addu $v0, $s7, $v0
label_0x1676ec:
    *(uint32_t*)((s5) + 0x14) = v0;                             // 0x001676ec: sw $v0, 0x14($s5)
    if (v1 != 0) goto label_0x167700;                           // 0x001676f0: bnez $v1, 0x167700
    v0 = fp + s0;                                               // 0x001676f4: addu $v0, $fp, $s0
    v0 = s0 << 1;                                               // 0x001676f8: sll $v0, $s0, 1
    v0 = fp + v0;                                               // 0x001676fc: addu $v0, $fp, $v0
label_0x167700:
    *(uint32_t*)((s5) + 0x18) = v0;                             // 0x00167700: sw $v0, 0x18($s5)
    *(uint32_t*)((s5) + 0x20) = 0;                              // 0x00167704: sw $zero, 0x20($s5)
label_0x167708:
    *(uint32_t*)((s5) + 0x10) = 0;                              // 0x00167708: sw $zero, 0x10($s5)
    goto label_0x16775c;                                        // 0x0016770c: b 0x16775c
    *(uint32_t*)((s5) + 0x1c) = 0;                              // 0x00167710: sw $zero, 0x1c($s5)
    /* nop */                                                   // 0x00167714: nop 
    v0 = v1 - s0;                                               // 0x00167718: subu $v0, $v1, $s0
    v1 = (s6 < 9) ? 1 : 0;                                      // 0x0016771c: slti $v1, $s6, 9
    *(uint32_t*)((s5) + 0xc) = v0;                              // 0x00167720: sw $v0, 0xc($s5)
    if (v1 != 0) goto label_0x167734;                           // 0x00167724: bnez $v1, 0x167734
    v0 = s7 + s0;                                               // 0x00167728: addu $v0, $s7, $s0
    v0 = s0 << 1;                                               // 0x0016772c: sll $v0, $s0, 1
    v0 = s7 + v0;                                               // 0x00167730: addu $v0, $s7, $v0
label_0x167734:
    *(uint32_t*)((s5) + 0x14) = v0;                             // 0x00167734: sw $v0, 0x14($s5)
    if (v1 != 0) goto label_0x167748;                           // 0x00167738: bnez $v1, 0x167748
    v0 = fp + s0;                                               // 0x0016773c: addu $v0, $fp, $s0
    v0 = s0 << 1;                                               // 0x00167740: sll $v0, $s0, 1
    v0 = fp + v0;                                               // 0x00167744: addu $v0, $fp, $v0
label_0x167748:
    *(uint32_t*)((s5) + 0x20) = fp;                             // 0x00167748: sw $fp, 0x20($s5)
    *(uint32_t*)((s5) + 0x18) = v0;                             // 0x0016774c: sw $v0, 0x18($s5)
    v0 = local_8;                                               // 0x00167750: lw $v0, 8($sp)
    *(uint32_t*)((s5) + 0x1c) = s7;                             // 0x00167754: sw $s7, 0x1c($s5)
    *(uint32_t*)((s5) + 0x10) = v0;                             // 0x00167758: sw $v0, 0x10($s5)
label_0x16775c:
label_0x167764:
    return;                                                     // 0x00167788: jr $ra
    sp = sp + 0x60;                                             // 0x0016778c: addiu $sp, $sp, 0x60
}