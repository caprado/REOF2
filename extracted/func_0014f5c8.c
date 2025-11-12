void func_0014f5c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x0014f5c8: addiu $sp, $sp, -0x60
    func_00148f48();  // 0x148f00                                // 0x0014f604: jal 0x148f00
    local_0 = a0;                                               // 0x0014f608: sw $a0, 0($sp)
    v0 = s7 + 0x800;                                            // 0x0014f610: addiu $v0, $s7, 0x800
    v1 = s7 + 0x1000;                                           // 0x0014f614: addiu $v1, $s7, 0x1000
    s4 = 0 | 0xff80;                                            // 0x0014f618: ori $s4, $zero, 0xff80
    local_4 = v0;                                               // 0x0014f620: sw $v0, 4($sp)
    local_8 = v1;                                               // 0x0014f624: sw $v1, 8($sp)
label_0x14f628:
    a0 = s3 + -0x10;                                            // 0x0014f628: addiu $a0, $s3, -0x10
    func_00112048();  // 0x111f90                                // 0x0014f62c: jal 0x111f90
    s0 = s3 << 3;                                               // 0x0014f630: sll $s0, $s3, 3
    at = 0x22 << 16;                                            // 0x0014f634: lui $at, 0x22
    v1 = local_8;                                               // 0x0014f63c: lw $v1, 8($sp)
    v0 = local_4;                                               // 0x0014f644: lw $v0, 4($sp)
    s2 = s0 + v1;                                               // 0x0014f648: addu $s2, $s0, $v1
    func_00111ce0();  // 0x111a58                                // 0x0014f64c: jal 0x111a58
    s1 = s0 + v0;                                               // 0x0014f650: addu $s1, $s0, $v0
    func_001119f0();  // 0x111998                                // 0x0014f65c: jal 0x111998
    s0 = s0 + s7;                                               // 0x0014f660: addu $s0, $s0, $s7
    func_001120e8();  // 0x112048                                // 0x0014f668: jal 0x112048
    /* nop */                                                   // 0x0014f66c: nop 
    a0 = s3 + -0x80;                                            // 0x0014f670: addiu $a0, $s3, -0x80
    v0 = v0 << 0x10;                                            // 0x0014f674: sll $v0, $v0, 0x10
    s3 = s3 + 1;                                                // 0x0014f678: addiu $s3, $s3, 1
    v0 = v0 >> 0x10;                                            // 0x0014f67c: sra $v0, $v0, 0x10
    *(uint16_t*)(s0) = v0;                                      // 0x0014f680: sh $v0, 0($s0)
    *(uint16_t*)((s0) + 4) = v0;                                // 0x0014f684: sh $v0, 4($s0)
    func_00112048();  // 0x111f90                                // 0x0014f688: jal 0x111f90
    *(uint16_t*)((s0) + 2) = v0;                                // 0x0014f68c: sh $v0, 2($s0)
    at = 0x22 << 16;                                            // 0x0014f690: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014f69c: jal 0x111a58
    func_001119f0();  // 0x111998                                // 0x0014f6a8: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014f6b0: jal 0x112048
    at = 0x22 << 16;                                            // 0x0014f6bc: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014f6c4: jal 0x111a58
    *(uint16_t*)((s1) + 4) = v0;                                // 0x0014f6c8: sh $v0, 4($s1)
    func_001119f0();  // 0x111998                                // 0x0014f6d0: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014f6d8: jal 0x112048
    *(uint16_t*)(s1) = 0;                                       // 0x0014f6e0: sh $zero, 0($s1)
    *(uint16_t*)((s1) + 2) = v0;                                // 0x0014f6e4: sh $v0, 2($s1)
    *(uint16_t*)((s1) + 6) = 0;                                 // 0x0014f6ec: sh $zero, 6($s1)
    at = 0x22 << 16;                                            // 0x0014f6f0: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014f6f8: jal 0x111a58
    *(uint16_t*)((s2) + 4) = 0;                                 // 0x0014f6fc: sh $zero, 4($s2)
    func_001119f0();  // 0x111998                                // 0x0014f704: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014f70c: jal 0x112048
    at = 0x22 << 16;                                            // 0x0014f718: lui $at, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0014f720: jal 0x111a58
    *(uint16_t*)((s2) + 2) = v0;                                // 0x0014f724: sh $v0, 2($s2)
    func_001119f0();  // 0x111998                                // 0x0014f72c: jal 0x111998
    func_001120e8();  // 0x112048                                // 0x0014f734: jal 0x112048
    *(uint16_t*)((s2) + 6) = 0;                                 // 0x0014f73c: sh $zero, 6($s2)
    v1 = (s3 < 0x100) ? 1 : 0;                                  // 0x0014f740: slti $v1, $s3, 0x100
    if (v1 != 0) goto label_0x14f628;                           // 0x0014f744: bnez $v1, 0x14f628
    *(uint16_t*)(s2) = v0;                                      // 0x0014f748: sh $v0, 0($s2)
    func_00112048();  // 0x111f90                                // 0x0014f750: jal 0x111f90
    s1 = s5 - s6;                                               // 0x0014f754: subu $s1, $s5, $s6
    func_00112048();  // 0x111f90                                // 0x0014f75c: jal 0x111f90
    func_00111e20();  // 0x111ce0                                // 0x0014f768: jal 0x111ce0
    v1 = local_0;                                               // 0x0014f770: lw $v1, 0($sp)
    v0 = 1;                                                     // 0x0014f778: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x14f800;                          // 0x0014f77c: bne $v1, $v0, 0x14f800
    s1 = fp << 6;                                               // 0x0014f780: sll $s1, $fp, 6
    s4 = fp << 6;                                               // 0x0014f784: sll $s4, $fp, 6
    s0 = s7 + 6;                                                // 0x0014f788: addiu $s0, $s7, 6
    s1 = 0xff;                                                  // 0x0014f790: addiu $s1, $zero, 0xff
    /* nop */                                                   // 0x0014f794: nop 
