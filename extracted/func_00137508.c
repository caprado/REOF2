void func_00137508() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00137508: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x0013750c: lui $a0, 0x20
    a0 = a0 + 0x2188;                                           // 0x00137514: addiu $a0, $a0, 0x2188
    return func_00137508();  // Tail call                        // 0x0013751c: j 0x1373f8
    sp = sp + 0x10;                                             // 0x00137520: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00137524: nop 
    sp = sp + -0x10;                                            // 0x00137528: addiu $sp, $sp, -0x10
    func_001413d8();  // 0x1413c0                                // 0x00137534: jal 0x1413c0
    a0 = 0x22 << 16;                                            // 0x0013753c: lui $a0, 0x22
    v1 = 1;                                                     // 0x00137540: addiu $v1, $zero, 1
    if (s0 != 0) goto label_0x137560;                           // 0x00137544: bnez $s0, 0x137560
    a0 = &str_00224d68;  // "SRD: Already Break!\r\n"           // 0x00137548: addiu $a0, $a0, 0x4d68
    func_00116598();  // 0x116508                                // 0x0013754c: jal 0x116508
    /* nop */                                                   // 0x00137550: nop 
    goto label_0x137584;                                        // 0x00137554: b 0x137584
    /* nop */                                                   // 0x0013755c: nop 
label_0x137560:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00137560: lw $v0, 4($s0)
    if (v0 != v1) goto label_0x137580;                          // 0x00137564: bnel $v0, $v1, 0x137580
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00137568: sw $v1, 4($s0)
    a0 = 0x22 << 16;                                            // 0x0013756c: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00137570: jal 0x116508
    a0 = &str_00224d88;  // "SRD: Drive Error (sceCdGetError = 0x%x)\r\n" // 0x00137574: addiu $a0, $a0, 0x4d88
    goto label_0x137584;                                        // 0x00137578: b 0x137584
label_0x137580:
label_0x137584:
    return func_00141450();  // Tail call                        // 0x00137588: j 0x141438
    sp = sp + 0x10;                                             // 0x0013758c: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00137590: addiu $sp, $sp, -0x20
    v1 = 0x20 << 16;                                            // 0x00137594: lui $v1, 0x20
    v1 = v1 + 0x21d4;                                           // 0x001375a4: addiu $v1, $v1, 0x21d4
    a0 = g_002021d4;  // Global at 0x002021d4                   // 0x001375b4: lw $a0, 0($v1)
    if (a0 == 0) goto label_0x137674;                           // 0x001375b8: beqz $a0, 0x137674
    v1 = 2;                                                     // 0x001375bc: addiu $v1, $zero, 2
    a0 = *(int8_t*)((s1) + 2);                                  // 0x001375c0: lb $a0, 2($s1)
    if (a0 != v1) goto label_0x137678;                          // 0x001375c4: bnel $a0, $v1, 0x137678
    s2 = 0x20 << 16;                                            // 0x001375cc: lui $s2, 0x20
    a1 = 1;                                                     // 0x001375d0: addiu $a1, $zero, 1
    a0 = s2 + 0x21dc;                                           // 0x001375d4: addiu $a0, $s2, 0x21dc
    v0 = 0x20 << 16;                                            // 0x001375d8: lui $v0, 0x20
    g_002021dc = a1;  // Global at 0x002021dc                   // 0x001375dc: sw $a1, 0($a0)
    v0 = v0 + 0x21d0;                                           // 0x001375e0: addiu $v0, $v0, 0x21d0
    v1 = g_002021d0;  // Global at 0x002021d0                   // 0x001375e4: lw $v1, 0($v0)
    if (v1 != a1) goto label_0x137628;                          // 0x001375e8: bne $v1, $a1, 0x137628
    /* nop */                                                   // 0x001375ec: nop 
    func_00141408();  // 0x1413f0                                // 0x001375f0: jal 0x1413f0
    /* nop */                                                   // 0x001375f4: nop 
    func_00137fb0();  // 0x137ec8                                // 0x001375f8: jal 0x137ec8
    a0 = 0x1400;                                                // 0x001375fc: addiu $a0, $zero, 0x1400
    func_00101ba0();  // 0x101b08                                // 0x00137600: jal 0x101b08
    /* nop */                                                   // 0x00137604: nop 
    a0 = 0x1401;                                                // 0x00137608: addiu $a0, $zero, 0x1401
    func_00137fb0();  // 0x137ec8                                // 0x0013760c: jal 0x137ec8
    func_00141480();  // 0x141468                                // 0x00137614: jal 0x141468
    /* nop */                                                   // 0x00137618: nop 
    goto label_0x137648;                                        // 0x0013761c: b 0x137648
    v0 = s0 + 1;                                                // 0x00137620: addiu $v0, $s0, 1
    /* nop */                                                   // 0x00137624: nop 
label_0x137628:
    func_00137fb0();  // 0x137ec8                                // 0x00137628: jal 0x137ec8
    a0 = 0x1500;                                                // 0x0013762c: addiu $a0, $zero, 0x1500
    func_00101ba0();  // 0x101b08                                // 0x00137630: jal 0x101b08
    /* nop */                                                   // 0x00137634: nop 
    a0 = 0x1501;                                                // 0x00137638: addiu $a0, $zero, 0x1501
    func_00137fb0();  // 0x137ec8                                // 0x0013763c: jal 0x137ec8
    v0 = s0 + 1;                                                // 0x00137644: addiu $v0, $s0, 1
label_0x137648:
    v1 = s2 + 0x21dc;                                           // 0x00137648: addiu $v1, $s2, 0x21dc
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0013764c: sltiu $v0, $v0, 2
    g_002021dc = 0;  // Global at 0x002021dc                    // 0x00137650: sw $zero, 0($v1)
    /* bnezl $v0, 0x137674 */                                   // 0x00137654: bnezl $v0, 0x137674
    *(uint32_t*)((s1) + 0x34) = s0;                             // 0x0013765c: sw $s0, 0x34($s1)
    a0 = 0x22 << 16;                                            // 0x00137660: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00137668: jal 0x116508
    a0 = &str_00224da0;  // "SRD: sceCdBreak is fail. %d\n"     // 0x0013766c: addiu $a0, $a0, 0x4da0
    v0 = 1;                                                     // 0x00137670: addiu $v0, $zero, 1
label_0x137674:
label_0x137678:
    return;                                                     // 0x00137684: jr $ra
    sp = sp + 0x20;                                             // 0x00137688: addiu $sp, $sp, 0x20
}