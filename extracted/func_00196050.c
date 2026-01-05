/** @category graphics/state @status complete @author caprado */
void func_00196050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_38, local_3c;
    
    sp = sp + -0x40;                                            // 0x00196050: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00196058: addu.qb $zero, $sp, $s1
    s0 = a0 & 0xff;                                             // 0x00196060: andi $s0, $a0, 0xff
    v0 = (s0 < 0x1a) ? 1 : 0;                                   // 0x00196064: slti $v0, $s0, 0x1a
    if (v0 != 0) goto label_0x1960cc;                           // 0x00196068: bnez $v0, 0x1960cc
    local_38 = a1;                                              // 0x0019606c: sw $a1, 0x38($sp)
    at = (s0 < 0x3a) ? 1 : 0;                                   // 0x00196070: slti $at, $s0, 0x3a
    if (at == 0) goto label_0x1960d0;                           // 0x00196074: beqz $at, 0x1960d0
    v0 = (s0 < 0x3a) ? 1 : 0;                                   // 0x00196078: slti $v0, $s0, 0x3a
    a2 = local_38;                                              // 0x0019607c: lw $a2, 0x38($sp)
    if (a2 == 0) goto label_0x1960c4;                           // 0x00196080: beqz $a2, 0x1960c4
    v0 = 1;                                                     // 0x00196084: addiu $v0, $zero, 1
    v0 = s0 + -0x1a;                                            // 0x00196088: addiu $v0, $s0, -0x1a
    at = 0x7000 << 16;                                          // 0x0019608c: lui $at, 0x7000
    v0 = v0 << 6;                                               // 0x00196090: sll $v0, $v0, 6
    at = at | 0x3700;                                           // 0x00196094: ori $at, $at, 0x3700
    a0 = 8;                                                     // 0x00196098: addiu $a0, $zero, 8
    a1 = v0 + at;                                               // 0x0019609c: addu $a1, $v0, $at
label_0x1960a0:
    v1 = g_002853e8;  // Global at 0x002853e8                   // 0x001960a0: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x001960a4: addiu $a0, $a0, -1
    v0 = g_002853ec;  // Global at 0x002853ec                   // 0x001960a8: lw $v0, 4($a2)
    *(uint32_t*)(a1) = v1;                                      // 0x001960ac: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x001960b0: addiu $a2, $a2, 8
    *(uint32_t*)((a1) + 4) = v0;                                // 0x001960b4: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x1960a0;                            // 0x001960b8: bgtz $a0, 0x1960a0
    a1 = a1 + 8;                                                // 0x001960bc: addiu $a1, $a1, 8
    v0 = 1;                                                     // 0x001960c0: addiu $v0, $zero, 1
label_0x1960c4:
    goto label_0x196db4;                                        // 0x001960c4: b 0x196db4
label_0x1960cc:
    v0 = (s0 < 0x3a) ? 1 : 0;                                   // 0x001960cc: slti $v0, $s0, 0x3a
label_0x1960d0:
    if (v0 != 0) goto label_0x196130;                           // 0x001960d0: bnez $v0, 0x196130
    v0 = (s0 < 0x5a) ? 1 : 0;                                   // 0x001960d4: slti $v0, $s0, 0x5a
    at = (s0 < 0x5a) ? 1 : 0;                                   // 0x001960d8: slti $at, $s0, 0x5a
    if (at == 0) goto label_0x196130;                           // 0x001960dc: beqz $at, 0x196130
    a2 = s0 + -0x3a;                                            // 0x001960e0: addiu $a2, $s0, -0x3a
    v0 = 0x28 << 16;                                            // 0x001960e4: lui $v0, 0x28
    v1 = a2 << 3;                                               // 0x001960e8: sll $v1, $a2, 3
    a0 = local_38;                                              // 0x001960ec: lw $a0, 0x38($sp)
    a1 = v1 + a2;                                               // 0x001960f0: addu $a1, $v1, $a2
    v0 = v0 + 0x4960;                                           // 0x001960f4: addiu $v0, $v0, 0x4960
    a1 = a1 << 1;                                               // 0x001960f8: sll $a1, $a1, 1
    v1 = 0x13;                                                  // 0x001960fc: addiu $v1, $zero, 0x13
    a1 = a1 + a2;                                               // 0x00196100: addu $a1, $a1, $a2
    a1 = a1 << 2;                                               // 0x00196104: sll $a1, $a1, 2
    a1 = v0 + a1;                                               // 0x00196108: addu $a1, $v0, $a1
label_0x19610c:
    v0 = g_0028539e;  // Global at 0x0028539e                   // 0x0019610c: lw $v0, 0($a0)
    v1 = v1 + -1;                                               // 0x00196110: addiu $v1, $v1, -1
    *(uint32_t*)(a1) = v0;                                      // 0x00196114: sw $v0, 0($a1)
    a0 = a0 + 4;                                                // 0x00196118: addiu $a0, $a0, 4
    a1 = a1 + 4;                                                // 0x0019611c: addiu $a1, $a1, 4
    if (v1 > 0) goto label_0x19610c;                            // 0x00196120: bgtz $v1, 0x19610c
    /* nop */                                                   // 0x00196124: nop 
    goto label_0x196db0;                                        // 0x00196128: b 0x196db0
    v0 = 1;                                                     // 0x0019612c: addiu $v0, $zero, 1
label_0x196130:
    if (v0 != 0) goto label_0x1961f8;                           // 0x00196130: bnez $v0, 0x1961f8
    at = (s0 < 0x5d) ? 1 : 0;                                   // 0x00196134: slti $at, $s0, 0x5d
    if (at == 0) goto label_0x1961fc;                           // 0x00196138: beqz $at, 0x1961fc
    v0 = 0x6d;                                                  // 0x0019613c: addiu $v0, $zero, 0x6d
    s1 = s0 + -0x5a;                                            // 0x00196140: addiu $s1, $s0, -0x5a
    v0 = 0x28 << 16;                                            // 0x00196144: lui $v0, 0x28
    v1 = s1 << 1;                                               // 0x00196148: sll $v1, $s1, 1
    a2 = local_38;                                              // 0x0019614c: lw $a2, 0x38($sp)
    v1 = v1 + s1;                                               // 0x00196150: addu $v1, $v1, $s1
    v0 = v0 + 0x4820;                                           // 0x00196154: addiu $v0, $v0, 0x4820
    v1 = v1 << 2;                                               // 0x00196158: sll $v1, $v1, 2
    a0 = 0xd;                                                   // 0x0019615c: addiu $a0, $zero, 0xd
    v1 = v1 + s1;                                               // 0x00196160: addu $v1, $v1, $s1
    s0 = v1 << 3;                                               // 0x00196164: sll $s0, $v1, 3
    a3 = v0 + s0;                                               // 0x00196168: addu $a3, $v0, $s0
label_0x196170:
    v1 = g_002853f0;  // Global at 0x002853f0                   // 0x00196170: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x00196174: addiu $a0, $a0, -1
    v0 = g_002853f4;  // Global at 0x002853f4                   // 0x00196178: lw $v0, 4($a2)
    *(uint32_t*)(a1) = v1;                                      // 0x0019617c: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x00196180: addiu $a2, $a2, 8
    *(uint32_t*)((a1) + 4) = v0;                                // 0x00196184: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x196170;                            // 0x00196188: bgtz $a0, 0x196170
    a1 = a1 + 8;                                                // 0x0019618c: addiu $a1, $a1, 8
    func_00191b30();  // 191b30                                // 0x00196190: jal 0x191b30
    a0 = a3 + 0x34;                                             // 0x00196194: addiu $a0, $a3, 0x34
    v0 = 0x28 << 16;                                            // 0x00196198: lui $v0, 0x28
    a0 = s1 << 2;                                               // 0x0019619c: sll $a0, $s1, 2
    v0 = v0 + 0x4830;                                           // 0x001961a0: addiu $v0, $v0, 0x4830
    v1 = v0 + s0;                                               // 0x001961a4: addu $v1, $v0, $s0
    v0 = 0x28 << 16;                                            // 0x001961a8: lui $v0, 0x28
    g_0022a43f = 0;  // Global at 0x0022a43f                    // 0x001961ac: sw $zero, 0($v1)
    v0 = v0 + 0x4840;                                           // 0x001961b0: addiu $v0, $v0, 0x4840
    v0 = v0 + s0;                                               // 0x001961b4: addu $v0, $v0, $s0
    g_00284840 = 0;  // Global at 0x00284840                    // 0x001961b8: sw $zero, 0($v0)
    v0 = 0x28 << 16;                                            // 0x001961bc: lui $v0, 0x28
    v0 = v0 + 0x4870;                                           // 0x001961c0: addiu $v0, $v0, 0x4870
    v1 = v0 + s0;                                               // 0x001961c4: addu $v1, $v0, $s0
    FPU_F0 = *(float*)(v1);  // Load float                      // 0x001961c8: lwc1 $f0, 0($v1)
    v0 = 0x3f80 << 16;                                          // 0x001961cc: lui $v0, 0x3f80
    /* move to FPU: $v0, $f1 */                                 // 0x001961d0: mtc1 $v0, $f1
    v0 = 1;                                                     // 0x001961d4: addiu $v0, $zero, 1
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001961d8: div.s $f0, $f1, $f0
    v1 = 0x28 << 16;                                            // 0x001961dc: lui $v1, 0x28
    v1 = v1 + 0x4808;                                           // 0x001961e0: addiu $v1, $v1, 0x4808
    v1 = v1 + a0;                                               // 0x001961e4: addu $v1, $v1, $a0
    /* nop */                                                   // 0x001961e8: nop 
    /* nop */                                                   // 0x001961ec: nop 
    goto label_0x196db0;                                        // 0x001961f0: b 0x196db0
    *(float*)(v1) = FPU_F0;  // Store float                     // 0x001961f4: swc1 $f0, 0($v1)
