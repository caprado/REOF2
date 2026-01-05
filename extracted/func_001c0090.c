void func_001c0090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001c0090: addiu $sp, $sp, -0x30
    a1 = 0x22 << 16;                                            // 0x001c0094: lui $a1, 0x22
    a1 = a1 + -0x30e8;                                          // 0x001c009c: addiu $a1, $a1, -0x30e8
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001c00a0: addu.qb $zero, $sp, $s1
    v0 = 3;                                                     // 0x001c00a4: addiu $v0, $zero, 3
    a2 = *(int32_t*)((a0) + 0xd4);                              // 0x001c00ac: lw $a2, 0xd4($a0)
    v1 = *(int32_t*)(a0);                                       // 0x001c00b0: lw $v1, 0($a0)
    a2 = a2 << 2;                                               // 0x001c00b4: sll $a2, $a2, 2
    a1 = a1 + a2;                                               // 0x001c00b8: addu $a1, $a1, $a2
    s1 = g_0021cf18;  // Global at 0x0021cf18                   // 0x001c00bc: lw $s1, 0($a1)
    if (v1 == v0) goto label_0x1c0264;                          // 0x001c00c0: beq $v1, $v0, 0x1c0264
    v0 = 2;                                                     // 0x001c00c8: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c020c;                          // 0x001c00cc: beq $v1, $v0, 0x1c020c
    v0 = 1;                                                     // 0x001c00d0: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c014c;                          // 0x001c00d4: beq $v1, $v0, 0x1c014c
    /* nop */                                                   // 0x001c00d8: nop 
    if (v1 == 0) goto label_0x1c00ec;                           // 0x001c00dc: beqz $v1, 0x1c00ec
    /* nop */                                                   // 0x001c00e0: nop 
    goto label_0x1c0300;                                        // 0x001c00e4: b 0x1c0300
label_0x1c00ec:
    func_001bf010();  // 1bf010                                // 0x001c00ec: jal 0x1bf010
    /* nop */                                                   // 0x001c00f0: nop 
    v1 = 2;                                                     // 0x001c00f4: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c013c;                          // 0x001c00f8: beq $v0, $v1, 0x1c013c
    v1 = 1;                                                     // 0x001c00fc: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c013c;                          // 0x001c0100: beq $v0, $v1, 0x1c013c
    /* nop */                                                   // 0x001c0104: nop 
    v1 = 3;                                                     // 0x001c0108: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c0130;                          // 0x001c010c: beq $v0, $v1, 0x1c0130
    /* nop */                                                   // 0x001c0110: nop 
    if (v0 == 0) goto label_0x1c0124;                           // 0x001c0114: beqz $v0, 0x1c0124
    /* nop */                                                   // 0x001c0118: nop 
    goto label_0x1c02fc;                                        // 0x001c011c: b 0x1c02fc
    /* nop */                                                   // 0x001c0120: nop 
label_0x1c0124:
    v0 = -0xff;                                                 // 0x001c0124: addiu $v0, $zero, -0xff
    goto label_0x1c02fc;                                        // 0x001c0128: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c012c: sw $v0, 0x24($s0)
label_0x1c0130:
    v0 = -0xfe;                                                 // 0x001c0130: addiu $v0, $zero, -0xfe
    goto label_0x1c02fc;                                        // 0x001c0134: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0138: sw $v0, 0x24($s0)
label_0x1c013c:
    v0 = *(int32_t*)(s0);                                       // 0x001c013c: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001c0140: addiu $v0, $v0, 1
    goto label_0x1c02fc;                                        // 0x001c0144: b 0x1c02fc
    *(uint32_t*)(s0) = v0;                                      // 0x001c0148: sw $v0, 0($s0)
label_0x1c014c:
    func_001bf210();  // 1bf210                                // 0x001c014c: jal 0x1bf210
    /* nop */                                                   // 0x001c0150: nop 
    v1 = 3;                                                     // 0x001c0154: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c01fc;                          // 0x001c0158: beq $v0, $v1, 0x1c01fc
    v1 = 2;                                                     // 0x001c015c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c01ec;                          // 0x001c0160: beq $v0, $v1, 0x1c01ec
    /* nop */                                                   // 0x001c0164: nop 
    v1 = 1;                                                     // 0x001c0168: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c01cc;                          // 0x001c016c: beq $v0, $v1, 0x1c01cc
    /* nop */                                                   // 0x001c0170: nop 
    if (v0 == 0) goto label_0x1c0184;                           // 0x001c0174: beqz $v0, 0x1c0184
    at = 0x31 << 16;                                            // 0x001c0178: lui $at, 0x31
    goto label_0x1c02fc;                                        // 0x001c017c: b 0x1c02fc
    /* nop */                                                   // 0x001c0180: nop 
