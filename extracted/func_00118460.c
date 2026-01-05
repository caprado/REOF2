void func_00118460() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10;
    
    sp = sp + -0x80;                                            // 0x00118460: addiu $sp, $sp, -0x80
    s0 = 0x25 << 16;                                            // 0x0011846c: lui $s0, 0x25
    s1 = s0 + -0x6c0;                                           // 0x00118478: addiu $s1, $s0, -0x6c0
    func_00116d40();  // 116d40                                // 0x00118484: jal 0x116d40
    g_0024f940 = 0;  // Global at 0x0024f940                    // 0x0011848c: sw $zero, -0x6c0($s0)
    func_0011d320();  // 11d320                                // 0x00118490: jal 0x11d320
    g_0024f944 = 0;  // Global at 0x0024f944                    // 0x00118494: sw $zero, 4($s1)
    a1 = 0x11 << 16;                                            // 0x00118498: lui $a1, 0x11
    a2 = 0x25 << 16;                                            // 0x0011849c: lui $a2, 0x25
    a0 = 0x8000 << 16;                                          // 0x001184a0: lui $a0, 0x8000
    a1 = a1 + 0x7f28;                                           // 0x001184a8: addiu $a1, $a1, 0x7f28
    a2 = a2 + -0x700;                                           // 0x001184ac: addiu $a2, $a2, -0x700
    func_001168c8();  // 1168c8                                // 0x001184b0: jal 0x1168c8
    a0 = a0 | 0x11;                                             // 0x001184b4: ori $a0, $a0, 0x11
    a1 = 0x12 << 16;                                            // 0x001184b8: lui $a1, 0x12
    a0 = 0x8000 << 16;                                          // 0x001184bc: lui $a0, 0x8000
    a1 = a1 + -0x7be8;                                          // 0x001184c0: addiu $a1, $a1, -0x7be8
    func_001168c8();  // 1168c8                                // 0x001184c8: jal 0x1168c8
    a0 = a0 | 0x13;                                             // 0x001184cc: ori $a0, $a0, 0x13
    if (s0 == 0) goto label_0x11850c;                           // 0x001184d0: beqz $s0, 0x11850c
    s3 = 0x25 << 16;                                            // 0x001184d4: lui $s3, 0x25
    func_0011d378();  // 11d378                                // 0x001184d8: jal 0x11d378
    s0 = s3 + -0x740;                                           // 0x001184dc: addiu $s0, $s3, -0x740
    goto label_0x118510;                                        // 0x001184e0: b 0x118510
    /* nop */                                                   // 0x001184e4: nop 
label_0x1184e8:
    v1 = -1;                                                    // 0x001184e8: addiu $v1, $zero, -1
    /* nop */                                                   // 0x001184ec: nop 
label_0x1184f0:
    v0 = v0 + -1;                                               // 0x001184f0: addiu $v0, $v0, -1
    /* nop */                                                   // 0x001184f4: nop 
    /* nop */                                                   // 0x001184f8: nop 
    /* nop */                                                   // 0x001184fc: nop 
    /* nop */                                                   // 0x00118500: nop 
    if (v0 != v1) goto label_0x1184f0;                          // 0x00118504: bne $v0, $v1, 0x1184f0
    /* nop */                                                   // 0x00118508: nop 
label_0x11850c:
    s0 = s3 + -0x740;                                           // 0x0011850c: addiu $s0, $s3, -0x740
label_0x118510:
    a1 = 0x8000 << 16;                                          // 0x00118510: lui $a1, 0x8000
    a1 = a1 | 1;                                                // 0x00118518: ori $a1, $a1, 1
    func_001174d8();  // 1174d8                                // 0x0011851c: jal 0x1174d8
    if (v0 < 0) goto label_0x118644;                            // 0x00118524: bltz $v0, 0x118644
    v0 = -1;                                                    // 0x00118528: addiu $v0, $zero, -1
    v0 = g_0024f8e4;  // Global at 0x0024f8e4                   // 0x0011852c: lw $v0, 0x24($s0)
    if (v0 == 0) goto label_0x1184e8;                           // 0x00118530: beqz $v0, 0x1184e8
    v0 = 0x10 << 16;                                            // 0x00118534: lui $v0, 0x10
    func_00117dd0();  // 117dd0                                // 0x00118538: jal 0x117dd0
    s4 = 0x1f << 16;                                            // 0x0011853c: lui $s4, 0x1f
    PollSema();  // 0x114320                                    // 0x00118540: jal 0x114320
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00118544: lw $a0, 0x3e8($s4)
    v1 = 0x25 << 16;                                            // 0x00118548: lui $v1, 0x25
    v1 = v1 + -0x940;                                           // 0x0011854c: addiu $v1, $v1, -0x940
    a0 = v1 + 0x200;                                            // 0x00118550: addiu $a0, $v1, 0x200
    v0 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x00118554: sltu $v0, $v1, $a0
    if (v0 == 0) goto label_0x11858c;                           // 0x00118558: beqz $v0, 0x11858c
    s2 = 0x25 << 16;                                            // 0x0011855c: lui $s2, 0x25
    s1 = 0x25 << 16;                                            // 0x00118560: lui $s1, 0x25
    s0 = 0x25 << 16;                                            // 0x00118564: lui $s0, 0x25
