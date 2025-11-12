void func_001015a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x90;                                            // 0x001015a0: addiu $sp, $sp, -0x90
    s6 = 0x1f << 16;                                            // 0x001015a8: lui $s6, 0x1f
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x001015b0: lw $v0, -0x20f0($s6)
    if (v0 <= 0) goto label_0x1015e0;                           // 0x001015cc: blez $v0, 0x1015e0
    a0 = 0x22 << 16;                                            // 0x001015d4: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x001015d8: jal 0x116508
    a0 = &str_0021feb8;  // "call cdread cmd\n"                 // 0x001015dc: addiu $a0, $a0, -0x148
label_0x1015e0:
    func_00100668();  // 0x1005b0                                // 0x001015e0: jal 0x1005b0
    s4 = 0x1f << 16;                                            // 0x001015e4: lui $s4, 0x1f
    a0 = g_001edf30;  // Global at 0x001edf30                   // 0x001015e8: lw $a0, -0x20d0($s4)
    SetOsdConfigParam();  // 0x114330                           // 0x001015ec: jal 0x114330
    /* nop */                                                   // 0x001015f0: nop 
    v1 = g_001edf30;  // Global at 0x001edf30                   // 0x001015f4: lw $v1, -0x20d0($s4)
    if (v1 != v0) goto label_0x101728;                          // 0x001015f8: bne $v1, $v0, 0x101728
    a0 = s2 ^ 8;                                                // 0x001015fc: xori $a0, $s2, 8
    func_00116ee0();  // 0x116d40                                // 0x00101604: jal 0x116d40
    s3 = 0x1f << 16;                                            // 0x00101608: lui $s3, 0x1f
    v0 = g_001edf48;  // Global at 0x001edf48                   // 0x0010160c: lw $v0, -0x20b8($s3)
    if (v0 >= 0) goto label_0x1016c4;                           // 0x00101610: bgez $v0, 0x1016c4
    goto label_0x101650;                                        // 0x00101618: b 0x101650
    s5 = 0x25 << 16;                                            // 0x0010161c: lui $s5, 0x25
label_0x101620:
    if (v0 == 0) goto label_0x101738;                           // 0x00101620: beqz $v0, 0x101738
    v0 = s1 + 1;                                                // 0x00101624: addiu $v0, $s1, 1
    v1 = 0x10 << 16;                                            // 0x00101628: lui $v1, 0x10
    a0 = -1;                                                    // 0x0010162c: addiu $a0, $zero, -1
label_0x101630:
    v1 = v1 + -1;                                               // 0x00101630: addiu $v1, $v1, -1
    /* nop */                                                   // 0x00101634: nop 
    /* nop */                                                   // 0x00101638: nop 
    /* nop */                                                   // 0x0010163c: nop 
    /* nop */                                                   // 0x00101640: nop 
    if (v1 != a0) goto label_0x101630;                          // 0x00101644: bne $v1, $a0, 0x101630
    /* nop */                                                   // 0x00101648: nop 
label_0x101650:
    s0 = s5 + -0x46b0;                                          // 0x00101650: addiu $s0, $s5, -0x46b0
label_0x101654:
    a1 = 0x8000 << 16;                                          // 0x00101654: lui $a1, 0x8000
    a1 = a1 | 0x59c;                                            // 0x0010165c: ori $a1, $a1, 0x59c
    func_001176a8();  // 0x1174d8                                // 0x00101660: jal 0x1174d8
    if (v0 >= 0) goto label_0x1016b4;                           // 0x00101668: bgezl $v0, 0x1016b4
    v0 = g_0024b974;  // Global at 0x0024b974                   // 0x0010166c: lw $v0, 0x24($s0)
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00101670: lw $v0, -0x20f0($s6)
    if (v0 <= 0) goto label_0x10168c;                           // 0x00101674: blez $v0, 0x10168c
    v1 = 0x10 << 16;                                            // 0x00101678: lui $v1, 0x10
    a0 = 0x22 << 16;                                            // 0x0010167c: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00101680: jal 0x116508
    a0 = &str_0021fe80;  // "DiskReady ended\n"                 // 0x00101684: addiu $a0, $a0, -0x180
    v1 = 0x10 << 16;                                            // 0x00101688: lui $v1, 0x10
label_0x10168c:
    v0 = -1;                                                    // 0x0010168c: addiu $v0, $zero, -1