label_0x1961f8:
    v0 = 0x6d;                                                  // 0x001961f8: addiu $v0, $zero, 0x6d
label_0x1961fc:
    if (s0 == v0) goto label_0x196d28;                          // 0x001961fc: beq $s0, $v0, 0x196d28
    v0 = 0x6c;                                                  // 0x00196200: addiu $v0, $zero, 0x6c
    if (s0 == v0) goto label_0x196ccc;                          // 0x00196204: beq $s0, $v0, 0x196ccc
    /* nop */                                                   // 0x00196208: nop 
    v0 = 0x6b;                                                  // 0x0019620c: addiu $v0, $zero, 0x6b
    if (s0 == v0) goto label_0x196c98;                          // 0x00196210: beq $s0, $v0, 0x196c98
    v0 = 0x6a;                                                  // 0x00196214: addiu $v0, $zero, 0x6a
    if (s0 == v0) goto label_0x196c8c;                          // 0x00196218: beq $s0, $v0, 0x196c8c
    /* nop */                                                   // 0x0019621c: nop 
    v0 = 0x69;                                                  // 0x00196220: addiu $v0, $zero, 0x69
    if (s0 == v0) goto label_0x196c80;                          // 0x00196224: beq $s0, $v0, 0x196c80
    v0 = 0x68;                                                  // 0x00196228: addiu $v0, $zero, 0x68
    if (s0 == v0) goto label_0x196dac;                          // 0x0019622c: beq $s0, $v0, 0x196dac
    /* nop */                                                   // 0x00196230: nop 
    v0 = 0x67;                                                  // 0x00196234: addiu $v0, $zero, 0x67
    if (s0 == v0) goto label_0x196b40;                          // 0x00196238: beq $s0, $v0, 0x196b40
    v0 = 0x66;                                                  // 0x0019623c: addiu $v0, $zero, 0x66
    if (s0 == v0) goto label_0x196b0c;                          // 0x00196240: beq $s0, $v0, 0x196b0c
    /* nop */                                                   // 0x00196244: nop 
    v0 = 0x65;                                                  // 0x00196248: addiu $v0, $zero, 0x65
    if (s0 == v0) goto label_0x196db0;                          // 0x0019624c: beq $s0, $v0, 0x196db0
    v0 = 1;                                                     // 0x00196250: addiu $v0, $zero, 1
    v0 = 0x64;                                                  // 0x00196254: addiu $v0, $zero, 0x64
    if (s0 == v0) goto label_0x196ad4;                          // 0x00196258: beq $s0, $v0, 0x196ad4
    v0 = 0x63;                                                  // 0x0019625c: addiu $v0, $zero, 0x63
    if (s0 == v0) goto label_0x196a94;                          // 0x00196260: beq $s0, $v0, 0x196a94
    /* nop */                                                   // 0x00196264: nop 
    v0 = 0x62;                                                  // 0x00196268: addiu $v0, $zero, 0x62
    if (s0 == v0) goto label_0x196a6c;                          // 0x0019626c: beq $s0, $v0, 0x196a6c
    v0 = 0x60;                                                  // 0x00196270: addiu $v0, $zero, 0x60
    if (s0 == v0) goto label_0x196a44;                          // 0x00196274: beq $s0, $v0, 0x196a44
    /* nop */                                                   // 0x00196278: nop 
    v0 = 0x5f;                                                  // 0x0019627c: addiu $v0, $zero, 0x5f
    if (s0 == v0) goto label_0x196980;                          // 0x00196280: beq $s0, $v0, 0x196980
    v0 = 0x5d;                                                  // 0x00196284: addiu $v0, $zero, 0x5d
    if (s0 == v0) goto label_0x19695c;                          // 0x00196288: beq $s0, $v0, 0x19695c
    /* nop */                                                   // 0x0019628c: nop 
    v0 = 0x19;                                                  // 0x00196290: addiu $v0, $zero, 0x19
    if (s0 == v0) goto label_0x196924;                          // 0x00196294: beq $s0, $v0, 0x196924
    v1 = 0x18;                                                  // 0x00196298: addiu $v1, $zero, 0x18
    if (s0 == v1) goto label_0x1968f8;                          // 0x0019629c: beq $s0, $v1, 0x1968f8
    v0 = 0x17;                                                  // 0x001962a0: addiu $v0, $zero, 0x17
    if (s0 == v0) goto label_0x19688c;                          // 0x001962a4: beq $s0, $v0, 0x19688c
    /* nop */                                                   // 0x001962a8: nop 
    v0 = 0x16;                                                  // 0x001962ac: addiu $v0, $zero, 0x16
    if (s0 == v0) goto label_0x196854;                          // 0x001962b0: beq $s0, $v0, 0x196854
    v0 = 0x15;                                                  // 0x001962b4: addiu $v0, $zero, 0x15
    if (s0 == v0) goto label_0x196820;                          // 0x001962b8: beq $s0, $v0, 0x196820
    /* nop */                                                   // 0x001962bc: nop 
    v0 = 0x14;                                                  // 0x001962c0: addiu $v0, $zero, 0x14
    if (s0 == v0) goto label_0x196810;                          // 0x001962c4: beq $s0, $v0, 0x196810
    a0 = 0x13;                                                  // 0x001962c8: addiu $a0, $zero, 0x13
    if (s0 == a0) goto label_0x196dac;                          // 0x001962cc: beq $s0, $a0, 0x196dac
    /* nop */                                                   // 0x001962d0: nop 
    a0 = 0x12;                                                  // 0x001962d4: addiu $a0, $zero, 0x12
    if (s0 == a0) goto label_0x1967e0;                          // 0x001962d8: beq $s0, $a0, 0x1967e0
    a0 = 0x11;                                                  // 0x001962dc: addiu $a0, $zero, 0x11
    if (s0 == a0) goto label_0x1967d4;                          // 0x001962e0: beq $s0, $a0, 0x1967d4
    t1 = 0x10;                                                  // 0x001962e4: addiu $t1, $zero, 0x10
    if (s0 == t1) goto label_0x1967c8;                          // 0x001962e8: beq $s0, $t1, 0x1967c8
    a0 = 0xf;                                                   // 0x001962ec: addiu $a0, $zero, 0xf
    if (s0 == a0) goto label_0x1967a8;                          // 0x001962f0: beq $s0, $a0, 0x1967a8
    /* nop */                                                   // 0x001962f4: nop 
    a0 = 0xe;                                                   // 0x001962f8: addiu $a0, $zero, 0xe
    if (s0 == a0) goto label_0x196640;                          // 0x001962fc: beq $s0, $a0, 0x196640
    a0 = 0x61;                                                  // 0x00196300: addiu $a0, $zero, 0x61
    if (s0 == a0) goto label_0x1965fc;                          // 0x00196304: beq $s0, $a0, 0x1965fc
    /* nop */                                                   // 0x00196308: nop 
    a0 = 0x5e;                                                  // 0x0019630c: addiu $a0, $zero, 0x5e
    if (s0 == a0) goto label_0x1965c0;                          // 0x00196310: beq $s0, $a0, 0x1965c0
    a0 = 0xd;                                                   // 0x00196314: addiu $a0, $zero, 0xd
    if (s0 == a0) goto label_0x196584;                          // 0x00196318: beq $s0, $a0, 0x196584
    t0 = 0xc;                                                   // 0x0019631c: addiu $t0, $zero, 0xc
    if (s0 == t0) goto label_0x196558;                          // 0x00196320: beq $s0, $t0, 0x196558
    a0 = 0xb;                                                   // 0x00196324: addiu $a0, $zero, 0xb
    if (s0 == a0) goto label_0x196dac;                          // 0x00196328: beq $s0, $a0, 0x196dac
    /* nop */                                                   // 0x0019632c: nop 
    a0 = 0xa;                                                   // 0x00196330: addiu $a0, $zero, 0xa
    if (s0 == a0) goto label_0x196dac;                          // 0x00196334: beq $s0, $a0, 0x196dac
    a0 = 9;                                                     // 0x00196338: addiu $a0, $zero, 9
    if (s0 == a0) goto label_0x196dac;                          // 0x0019633c: beq $s0, $a0, 0x196dac
    a3 = 8;                                                     // 0x00196340: addiu $a3, $zero, 8
    if (s0 == a3) goto label_0x196dac;                          // 0x00196344: beq $s0, $a3, 0x196dac
    a0 = 7;                                                     // 0x00196348: addiu $a0, $zero, 7
    if (s0 == a0) goto label_0x196510;                          // 0x0019634c: beq $s0, $a0, 0x196510
    /* nop */                                                   // 0x00196350: nop 
    a0 = 6;                                                     // 0x00196354: addiu $a0, $zero, 6
    if (s0 == a0) goto label_0x196510;                          // 0x00196358: beq $s0, $a0, 0x196510
    a0 = 5;                                                     // 0x0019635c: addiu $a0, $zero, 5
    if (s0 == a0) goto label_0x196510;                          // 0x00196360: beq $s0, $a0, 0x196510
    a2 = 4;                                                     // 0x00196364: addiu $a2, $zero, 4
    if (s0 == a2) goto label_0x196510;                          // 0x00196368: beq $s0, $a2, 0x196510
    a0 = 2;                                                     // 0x0019636c: addiu $a0, $zero, 2
    if (s0 == a0) goto label_0x1964b0;                          // 0x00196370: beq $s0, $a0, 0x1964b0
    /* nop */                                                   // 0x00196374: nop 
    v0 = 1;                                                     // 0x00196378: addiu $v0, $zero, 1
    if (s0 == v0) goto label_0x1963c0;                          // 0x0019637c: beq $s0, $v0, 0x1963c0
    v0 = 3;                                                     // 0x00196380: addiu $v0, $zero, 3
    if (s0 == v0) goto label_0x196dac;                          // 0x00196384: beq $s0, $v0, 0x196dac
    /* nop */                                                   // 0x00196388: nop 
    if (s0 == 0) goto label_0x19639c;                           // 0x0019638c: beqz $s0, 0x19639c
    /* nop */                                                   // 0x00196390: nop 
    goto label_0x196dac;                                        // 0x00196394: b 0x196dac
    /* nop */                                                   // 0x00196398: nop 