label_0x118568:
    g_0024f6c4 = 0;  // Global at 0x0024f6c4                    // 0x00118568: sw $zero, 4($v1)
    v1 = v1 + 0x10;                                             // 0x0011856c: addiu $v1, $v1, 0x10
    v0 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x00118570: sltu $v0, $v1, $a0
    /* nop */                                                   // 0x00118574: nop 
    /* nop */                                                   // 0x00118578: nop 
    if (v0 != 0) goto label_0x118568;                           // 0x0011857c: bnez $v0, 0x118568
    /* nop */                                                   // 0x00118580: nop 
    goto label_0x118598;                                        // 0x00118584: b 0x118598
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00118588: lw $a0, 0x3e8($s4)
label_0x11858c:
    s1 = 0x25 << 16;                                            // 0x0011858c: lui $s1, 0x25
    s0 = 0x25 << 16;                                            // 0x00118590: lui $s0, 0x25
    a0 = g_001f03e8;  // Global at 0x001f03e8                   // 0x00118594: lw $a0, 0x3e8($s4)
label_0x118598:
    iSignalSema();  // 0x114300                                 // 0x00118598: jal 0x114300
    s0 = s0 + -0x1200;                                          // 0x0011859c: addiu $s0, $s0, -0x1200
    v1 = s1 + -0x11c0;                                          // 0x001185a0: addiu $v1, $s1, -0x11c0
    a3 = s2 + -0x1e80;                                          // 0x001185a4: addiu $a3, $s2, -0x1e80
    g_0024e180 = v1;  // Global at 0x0024e180                   // 0x001185a8: sw $v1, -0x1e80($s2)
    a0 = s3 + -0x740;                                           // 0x001185ac: addiu $a0, $s3, -0x740
    v1 = v1 + 0x440;                                            // 0x001185b0: addiu $v1, $v1, 0x440
    a1 = 0xff;                                                  // 0x001185b4: addiu $a1, $zero, 0xff
    g_0024e184 = v1;  // Global at 0x0024e184                   // 0x001185b8: sw $v1, 4($a3)
    local_0 = 0;                                                // 0x001185c0: sw $zero, 0($sp)
    t0 = 8;                                                     // 0x001185c4: addiu $t0, $zero, 8
    t2 = 8;                                                     // 0x001185cc: addiu $t2, $zero, 8
    func_001176a8();  // 1176a8                                // 0x001185d0: jal 0x1176a8
    if (v0 >= 0) goto label_0x1185ec;                           // 0x001185d8: bgez $v0, 0x1185ec
    a0 = 0x2000 << 16;                                          // 0x001185dc: lui $a0, 0x2000
    v0 = 0xfffe << 16;                                          // 0x001185e0: lui $v0, 0xfffe
    goto label_0x118644;                                        // 0x001185e4: b 0x118644
    v0 = v0 | 0xffff;                                           // 0x001185e8: ori $v0, $v0, 0xffff
label_0x1185ec:
    v0 = s0 + 4;                                                // 0x001185ec: addiu $v0, $s0, 4
    v1 = s0 | a0;                                               // 0x001185f0: or $v1, $s0, $a0
    v0 = v0 | a0;                                               // 0x001185f4: or $v0, $v0, $a0
    a1 = 0x25 << 16;                                            // 0x001185f8: lui $a1, 0x25
    t0 = a1 + -0x718;                                           // 0x001185fc: addiu $t0, $a1, -0x718
    /* lwl $a0, 3($v1) */                                       // 0x00118600: lwl $a0, 3($v1)
    /* lwr $a0, 0($v1) */                                       // 0x00118604: lwr $a0, 0($v1)
    /* swl $a0, 3($t0) */                                       // 0x00118608: swl $a0, 3($t0)
    /* swr $a0, 0($t0) */                                       // 0x0011860c: swr $a0, 0($t0)
    /* lwl $v1, 3($v0) */                                       // 0x00118610: lwl $v1, 3($v0)
    /* lwr $v1, 0($v0) */                                       // 0x00118614: lwr $v1, 0($v0)
    /* swl $v1, 0x13($sp) */                                    // 0x00118618: swl $v1, 0x13($sp)
    /* swr $v1, 0x10($sp) */                                    // 0x0011861c: swr $v1, 0x10($sp)
    a2 = 0x1f << 16;                                            // 0x00118620: lui $a2, 0x1f
    a1 = 0x1f << 16;                                            // 0x00118624: lui $a1, 0x1f
    v1 = local_10;                                              // 0x00118628: lw $v1, 0x10($sp)
    a0 = 1;                                                     // 0x0011862c: addiu $a0, $zero, 1
    g_001f03dc = a0;  // Global at 0x001f03dc                   // 0x00118630: sw $a0, 0x3dc($a1)
    v1 = v1 ^ 2;                                                // 0x00118638: xori $v1, $v1, 2
    v1 = ((unsigned)v1 < (unsigned)1) ? 1 : 0;                  // 0x0011863c: sltiu $v1, $v1, 1
    g_001f03e0 = v1;  // Global at 0x001f03e0                   // 0x00118640: sw $v1, 0x3e0($a2)
label_0x118644:
    return;                                                     // 0x0011865c: jr $ra
    sp = sp + 0x80;                                             // 0x00118660: addiu $sp, $sp, 0x80
}