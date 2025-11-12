void func_001c03d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c03d0: addiu $sp, $sp, -0x30
    v1 = 0x22 << 16;                                            // 0x001c03d4: lui $v1, 0x22
    v1 = v1 + -0x30e8;                                          // 0x001c03dc: addiu $v1, $v1, -0x30e8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c03e0: addu.qb $zero, $sp, $s1
    a1 = *(int32_t*)((a0) + 0xd4);                              // 0x001c03e8: lw $a1, 0xd4($a0)
    v0 = *(int32_t*)(a0);                                       // 0x001c03ec: lw $v0, 0($a0)
    a1 = a1 << 2;                                               // 0x001c03f0: sll $a1, $a1, 2
    v1 = v1 + a1;                                               // 0x001c03f4: addu $v1, $v1, $a1
    at = ((unsigned)v0 < (unsigned)7) ? 1 : 0;                  // 0x001c03f8: sltiu $at, $v0, 7
    s0 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001c03fc: lw $s0, 0($v1)
    if (at == 0) goto label_0x1c06fc;                           // 0x001c0400: beqz $at, 0x1c06fc
    v1 = 0x24 << 16;                                            // 0x001c0408: lui $v1, 0x24
    v0 = v0 << 2;                                               // 0x001c040c: sll $v0, $v0, 2
    v1 = v1 + -0x1e70;                                          // 0x001c0410: addiu $v1, $v1, -0x1e70
    v0 = v0 + v1;                                               // 0x001c0414: addu $v0, $v0, $v1
    v0 = *(int32_t*)(v0);                                       // 0x001c0418: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001c041c: jr $v0
    /* nop */                                                   // 0x001c0420: nop 
    func_001bf210();  // 0x1bf010                                // 0x001c0424: jal 0x1bf010
    /* nop */                                                   // 0x001c0428: nop 
    v1 = 2;                                                     // 0x001c042c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c0474;                          // 0x001c0430: beq $v0, $v1, 0x1c0474
    v1 = 1;                                                     // 0x001c0434: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c0474;                          // 0x001c0438: beq $v0, $v1, 0x1c0474
    /* nop */                                                   // 0x001c043c: nop 
    v1 = 3;                                                     // 0x001c0440: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c0468;                          // 0x001c0444: beq $v0, $v1, 0x1c0468
    /* nop */                                                   // 0x001c0448: nop 
    if (v0 == 0) goto label_0x1c045c;                           // 0x001c044c: beqz $v0, 0x1c045c
    /* nop */                                                   // 0x001c0450: nop 
    goto label_0x1c0700;                                        // 0x001c0454: b 0x1c0700
label_0x1c045c:
    v0 = -0xff;                                                 // 0x001c045c: addiu $v0, $zero, -0xff
    goto label_0x1c06fc;                                        // 0x001c0460: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c0464: sw $v0, 0x24($s1)
label_0x1c0468:
    v0 = -0xfe;                                                 // 0x001c0468: addiu $v0, $zero, -0xfe
    goto label_0x1c06fc;                                        // 0x001c046c: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c0470: sw $v0, 0x24($s1)
label_0x1c0474:
    v0 = *(int32_t*)(s1);                                       // 0x001c0474: lw $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001c047c: addiu $v0, $v0, 1
    func_001c0e50();  // 0x1c0d00                                // 0x001c0480: jal 0x1c0d00
    *(uint32_t*)(s1) = v0;                                      // 0x001c0484: sw $v0, 0($s1)
    a1 = 0x24 << 16;                                            // 0x001c0488: lui $a1, 0x24
    a0 = s1 + 0x72;                                             // 0x001c048c: addiu $a0, $s1, 0x72
    a1 = a1 + -0x1e78;                                          // 0x001c0490: addiu $a1, $a1, -0x1e78
    func_0010a570();  // 0x10a4d8                                // 0x001c0494: jal 0x10a4d8
    a2 = s1 + 0x50;                                             // 0x001c0498: addiu $a2, $s1, 0x50
    v0 = *(int32_t*)((s0) + 0x7c);                              // 0x001c049c: lw $v0, 0x7c($s0)
    goto label_0x1c06fc;                                        // 0x001c04a0: b 0x1c06fc
    *(uint32_t*)((s1) + 0xc8) = v0;                             // 0x001c04a4: sw $v0, 0xc8($s1)
    func_001bf510();  // 0x1bf3c0                                // 0x001c04a8: jal 0x1bf3c0
    /* nop */                                                   // 0x001c04ac: nop 
    v1 = 1;                                                     // 0x001c04b0: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c04e0;                          // 0x001c04b4: beq $v0, $v1, 0x1c04e0
    /* nop */                                                   // 0x001c04b8: nop 
    if (v0 == 0) goto label_0x1c04cc;                           // 0x001c04bc: beqz $v0, 0x1c04cc
    /* nop */                                                   // 0x001c04c0: nop 
    goto label_0x1c06fc;                                        // 0x001c04c4: b 0x1c06fc
    /* nop */                                                   // 0x001c04c8: nop 