label_0x1c0184:
    v0 = *(int32_t*)((s0) + 0xbc);                              // 0x001c0184: lw $v0, 0xbc($s0)
    v1 = g_00315e30;  // Global at 0x00315e30                   // 0x001c0188: lw $v1, 0x5e30($at)
    if (v1 == v0) goto label_0x1c01a4;                          // 0x001c018c: beq $v1, $v0, 0x1c01a4
    /* nop */                                                   // 0x001c0190: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x001c0194: sw $zero, 0($s0)
    v0 = -0xfb;                                                 // 0x001c0198: addiu $v0, $zero, -0xfb
    goto label_0x1c02fc;                                        // 0x001c019c: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c01a0: sw $v0, 0x24($s0)
label_0x1c01a4:
    v0 = *(int32_t*)((s0) + 0xc4);                              // 0x001c01a4: lw $v0, 0xc4($s0)
    if (v0 != 0) goto label_0x1c01bc;                           // 0x001c01a8: bnez $v0, 0x1c01bc
    /* nop */                                                   // 0x001c01ac: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x001c01b0: sw $zero, 0($s0)
    goto label_0x1c02fc;                                        // 0x001c01b4: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c01b8: sw $zero, 0x24($s0)
label_0x1c01bc:
    v0 = *(int32_t*)(s0);                                       // 0x001c01bc: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001c01c0: addiu $v0, $v0, 1
    goto label_0x1c02fc;                                        // 0x001c01c4: b 0x1c02fc
    *(uint32_t*)(s0) = v0;                                      // 0x001c01c8: sw $v0, 0($s0)
label_0x1c01cc:
    v0 = *(int32_t*)(s0);                                       // 0x001c01cc: lw $v0, 0($s0)
    a0 = s0 + 0x72;                                             // 0x001c01d0: addiu $a0, $s0, 0x72
    a1 = s0 + 0x50;                                             // 0x001c01d4: addiu $a1, $s0, 0x50
    v0 = v0 + 2;                                                // 0x001c01d8: addiu $v0, $v0, 2
    func_0010ac68();  // 10ac68                                // 0x001c01dc: jal 0x10ac68
    *(uint32_t*)(s0) = v0;                                      // 0x001c01e0: sw $v0, 0($s0)
    goto label_0x1c02fc;                                        // 0x001c01e4: b 0x1c02fc
    *(uint32_t*)((s0) + 0xbc) = 0;                              // 0x001c01e8: sw $zero, 0xbc($s0)
label_0x1c01ec:
    *(uint32_t*)(s0) = 0;                                       // 0x001c01ec: sw $zero, 0($s0)
    v0 = -0xff;                                                 // 0x001c01f0: addiu $v0, $zero, -0xff
    goto label_0x1c02fc;                                        // 0x001c01f4: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c01f8: sw $v0, 0x24($s0)
label_0x1c01fc:
    *(uint32_t*)(s0) = 0;                                       // 0x001c01fc: sw $zero, 0($s0)
    v0 = -0x100;                                                // 0x001c0200: addiu $v0, $zero, -0x100
    goto label_0x1c02fc;                                        // 0x001c0204: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0208: sw $v0, 0x24($s0)
label_0x1c020c:
    func_001bf300();  // 1bf300                                // 0x001c020c: jal 0x1bf300
    /* nop */                                                   // 0x001c0210: nop 
    v1 = 1;                                                     // 0x001c0214: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c0254;                          // 0x001c0218: beq $v0, $v1, 0x1c0254
    /* nop */                                                   // 0x001c021c: nop 
    if (v0 == 0) goto label_0x1c0230;                           // 0x001c0220: beqz $v0, 0x1c0230
    /* nop */                                                   // 0x001c0224: nop 
    goto label_0x1c02fc;                                        // 0x001c0228: b 0x1c02fc
    /* nop */                                                   // 0x001c022c: nop 