label_0x19639c:
    a0 = *(int32_t*)((gp) + -0x6458);                           // 0x0019639c: lw $a0, -0x6458($gp)
    v1 = -0x61;                                                 // 0x001963a0: addiu $v1, $zero, -0x61
    v0 = local_38;                                              // 0x001963a4: lw $v0, 0x38($sp)
    v1 = a0 & v1;                                               // 0x001963a8: and $v1, $a0, $v1
    *(uint32_t*)((gp) + -0x6458) = v1;                          // 0x001963ac: sw $v1, -0x6458($gp)
    v1 = *(int32_t*)((gp) + -0x6458);                           // 0x001963b0: lw $v1, -0x6458($gp)
    v0 = v1 | v0;                                               // 0x001963b4: or $v0, $v1, $v0
    goto label_0x196dac;                                        // 0x001963b8: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x001963bc: sw $v0, -0x6458($gp)
label_0x1963c0:
    a0 = *(int32_t*)((gp) + -0x6458);                           // 0x001963c0: lw $a0, -0x6458($gp)
    v0 = -0xf01;                                                // 0x001963c4: addiu $v0, $zero, -0xf01
    v1 = local_38;                                              // 0x001963c8: lw $v1, 0x38($sp)
    v0 = a0 & v0;                                               // 0x001963cc: and $v0, $a0, $v0
    if (v1 == 0) goto label_0x196dac;                           // 0x001963d0: beqz $v1, 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x001963d4: sw $v0, -0x6458($gp)
    v0 = 0x800;                                                 // 0x001963d8: addiu $v0, $zero, 0x800
    if (v1 == v0) goto label_0x1964a0;                          // 0x001963dc: beq $v1, $v0, 0x1964a0
    v0 = 0x700;                                                 // 0x001963e0: addiu $v0, $zero, 0x700
    if (v1 == v0) goto label_0x196490;                          // 0x001963e4: beq $v1, $v0, 0x196490
    /* nop */                                                   // 0x001963e8: nop 
    v0 = 0x600;                                                 // 0x001963ec: addiu $v0, $zero, 0x600
    if (v1 == v0) goto label_0x196480;                          // 0x001963f0: beq $v1, $v0, 0x196480
    v0 = 0x500;                                                 // 0x001963f4: addiu $v0, $zero, 0x500
    if (v1 == v0) goto label_0x196470;                          // 0x001963f8: beq $v1, $v0, 0x196470
    /* nop */                                                   // 0x001963fc: nop 
    v0 = 0x400;                                                 // 0x00196400: addiu $v0, $zero, 0x400
    if (v1 == v0) goto label_0x196460;                          // 0x00196404: beq $v1, $v0, 0x196460
    v0 = 0x300;                                                 // 0x00196408: addiu $v0, $zero, 0x300
    if (v1 == v0) goto label_0x196450;                          // 0x0019640c: beq $v1, $v0, 0x196450
    /* nop */                                                   // 0x00196410: nop 
    v0 = 0x100;                                                 // 0x00196414: addiu $v0, $zero, 0x100
    if (v1 == v0) goto label_0x196440;                          // 0x00196418: beq $v1, $v0, 0x196440
    v0 = 0x200;                                                 // 0x0019641c: addiu $v0, $zero, 0x200
    if (v1 == v0) goto label_0x196430;                          // 0x00196420: beq $v1, $v0, 0x196430
    /* nop */                                                   // 0x00196424: nop 
    goto label_0x196dac;                                        // 0x00196428: b 0x196dac
    /* nop */                                                   // 0x0019642c: nop 
label_0x196430:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196430: lw $v0, -0x6458($gp)
    v0 = v0 | 0x200;                                            // 0x00196434: ori $v0, $v0, 0x200
    goto label_0x196dac;                                        // 0x00196438: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019643c: sw $v0, -0x6458($gp)
label_0x196440:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196440: lw $v0, -0x6458($gp)
    v0 = v0 | 0x100;                                            // 0x00196444: ori $v0, $v0, 0x100
    goto label_0x196dac;                                        // 0x00196448: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019644c: sw $v0, -0x6458($gp)
label_0x196450:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196450: lw $v0, -0x6458($gp)
    v0 = v0 | 0x300;                                            // 0x00196454: ori $v0, $v0, 0x300
    goto label_0x196dac;                                        // 0x00196458: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019645c: sw $v0, -0x6458($gp)
label_0x196460:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196460: lw $v0, -0x6458($gp)
    v0 = v0 | 0x400;                                            // 0x00196464: ori $v0, $v0, 0x400
    goto label_0x196dac;                                        // 0x00196468: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019646c: sw $v0, -0x6458($gp)
label_0x196470:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196470: lw $v0, -0x6458($gp)
    v0 = v0 | 0x500;                                            // 0x00196474: ori $v0, $v0, 0x500
    goto label_0x196dac;                                        // 0x00196478: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019647c: sw $v0, -0x6458($gp)
label_0x196480:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196480: lw $v0, -0x6458($gp)
    v0 = v0 | 0x600;                                            // 0x00196484: ori $v0, $v0, 0x600
    goto label_0x196dac;                                        // 0x00196488: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019648c: sw $v0, -0x6458($gp)
label_0x196490:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196490: lw $v0, -0x6458($gp)
    v0 = v0 | 0x700;                                            // 0x00196494: ori $v0, $v0, 0x700
    goto label_0x196dac;                                        // 0x00196498: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019649c: sw $v0, -0x6458($gp)
label_0x1964a0:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x001964a0: lw $v0, -0x6458($gp)
    v0 = v0 | 0x800;                                            // 0x001964a4: ori $v0, $v0, 0x800
    goto label_0x196dac;                                        // 0x001964a8: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x001964ac: sw $v0, -0x6458($gp)
label_0x1964b0:
    a1 = *(int32_t*)((gp) + -0x6458);                           // 0x001964b0: lw $a1, -0x6458($gp)
    a0 = -0x1d;                                                 // 0x001964b4: addiu $a0, $zero, -0x1d
    t2 = local_38;                                              // 0x001964b8: lw $t2, 0x38($sp)
    a0 = a1 & a0;                                               // 0x001964bc: and $a0, $a1, $a0
    if (t2 == 0) goto label_0x196dac;                           // 0x001964c0: beqz $t2, 0x196dac
    *(uint32_t*)((gp) + -0x6458) = a0;                          // 0x001964c4: sw $a0, -0x6458($gp)
    if (t2 == v1) goto label_0x196500;                          // 0x001964c8: beq $t2, $v1, 0x196500
    /* nop */                                                   // 0x001964cc: nop 
    if (t2 == v0) goto label_0x196500;                          // 0x001964d0: beq $t2, $v0, 0x196500
    /* nop */                                                   // 0x001964d4: nop 
    if (t2 == t1) goto label_0x196500;                          // 0x001964d8: beq $t2, $t1, 0x196500
    /* nop */                                                   // 0x001964dc: nop 
    if (t2 == t0) goto label_0x196500;                          // 0x001964e0: beq $t2, $t0, 0x196500
    /* nop */                                                   // 0x001964e4: nop 
    if (t2 == a3) goto label_0x196500;                          // 0x001964e8: beq $t2, $a3, 0x196500
    /* nop */                                                   // 0x001964ec: nop 
    if (t2 == a2) goto label_0x196500;                          // 0x001964f0: beq $t2, $a2, 0x196500
    /* nop */                                                   // 0x001964f4: nop 
    goto label_0x196dac;                                        // 0x001964f8: b 0x196dac
    /* nop */                                                   // 0x001964fc: nop 
label_0x196500:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196500: lw $v0, -0x6458($gp)
    v0 = v0 | t2;                                               // 0x00196504: or $v0, $v0, $t2
    goto label_0x196dac;                                        // 0x00196508: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019650c: sw $v0, -0x6458($gp)