label_0x1c04cc:
    v0 = *(int32_t*)(s1);                                       // 0x001c04cc: lw $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001c04d0: addiu $v0, $v0, 1
    *(uint32_t*)(s1) = v0;                                      // 0x001c04d4: sw $v0, 0($s1)
    goto label_0x1c06fc;                                        // 0x001c04d8: b 0x1c06fc
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x001c04dc: sw $zero, 8($s1)
label_0x1c04e0:
    *(uint32_t*)(s1) = 0;                                       // 0x001c04e0: sw $zero, 0($s1)
    v0 = -0x100;                                                // 0x001c04e4: addiu $v0, $zero, -0x100
    goto label_0x1c06fc;                                        // 0x001c04e8: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c04ec: sw $v0, 0x24($s1)
label_0x1c04f0:
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001c04f0: lw $v0, 8($s1)
    v0 = v0 << 4;                                               // 0x001c04f4: sll $v0, $v0, 4
    v0 = v0 + s0;                                               // 0x001c04f8: addu $v0, $v0, $s0
    v0 = *(int32_t*)((v0) + 8);                                 // 0x001c04fc: lw $v0, 8($v0)
    if (v0 == 0) goto label_0x1c06c4;                           // 0x001c0500: beqz $v0, 0x1c06c4
    *(uint32_t*)((s1) + 0xb8) = v0;                             // 0x001c0504: sw $v0, 0xb8($s1)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001c0508: lw $v0, 8($s1)
    a1 = 0x24 << 16;                                            // 0x001c050c: lui $a1, 0x24
    a0 = s1 + 0x72;                                             // 0x001c0510: addiu $a0, $s1, 0x72
    a1 = &str_0023e180;  // "rom0:ROMVER"                       // 0x001c0514: addiu $a1, $a1, -0x1e80
    v0 = v0 << 4;                                               // 0x001c0518: sll $v0, $v0, 4
    v0 = v0 + s0;                                               // 0x001c051c: addu $v0, $v0, $s0
    a3 = *(int32_t*)((v0) + 0xc);                               // 0x001c0520: lw $a3, 0xc($v0)
    func_0010a570();  // 0x10a4d8                                // 0x001c0524: jal 0x10a4d8
    a2 = s1 + 0x50;                                             // 0x001c0528: addiu $a2, $s1, 0x50
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001c052c: lw $v0, 8($s1)
    v0 = v0 << 4;                                               // 0x001c0530: sll $v0, $v0, 4
    v0 = v0 + s0;                                               // 0x001c0534: addu $v0, $v0, $s0
    v0 = *(int32_t*)((v0) + 0x10);                              // 0x001c0538: lw $v0, 0x10($v0)
    *(uint32_t*)((s1) + 0xd0) = v0;                             // 0x001c053c: sw $v0, 0xd0($s1)
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001c0540: lw $v0, 8($s1)
    v0 = v0 << 4;                                               // 0x001c0544: sll $v0, $v0, 4
    v0 = v0 + s0;                                               // 0x001c0548: addu $v0, $v0, $s0
    v0 = *(int32_t*)((v0) + 0x14);                              // 0x001c054c: lw $v0, 0x14($v0)
    *(uint32_t*)((s1) + 0xbc) = v0;                             // 0x001c0550: sw $v0, 0xbc($s1)
    v0 = *(int32_t*)(s1);                                       // 0x001c0554: lw $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001c0558: addiu $v0, $v0, 1
    *(uint32_t*)(s1) = v0;                                      // 0x001c055c: sw $v0, 0($s1)
    func_001bf300();  // 0x1bf210                                // 0x001c0560: jal 0x1bf210
    v1 = 3;                                                     // 0x001c0568: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c0608;                          // 0x001c056c: beq $v0, $v1, 0x1c0608
    v1 = 2;                                                     // 0x001c0570: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c05f8;                          // 0x001c0574: beq $v0, $v1, 0x1c05f8
    a0 = 1;                                                     // 0x001c0578: addiu $a0, $zero, 1
    if (v0 == a0) goto label_0x1c05e8;                          // 0x001c057c: beq $v0, $a0, 0x1c05e8
    /* nop */                                                   // 0x001c0580: nop 
    if (v0 == 0) goto label_0x1c0594;                           // 0x001c0584: beqz $v0, 0x1c0594
    /* nop */                                                   // 0x001c0588: nop 
    goto label_0x1c06fc;                                        // 0x001c058c: b 0x1c06fc
    /* nop */                                                   // 0x001c0590: nop 
