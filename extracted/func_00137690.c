void func_00137690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00137690: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x00137694: addiu $v1, $zero, 1
    v0 = *(int32_t*)((s1) + 4);                                 // 0x001376ac: lw $v0, 4($s1)
    if (v0 != v1) goto label_0x137764;                          // 0x001376b0: bne $v0, $v1, 0x137764
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001376b4: lbu $a1, 2($s1)
    v1 = *(int8_t*)((s1) + 2);                                  // 0x001376b8: lb $v1, 2($s1)
    v0 = ((unsigned)v1 < (unsigned)0xa) ? 1 : 0;                // 0x001376bc: sltiu $v0, $v1, 0xa
    /* beqzl $v0, 0x137764 */                                   // 0x001376c0: beqzl $v0, 0x137764
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001376c4: sw $zero, 4($s1)
    v0 = v1 << 2;                                               // 0x001376c8: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x001376cc: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x001376d0: addu $v1, $v1, $v0
    v1 = g_00224df0;  // Global at 0x00224df0                   // 0x001376d4: lw $v1, 0x4df0($v1)
    /* jump to address in v1 */                                 // 0x001376d8: jr $v1
    /* nop */                                                   // 0x001376dc: nop 
    func_00137ec8();  // 137ec8                                // 0x001376e0: jal 0x137ec8
    a0 = 0x1600;                                                // 0x001376e4: addiu $a0, $zero, 0x1600
    func_00101ba0();  // 101ba0                                // 0x001376e8: jal 0x101ba0
    /* nop */                                                   // 0x001376ec: nop 
    func_00137ec8();  // 137ec8                                // 0x001376f4: jal 0x137ec8
    a0 = 0x1601;                                                // 0x001376f8: addiu $a0, $zero, 0x1601
    if (s0 != 0) goto label_0x137718;                           // 0x001376fc: bnez $s0, 0x137718
    v0 = 0x20 << 16;                                            // 0x00137700: lui $v0, 0x20
    a0 = 0x22 << 16;                                            // 0x00137704: lui $a0, 0x22
    v0 = v0 + 0x21dc;                                           // 0x00137708: addiu $v0, $v0, 0x21dc
    a0 = &str_00224dd0;  // "SRD: SRD_WaitForExecServer timeout.(10sec)\n" // 0x0013770c: addiu $a0, $a0, 0x4dd0
    func_00116508();  // 116508                                // 0x00137710: jal 0x116508
    a1 = g_002021dc;  // Global at 0x002021dc                   // 0x00137714: lw $a1, 0($v0)
label_0x137718:
    func_00137ec8();  // 137ec8                                // 0x00137718: jal 0x137ec8
    a0 = 0x1700;                                                // 0x0013771c: addiu $a0, $zero, 0x1700
    func_00100d98();  // 100d98                                // 0x00137720: jal 0x100d98
    func_00137ec8();  // 137ec8                                // 0x00137728: jal 0x137ec8
    a0 = 0x1701;                                                // 0x0013772c: addiu $a0, $zero, 0x1701
    *(uint8_t*)((s1) + 2) = 0;                                  // 0x00137730: sb $zero, 2($s1)
    v1 = 0x20 << 16;                                            // 0x00137734: lui $v1, 0x20
    v1 = v1 + 0x21e4;                                           // 0x0013773c: addiu $v1, $v1, 0x21e4
    v0 = g_002021e4;  // Global at 0x002021e4                   // 0x00137740: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00137744: addiu $v0, $v0, 1
    g_002021e4 = v0;  // Global at 0x002021e4                   // 0x00137748: sw $v0, 0($v1)
    goto label_0x137764;                                        // 0x0013774c: b 0x137764
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00137750: sw $zero, 4($s1)
    /* nop */                                                   // 0x00137754: nop 
    *(uint8_t*)((s1) + 2) = 0;                                  // 0x00137758: sb $zero, 2($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00137760: sw $zero, 4($s1)