label_0x196510:
    v1 = local_38;                                              // 0x00196510: lw $v1, 0x38($sp)
    v0 = 4;                                                     // 0x00196514: addiu $v0, $zero, 4
    if (s0 != v0) goto label_0x19653c;                          // 0x00196518: bne $s0, $v0, 0x19653c
    local_3c = v1;                                              // 0x0019651c: sw $v1, 0x3c($sp)
    a0 = 1;                                                     // 0x00196520: addiu $a0, $zero, 1
    func_0019d440();  // 19d440                                // 0x00196524: jal 0x19d440
    a1 = sp + 0x3c;                                             // 0x00196528: addiu $a1, $sp, 0x3c
    func_001982c0();  // 1982c0                                // 0x0019652c: jal 0x1982c0
    a0 = local_3c;                                              // 0x00196530: lw $a0, 0x3c($sp)
    v0 = local_3c;                                              // 0x00196534: lw $v0, 0x3c($sp)
    *(uint32_t*)((gp) + -0x6440) = v0;                          // 0x00196538: sw $v0, -0x6440($gp)
label_0x19653c:
    a0 = local_3c;                                              // 0x0019653c: lw $a0, 0x3c($sp)
    v0 = s0 + -4;                                               // 0x00196540: addiu $v0, $s0, -4
    v1 = v0 << 2;                                               // 0x00196544: sll $v1, $v0, 2
    v0 = gp + -0x6498;                                          // 0x00196548: addiu $v0, $gp, -0x6498
    v0 = v0 + v1;                                               // 0x0019654c: addu $v0, $v0, $v1
    goto label_0x196dac;                                        // 0x00196550: b 0x196dac
    g_3f800000 = a0;  // Global at 0x3f800000                   // 0x00196554: sw $a0, 0($v0)
label_0x196558:
    a1 = *(int32_t*)((gp) + -0x6458);                           // 0x00196558: lw $a1, -0x6458($gp)
    a0 = -0x81;                                                 // 0x0019655c: addiu $a0, $zero, -0x81
    v1 = local_38;                                              // 0x00196560: lw $v1, 0x38($sp)
    v0 = 1;                                                     // 0x00196564: addiu $v0, $zero, 1
    a0 = a1 & a0;                                               // 0x00196568: and $a0, $a1, $a0
    if (v1 != v0) goto label_0x196dac;                          // 0x0019656c: bne $v1, $v0, 0x196dac
    *(uint32_t*)((gp) + -0x6458) = a0;                          // 0x00196570: sw $a0, -0x6458($gp)
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196574: lw $v0, -0x6458($gp)
    v0 = v0 | 0x80;                                             // 0x00196578: ori $v0, $v0, 0x80
    goto label_0x196dac;                                        // 0x0019657c: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x00196580: sw $v0, -0x6458($gp)
label_0x196584:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00196584: lw $v1, -0x645c($gp)
    a0 = local_38;                                              // 0x00196588: lw $a0, 0x38($sp)
    v0 = v1 & 0xc00;                                            // 0x0019658c: andi $v0, $v1, 0xc00
    if (v0 == a0) goto label_0x196dac;                          // 0x00196590: beq $v0, $a0, 0x196dac
    v0 = -0xc01;                                                // 0x00196594: addiu $v0, $zero, -0xc01
    v0 = v1 & v0;                                               // 0x00196598: and $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x0019659c: sw $v0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x001965a0: lw $v0, -0x645c($gp)
    v0 = v0 | a0;                                               // 0x001965a4: or $v0, $v0, $a0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x001965a8: sw $v0, -0x645c($gp)
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x001965ac: lw $a0, -0x645c($gp)
    func_00197a10();  // 197a10                                // 0x001965b0: jal 0x197a10
    goto label_0x196dac;                                        // 0x001965b8: b 0x196dac
    /* nop */                                                   // 0x001965bc: nop 
label_0x1965c0:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x001965c0: lw $v1, -0x645c($gp)
    a0 = local_38;                                              // 0x001965c4: lw $a0, 0x38($sp)
    v0 = v1 & 0xff;                                             // 0x001965c8: andi $v0, $v1, 0xff
    if (v0 == a0) goto label_0x196dac;                          // 0x001965cc: beq $v0, $a0, 0x196dac
    v0 = -0x100;                                                // 0x001965d0: addiu $v0, $zero, -0x100
    v0 = v1 & v0;                                               // 0x001965d4: and $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x001965d8: sw $v0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x001965dc: lw $v0, -0x645c($gp)
    v0 = v0 | a0;                                               // 0x001965e0: or $v0, $v0, $a0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x001965e4: sw $v0, -0x645c($gp)
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x001965e8: lw $a0, -0x645c($gp)
    func_00197a10();  // 197a10                                // 0x001965ec: jal 0x197a10
    goto label_0x196dac;                                        // 0x001965f4: b 0x196dac
    /* nop */                                                   // 0x001965f8: nop 
label_0x1965fc:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x001965fc: lw $v1, -0x645c($gp)
    v0 = 0x100 << 16;                                           // 0x00196600: lui $v0, 0x100
    a0 = local_38;                                              // 0x00196604: lw $a0, 0x38($sp)
    v0 = v1 & v0;                                               // 0x00196608: and $v0, $v1, $v0
    if (v0 == a0) goto label_0x196dac;                          // 0x0019660c: beq $v0, $a0, 0x196dac
    v0 = 0xfeff << 16;                                          // 0x00196610: lui $v0, 0xfeff
    v0 = v0 | 0xffff;                                           // 0x00196614: ori $v0, $v0, 0xffff
    v0 = v1 & v0;                                               // 0x00196618: and $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x0019661c: sw $v0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196620: lw $v0, -0x645c($gp)
    v0 = v0 | a0;                                               // 0x00196624: or $v0, $v0, $a0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196628: sw $v0, -0x645c($gp)
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x0019662c: lw $a0, -0x645c($gp)
    func_00197a10();  // 197a10                                // 0x00196630: jal 0x197a10
    goto label_0x196dac;                                        // 0x00196638: b 0x196dac
    /* nop */                                                   // 0x0019663c: nop 
label_0x196640:
    v0 = local_38;                                              // 0x00196640: lw $v0, 0x38($sp)
    *(uint32_t*)((gp) + -0x646c) = v0;                          // 0x00196644: sw $v0, -0x646c($gp)
    a0 = *(int32_t*)((gp) + -0x646c);                           // 0x00196648: lw $a0, -0x646c($gp)
    v0 = (unsigned)a0 >> 0x10;                                  // 0x0019664c: srl $v0, $a0, 0x10
    v0 = v0 & 0xff;                                             // 0x00196650: andi $v0, $v0, 0xff
    if (v0 < 0) goto label_0x196668;                            // 0x00196654: bltz $v0, 0x196668
    v1 = (unsigned)v0 >> 1;                                     // 0x00196658: srl $v1, $v0, 1
    /* move to FPU: $v0, $f0 */                                 // 0x0019665c: mtc1 $v0, $f0
    goto label_0x196680;                                        // 0x00196660: b 0x196680
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196664: cvt.s.w $f1, $f0
label_0x196668:
    v0 = v0 & 1;                                                // 0x00196668: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x0019666c: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00196670: mtc1 $v1, $f0
    /* nop */                                                   // 0x00196674: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196678: cvt.s.w $f1, $f0
    /* FPU: add.s $f1, $f1, $f1 */                              // 0x0019667c: add.s $f1, $f1, $f1
label_0x196680:
    v1 = 0x437f << 16;                                          // 0x00196680: lui $v1, 0x437f
    v0 = (unsigned)a0 >> 8;                                     // 0x00196684: srl $v0, $a0, 8
    /* move to FPU: $v1, $f0 */                                 // 0x00196688: mtc1 $v1, $f0
    v0 = v0 & 0xff;                                             // 0x0019668c: andi $v0, $v0, 0xff
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00196690: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00196694: nop 
    at = 0x28 << 16;                                            // 0x00196698: lui $at, 0x28
    if (v0 < 0) goto label_0x1966b0;                            // 0x0019669c: bltz $v0, 0x1966b0
    *(float*)((at) + 0x5470) = FPU_F0;  // Store float          // 0x001966a0: swc1 $f0, 0x5470($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001966a4: mtc1 $v0, $f0
    goto label_0x1966cc;                                        // 0x001966a8: b 0x1966cc
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x001966ac: cvt.s.w $f1, $f0
label_0x1966b0:
    v1 = (unsigned)v0 >> 1;                                     // 0x001966b0: srl $v1, $v0, 1
    v0 = v0 & 1;                                                // 0x001966b4: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x001966b8: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x001966bc: mtc1 $v1, $f0
    /* nop */                                                   // 0x001966c0: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x001966c4: cvt.s.w $f1, $f0
    /* FPU: add.s $f1, $f1, $f1 */                              // 0x001966c8: add.s $f1, $f1, $f1
