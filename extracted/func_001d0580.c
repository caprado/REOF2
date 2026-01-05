void func_001d0580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d0580: addiu $sp, $sp, -0x10
    at = 0x33 << 16;                                            // 0x001d0584: lui $at, 0x33
    v0 = g_0032be20;  // Global at 0x0032be20                   // 0x001d058c: lb $v0, -0x41e0($at)
    at = ((unsigned)v0 < (unsigned)6) ? 1 : 0;                  // 0x001d0590: sltiu $at, $v0, 6
    if (at == 0) goto label_0x1d0680;                           // 0x001d0594: beqz $at, 0x1d0680
    /* nop */                                                   // 0x001d0598: nop 
    v1 = 0x24 << 16;                                            // 0x001d059c: lui $v1, 0x24
    v0 = v0 << 2;                                               // 0x001d05a0: sll $v0, $v0, 2
    v1 = v1 + 0x3ac0;                                           // 0x001d05a4: addiu $v1, $v1, 0x3ac0
    v0 = v0 + v1;                                               // 0x001d05a8: addu $v0, $v0, $v1
    v0 = *(int32_t*)(v0);                                       // 0x001d05ac: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001d05b0: jr $v0
    /* nop */                                                   // 0x001d05b4: nop 
    func_001d07c0();  // 1d07c0                                // 0x001d05b8: jal 0x1d07c0
    /* nop */                                                   // 0x001d05bc: nop 
    at = 0x33 << 16;                                            // 0x001d05c0: lui $at, 0x33
    v0 = g_0032be20;  // Global at 0x0032be20                   // 0x001d05c4: lb $v0, -0x41e0($at)
    v0 = v0 + 1;                                                // 0x001d05c8: addiu $v0, $v0, 1
    at = 0x33 << 16;                                            // 0x001d05cc: lui $at, 0x33
    goto label_0x1d0680;                                        // 0x001d05d0: b 0x1d0680
    g_0032be20 = v0;  // Global at 0x0032be20                   // 0x001d05d4: sb $v0, -0x41e0($at)
    func_001d0990();  // 1d0990                                // 0x001d05d8: jal 0x1d0990
    /* nop */                                                   // 0x001d05dc: nop 
    if (v0 == 0) goto label_0x1d0680;                           // 0x001d05e0: beqz $v0, 0x1d0680
    /* nop */                                                   // 0x001d05e4: nop 
    v1 = 4;                                                     // 0x001d05e8: addiu $v1, $zero, 4
    if (v0 == v1) goto label_0x1d0628;                          // 0x001d05ec: beq $v0, $v1, 0x1d0628
    at = 0x33 << 16;                                            // 0x001d05f0: lui $at, 0x33
    v1 = 2;                                                     // 0x001d05f4: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1d0608;                          // 0x001d05f8: beq $v0, $v1, 0x1d0608
    /* nop */                                                   // 0x001d05fc: nop 
    goto label_0x1d0680;                                        // 0x001d0600: b 0x1d0680
    /* nop */                                                   // 0x001d0604: nop 
label_0x1d0608:
    func_001d0560();  // 1d0560                                // 0x001d0608: jal 0x1d0560
    a0 = *(int32_t*)((gp) + -0x6294);                           // 0x001d060c: lw $a0, -0x6294($gp)
    at = 0x33 << 16;                                            // 0x001d0610: lui $at, 0x33
    v0 = g_0032be20;  // Global at 0x0032be20                   // 0x001d0614: lb $v0, -0x41e0($at)
    v0 = v0 + 1;                                                // 0x001d0618: addiu $v0, $v0, 1
    at = 0x33 << 16;                                            // 0x001d061c: lui $at, 0x33
    goto label_0x1d0680;                                        // 0x001d0620: b 0x1d0680
    g_0032be20 = v0;  // Global at 0x0032be20                   // 0x001d0624: sb $v0, -0x41e0($at)
label_0x1d0628:
    goto label_0x1d0680;                                        // 0x001d0628: b 0x1d0680
    g_0032be20 = v1;  // Global at 0x0032be20                   // 0x001d062c: sb $v1, -0x41e0($at)
    func_001c8e50();  // 1c8e50                                // 0x001d0630: jal 0x1c8e50
    /* nop */                                                   // 0x001d0634: nop 
    if (v0 == 0) goto label_0x1d0680;                           // 0x001d0638: beqz $v0, 0x1d0680
    /* nop */                                                   // 0x001d063c: nop 
    v0 = 4;                                                     // 0x001d0640: addiu $v0, $zero, 4
    at = 0x33 << 16;                                            // 0x001d0644: lui $at, 0x33
    goto label_0x1d0688;                                        // 0x001d0648: b 0x1d0688
    g_0032be20 = v0;  // Global at 0x0032be20                   // 0x001d064c: sb $v0, -0x41e0($at)
    a0 = 0x33 << 16;                                            // 0x001d0650: lui $a0, 0x33
    a1 = 0x33 << 16;                                            // 0x001d0654: lui $a1, 0x33
    a0 = a0 + -0x41dd;                                          // 0x001d0658: addiu $a0, $a0, -0x41dd
    func_001d29a0();  // 1d29a0                                // 0x001d065c: jal 0x1d29a0
    a1 = a1 + -0x41dc;                                          // 0x001d0660: addiu $a1, $a1, -0x41dc
    if (v0 == 0) goto label_0x1d0680;                           // 0x001d0664: beqz $v0, 0x1d0680
    /* nop */                                                   // 0x001d0668: nop 
    func_001cef30();  // 1cef30                                // 0x001d066c: jal 0x1cef30
    /* nop */                                                   // 0x001d0670: nop 
    v0 = 5;                                                     // 0x001d0674: addiu $v0, $zero, 5
    at = 0x33 << 16;                                            // 0x001d0678: lui $at, 0x33
    g_0032be20 = v0;  // Global at 0x0032be20                   // 0x001d067c: sb $v0, -0x41e0($at)
label_0x1d0680:
    at = 0x33 << 16;                                            // 0x001d0680: lui $at, 0x33
    v0 = g_0032be20;  // Global at 0x0032be20                   // 0x001d0684: lb $v0, -0x41e0($at)
label_0x1d0688:
    return;                                                     // 0x001d068c: jr $ra
    sp = sp + 0x10;                                             // 0x001d0690: addiu $sp, $sp, 0x10
}