label_0x137764:
    v0 = a1 << 0x18;                                            // 0x00137764: sll $v0, $a1, 0x18
    v1 = 1;                                                     // 0x00137768: addiu $v1, $zero, 1
    s2 = v0 >> 0x18;                                            // 0x0013776c: sra $s2, $v0, 0x18
    if (s2 != v1) goto label_0x1377e8;                          // 0x00137770: bnel $s2, $v1, 0x1377e8
    v1 = 2;                                                     // 0x00137774: addiu $v1, $zero, 2
    func_00137ec8();  // 137ec8                                // 0x00137778: jal 0x137ec8
    a0 = 0x1800;                                                // 0x0013777c: addiu $a0, $zero, 0x1800
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00137780: lw $a0, 8($s1)
    a1 = *(int32_t*)((s1) + 0xc);                               // 0x00137784: lw $a1, 0xc($s1)
    a3 = s1 + 0x14;                                             // 0x00137788: addiu $a3, $s1, 0x14
    func_001017a8();  // 1017a8                                // 0x0013778c: jal 0x1017a8
    a2 = *(int32_t*)((s1) + 0x10);                              // 0x00137790: lw $a2, 0x10($s1)
    a0 = 0x1801;                                                // 0x00137794: addiu $a0, $zero, 0x1801
    func_00137ec8();  // 137ec8                                // 0x00137798: jal 0x137ec8
    if (s0 != s2) goto label_0x1377d0;                          // 0x001377a0: bne $s0, $s2, 0x1377d0
    v0 = 9;                                                     // 0x001377a4: addiu $v0, $zero, 9
    v0 = 0x20 << 16;                                            // 0x001377a8: lui $v0, 0x20
    a0 = 2;                                                     // 0x001377ac: addiu $a0, $zero, 2
    v0 = v0 + 0x21e0;                                           // 0x001377b0: addiu $v0, $v0, 0x21e0
    a1 = 2;                                                     // 0x001377b4: addiu $a1, $zero, 2
    v1 = g_002021e0;  // Global at 0x002021e0                   // 0x001377b8: lw $v1, 0($v0)
    v1 = v1 + 1;                                                // 0x001377bc: addiu $v1, $v1, 1
    g_002021e0 = v1;  // Global at 0x002021e0                   // 0x001377c0: sw $v1, 0($v0)
    goto label_0x1377e0;                                        // 0x001377c4: b 0x1377e0
    *(uint8_t*)((s1) + 2) = a0;                                 // 0x001377c8: sb $a0, 2($s1)
    /* nop */                                                   // 0x001377cc: nop 
label_0x1377d0:
    v1 = -1;                                                    // 0x001377d0: addiu $v1, $zero, -1
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x001377d4: sb $v0, 2($s1)
    a1 = 9;                                                     // 0x001377d8: addiu $a1, $zero, 9
    *(uint32_t*)((s1) + 0x34) = v1;                             // 0x001377dc: sw $v1, 0x34($s1)
label_0x1377e0:
    v0 = a1 << 0x18;                                            // 0x001377e0: sll $v0, $a1, 0x18
    v1 = 2;                                                     // 0x001377e4: addiu $v1, $zero, 2
label_0x1377e8:
    v0 = v0 >> 0x18;                                            // 0x001377e8: sra $v0, $v0, 0x18
    if (v0 != v1) goto label_0x13784c;                          // 0x001377ec: bne $v0, $v1, 0x13784c
    func_00137ec8();  // 137ec8                                // 0x001377f4: jal 0x137ec8
    a0 = 0x1900;                                                // 0x001377f8: addiu $a0, $zero, 0x1900
    func_00100d98();  // 100d98                                // 0x001377fc: jal 0x100d98
    a0 = 1;                                                     // 0x00137800: addiu $a0, $zero, 1
    a0 = 0x1901;                                                // 0x00137804: addiu $a0, $zero, 0x1901
    func_00137ec8();  // 137ec8                                // 0x00137808: jal 0x137ec8
    func_00137590();  // 137590                                // 0x00137810: jal 0x137590
    if (s0 != 0) goto label_0x137848;                           // 0x00137818: bnez $s0, 0x137848
    v0 = 1;                                                     // 0x00137820: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x137830;                          // 0x00137824: bnel $v1, $v0, 0x137830
    v0 = 3;                                                     // 0x00137828: addiu $v0, $zero, 3
    v0 = 9;                                                     // 0x0013782c: addiu $v0, $zero, 9
label_0x137830:
    *(uint8_t*)((s1) + 2) = v0;                                 // 0x00137830: sb $v0, 2($s1)
    v1 = 0x20 << 16;                                            // 0x00137834: lui $v1, 0x20
    v1 = v1 + 0x21e4;                                           // 0x00137838: addiu $v1, $v1, 0x21e4
    v0 = g_002021e4;  // Global at 0x002021e4                   // 0x0013783c: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00137840: addiu $v0, $v0, 1
    g_002021e4 = v0;  // Global at 0x002021e4                   // 0x00137844: sw $v0, 0($v1)
label_0x137848:
label_0x13784c:
    return;                                                     // 0x00137858: jr $ra
    sp = sp + 0x20;                                             // 0x0013785c: addiu $sp, $sp, 0x20
}