label_0x1966cc:
    v1 = 0x437f << 16;                                          // 0x001966cc: lui $v1, 0x437f
    v0 = a0 & 0xff;                                             // 0x001966d0: andi $v0, $a0, 0xff
    /* move to FPU: $v1, $f0 */                                 // 0x001966d4: mtc1 $v1, $f0
    /* nop */                                                   // 0x001966d8: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001966dc: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x001966e0: nop 
    at = 0x28 << 16;                                            // 0x001966e4: lui $at, 0x28
    if (v0 < 0) goto label_0x1966fc;                            // 0x001966e8: bltz $v0, 0x1966fc
    *(float*)((at) + 0x5474) = FPU_F0;  // Store float          // 0x001966ec: swc1 $f0, 0x5474($at)
    /* move to FPU: $v0, $f0 */                                 // 0x001966f0: mtc1 $v0, $f0
    goto label_0x196718;                                        // 0x001966f4: b 0x196718
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x001966f8: cvt.s.w $f1, $f0
label_0x1966fc:
    v1 = (unsigned)v0 >> 1;                                     // 0x001966fc: srl $v1, $v0, 1
    v0 = v0 & 1;                                                // 0x00196700: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x00196704: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00196708: mtc1 $v1, $f0
    /* nop */                                                   // 0x0019670c: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196710: cvt.s.w $f1, $f0
    /* FPU: add.s $f1, $f1, $f1 */                              // 0x00196714: add.s $f1, $f1, $f1
label_0x196718:
    v1 = 0x437f << 16;                                          // 0x00196718: lui $v1, 0x437f
    v0 = (unsigned)a0 >> 0x18;                                  // 0x0019671c: srl $v0, $a0, 0x18
    /* move to FPU: $v1, $f0 */                                 // 0x00196720: mtc1 $v1, $f0
    a0 = v0 & 0xff;                                             // 0x00196724: andi $a0, $v0, 0xff
    v0 = 0xff;                                                  // 0x00196728: addiu $v0, $zero, 0xff
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x0019672c: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00196730: nop 
    at = 0x28 << 16;                                            // 0x00196734: lui $at, 0x28
    if (a0 != v0) goto label_0x196750;                          // 0x00196738: bne $a0, $v0, 0x196750
    *(float*)((at) + 0x5478) = FPU_F0;  // Store float          // 0x0019673c: swc1 $f0, 0x5478($at)
    v0 = 0x4300 << 16;                                          // 0x00196740: lui $v0, 0x4300
    at = 0x28 << 16;                                            // 0x00196744: lui $at, 0x28
    goto label_0x196dac;                                        // 0x00196748: b 0x196dac
    g_0028547c = v0;  // Global at 0x0028547c                   // 0x0019674c: sw $v0, 0x547c($at)
label_0x196750:
    if (a0 == 0) goto label_0x1967a0;                           // 0x00196750: beqz $a0, 0x1967a0
    at = 0x28 << 16;                                            // 0x00196754: lui $at, 0x28
    a0 = (unsigned)a0 >> 1;                                     // 0x00196758: srl $a0, $a0, 1
    if (a0 != 0) goto label_0x196768;                           // 0x0019675c: bnez $a0, 0x196768
    /* nop */                                                   // 0x00196760: nop 
    a0 = 1;                                                     // 0x00196764: addiu $a0, $zero, 1
label_0x196768:
    if (a0 < 0) goto label_0x19677c;                            // 0x00196768: bltz $a0, 0x19677c
    v1 = (unsigned)a0 >> 1;                                     // 0x0019676c: srl $v1, $a0, 1
    /* move to FPU: $a0, $f0 */                                 // 0x00196770: mtc1 $a0, $f0
    goto label_0x196794;                                        // 0x00196774: b 0x196794
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00196778: cvt.s.w $f0, $f0
label_0x19677c:
    v0 = a0 & 1;                                                // 0x0019677c: andi $v0, $a0, 1
    v1 = v1 | v0;                                               // 0x00196780: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00196784: mtc1 $v1, $f0
    /* nop */                                                   // 0x00196788: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0019678c: cvt.s.w $f0, $f0
    /* FPU: add.s $f0, $f0, $f0 */                              // 0x00196790: add.s $f0, $f0, $f0
label_0x196794:
    at = 0x28 << 16;                                            // 0x00196794: lui $at, 0x28
    goto label_0x196dac;                                        // 0x00196798: b 0x196dac
    *(float*)((at) + 0x547c) = FPU_F0;  // Store float          // 0x0019679c: swc1 $f0, 0x547c($at)
label_0x1967a0:
    goto label_0x196dac;                                        // 0x001967a0: b 0x196dac
    g_0028547c = 0;  // Global at 0x0028547c                    // 0x001967a4: sw $zero, 0x547c($at)
label_0x1967a8:
    a0 = local_38;                                              // 0x001967a8: lw $a0, 0x38($sp)
    v0 = *(int32_t*)((gp) + -0x6468);                           // 0x001967ac: lw $v0, -0x6468($gp)
    if (v0 == a0) goto label_0x196dac;                          // 0x001967b0: beq $v0, $a0, 0x196dac
    /* nop */                                                   // 0x001967b4: nop 
    func_00198130();  // 198130                                // 0x001967b8: jal 0x198130
    *(uint32_t*)((gp) + -0x6468) = a0;                          // 0x001967bc: sw $a0, -0x6468($gp)
    goto label_0x196dac;                                        // 0x001967c0: b 0x196dac
    /* nop */                                                   // 0x001967c4: nop 
label_0x1967c8:
    FPU_F0 = *(float*)((sp) + 0x38);  // Load float             // 0x001967c8: lwc1 $f0, 0x38($sp)
    goto label_0x196dac;                                        // 0x001967cc: b 0x196dac
    *(float*)((gp) + -0x6460) = FPU_F0;  // Store float         // 0x001967d0: swc1 $f0, -0x6460($gp)
label_0x1967d4:
    FPU_F0 = *(float*)((sp) + 0x38);  // Load float             // 0x001967d4: lwc1 $f0, 0x38($sp)
    goto label_0x196dac;                                        // 0x001967d8: b 0x196dac
    *(float*)((gp) + -0x6464) = FPU_F0;  // Store float         // 0x001967dc: swc1 $f0, -0x6464($gp)
label_0x1967e0:
    a1 = *(int32_t*)((gp) + -0x6458);                           // 0x001967e0: lw $a1, -0x6458($gp)
    v0 = 0xfffe << 16;                                          // 0x001967e4: lui $v0, 0xfffe
    v1 = local_38;                                              // 0x001967e8: lw $v1, 0x38($sp)
    a0 = v0 | 0x7fff;                                           // 0x001967ec: ori $a0, $v0, 0x7fff
    v0 = 0 | 0x8000;                                            // 0x001967f0: ori $v0, $zero, 0x8000
    a0 = a1 & a0;                                               // 0x001967f4: and $a0, $a1, $a0
    if (v1 != v0) goto label_0x196dac;                          // 0x001967f8: bne $v1, $v0, 0x196dac
    *(uint32_t*)((gp) + -0x6458) = a0;                          // 0x001967fc: sw $a0, -0x6458($gp)
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196800: lw $v0, -0x6458($gp)
    v0 = v0 | 0x8000;                                           // 0x00196804: ori $v0, $v0, 0x8000
    goto label_0x196dac;                                        // 0x00196808: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019680c: sw $v0, -0x6458($gp)
label_0x196810:
    func_001972e0();  // 1972e0                                // 0x00196810: jal 0x1972e0
    a0 = local_38;                                              // 0x00196814: lw $a0, 0x38($sp)
    goto label_0x196dac;                                        // 0x00196818: b 0x196dac
    /* nop */                                                   // 0x0019681c: nop 
label_0x196820:
    v1 = *(int32_t*)((gp) + -0x6458);                           // 0x00196820: lw $v1, -0x6458($gp)
    v0 = -4;                                                    // 0x00196824: addiu $v0, $zero, -4
    a0 = local_38;                                              // 0x00196828: lw $a0, 0x38($sp)
    v0 = v1 & v0;                                               // 0x0019682c: and $v0, $v1, $v0
    if (a0 == 0) goto label_0x196dac;                           // 0x00196830: beqz $a0, 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x00196834: sw $v0, -0x6458($gp)
    v0 = 2;                                                     // 0x00196838: addiu $v0, $zero, 2
    if (a0 != v0) goto label_0x196dac;                          // 0x0019683c: bne $a0, $v0, 0x196dac
    /* nop */                                                   // 0x00196840: nop 
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196844: lw $v0, -0x6458($gp)
    v0 = v0 | 2;                                                // 0x00196848: ori $v0, $v0, 2
    goto label_0x196dac;                                        // 0x0019684c: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x00196850: sw $v0, -0x6458($gp)
label_0x196854:
    a2 = local_38;                                              // 0x00196854: lw $a2, 0x38($sp)
    v0 = 0x7000 << 16;                                          // 0x00196858: lui $v0, 0x7000
    a1 = v0 | 0x3f40;                                           // 0x0019685c: ori $a1, $v0, 0x3f40
    a0 = 8;                                                     // 0x00196860: addiu $a0, $zero, 8
label_0x196864:
    v1 = g_002853f8;  // Global at 0x002853f8                   // 0x00196864: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x00196868: addiu $a0, $a0, -1
    v0 = g_002853fc;  // Global at 0x002853fc                   // 0x0019686c: lw $v0, 4($a2)
    *(uint32_t*)(a1) = v1;                                      // 0x00196870: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x00196874: addiu $a2, $a2, 8
    *(uint32_t*)((a1) + 4) = v0;                                // 0x00196878: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x196864;                            // 0x0019687c: bgtz $a0, 0x196864
    a1 = a1 + 8;                                                // 0x00196880: addiu $a1, $a1, 8
    goto label_0x196dac;                                        // 0x00196884: b 0x196dac
    /* nop */                                                   // 0x00196888: nop 