label_0x101690:
    v1 = v1 + -1;                                               // 0x00101690: addiu $v1, $v1, -1
    /* nop */                                                   // 0x00101694: nop 
    /* nop */                                                   // 0x00101698: nop 
    /* nop */                                                   // 0x0010169c: nop 
    /* nop */                                                   // 0x001016a0: nop 
    if (v1 != v0) goto label_0x101690;                          // 0x001016a4: bne $v1, $v0, 0x101690
    /* nop */                                                   // 0x001016a8: nop 
    goto label_0x101654;                                        // 0x001016ac: b 0x101654
    s0 = s5 + -0x46b0;                                          // 0x001016b0: addiu $s0, $s5, -0x46b0
label_0x1016b4:
    if (v0 == 0) goto label_0x101620;                           // 0x001016b4: beqz $v0, 0x101620
    v0 = (s1 < 0x11) ? 1 : 0;                                   // 0x001016b8: slti $v0, $s1, 0x11
    goto label_0x1016c8;                                        // 0x001016bc: b 0x1016c8
    g_001edf48 = 0;  // Global at 0x001edf48                    // 0x001016c0: sw $zero, -0x20b8($s3)
label_0x1016c4:
    s5 = 0x25 << 16;                                            // 0x001016c4: lui $s5, 0x25
label_0x1016c8:
    v0 = 0x25 << 16;                                            // 0x001016c8: lui $v0, 0x25
    a1 = 4;                                                     // 0x001016cc: addiu $a1, $zero, 4
    s0 = v0 + -0x4670;                                          // 0x001016d0: addiu $s0, $v0, -0x4670
    g_0024b990 = s2;  // Global at 0x0024b990                   // 0x001016d4: sw $s2, -0x4670($v0)
    func_00116d40();  // 0x116c90                                // 0x001016d8: jal 0x116c90
    v0 = 0x1f << 16;                                            // 0x001016e0: lui $v0, 0x1f
    a0 = s5 + -0x46b0;                                          // 0x001016e4: addiu $a0, $s5, -0x46b0
    s1 = v0 + -0x680;                                           // 0x001016e8: addiu $s1, $v0, -0x680
    local_0 = 0;                                                // 0x001016f0: sw $zero, 0($sp)
    t0 = 4;                                                     // 0x001016fc: addiu $t0, $zero, 4
    t2 = 4;                                                     // 0x00101704: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x00101708: jal 0x1176a8
    if (v0 >= 0) goto label_0x101754;                           // 0x00101710: bgezl $v0, 0x101754
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x00101714: lw $v0, -0x20f0($s6)
    a0 = g_001edf30;  // Global at 0x001edf30                   // 0x00101718: lw $a0, -0x20d0($s4)
    iSignalSema();  // 0x114300                                 // 0x0010171c: jal 0x114300
    /* nop */                                                   // 0x00101720: nop 
    a0 = s2 ^ 8;                                                // 0x00101724: xori $a0, $s2, 8
label_0x101728:
    v1 = -1;                                                    // 0x00101728: addiu $v1, $zero, -1
    v0 = 6;                                                     // 0x0010172c: addiu $v0, $zero, 6
    goto label_0x10177c;                                        // 0x00101730: b 0x10177c
    if (a0 == 0) v0 = v1;                                       // 0x00101734: movz $v0, $v1, $a0
label_0x101738:
    a0 = g_001edf30;  // Global at 0x001edf30                   // 0x00101738: lw $a0, -0x20d0($s4)
    iSignalSema();  // 0x114300                                 // 0x0010173c: jal 0x114300
    /* nop */                                                   // 0x00101740: nop 
    func_001015a0();  // 0x1013a8                                // 0x00101744: jal 0x1013a8
    goto label_0x101780;                                        // 0x0010174c: b 0x101780
label_0x101754:
    if (v0 <= 0) goto label_0x101764;                           // 0x00101754: blez $v0, 0x101764
    a0 = 0x22 << 16;                                            // 0x00101758: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0010175c: jal 0x116508
    a0 = &str_0021fea0;  // "NEW DiskReady Call\n"              // 0x00101760: addiu $a0, $a0, -0x160
label_0x101764:
    v0 = 0x2000 << 16;                                          // 0x00101764: lui $v0, 0x2000
    a0 = g_001edf30;  // Global at 0x001edf30                   // 0x00101768: lw $a0, -0x20d0($s4)
    v0 = s1 | v0;                                               // 0x0010176c: or $v0, $s1, $v0
    iSignalSema();  // 0x114300                                 // 0x00101770: jal 0x114300
    s0 = g_20000000;  // Global at 0x20000000                   // 0x00101774: lw $s0, 0($v0)
label_0x10177c:
label_0x101780:
    return;                                                     // 0x0010179c: jr $ra
    sp = sp + 0x90;                                             // 0x001017a0: addiu $sp, $sp, 0x90
}