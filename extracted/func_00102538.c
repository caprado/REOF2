void func_00102538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_20, local_30, local_40, local_50, local_60, local_70;
    uint32_t local_80, local_84;
    
    sp = sp + -0x130;                                           // 0x00102538: addiu $sp, $sp, -0x130
    func_001022e8();  // 0x1022b8                                // 0x00102564: jal 0x1022b8
    if (v0 != 0) goto label_0x102694;                           // 0x0010256c: bnez $v0, 0x102694
    v0 = sp + 0x50;                                             // 0x00102574: addiu $v0, $sp, 0x50
    local_84 = v0;                                              // 0x0010257c: sw $v0, 0x84($sp)
    s4 = sp + 0x10;                                             // 0x00102580: addiu $s4, $sp, 0x10
    v0 = sp + 0x60;                                             // 0x00102584: addiu $v0, $sp, 0x60
    s5 = sp + 0x20;                                             // 0x00102588: addiu $s5, $sp, 0x20
    local_80 = v0;                                              // 0x0010258c: sw $v0, 0x80($sp)
    s6 = sp + 0x30;                                             // 0x00102590: addiu $s6, $sp, 0x30
    s7 = sp + 0x40;                                             // 0x00102594: addiu $s7, $sp, 0x40
    fp = sp + 0x70;                                             // 0x00102598: addiu $fp, $sp, 0x70
    s3 = s2 + 0x21c;                                            // 0x0010259c: addiu $s3, $s2, 0x21c
    /* nop */                                                   // 0x001025a4: nop 
label_0x1025a8:
    a1 = s1 + 0x400;                                            // 0x001025a8: addiu $a1, $s1, 0x400
    a1 = a1 & 0xffff;                                           // 0x001025b0: andi $a1, $a1, 0xffff
    func_00102370();  // 0x102328                                // 0x001025b4: jal 0x102328
    s1 = s1 + 1;                                                // 0x001025b8: addiu $s1, $s1, 1
    /* FPU: xori.b $w0, $w0, 0xa2 */                            // 0x001025bc: xori.b $w0, $w0, 0xa2
    v1 = ((unsigned)s1 < (unsigned)0x20) ? 1 : 0;               // 0x001025c0: sltiu $v1, $s1, 0x20
    if (v1 != 0) goto label_0x1025a8;                           // 0x001025c8: bnez $v1, 0x1025a8
    s0 = s0 + 0x10;                                             // 0x001025cc: addiu $s0, $s0, 0x10
    func_00102370();  // 0x102328                                // 0x001025d4: jal 0x102328
    a1 = 0x430;                                                 // 0x001025d8: addiu $a1, $zero, 0x430
    v0 = local_0;                                               // 0x001025e0: lw $v0, 0($sp)
    a1 = 0x431;                                                 // 0x001025e8: addiu $a1, $zero, 0x431
    func_00102370();  // 0x102328                                // 0x001025f0: jal 0x102328
    *(uint32_t*)((s2) + 0x200) = v0;                            // 0x001025f4: sw $v0, 0x200($s2)
    v0 = local_10;                                              // 0x001025f8: lw $v0, 0x10($sp)
    a1 = 0x432;                                                 // 0x00102600: addiu $a1, $zero, 0x432
    func_00102370();  // 0x102328                                // 0x00102604: jal 0x102328
    *(uint32_t*)((s2) + 0x204) = v0;                            // 0x00102608: sw $v0, 0x204($s2)
    v0 = local_20;                                              // 0x0010260c: lw $v0, 0x20($sp)
    a1 = 0x434;                                                 // 0x00102614: addiu $a1, $zero, 0x434
    func_00102370();  // 0x102328                                // 0x00102618: jal 0x102328
    *(uint32_t*)((s2) + 0x208) = v0;                            // 0x0010261c: sw $v0, 0x208($s2)
    v0 = local_30;                                              // 0x00102620: lw $v0, 0x30($sp)
    a1 = 0x435;                                                 // 0x00102628: addiu $a1, $zero, 0x435
    func_00102370();  // 0x102328                                // 0x0010262c: jal 0x102328
    *(uint32_t*)((s2) + 0x20c) = v0;                            // 0x00102630: sw $v0, 0x20c($s2)
    v0 = local_40;                                              // 0x00102634: lw $v0, 0x40($sp)
    a1 = 0x436;                                                 // 0x00102638: addiu $a1, $zero, 0x436
    a0 = local_84;                                              // 0x0010263c: lw $a0, 0x84($sp)
    func_00102370();  // 0x102328                                // 0x00102640: jal 0x102328
    *(uint32_t*)((s2) + 0x210) = v0;                            // 0x00102644: sw $v0, 0x210($s2)
    v0 = local_50;                                              // 0x00102648: lw $v0, 0x50($sp)
    a1 = 0x437;                                                 // 0x0010264c: addiu $a1, $zero, 0x437
    a0 = local_80;                                              // 0x00102650: lw $a0, 0x80($sp)
    func_00102370();  // 0x102328                                // 0x00102654: jal 0x102328
    *(uint32_t*)((s2) + 0x214) = v0;                            // 0x00102658: sw $v0, 0x214($s2)
    v0 = local_60;                                              // 0x0010265c: lw $v0, 0x60($sp)
    *(uint32_t*)((s2) + 0x218) = v0;                            // 0x00102660: sw $v0, 0x218($s2)
    /* nop */                                                   // 0x00102664: nop 
label_0x102668:
    a1 = s1 + 0x420;                                            // 0x00102668: addiu $a1, $s1, 0x420
    a1 = a1 & 0xffff;                                           // 0x00102670: andi $a1, $a1, 0xffff
    func_00102370();  // 0x102328                                // 0x00102674: jal 0x102328
    s1 = s1 + 1;                                                // 0x00102678: addiu $s1, $s1, 1
    v0 = local_70;                                              // 0x0010267c: lhu $v0, 0x70($sp)
    v1 = ((unsigned)s1 < (unsigned)0x10) ? 1 : 0;               // 0x00102680: sltiu $v1, $s1, 0x10
    *(uint16_t*)(s0) = v0;                                      // 0x00102684: sh $v0, 0($s0)
    if (v1 != 0) goto label_0x102668;                           // 0x00102688: bnez $v1, 0x102668
    s0 = s0 + 2;                                                // 0x0010268c: addiu $s0, $s0, 2
    v0 = 1;                                                     // 0x00102690: addiu $v0, $zero, 1
label_0x102694:
    return;                                                     // 0x001026bc: jr $ra
    sp = sp + 0x130;                                            // 0x001026c0: addiu $sp, $sp, 0x130
}