label_0x19688c:
    a2 = local_38;                                              // 0x0019688c: lw $a2, 0x38($sp)
    v0 = 0x7000 << 16;                                          // 0x00196890: lui $v0, 0x7000
    a1 = v0 | 0x3f00;                                           // 0x00196894: ori $a1, $v0, 0x3f00
    a0 = 8;                                                     // 0x00196898: addiu $a0, $zero, 8
label_0x19689c:
    v1 = g_00285400;  // Global at 0x00285400                   // 0x0019689c: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x001968a0: addiu $a0, $a0, -1
    v0 = g_00285404;  // Global at 0x00285404                   // 0x001968a4: lw $v0, 4($a2)
    *(uint32_t*)(a1) = v1;                                      // 0x001968a8: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x001968ac: addiu $a2, $a2, 8
    *(uint32_t*)((a1) + 4) = v0;                                // 0x001968b0: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x19689c;                            // 0x001968b4: bgtz $a0, 0x19689c
    a1 = a1 + 8;                                                // 0x001968b8: addiu $a1, $a1, 8
    v0 = 0x7000 << 16;                                          // 0x001968bc: lui $v0, 0x7000
    a0 = 0x28 << 16;                                            // 0x001968c0: lui $a0, 0x28
    a0 = a0 + 0x5360;                                           // 0x001968c4: addiu $a0, $a0, 0x5360
    a1 = v0 | 0x3f00;                                           // 0x001968c8: ori $a1, $v0, 0x3f00
    func_00191030();  // 191030                                // 0x001968cc: jal 0x191030
    a2 = v0 | 0x3f80;                                           // 0x001968d0: ori $a2, $v0, 0x3f80
    a0 = 0x28 << 16;                                            // 0x001968d4: lui $a0, 0x28
    v0 = 0x7000 << 16;                                          // 0x001968d8: lui $v0, 0x7000
    a2 = 0x28 << 16;                                            // 0x001968dc: lui $a2, 0x28
    a0 = a0 + 0x53a0;                                           // 0x001968e0: addiu $a0, $a0, 0x53a0
    a1 = v0 | 0x3f00;                                           // 0x001968e4: ori $a1, $v0, 0x3f00
    func_00191030();  // 191030                                // 0x001968e8: jal 0x191030
    a2 = a2 + 0x53e0;                                           // 0x001968ec: addiu $a2, $a2, 0x53e0
    goto label_0x196dac;                                        // 0x001968f0: b 0x196dac
    /* nop */                                                   // 0x001968f4: nop 
label_0x1968f8:
    v0 = local_38;                                              // 0x001968f8: lw $v0, 0x38($sp)
    a1 = g_70000000;  // Global at 0x70000000                   // 0x001968fc: lw $a1, 0($v0)
    FPU_F12 = *(float*)((v0) + 0x10);  // Load float            // 0x00196900: lwc1 $f12, 0x10($v0)
    a2 = g_70000004;  // Global at 0x70000004                   // 0x00196904: lw $a2, 4($v0)
    FPU_F13 = *(float*)((v0) + 0x14);  // Load float            // 0x00196908: lwc1 $f13, 0x14($v0)
    a3 = g_70000008;  // Global at 0x70000008                   // 0x0019690c: lw $a3, 8($v0)
    t0 = g_7000000c;  // Global at 0x7000000c                   // 0x00196910: lw $t0, 0xc($v0)
    func_0018f690();  // 18f690                                // 0x00196914: jal 0x18f690
    a0 = 0x22;                                                  // 0x00196918: addiu $a0, $zero, 0x22
    goto label_0x196dac;                                        // 0x0019691c: b 0x196dac
    /* nop */                                                   // 0x00196920: nop 
label_0x196924:
    a2 = local_38;                                              // 0x00196924: lw $a2, 0x38($sp)
    v0 = 0x7000 << 16;                                          // 0x00196928: lui $v0, 0x7000
    a1 = v0 | 0x3fc0;                                           // 0x0019692c: ori $a1, $v0, 0x3fc0
    a0 = 8;                                                     // 0x00196930: addiu $a0, $zero, 8
label_0x196934:
    v1 = g_002853e0;  // Global at 0x002853e0                   // 0x00196934: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x00196938: addiu $a0, $a0, -1
    v0 = g_002853e4;  // Global at 0x002853e4                   // 0x0019693c: lw $v0, 4($a2)
    *(uint32_t*)(a1) = v1;                                      // 0x00196940: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x00196944: addiu $a2, $a2, 8
    *(uint32_t*)((a1) + 4) = v0;                                // 0x00196948: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x196934;                            // 0x0019694c: bgtz $a0, 0x196934
    a1 = a1 + 8;                                                // 0x00196950: addiu $a1, $a1, 8
    goto label_0x196dac;                                        // 0x00196954: b 0x196dac
    /* nop */                                                   // 0x00196958: nop 
label_0x19695c:
    v1 = *(int32_t*)((gp) + -0x6458);                           // 0x0019695c: lw $v1, -0x6458($gp)
    v0 = local_38;                                              // 0x00196960: lw $v0, 0x38($sp)
    *(uint32_t*)((gp) + -0x6458) = v1;                          // 0x0019696c: sw $v1, -0x6458($gp)
    v1 = *(int32_t*)((gp) + -0x6458);                           // 0x00196970: lw $v1, -0x6458($gp)
    v0 = v1 | v0;                                               // 0x00196974: or $v0, $v1, $v0
    goto label_0x196dac;                                        // 0x00196978: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019697c: sw $v0, -0x6458($gp)
label_0x196980:
    v0 = local_38;                                              // 0x00196980: lw $v0, 0x38($sp)
    at = ((unsigned)v0 < (unsigned)8) ? 1 : 0;                  // 0x00196984: sltiu $at, $v0, 8
    if (at == 0) goto label_0x196a00;                           // 0x00196988: beqz $at, 0x196a00
    v1 = 0x23 << 16;                                            // 0x0019698c: lui $v1, 0x23
    v0 = v0 << 2;                                               // 0x00196990: sll $v0, $v0, 2
    v1 = v1 + -0x5ba0;                                          // 0x00196994: addiu $v1, $v1, -0x5ba0
    v0 = v0 + v1;                                               // 0x00196998: addu $v0, $v0, $v1
    v0 = g_70000000;  // Global at 0x70000000                   // 0x0019699c: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001969a0: jr $v0
    /* nop */                                                   // 0x001969a4: nop 
    v0 = 0x10 << 16;                                            // 0x001969a8: lui $v0, 0x10
    goto label_0x196a00;                                        // 0x001969ac: b 0x196a00
    local_38 = v0;                                              // 0x001969b0: sw $v0, 0x38($sp)
    v0 = 0x28 << 16;                                            // 0x001969b4: lui $v0, 0x28
    goto label_0x196a00;                                        // 0x001969b8: b 0x196a00
    local_38 = v0;                                              // 0x001969bc: sw $v0, 0x38($sp)
    v0 = 0x20 << 16;                                            // 0x001969c0: lui $v0, 0x20
    goto label_0x196a00;                                        // 0x001969c4: b 0x196a00
    local_38 = v0;                                              // 0x001969c8: sw $v0, 0x38($sp)
    v0 = 0x30 << 16;                                            // 0x001969cc: lui $v0, 0x30
    goto label_0x196a00;                                        // 0x001969d0: b 0x196a00
    local_38 = v0;                                              // 0x001969d4: sw $v0, 0x38($sp)
    goto label_0x196a00;                                        // 0x001969d8: b 0x196a00
    local_38 = 0;                                               // 0x001969dc: sw $zero, 0x38($sp)
    v0 = 0x38 << 16;                                            // 0x001969e0: lui $v0, 0x38
    goto label_0x196a00;                                        // 0x001969e4: b 0x196a00
    local_38 = v0;                                              // 0x001969e8: sw $v0, 0x38($sp)
    v0 = 8 << 16;                                               // 0x001969ec: lui $v0, 8
    goto label_0x196a00;                                        // 0x001969f0: b 0x196a00
    local_38 = v0;                                              // 0x001969f4: sw $v0, 0x38($sp)
    v0 = 0x18 << 16;                                            // 0x001969f8: lui $v0, 0x18
    local_38 = v0;                                              // 0x001969fc: sw $v0, 0x38($sp)
label_0x196a00:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00196a00: lw $v1, -0x645c($gp)
    v0 = 0x38 << 16;                                            // 0x00196a04: lui $v0, 0x38
    a0 = local_38;                                              // 0x00196a08: lw $a0, 0x38($sp)
    v0 = v1 & v0;                                               // 0x00196a0c: and $v0, $v1, $v0
    if (v0 == a0) goto label_0x196dac;                          // 0x00196a10: beq $v0, $a0, 0x196dac
    v0 = 0xffc7 << 16;                                          // 0x00196a14: lui $v0, 0xffc7
    v0 = v0 | 0xffff;                                           // 0x00196a18: ori $v0, $v0, 0xffff
    v0 = v1 & v0;                                               // 0x00196a1c: and $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196a20: sw $v0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196a24: lw $v0, -0x645c($gp)
    v0 = v0 | a0;                                               // 0x00196a28: or $v0, $v0, $a0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196a2c: sw $v0, -0x645c($gp)
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196a30: lw $a0, -0x645c($gp)
    func_00197760();  // 197760                                // 0x00196a34: jal 0x197760
    goto label_0x196dac;                                        // 0x00196a3c: b 0x196dac
    /* nop */                                                   // 0x00196a40: nop 