label_0x14f798:
    v0 = (s3 < s6) ? 1 : 0;                                     // 0x0014f798: slt $v0, $s3, $s6
    if (v0 == 0) goto label_0x14f7b0;                           // 0x0014f79c: beqz $v0, 0x14f7b0
    v0 = (s5 < s3) ? 1 : 0;                                     // 0x0014f7a0: slt $v0, $s5, $s3
    goto label_0x14f7e4;                                        // 0x0014f7a4: b 0x14f7e4
    *(uint16_t*)(s0) = s4;                                      // 0x0014f7a8: sh $s4, 0($s0)
    /* nop */                                                   // 0x0014f7ac: nop 
label_0x14f7b0:
    if (v0 == 0) goto label_0x14f7c0;                           // 0x0014f7b0: beqz $v0, 0x14f7c0
    /* nop */                                                   // 0x0014f7b4: nop 
    goto label_0x14f7e4;                                        // 0x0014f7b8: b 0x14f7e4
    *(uint16_t*)(s0) = 0;                                       // 0x0014f7bc: sh $zero, 0($s0)
label_0x14f7c0:
    func_00112048();  // 0x111f90                                // 0x0014f7c0: jal 0x111f90
    a0 = s5 - s1;                                               // 0x0014f7c4: subu $a0, $s5, $s1
    func_00111ce0();  // 0x111a58                                // 0x0014f7cc: jal 0x111a58
    func_001120e8();  // 0x112048                                // 0x0014f7d4: jal 0x112048
    v0 = v0 << 6;                                               // 0x0014f7dc: sll $v0, $v0, 6
    *(uint16_t*)(s0) = v0;                                      // 0x0014f7e0: sh $v0, 0($s0)
label_0x14f7e4:
    s3 = s3 + 1;                                                // 0x0014f7e4: addiu $s3, $s3, 1
    s0 = s0 + 8;                                                // 0x0014f7e8: addiu $s0, $s0, 8
    v0 = (s3 < 0x100) ? 1 : 0;                                  // 0x0014f7ec: slti $v0, $s3, 0x100
    if (v0 != 0) goto label_0x14f798;                           // 0x0014f7f0: bnez $v0, 0x14f798
    s1 = s1 + -1;                                               // 0x0014f7f4: addiu $s1, $s1, -1
    goto label_0x14f868;                                        // 0x0014f7f8: b 0x14f868
label_0x14f800:
    s0 = s7 + 6;                                                // 0x0014f800: addiu $s0, $s7, 6
label_0x14f808:
    v0 = (s3 < s6) ? 1 : 0;                                     // 0x0014f808: slt $v0, $s3, $s6
    if (v0 == 0) goto label_0x14f820;                           // 0x0014f80c: beqz $v0, 0x14f820
    v0 = (s5 < s3) ? 1 : 0;                                     // 0x0014f810: slt $v0, $s5, $s3
    goto label_0x14f854;                                        // 0x0014f814: b 0x14f854
    *(uint16_t*)(s0) = 0;                                       // 0x0014f818: sh $zero, 0($s0)
    /* nop */                                                   // 0x0014f81c: nop 
label_0x14f820:
    if (v0 == 0) goto label_0x14f830;                           // 0x0014f820: beqz $v0, 0x14f830
    /* nop */                                                   // 0x0014f824: nop 
    goto label_0x14f854;                                        // 0x0014f828: b 0x14f854
    *(uint16_t*)(s0) = s1;                                      // 0x0014f82c: sh $s1, 0($s0)
label_0x14f830:
    func_00112048();  // 0x111f90                                // 0x0014f830: jal 0x111f90
    a0 = s3 - s6;                                               // 0x0014f834: subu $a0, $s3, $s6
    func_00111ce0();  // 0x111a58                                // 0x0014f83c: jal 0x111a58
    func_001120e8();  // 0x112048                                // 0x0014f844: jal 0x112048
    v0 = v0 << 6;                                               // 0x0014f84c: sll $v0, $v0, 6
    *(uint16_t*)(s0) = v0;                                      // 0x0014f850: sh $v0, 0($s0)
label_0x14f854:
    s3 = s3 + 1;                                                // 0x0014f854: addiu $s3, $s3, 1
    v0 = (s3 < 0x100) ? 1 : 0;                                  // 0x0014f858: slti $v0, $s3, 0x100
    if (v0 != 0) goto label_0x14f808;                           // 0x0014f85c: bnez $v0, 0x14f808
    s0 = s0 + 8;                                                // 0x0014f860: addiu $s0, $s0, 8
label_0x14f868:
    return;                                                     // 0x0014f88c: jr $ra
    sp = sp + 0x60;                                             // 0x0014f890: addiu $sp, $sp, 0x60
}