label_0x1c0594:
    v1 = *(int32_t*)((s1) + 8);                                 // 0x001c0594: lw $v1, 8($s1)
    v0 = *(int32_t*)((s1) + 0xe4);                              // 0x001c0598: lw $v0, 0xe4($s1)
    v1 = a0 << v1;                                              // 0x001c059c: sllv $v1, $a0, $v1
    v0 = v0 & v1;                                               // 0x001c05a0: and $v0, $v0, $v1
    if (v0 != 0) goto label_0x1c06c4;                           // 0x001c05a4: bnez $v0, 0x1c06c4
    at = 0x31 << 16;                                            // 0x001c05a8: lui $at, 0x31
    v0 = *(int32_t*)((s1) + 0xbc);                              // 0x001c05ac: lw $v0, 0xbc($s1)
    v1 = g_00315e30;  // Global at 0x00315e30                   // 0x001c05b0: lw $v1, 0x5e30($at)
    if (v1 == v0) goto label_0x1c05cc;                          // 0x001c05b4: beq $v1, $v0, 0x1c05cc
    /* nop */                                                   // 0x001c05b8: nop 
    v0 = *(int32_t*)(s1);                                       // 0x001c05bc: lw $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001c05c0: addiu $v0, $v0, 1
    goto label_0x1c06fc;                                        // 0x001c05c4: b 0x1c06fc
    *(uint32_t*)(s1) = v0;                                      // 0x001c05c8: sw $v0, 0($s1)
label_0x1c05cc:
    v0 = *(int32_t*)((s1) + 0xb8);                              // 0x001c05cc: lw $v0, 0xb8($s1)
    if (v0 == a0) goto label_0x1c06c4;                          // 0x001c05d0: beq $v0, $a0, 0x1c06c4
    /* nop */                                                   // 0x001c05d4: nop 
    v0 = *(int32_t*)(s1);                                       // 0x001c05d8: lw $v0, 0($s1)
    v0 = v0 + 3;                                                // 0x001c05dc: addiu $v0, $v0, 3
    goto label_0x1c06fc;                                        // 0x001c05e0: b 0x1c06fc
    *(uint32_t*)(s1) = v0;                                      // 0x001c05e4: sw $v0, 0($s1)
label_0x1c05e8:
    v0 = *(int32_t*)(s1);                                       // 0x001c05e8: lw $v0, 0($s1)
    v0 = v0 + 2;                                                // 0x001c05ec: addiu $v0, $v0, 2
    goto label_0x1c06fc;                                        // 0x001c05f0: b 0x1c06fc
    *(uint32_t*)(s1) = v0;                                      // 0x001c05f4: sw $v0, 0($s1)
label_0x1c05f8:
    *(uint32_t*)(s1) = 0;                                       // 0x001c05f8: sw $zero, 0($s1)
    v0 = -0xff;                                                 // 0x001c05fc: addiu $v0, $zero, -0xff
    goto label_0x1c06fc;                                        // 0x001c0600: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c0604: sw $v0, 0x24($s1)
label_0x1c0608:
    *(uint32_t*)(s1) = 0;                                       // 0x001c0608: sw $zero, 0($s1)
    v0 = -0x100;                                                // 0x001c060c: addiu $v0, $zero, -0x100
    goto label_0x1c06fc;                                        // 0x001c0610: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c0614: sw $v0, 0x24($s1)
    func_001bf730();  // 0x1bf680                                // 0x001c0618: jal 0x1bf680
    /* nop */                                                   // 0x001c061c: nop 
    v1 = 1;                                                     // 0x001c0620: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c064c;                          // 0x001c0624: beq $v0, $v1, 0x1c064c
    /* nop */                                                   // 0x001c0628: nop 
    if (v0 == 0) goto label_0x1c063c;                           // 0x001c062c: beqz $v0, 0x1c063c
    /* nop */                                                   // 0x001c0630: nop 
    goto label_0x1c06fc;                                        // 0x001c0634: b 0x1c06fc
    /* nop */                                                   // 0x001c0638: nop 