label_0x1c0230:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0230: sw $zero, 0($s0)
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x001c0234: lw $v1, 0x1c($s0)
    v0 = *(int32_t*)((s0) + 0xbc);                              // 0x001c0238: lw $v0, 0xbc($s0)
    if (v1 != v0) goto label_0x1c024c;                          // 0x001c023c: bne $v1, $v0, 0x1c024c
    v0 = -0x100;                                                // 0x001c0240: addiu $v0, $zero, -0x100
    goto label_0x1c02fc;                                        // 0x001c0244: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c0248: sw $zero, 0x24($s0)
label_0x1c024c:
    goto label_0x1c02fc;                                        // 0x001c024c: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0250: sw $v0, 0x24($s0)
label_0x1c0254:
    *(uint32_t*)(s0) = 0;                                       // 0x001c0254: sw $zero, 0($s0)
    v0 = -0x100;                                                // 0x001c0258: addiu $v0, $zero, -0x100
    goto label_0x1c02fc;                                        // 0x001c025c: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c0260: sw $v0, 0x24($s0)
label_0x1c0264:
    func_001bf210();  // 1bf210                                // 0x001c0264: jal 0x1bf210
    /* nop */                                                   // 0x001c0268: nop 
    v1 = 3;                                                     // 0x001c026c: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1c02f0;                          // 0x001c0270: beq $v0, $v1, 0x1c02f0
    v1 = 2;                                                     // 0x001c0274: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1c02e0;                          // 0x001c0278: beq $v0, $v1, 0x1c02e0
    /* nop */                                                   // 0x001c027c: nop 
    v1 = 1;                                                     // 0x001c0280: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c02a8;                          // 0x001c0284: beq $v0, $v1, 0x1c02a8
    /* nop */                                                   // 0x001c0288: nop 
    if (v0 == 0) goto label_0x1c029c;                           // 0x001c028c: beqz $v0, 0x1c029c
    /* nop */                                                   // 0x001c0290: nop 
    goto label_0x1c02fc;                                        // 0x001c0294: b 0x1c02fc
    /* nop */                                                   // 0x001c0298: nop 
label_0x1c029c:
    *(uint32_t*)(s0) = 0;                                       // 0x001c029c: sw $zero, 0($s0)
    goto label_0x1c02fc;                                        // 0x001c02a0: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c02a4: sw $zero, 0x24($s0)
label_0x1c02a8:
    *(uint32_t*)(s0) = 0;                                       // 0x001c02a8: sw $zero, 0($s0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001c02ac: lw $v1, 0x14($s0)
    v0 = *(int32_t*)((s1) + 0x80);                              // 0x001c02b0: lw $v0, 0x80($s1)
    v1 = v1 << 2;                                               // 0x001c02b4: sll $v1, $v1, 2
    v1 = v1 + s0;                                               // 0x001c02b8: addu $v1, $v1, $s0
    v1 = *(int32_t*)((v1) + 0x40);                              // 0x001c02bc: lw $v1, 0x40($v1)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001c02c0: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1c02d8;                           // 0x001c02c4: bnez $v0, 0x1c02d8
    v0 = -0xfc;                                                 // 0x001c02c8: addiu $v0, $zero, -0xfc
    v0 = -0xfd;                                                 // 0x001c02cc: addiu $v0, $zero, -0xfd
    goto label_0x1c02fc;                                        // 0x001c02d0: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c02d4: sw $v0, 0x24($s0)
label_0x1c02d8:
    goto label_0x1c02fc;                                        // 0x001c02d8: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c02dc: sw $v0, 0x24($s0)
label_0x1c02e0:
    *(uint32_t*)(s0) = 0;                                       // 0x001c02e0: sw $zero, 0($s0)
    v0 = -0xff;                                                 // 0x001c02e4: addiu $v0, $zero, -0xff
    goto label_0x1c02fc;                                        // 0x001c02e8: b 0x1c02fc
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c02ec: sw $v0, 0x24($s0)
label_0x1c02f0:
    *(uint32_t*)(s0) = 0;                                       // 0x001c02f0: sw $zero, 0($s0)
    v0 = -0x100;                                                // 0x001c02f4: addiu $v0, $zero, -0x100
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c02f8: sw $v0, 0x24($s0)
label_0x1c02fc:
label_0x1c0300:
    func_001bfbf0();  // 1bfbf0                                // 0x001c0300: jal 0x1bfbf0
    /* nop */                                                   // 0x001c0304: nop 
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001c030c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c0310: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c0314: jr $ra
    sp = sp + 0x30;                                             // 0x001c0318: addiu $sp, $sp, 0x30
}