label_0x196a44:
    v1 = local_38;                                              // 0x00196a44: lw $v1, 0x38($sp)
    v0 = *(int32_t*)((gp) + -0x6474);                           // 0x00196a48: lw $v0, -0x6474($gp)
    if (v1 == v0) goto label_0x196dac;                          // 0x00196a4c: beq $v1, $v0, 0x196dac
    /* nop */                                                   // 0x00196a50: nop 
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196a54: lw $a0, -0x645c($gp)
    func_00197760();  // 197760                                // 0x00196a5c: jal 0x197760
    *(uint32_t*)((gp) + -0x6474) = v1;                          // 0x00196a60: sw $v1, -0x6474($gp)
    goto label_0x196dac;                                        // 0x00196a64: b 0x196dac
    /* nop */                                                   // 0x00196a68: nop 
label_0x196a6c:
    a0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196a6c: lw $a0, -0x6458($gp)
    v1 = -0x4001;                                               // 0x00196a70: addiu $v1, $zero, -0x4001
    v0 = local_38;                                              // 0x00196a74: lw $v0, 0x38($sp)
    v1 = a0 & v1;                                               // 0x00196a78: and $v1, $a0, $v1
    if (v0 == 0) goto label_0x196dac;                           // 0x00196a7c: beqz $v0, 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v1;                          // 0x00196a80: sw $v1, -0x6458($gp)
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196a84: lw $v0, -0x6458($gp)
    v0 = v0 | 0x4000;                                           // 0x00196a88: ori $v0, $v0, 0x4000
    goto label_0x196dac;                                        // 0x00196a8c: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x00196a90: sw $v0, -0x6458($gp)
label_0x196a94:
    v0 = 0xfffe << 16;                                          // 0x00196a94: lui $v0, 0xfffe
    a1 = *(int32_t*)((gp) + -0x645c);                           // 0x00196a98: lw $a1, -0x645c($gp)
    a0 = v0 | 0xffff;                                           // 0x00196a9c: ori $a0, $v0, 0xffff
    v1 = 1 << 16;                                               // 0x00196aa0: lui $v1, 1
    v0 = local_38;                                              // 0x00196aa4: lw $v0, 0x38($sp)
    a0 = a1 & a0;                                               // 0x00196aa8: and $a0, $a1, $a0
    if (v0 != v1) goto label_0x196ac0;                          // 0x00196aac: bne $v0, $v1, 0x196ac0
    *(uint32_t*)((gp) + -0x645c) = a0;                          // 0x00196ab0: sw $a0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196ab4: lw $v0, -0x645c($gp)
    v0 = v0 | v1;                                               // 0x00196ab8: or $v0, $v0, $v1
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196abc: sw $v0, -0x645c($gp)
label_0x196ac0:
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196ac0: lw $a0, -0x645c($gp)
    func_001981f0();  // 1981f0                                // 0x00196ac4: jal 0x1981f0
    goto label_0x196dac;                                        // 0x00196acc: b 0x196dac
    /* nop */                                                   // 0x00196ad0: nop 
label_0x196ad4:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00196ad4: lw $v1, -0x645c($gp)
    v0 = 0xfff9 << 16;                                          // 0x00196ad8: lui $v0, 0xfff9
    a0 = local_38;                                              // 0x00196adc: lw $a0, 0x38($sp)
    v0 = v0 | 0xffff;                                           // 0x00196ae0: ori $v0, $v0, 0xffff
    v0 = v1 & v0;                                               // 0x00196ae4: and $v0, $v1, $v0
    if (a0 == 0) goto label_0x196dac;                           // 0x00196ae8: beqz $a0, 0x196dac
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196aec: sw $v0, -0x645c($gp)
    v1 = 2 << 16;                                               // 0x00196af0: lui $v1, 2
    if (a0 != v1) goto label_0x196dac;                          // 0x00196af4: bne $a0, $v1, 0x196dac
    /* nop */                                                   // 0x00196af8: nop 
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196afc: lw $v0, -0x645c($gp)
    v0 = v0 | v1;                                               // 0x00196b00: or $v0, $v0, $v1
    goto label_0x196dac;                                        // 0x00196b04: b 0x196dac
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196b08: sw $v0, -0x645c($gp)
label_0x196b0c:
    a1 = *(int32_t*)((gp) + -0x6458);                           // 0x00196b0c: lw $a1, -0x6458($gp)
    v0 = 0xfffd << 16;                                          // 0x00196b10: lui $v0, 0xfffd
    v1 = local_38;                                              // 0x00196b14: lw $v1, 0x38($sp)
    a0 = v0 | 0xffff;                                           // 0x00196b18: ori $a0, $v0, 0xffff
    v0 = 1;                                                     // 0x00196b1c: addiu $v0, $zero, 1
    a0 = a1 & a0;                                               // 0x00196b20: and $a0, $a1, $a0
    if (v1 != v0) goto label_0x196dac;                          // 0x00196b24: bne $v1, $v0, 0x196dac
    *(uint32_t*)((gp) + -0x6458) = a0;                          // 0x00196b28: sw $a0, -0x6458($gp)
    v1 = *(int32_t*)((gp) + -0x6458);                           // 0x00196b2c: lw $v1, -0x6458($gp)
    v0 = 2 << 16;                                               // 0x00196b30: lui $v0, 2
    v0 = v1 | v0;                                               // 0x00196b34: or $v0, $v1, $v0
    goto label_0x196dac;                                        // 0x00196b38: b 0x196dac
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x00196b3c: sw $v0, -0x6458($gp)
label_0x196b40:
    a0 = local_38;                                              // 0x00196b40: lw $a0, 0x38($sp)
    v0 = (unsigned)a0 >> 0x10;                                  // 0x00196b44: srl $v0, $a0, 0x10
    v0 = v0 & 0xff;                                             // 0x00196b48: andi $v0, $v0, 0xff
    if (v0 < 0) goto label_0x196b60;                            // 0x00196b4c: bltz $v0, 0x196b60
    *(uint32_t*)((gp) + -0x6470) = a0;                          // 0x00196b50: sw $a0, -0x6470($gp)
    /* move to FPU: $v0, $f0 */                                 // 0x00196b54: mtc1 $v0, $f0
    goto label_0x196b7c;                                        // 0x00196b58: b 0x196b7c
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196b5c: cvt.s.w $f1, $f0
label_0x196b60:
    v1 = (unsigned)v0 >> 1;                                     // 0x00196b60: srl $v1, $v0, 1
    v0 = v0 & 1;                                                // 0x00196b64: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x00196b68: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00196b6c: mtc1 $v1, $f0
    /* nop */                                                   // 0x00196b70: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196b74: cvt.s.w $f1, $f0
    /* FPU: add.s $f1, $f1, $f1 */                              // 0x00196b78: add.s $f1, $f1, $f1
label_0x196b7c:
    v1 = 0x437f << 16;                                          // 0x00196b7c: lui $v1, 0x437f
    v0 = (unsigned)a0 >> 8;                                     // 0x00196b80: srl $v0, $a0, 8
    /* move to FPU: $v1, $f0 */                                 // 0x00196b84: mtc1 $v1, $f0
    v0 = v0 & 0xff;                                             // 0x00196b88: andi $v0, $v0, 0xff
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00196b8c: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00196b90: nop 
    at = 0x28 << 16;                                            // 0x00196b94: lui $at, 0x28
    if (v0 < 0) goto label_0x196bac;                            // 0x00196b98: bltz $v0, 0x196bac
    *(float*)((at) + 0x5460) = FPU_F0;  // Store float          // 0x00196b9c: swc1 $f0, 0x5460($at)
    /* move to FPU: $v0, $f0 */                                 // 0x00196ba0: mtc1 $v0, $f0
    goto label_0x196bc8;                                        // 0x00196ba4: b 0x196bc8
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196ba8: cvt.s.w $f1, $f0
label_0x196bac:
    v1 = (unsigned)v0 >> 1;                                     // 0x00196bac: srl $v1, $v0, 1
    v0 = v0 & 1;                                                // 0x00196bb0: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x00196bb4: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00196bb8: mtc1 $v1, $f0
    /* nop */                                                   // 0x00196bbc: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196bc0: cvt.s.w $f1, $f0
    /* FPU: add.s $f1, $f1, $f1 */                              // 0x00196bc4: add.s $f1, $f1, $f1
label_0x196bc8:
    v1 = 0x437f << 16;                                          // 0x00196bc8: lui $v1, 0x437f
    v0 = a0 & 0xff;                                             // 0x00196bcc: andi $v0, $a0, 0xff
    /* move to FPU: $v1, $f0 */                                 // 0x00196bd0: mtc1 $v1, $f0
    /* nop */                                                   // 0x00196bd4: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00196bd8: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00196bdc: nop 
    at = 0x28 << 16;                                            // 0x00196be0: lui $at, 0x28
    if (v0 < 0) goto label_0x196bf8;                            // 0x00196be4: bltz $v0, 0x196bf8
    *(float*)((at) + 0x5464) = FPU_F0;  // Store float          // 0x00196be8: swc1 $f0, 0x5464($at)
    /* move to FPU: $v0, $f0 */                                 // 0x00196bec: mtc1 $v0, $f0
    goto label_0x196c14;                                        // 0x00196bf0: b 0x196c14
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196bf4: cvt.s.w $f1, $f0
label_0x196bf8:
    v1 = (unsigned)v0 >> 1;                                     // 0x00196bf8: srl $v1, $v0, 1
    v0 = v0 & 1;                                                // 0x00196bfc: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x00196c00: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00196c04: mtc1 $v1, $f0
    /* nop */                                                   // 0x00196c08: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196c0c: cvt.s.w $f1, $f0
    /* FPU: add.s $f1, $f1, $f1 */                              // 0x00196c10: add.s $f1, $f1, $f1