label_0x1c063c:
    v0 = *(int32_t*)(s1);                                       // 0x001c063c: lw $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001c0640: addiu $v0, $v0, 1
    goto label_0x1c06fc;                                        // 0x001c0644: b 0x1c06fc
    *(uint32_t*)(s1) = v0;                                      // 0x001c0648: sw $v0, 0($s1)
label_0x1c064c:
    *(uint32_t*)(s1) = 0;                                       // 0x001c064c: sw $zero, 0($s1)
    v0 = -0x100;                                                // 0x001c0650: addiu $v0, $zero, -0x100
    goto label_0x1c06fc;                                        // 0x001c0654: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c0658: sw $v0, 0x24($s1)
    func_001bf5c0();  // 0x1bf510                                // 0x001c065c: jal 0x1bf510
    /* nop */                                                   // 0x001c0660: nop 
    v1 = 1;                                                     // 0x001c0664: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c0690;                          // 0x001c0668: beq $v0, $v1, 0x1c0690
    /* nop */                                                   // 0x001c066c: nop 
    if (v0 == 0) goto label_0x1c0680;                           // 0x001c0670: beqz $v0, 0x1c0680
    /* nop */                                                   // 0x001c0674: nop 
    goto label_0x1c06fc;                                        // 0x001c0678: b 0x1c06fc
    /* nop */                                                   // 0x001c067c: nop 
label_0x1c0680:
    v0 = *(int32_t*)(s1);                                       // 0x001c0680: lw $v0, 0($s1)
    v0 = v0 + 1;                                                // 0x001c0684: addiu $v0, $v0, 1
    goto label_0x1c06fc;                                        // 0x001c0688: b 0x1c06fc
    *(uint32_t*)(s1) = v0;                                      // 0x001c068c: sw $v0, 0($s1)
label_0x1c0690:
    *(uint32_t*)(s1) = 0;                                       // 0x001c0690: sw $zero, 0($s1)
    v0 = -0x100;                                                // 0x001c0694: addiu $v0, $zero, -0x100
    goto label_0x1c06fc;                                        // 0x001c0698: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c069c: sw $v0, 0x24($s1)
    func_001bf680();  // 0x1bf5c0                                // 0x001c06a0: jal 0x1bf5c0
    /* nop */                                                   // 0x001c06a4: nop 
    v1 = 1;                                                     // 0x001c06a8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c06f0;                          // 0x001c06ac: beq $v0, $v1, 0x1c06f0
    /* nop */                                                   // 0x001c06b0: nop 
    if (v0 == 0) goto label_0x1c06c4;                           // 0x001c06b4: beqz $v0, 0x1c06c4
    /* nop */                                                   // 0x001c06b8: nop 
    goto label_0x1c06fc;                                        // 0x001c06bc: b 0x1c06fc
    /* nop */                                                   // 0x001c06c0: nop 
label_0x1c06c4:
    v0 = *(int32_t*)((s1) + 8);                                 // 0x001c06c4: lw $v0, 8($s1)
    v0 = v0 + 1;                                                // 0x001c06c8: addiu $v0, $v0, 1
    at = (v0 < 7) ? 1 : 0;                                      // 0x001c06cc: slti $at, $v0, 7
    if (at == 0) goto label_0x1c06e4;                           // 0x001c06d0: beqz $at, 0x1c06e4
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001c06d4: sw $v0, 8($s1)
    v0 = 2;                                                     // 0x001c06d8: addiu $v0, $zero, 2
    goto label_0x1c04f0;                                        // 0x001c06dc: b 0x1c04f0
    *(uint32_t*)(s1) = v0;                                      // 0x001c06e0: sw $v0, 0($s1)
label_0x1c06e4:
    *(uint32_t*)(s1) = 0;                                       // 0x001c06e4: sw $zero, 0($s1)
    goto label_0x1c06fc;                                        // 0x001c06e8: b 0x1c06fc
    *(uint32_t*)((s1) + 0x24) = 0;                              // 0x001c06ec: sw $zero, 0x24($s1)
label_0x1c06f0:
    *(uint32_t*)(s1) = 0;                                       // 0x001c06f0: sw $zero, 0($s1)
    v0 = -0x100;                                                // 0x001c06f4: addiu $v0, $zero, -0x100
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x001c06f8: sw $v0, 0x24($s1)
label_0x1c06fc:
label_0x1c0700:
    func_001bfc20();  // 0x1bfbf0                                // 0x001c0700: jal 0x1bfbf0
    /* nop */                                                   // 0x001c0704: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c070c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0710: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0714: jr $ra
    sp = sp + 0x30;                                             // 0x001c0718: addiu $sp, $sp, 0x30
}