label_0x196c14:
    v1 = 0x437f << 16;                                          // 0x00196c14: lui $v1, 0x437f
    v0 = (unsigned)a0 >> 0x18;                                  // 0x00196c18: srl $v0, $a0, 0x18
    /* move to FPU: $v1, $f0 */                                 // 0x00196c1c: mtc1 $v1, $f0
    v0 = v0 & 0xff;                                             // 0x00196c20: andi $v0, $v0, 0xff
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00196c24: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00196c28: nop 
    at = 0x28 << 16;                                            // 0x00196c2c: lui $at, 0x28
    if (v0 < 0) goto label_0x196c44;                            // 0x00196c30: bltz $v0, 0x196c44
    *(float*)((at) + 0x5468) = FPU_F0;  // Store float          // 0x00196c34: swc1 $f0, 0x5468($at)
    /* move to FPU: $v0, $f0 */                                 // 0x00196c38: mtc1 $v0, $f0
    goto label_0x196c60;                                        // 0x00196c3c: b 0x196c60
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196c40: cvt.s.w $f1, $f0
label_0x196c44:
    v1 = (unsigned)v0 >> 1;                                     // 0x00196c44: srl $v1, $v0, 1
    v0 = v0 & 1;                                                // 0x00196c48: andi $v0, $v0, 1
    v1 = v1 | v0;                                               // 0x00196c4c: or $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00196c50: mtc1 $v1, $f0
    /* nop */                                                   // 0x00196c54: nop 
    /* FPU: cvt.s.w $f1, $f0 */                                 // 0x00196c58: cvt.s.w $f1, $f0
    /* FPU: add.s $f1, $f1, $f1 */                              // 0x00196c5c: add.s $f1, $f1, $f1
label_0x196c60:
    v0 = 0x437f << 16;                                          // 0x00196c60: lui $v0, 0x437f
    /* move to FPU: $v0, $f0 */                                 // 0x00196c64: mtc1 $v0, $f0
    /* nop */                                                   // 0x00196c68: nop 
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x00196c6c: div.s $f0, $f1, $f0
    /* nop */                                                   // 0x00196c70: nop 
    at = 0x28 << 16;                                            // 0x00196c74: lui $at, 0x28
    goto label_0x196dac;                                        // 0x00196c78: b 0x196dac
    *(float*)((at) + 0x546c) = FPU_F0;  // Store float          // 0x00196c7c: swc1 $f0, 0x546c($at)
label_0x196c80:
    v0 = local_38;                                              // 0x00196c80: lw $v0, 0x38($sp)
    goto label_0x196dac;                                        // 0x00196c84: b 0x196dac
    *(uint32_t*)((gp) + -0x648c) = v0;                          // 0x00196c88: sw $v0, -0x648c($gp)
label_0x196c8c:
    v0 = local_38;                                              // 0x00196c8c: lw $v0, 0x38($sp)
    goto label_0x196dac;                                        // 0x00196c90: b 0x196dac
    *(uint32_t*)((gp) + -0x6490) = v0;                          // 0x00196c94: sw $v0, -0x6490($gp)
label_0x196c98:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00196c98: lw $v1, -0x645c($gp)
    v0 = 0xc0 << 16;                                            // 0x00196c9c: lui $v0, 0xc0
    a0 = local_38;                                              // 0x00196ca0: lw $a0, 0x38($sp)
    v0 = v1 & v0;                                               // 0x00196ca4: and $v0, $v1, $v0
    if (v0 == a0) goto label_0x196dac;                          // 0x00196ca8: beq $v0, $a0, 0x196dac
    v0 = 0xff3f << 16;                                          // 0x00196cac: lui $v0, 0xff3f
    v0 = v0 | 0xffff;                                           // 0x00196cb0: ori $v0, $v0, 0xffff
    v0 = v1 & v0;                                               // 0x00196cb4: and $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196cb8: sw $v0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196cbc: lw $v0, -0x645c($gp)
    v0 = v0 | a0;                                               // 0x00196cc0: or $v0, $v0, $a0
    goto label_0x196dac;                                        // 0x00196cc4: b 0x196dac
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196cc8: sw $v0, -0x645c($gp)
label_0x196ccc:
    v1 = local_38;                                              // 0x00196ccc: lw $v1, 0x38($sp)
    v0 = 1;                                                     // 0x00196cd0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x196ce0;                          // 0x00196cd4: bne $v1, $v0, 0x196ce0
    v0 = 0 | 0x8000;                                            // 0x00196cdc: ori $v0, $zero, 0x8000
label_0x196ce0:
    local_38 = v0;                                              // 0x00196ce0: sw $v0, 0x38($sp)
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00196ce4: lw $v1, -0x645c($gp)
    a0 = local_38;                                              // 0x00196ce8: lw $a0, 0x38($sp)
    v0 = v1 & 0x8000;                                           // 0x00196cec: andi $v0, $v1, 0x8000
    if (v0 == a0) goto label_0x196dac;                          // 0x00196cf0: beq $v0, $a0, 0x196dac
    /* nop */                                                   // 0x00196cf4: nop 
    v0 = 0xffff << 16;                                          // 0x00196cf8: lui $v0, 0xffff
    v0 = v0 | 0x7fff;                                           // 0x00196cfc: ori $v0, $v0, 0x7fff
    v0 = v1 & v0;                                               // 0x00196d00: and $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196d04: sw $v0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196d08: lw $v0, -0x645c($gp)
    v0 = v0 | a0;                                               // 0x00196d0c: or $v0, $v0, $a0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196d10: sw $v0, -0x645c($gp)
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196d14: lw $a0, -0x645c($gp)
    func_001975e0();  // 1975e0                                // 0x00196d18: jal 0x1975e0
    goto label_0x196dac;                                        // 0x00196d20: b 0x196dac
    /* nop */                                                   // 0x00196d24: nop 
label_0x196d28:
    v0 = local_38;                                              // 0x00196d28: lw $v0, 0x38($sp)
    at = ((unsigned)v0 < (unsigned)8) ? 1 : 0;                  // 0x00196d2c: sltiu $at, $v0, 8
    if (at == 0) goto label_0x196d78;                           // 0x00196d30: beqz $at, 0x196d78
    v1 = 0x23 << 16;                                            // 0x00196d34: lui $v1, 0x23
    v0 = v0 << 2;                                               // 0x00196d38: sll $v0, $v0, 2
    v1 = v1 + -0x5bc0;                                          // 0x00196d3c: addiu $v1, $v1, -0x5bc0
    v0 = v0 + v1;                                               // 0x00196d40: addu $v0, $v0, $v1
    v0 = g_ffff0000;  // Global at 0xffff0000                   // 0x00196d44: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x00196d48: jr $v0
    /* nop */                                                   // 0x00196d4c: nop 
    goto label_0x196d78;                                        // 0x00196d50: b 0x196d78
    local_38 = 0;                                               // 0x00196d54: sw $zero, 0x38($sp)
    v0 = 0x7000;                                                // 0x00196d58: addiu $v0, $zero, 0x7000
    goto label_0x196d78;                                        // 0x00196d5c: b 0x196d78
    local_38 = v0;                                              // 0x00196d60: sw $v0, 0x38($sp)
    v0 = 0x1000;                                                // 0x00196d64: addiu $v0, $zero, 0x1000
    goto label_0x196d78;                                        // 0x00196d68: b 0x196d78
    local_38 = v0;                                              // 0x00196d6c: sw $v0, 0x38($sp)
    v0 = 0x3000;                                                // 0x00196d70: addiu $v0, $zero, 0x3000
    local_38 = v0;                                              // 0x00196d74: sw $v0, 0x38($sp)
label_0x196d78:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00196d78: lw $v1, -0x645c($gp)
    a0 = local_38;                                              // 0x00196d7c: lw $a0, 0x38($sp)
    v0 = v1 & 0x7000;                                           // 0x00196d80: andi $v0, $v1, 0x7000
    if (v0 == a0) goto label_0x196dac;                          // 0x00196d84: beq $v0, $a0, 0x196dac
    v0 = -0x7001;                                               // 0x00196d88: addiu $v0, $zero, -0x7001
    v0 = v1 & v0;                                               // 0x00196d8c: and $v0, $v1, $v0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196d90: sw $v0, -0x645c($gp)
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196d94: lw $v0, -0x645c($gp)
    v0 = v0 | a0;                                               // 0x00196d98: or $v0, $v0, $a0
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x00196d9c: sw $v0, -0x645c($gp)
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00196da0: lw $a0, -0x645c($gp)
    func_00197760();  // 197760                                // 0x00196da4: jal 0x197760
label_0x196dac:
    v0 = 1;                                                     // 0x00196dac: addiu $v0, $zero, 1
label_0x196db0:
label_0x196db4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00196db4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00196db8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00196dbc: jr $ra
    sp = sp + 0x40;                                             // 0x00196dc0: addiu $sp, $sp, 0x40
}