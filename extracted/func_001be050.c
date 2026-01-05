void func_001be050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x001be050: addiu $sp, $sp, -0xa0
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001be05c: addu.qb $zero, $sp, $s1
    a0 = sp + 0x80;                                             // 0x001be070: addiu $a0, $sp, 0x80
    func_0018d9e0();  // 18d9e0                                // 0x001be078: jal 0x18d9e0
    a2 = 0x20;                                                  // 0x001be07c: addiu $a2, $zero, 0x20
    a0 = sp + 0x60;                                             // 0x001be080: addiu $a0, $sp, 0x60
    func_0018d9e0();  // 18d9e0                                // 0x001be088: jal 0x18d9e0
    a2 = 0x20;                                                  // 0x001be08c: addiu $a2, $zero, 0x20
    a0 = sp + 0x40;                                             // 0x001be090: addiu $a0, $sp, 0x40
    func_0018d9e0();  // 18d9e0                                // 0x001be098: jal 0x18d9e0
    a2 = 0x20;                                                  // 0x001be09c: addiu $a2, $zero, 0x20
    a0 = 0x31 << 16;                                            // 0x001be0a0: lui $a0, 0x31
    a0 = a0 + 0x5c00;                                           // 0x001be0a8: addiu $a0, $a0, 0x5c00
    func_0018d9e0();  // 18d9e0                                // 0x001be0ac: jal 0x18d9e0
    a2 = 0x20;                                                  // 0x001be0b0: addiu $a2, $zero, 0x20
    a0 = 0x31 << 16;                                            // 0x001be0b4: lui $a0, 0x31
    a0 = a0 + 0x5c20;                                           // 0x001be0bc: addiu $a0, $a0, 0x5c20
    func_0018d9e0();  // 18d9e0                                // 0x001be0c0: jal 0x18d9e0
    a2 = 0x200;                                                 // 0x001be0c4: addiu $a2, $zero, 0x200
    v0 = 0x31 << 16;                                            // 0x001be0c8: lui $v0, 0x31
    v0 = v0 + 0x5c20;                                           // 0x001be0d0: addiu $v0, $v0, 0x5c20
    goto label_0x1be1bc;                                        // 0x001be0d4: b 0x1be1bc
    a3 = -1;                                                    // 0x001be0d8: addiu $a3, $zero, -1
label_0x1be0dc:
    v1 = a1 << 5;                                               // 0x001be0dc: sll $v1, $a1, 5
    a0 = s1 + a0;                                               // 0x001be0e0: addu $a0, $s1, $a0
    v1 = v0 + v1;                                               // 0x001be0e4: addu $v1, $v0, $v1
    a2 = g_00315c20;  // Global at 0x00315c20                   // 0x001be0e8: lw $a2, 0($a0)
    *(uint32_t*)(v1) = a2;                                      // 0x001be0ec: sw $a2, 0($v1)
    a2 = *(int32_t*)(v1);                                       // 0x001be0f0: lw $a2, 0($v1)
    *(uint32_t*)((v1) + 4) = a2;                                // 0x001be0f4: sw $a2, 4($v1)
    a2 = *(int32_t*)(v1);                                       // 0x001be0f8: lw $a2, 0($v1)
    a2 = a2 + 0x10;                                             // 0x001be0fc: addiu $a2, $a2, 0x10
    *(uint32_t*)((v1) + 8) = a2;                                // 0x001be100: sw $a2, 8($v1)
    a2 = *(int32_t*)((v1) + 8);                                 // 0x001be104: lw $a2, 8($v1)
    t0 = *(int32_t*)((a2) + 0x24);                              // 0x001be108: lw $t0, 0x24($a2)
    if (t0 != a3) goto label_0x1be11c;                          // 0x001be10c: bne $t0, $a3, 0x1be11c
    a0 = v1 + 8;                                                // 0x001be110: addiu $a0, $v1, 8
    goto label_0x1be124;                                        // 0x001be114: b 0x1be124
label_0x1be11c:
    a2 = *(int32_t*)(v1);                                       // 0x001be11c: lw $a2, 0($v1)
    a2 = a2 + t0;                                               // 0x001be120: addu $a2, $a2, $t0
label_0x1be124:
    *(uint32_t*)((v1) + 0xc) = a2;                              // 0x001be124: sw $a2, 0xc($v1)
    a2 = g_00315c20;  // Global at 0x00315c20                   // 0x001be128: lw $a2, 0($a0)
    t0 = *(int32_t*)((a2) + 0x14);                              // 0x001be12c: lw $t0, 0x14($a2)
    if (t0 != a3) goto label_0x1be140;                          // 0x001be130: bne $t0, $a3, 0x1be140
    /* nop */                                                   // 0x001be134: nop 
    goto label_0x1be148;                                        // 0x001be138: b 0x1be148
label_0x1be140:
    a2 = *(int32_t*)(v1);                                       // 0x001be140: lw $a2, 0($v1)
    a2 = a2 + t0;                                               // 0x001be144: addu $a2, $a2, $t0
label_0x1be148:
    *(uint32_t*)((v1) + 0x10) = a2;                             // 0x001be148: sw $a2, 0x10($v1)
    a2 = g_00315c20;  // Global at 0x00315c20                   // 0x001be14c: lw $a2, 0($a0)
    t0 = *(int32_t*)((a2) + 0x18);                              // 0x001be150: lw $t0, 0x18($a2)
    if (t0 != a3) goto label_0x1be164;                          // 0x001be154: bne $t0, $a3, 0x1be164
    /* nop */                                                   // 0x001be158: nop 
    goto label_0x1be16c;                                        // 0x001be15c: b 0x1be16c
label_0x1be164:
    a2 = *(int32_t*)(v1);                                       // 0x001be164: lw $a2, 0($v1)
    a2 = a2 + t0;                                               // 0x001be168: addu $a2, $a2, $t0
label_0x1be16c:
    *(uint32_t*)((v1) + 0x14) = a2;                             // 0x001be16c: sw $a2, 0x14($v1)
    a2 = g_00315c20;  // Global at 0x00315c20                   // 0x001be170: lw $a2, 0($a0)
    t0 = *(int32_t*)((a2) + 0x1c);                              // 0x001be174: lw $t0, 0x1c($a2)
    if (t0 != a3) goto label_0x1be188;                          // 0x001be178: bne $t0, $a3, 0x1be188
    /* nop */                                                   // 0x001be17c: nop 
    goto label_0x1be190;                                        // 0x001be180: b 0x1be190
label_0x1be188:
    a2 = *(int32_t*)(v1);                                       // 0x001be188: lw $a2, 0($v1)
    a2 = a2 + t0;                                               // 0x001be18c: addu $a2, $a2, $t0
label_0x1be190:
    *(uint32_t*)((v1) + 0x18) = a2;                             // 0x001be190: sw $a2, 0x18($v1)
    a0 = g_00315c20;  // Global at 0x00315c20                   // 0x001be194: lw $a0, 0($a0)
    a2 = g_00315c40;  // Global at 0x00315c40                   // 0x001be198: lw $a2, 0x20($a0)
    if (a2 != a3) goto label_0x1be1ac;                          // 0x001be19c: bne $a2, $a3, 0x1be1ac
    /* nop */                                                   // 0x001be1a0: nop 
    goto label_0x1be1b4;                                        // 0x001be1a4: b 0x1be1b4
label_0x1be1ac:
    a0 = *(int32_t*)(v1);                                       // 0x001be1ac: lw $a0, 0($v1)
    a0 = a0 + a2;                                               // 0x001be1b0: addu $a0, $a0, $a2
label_0x1be1b4:
    *(uint32_t*)((v1) + 0x1c) = a0;                             // 0x001be1b4: sw $a0, 0x1c($v1)
    a1 = a1 + 1;                                                // 0x001be1b8: addiu $a1, $a1, 1
label_0x1be1bc:
    v1 = ((unsigned)a1 < (unsigned)s2) ? 1 : 0;                 // 0x001be1bc: sltu $v1, $a1, $s2
    if (v1 != 0) goto label_0x1be0dc;                           // 0x001be1c0: bnez $v1, 0x1be0dc
    a0 = a1 << 2;                                               // 0x001be1c4: sll $a0, $a1, 2
    at = 0x31 << 16;                                            // 0x001be1c8: lui $at, 0x31
    a1 = 0x10;                                                  // 0x001be1cc: addiu $a1, $zero, 0x10
    g_00315c00 = s0;  // Global at 0x00315c00                   // 0x001be1d0: sw $s0, 0x5c00($at)
    a0 = -1;                                                    // 0x001be1d4: addiu $a0, $zero, -1
    at = 0x31 << 16;                                            // 0x001be1d8: lui $at, 0x31
    v1 = g_00315c00;  // Global at 0x00315c00                   // 0x001be1e0: lw $v1, 0x5c00($at)
    at = 0x31 << 16;                                            // 0x001be1e4: lui $at, 0x31
    a2 = g_00315c24;  // Global at 0x00315c24                   // 0x001be1e8: lw $a2, 0x5c24($at)
    at = 0x31 << 16;                                            // 0x001be1ec: lui $at, 0x31
    g_00315c04 = v1;  // Global at 0x00315c04                   // 0x001be1f0: sw $v1, 0x5c04($at)
    at = 0x31 << 16;                                            // 0x001be1f4: lui $at, 0x31
    v1 = *(int32_t*)(a2);                                       // 0x001be1f8: lw $v1, 0($a2)
    a3 = g_00315c04;  // Global at 0x00315c04                   // 0x001be1fc: lw $a3, 0x5c04($at)
    g_00315c21 = v1;  // Global at 0x00315c21                   // 0x001be200: sw $v1, 0($a3)
    at = 0x31 << 16;                                            // 0x001be204: lui $at, 0x31
    v1 = *(int32_t*)((a2) + 4);                                 // 0x001be208: lw $v1, 4($a2)
    g_00315c25 = v1;  // Global at 0x00315c25                   // 0x001be20c: sw $v1, 4($a3)
    v1 = *(int32_t*)((a2) + 8);                                 // 0x001be210: lw $v1, 8($a2)
    g_00315c29 = v1;  // Global at 0x00315c29                   // 0x001be214: sw $v1, 8($a3)
    v1 = *(uint16_t*)((a2) + 0xc);                              // 0x001be218: lhu $v1, 0xc($a2)
    g_00315c2d = v1;  // Global at 0x00315c2d                   // 0x001be21c: sh $v1, 0xc($a3)
    v1 = *(uint8_t*)((a2) + 0xe);                               // 0x001be220: lbu $v1, 0xe($a2)
    g_00315c2f = v1;  // Global at 0x00315c2f                   // 0x001be224: sb $v1, 0xe($a3)
    v1 = *(uint8_t*)((a2) + 0xf);                               // 0x001be228: lbu $v1, 0xf($a2)
    g_00315c30 = v1;  // Global at 0x00315c30                   // 0x001be22c: sb $v1, 0xf($a3)
    v1 = g_00315c04;  // Global at 0x00315c04                   // 0x001be230: lw $v1, 0x5c04($at)
    *(uint32_t*)((v1) + 8) = a1;                                // 0x001be234: sw $a1, 8($v1)
    at = 0x31 << 16;                                            // 0x001be238: lui $at, 0x31
    v1 = g_00315c00;  // Global at 0x00315c00                   // 0x001be23c: lw $v1, 0x5c00($at)
    at = 0x31 << 16;                                            // 0x001be240: lui $at, 0x31
    v1 = v1 + 0x10;                                             // 0x001be244: addiu $v1, $v1, 0x10
    a1 = g_00315c28;  // Global at 0x00315c28                   // 0x001be248: lw $a1, 0x5c28($at)
    at = 0x31 << 16;                                            // 0x001be24c: lui $at, 0x31
    g_00315c08 = v1;  // Global at 0x00315c08                   // 0x001be250: sw $v1, 0x5c08($at)
    at = 0x31 << 16;                                            // 0x001be254: lui $at, 0x31
    v1 = g_00315cc7;  // Global at 0x00315cc7                   // 0x001be258: lw $v1, 0($a1)
    a2 = g_00315c08;  // Global at 0x00315c08                   // 0x001be25c: lw $a2, 0x5c08($at)
    *(uint32_t*)(a2) = v1;                                      // 0x001be260: sw $v1, 0($a2)
    at = 0x31 << 16;                                            // 0x001be264: lui $at, 0x31
    v1 = g_00315ccb;  // Global at 0x00315ccb                   // 0x001be268: lw $v1, 4($a1)
    *(uint32_t*)((a2) + 4) = v1;                                // 0x001be26c: sw $v1, 4($a2)
    v1 = g_00315ccf;  // Global at 0x00315ccf                   // 0x001be270: lw $v1, 8($a1)
    *(uint32_t*)((a2) + 8) = v1;                                // 0x001be274: sw $v1, 8($a2)
    v1 = g_00315cd3;  // Global at 0x00315cd3                   // 0x001be278: lw $v1, 0xc($a1)
    *(uint32_t*)((a2) + 0xc) = v1;                              // 0x001be27c: sw $v1, 0xc($a2)
    v1 = g_00315cd7;  // Global at 0x00315cd7                   // 0x001be280: lw $v1, 0x10($a1)
    *(uint32_t*)((a2) + 0x10) = v1;                             // 0x001be284: sw $v1, 0x10($a2)
    v1 = g_00315cdb;  // Global at 0x00315cdb                   // 0x001be288: lw $v1, 0x14($a1)
    *(uint32_t*)((a2) + 0x14) = v1;                             // 0x001be28c: sw $v1, 0x14($a2)
    v1 = g_00315cdf;  // Global at 0x00315cdf                   // 0x001be290: lw $v1, 0x18($a1)
    *(uint32_t*)((a2) + 0x18) = v1;                             // 0x001be294: sw $v1, 0x18($a2)
    v1 = g_00315ce3;  // Global at 0x00315ce3                   // 0x001be298: lw $v1, 0x1c($a1)
    *(uint32_t*)((a2) + 0x1c) = v1;                             // 0x001be29c: sw $v1, 0x1c($a2)
    v1 = g_00315ce7;  // Global at 0x00315ce7                   // 0x001be2a0: lw $v1, 0x20($a1)
    *(uint32_t*)((a2) + 0x20) = v1;                             // 0x001be2a4: sw $v1, 0x20($a2)
    v1 = g_00315ceb;  // Global at 0x00315ceb                   // 0x001be2a8: lw $v1, 0x24($a1)
    *(uint32_t*)((a2) + 0x24) = v1;                             // 0x001be2ac: sw $v1, 0x24($a2)
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be2b0: lw $v1, 0x5c08($at)
    *(uint32_t*)((v1) + 0xc) = a0;                              // 0x001be2b4: sw $a0, 0xc($v1)
    at = 0x31 << 16;                                            // 0x001be2b8: lui $at, 0x31
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be2bc: lw $v1, 0x5c08($at)
    *(uint32_t*)((v1) + 0x10) = a0;                             // 0x001be2c0: sw $a0, 0x10($v1)
    at = 0x31 << 16;                                            // 0x001be2c4: lui $at, 0x31
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be2c8: lw $v1, 0x5c08($at)
    *(uint32_t*)((v1) + 0x14) = a0;                             // 0x001be2cc: sw $a0, 0x14($v1)
    at = 0x31 << 16;                                            // 0x001be2d0: lui $at, 0x31
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be2d4: lw $v1, 0x5c08($at)
    *(uint32_t*)((v1) + 0x18) = a0;                             // 0x001be2d8: sw $a0, 0x18($v1)
    at = 0x31 << 16;                                            // 0x001be2dc: lui $at, 0x31
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be2e0: lw $v1, 0x5c08($at)
    *(uint32_t*)((v1) + 0x1c) = a0;                             // 0x001be2e4: sw $a0, 0x1c($v1)
    at = 0x31 << 16;                                            // 0x001be2e8: lui $at, 0x31
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be2ec: lw $v1, 0x5c08($at)
    *(uint32_t*)((v1) + 0x20) = a0;                             // 0x001be2f0: sw $a0, 0x20($v1)
    at = 0x31 << 16;                                            // 0x001be2f4: lui $at, 0x31
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be2f8: lw $v1, 0x5c08($at)
    *(uint32_t*)((v1) + 0x24) = a0;                             // 0x001be2fc: sw $a0, 0x24($v1)
    at = 0x31 << 16;                                            // 0x001be300: lui $at, 0x31
    v1 = g_00315c08;  // Global at 0x00315c08                   // 0x001be304: lw $v1, 0x5c08($at)
    a1 = v1 + 0x28;                                             // 0x001be308: addiu $a1, $v1, 0x28
    a0 = 0xff;                                                  // 0x001be30c: addiu $a0, $zero, 0xff
label_0x1be310:
    v0 = v0 + 1;                                                // 0x001be310: addiu $v0, $v0, 1
    g_00315cc7 = a0;  // Global at 0x00315cc7                   // 0x001be314: sb $a0, 0($a1)
    v1 = ((unsigned)v0 < (unsigned)0x18) ? 1 : 0;               // 0x001be318: sltiu $v1, $v0, 0x18
    a1 = a1 + 1;                                                // 0x001be31c: addiu $a1, $a1, 1
    /* nop */                                                   // 0x001be320: nop 
    if (v1 != 0) goto label_0x1be310;                           // 0x001be324: bnez $v1, 0x1be310
    /* nop */                                                   // 0x001be328: nop 
    at = 0x31 << 16;                                            // 0x001be32c: lui $at, 0x31
    a2 = -1;                                                    // 0x001be330: addiu $a2, $zero, -1
    g_00315c1c = a1;  // Global at 0x00315c1c                   // 0x001be334: sw $a1, 0x5c1c($at)
    at = 0x31 << 16;                                            // 0x001be33c: lui $at, 0x31
    a1 = 0x31 << 16;                                            // 0x001be340: lui $a1, 0x31
    v1 = g_00315c3c;  // Global at 0x00315c3c                   // 0x001be344: lw $v1, 0x5c3c($at)
    a1 = a1 + 0x5c20;                                           // 0x001be348: addiu $a1, $a1, 0x5c20
    at = 0x31 << 16;                                            // 0x001be34c: lui $at, 0x31
    v0 = *(int32_t*)(v1);                                       // 0x001be350: lw $v0, 0($v1)
    a0 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be354: lw $a0, 0x5c1c($at)
    g_00315c20 = v0;  // Global at 0x00315c20                   // 0x001be358: sw $v0, 0($a0)
    at = 0x31 << 16;                                            // 0x001be35c: lui $at, 0x31
    v0 = *(int32_t*)((v1) + 4);                                 // 0x001be360: lw $v0, 4($v1)
    g_00315c24 = v0;  // Global at 0x00315c24                   // 0x001be364: sw $v0, 4($a0)
    v0 = *(int32_t*)((v1) + 8);                                 // 0x001be368: lw $v0, 8($v1)
    g_00315c28 = v0;  // Global at 0x00315c28                   // 0x001be36c: sw $v0, 8($a0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x001be370: lw $v0, 0xc($v1)
    g_00315c2c = v0;  // Global at 0x00315c2c                   // 0x001be374: sw $v0, 0xc($a0)
    v0 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be378: lw $v0, 0x5c1c($at)
    g_00315c29 = a2;  // Global at 0x00315c29                   // 0x001be37c: sw $a2, 8($v0)
    at = 0x31 << 16;                                            // 0x001be380: lui $at, 0x31
    v0 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be384: lw $v0, 0x5c1c($at)
    goto label_0x1be3d4;                                        // 0x001be388: b 0x1be3d4
    g_00315c2d = 0;  // Global at 0x00315c2d                    // 0x001be38c: sw $zero, 0xc($v0)
label_0x1be390:
    v0 = a1 + v0;                                               // 0x001be390: addu $v0, $a1, $v0
    v0 = g_00315c3d;  // Global at 0x00315c3d                   // 0x001be394: lw $v0, 0x1c($v0)
    if (v0 == a2) goto label_0x1be3d0;                          // 0x001be398: beq $v0, $a2, 0x1be3d0
    /* nop */                                                   // 0x001be39c: nop 
    v0 = g_00315c2d;  // Global at 0x00315c2d                   // 0x001be3a0: lw $v0, 0xc($v0)
    v1 = a3 << 1;                                               // 0x001be3a4: sll $v1, $a3, 1
    v1 = v1 + sp;                                               // 0x001be3a8: addu $v1, $v1, $sp
    at = 0x31 << 16;                                            // 0x001be3ac: lui $at, 0x31
    v1 = v1 + 0x80;                                             // 0x001be3b0: addiu $v1, $v1, 0x80
    v0 = v0 + 1;                                                // 0x001be3b4: addiu $v0, $v0, 1
    *(uint16_t*)(v1) = v0;                                      // 0x001be3b8: sh $v0, 0($v1)
    a0 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be3bc: lw $a0, 0x5c1c($at)
    v1 = *(uint16_t*)(v1);                                      // 0x001be3c0: lhu $v1, 0($v1)
    v0 = g_00315c2c;  // Global at 0x00315c2c                   // 0x001be3c4: lw $v0, 0xc($a0)
    v0 = v0 + v1;                                               // 0x001be3c8: addu $v0, $v0, $v1
    g_00315c2c = v0;  // Global at 0x00315c2c                   // 0x001be3cc: sw $v0, 0xc($a0)
label_0x1be3d0:
    a3 = a3 + 1;                                                // 0x001be3d0: addiu $a3, $a3, 1
label_0x1be3d4:
    v0 = ((unsigned)a3 < (unsigned)s2) ? 1 : 0;                 // 0x001be3d4: sltu $v0, $a3, $s2
    if (v0 != 0) goto label_0x1be390;                           // 0x001be3d8: bnez $v0, 0x1be390
    v0 = a3 << 5;                                               // 0x001be3dc: sll $v0, $a3, 5
    at = 0x31 << 16;                                            // 0x001be3e0: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001be3e4: lui $a0, 0x31
    a3 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be3e8: lw $a3, 0x5c1c($at)
    v1 = -1;                                                    // 0x001be3f4: addiu $v1, $zero, -1
    a0 = a0 + 0x5c20;                                           // 0x001be3f8: addiu $a0, $a0, 0x5c20
    a2 = g_00315c2e;  // Global at 0x00315c2e                   // 0x001be3fc: lw $a2, 0xc($a3)
    at = 0x31 << 16;                                            // 0x001be400: lui $at, 0x31
    a2 = a2 + -1;                                               // 0x001be404: addiu $a2, $a2, -1
    g_00315c2e = a2;  // Global at 0x00315c2e                   // 0x001be408: sw $a2, 0xc($a3)
    a2 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be40c: lw $a2, 0x5c1c($at)
    t2 = a2 + 0x10;                                             // 0x001be410: addiu $t2, $a2, 0x10
    a2 = *(int32_t*)((a2) + 0xc);                               // 0x001be414: lw $a2, 0xc($a2)
    a2 = a2 + 1;                                                // 0x001be418: addiu $a2, $a2, 1
    a2 = a2 << 2;                                               // 0x001be41c: sll $a2, $a2, 2
    goto label_0x1be4dc;                                        // 0x001be420: b 0x1be4dc
    t1 = t2 + a2;                                               // 0x001be424: addu $t1, $t2, $a2
label_0x1be428:
    a2 = a0 + a2;                                               // 0x001be428: addu $a2, $a0, $a2
    a3 = *(int32_t*)((a2) + 0x1c);                              // 0x001be42c: lw $a3, 0x1c($a2)
    if (a3 == v1) goto label_0x1be4d8;                          // 0x001be430: beq $a3, $v1, 0x1be4d8
    t0 = a2 + 0x1c;                                             // 0x001be434: addiu $t0, $a2, 0x1c
    a3 = a1 << 1;                                               // 0x001be438: sll $a3, $a1, 1
    a3 = a3 + sp;                                               // 0x001be440: addu $a3, $a3, $sp
    goto label_0x1be4bc;                                        // 0x001be444: b 0x1be4bc
    a3 = a3 + 0x80;                                             // 0x001be448: addiu $a3, $a3, 0x80
label_0x1be44c:
    t5 = g_00315cd5;  // Global at 0x00315cd5                   // 0x001be44c: lw $t5, 0($t0)
    t4 = t3 << 2;                                               // 0x001be450: sll $t4, $t3, 2
    t4 = t5 + t4;                                               // 0x001be454: addu $t4, $t5, $t4
    t4 = g_00315cb0;  // Global at 0x00315cb0                   // 0x001be458: lw $t4, 0x10($t4)
    if (t4 == v1) goto label_0x1be4b0;                          // 0x001be45c: beq $t4, $v1, 0x1be4b0
    /* nop */                                                   // 0x001be460: nop 
    t5 = t4 + t5;                                               // 0x001be464: addu $t5, $t4, $t5
    at = 0x31 << 16;                                            // 0x001be468: lui $at, 0x31
    t4 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be46c: lw $t4, 0x5c1c($at)
    t4 = t1 - t4;                                               // 0x001be470: subu $t4, $t1, $t4
    g_00315d10 = t4;  // Global at 0x00315d10                   // 0x001be474: sw $t4, 0($t2)
    t4 = g_00315caa;  // Global at 0x00315caa                   // 0x001be478: lw $t4, 0($t5)
    t2 = t2 + 4;                                                // 0x001be47c: addiu $t2, $t2, 4
    g_00315cae = t4;  // Global at 0x00315cae                   // 0x001be480: sw $t4, 0($t1)
    t4 = g_00315cae;  // Global at 0x00315cae                   // 0x001be484: lhu $t4, 4($t5)
    g_00315cb2 = t4;  // Global at 0x00315cb2                   // 0x001be488: sh $t4, 4($t1)
    t4 = g_00315cb0;  // Global at 0x00315cb0                   // 0x001be48c: lbu $t4, 6($t5)
    g_00315cb4 = t4;  // Global at 0x00315cb4                   // 0x001be490: sb $t4, 6($t1)
    t4 = g_00315cb1;  // Global at 0x00315cb1                   // 0x001be494: lbu $t4, 7($t5)
    g_00315cb5 = t4;  // Global at 0x00315cb5                   // 0x001be498: sb $t4, 7($t1)
    t4 = g_00315cae;  // Global at 0x00315cae                   // 0x001be49c: lw $t4, 0($t1)
    t4 = t4 + v0;                                               // 0x001be4a0: addu $t4, $t4, $v0
    g_00315cae = t4;  // Global at 0x00315cae                   // 0x001be4a4: sw $t4, 0($t1)
    goto label_0x1be4b8;                                        // 0x001be4a8: b 0x1be4b8
    t1 = t1 + 8;                                                // 0x001be4ac: addiu $t1, $t1, 8
label_0x1be4b0:
    g_00315d14 = t4;  // Global at 0x00315d14                   // 0x001be4b0: sw $t4, 0($t2)
    t2 = t2 + 4;                                                // 0x001be4b4: addiu $t2, $t2, 4
label_0x1be4b8:
    t3 = t3 + 1;                                                // 0x001be4b8: addiu $t3, $t3, 1
label_0x1be4bc:
    t4 = g_00315ca2;  // Global at 0x00315ca2                   // 0x001be4bc: lhu $t4, 0($a3)
    t4 = ((unsigned)t3 < (unsigned)t4) ? 1 : 0;                 // 0x001be4c0: sltu $t4, $t3, $t4
    if (t4 != 0) goto label_0x1be44c;                           // 0x001be4c4: bnez $t4, 0x1be44c
    /* nop */                                                   // 0x001be4c8: nop 
    a2 = *(int32_t*)((a2) + 8);                                 // 0x001be4cc: lw $a2, 8($a2)
    a2 = *(int32_t*)((a2) + 0x10);                              // 0x001be4d0: lw $a2, 0x10($a2)
    v0 = v0 + a2;                                               // 0x001be4d4: addu $v0, $v0, $a2
label_0x1be4d8:
    a1 = a1 + 1;                                                // 0x001be4d8: addiu $a1, $a1, 1
label_0x1be4dc:
    a2 = ((unsigned)a1 < (unsigned)s2) ? 1 : 0;                 // 0x001be4dc: sltu $a2, $a1, $s2
    if (a2 != 0) goto label_0x1be428;                           // 0x001be4e0: bnez $a2, 0x1be428
    a2 = a1 << 5;                                               // 0x001be4e4: sll $a2, $a1, 5
    at = 0x31 << 16;                                            // 0x001be4e8: lui $at, 0x31
    v1 = 0x10;                                                  // 0x001be4ec: addiu $v1, $zero, 0x10
    a0 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be4f0: lw $a0, 0x5c1c($at)
    a0 = t1 - a0;                                               // 0x001be4f4: subu $a0, $t1, $a0
    a0 = a0 & 0xf;                                              // 0x001be4f8: andi $a0, $a0, 0xf
    a2 = v1 - a0;                                               // 0x001be4fc: subu $a2, $v1, $a0
    if (a2 == v1) goto label_0x1be530;                          // 0x001be500: beq $a2, $v1, 0x1be530
    /* nop */                                                   // 0x001be504: nop 
    goto label_0x1be520;                                        // 0x001be50c: b 0x1be520
    a0 = 0xff;                                                  // 0x001be510: addiu $a0, $zero, 0xff
label_0x1be514:
    g_00315cb6 = a0;  // Global at 0x00315cb6                   // 0x001be514: sb $a0, 0($t1)
    a1 = a1 + 1;                                                // 0x001be518: addiu $a1, $a1, 1
    t1 = t1 + 1;                                                // 0x001be51c: addiu $t1, $t1, 1
label_0x1be520:
    v1 = ((unsigned)a1 < (unsigned)a2) ? 1 : 0;                 // 0x001be520: sltu $v1, $a1, $a2
    /* nop */                                                   // 0x001be524: nop 
    if (v1 != 0) goto label_0x1be514;                           // 0x001be528: bnez $v1, 0x1be514
    /* nop */                                                   // 0x001be52c: nop 
label_0x1be530:
    at = 0x31 << 16;                                            // 0x001be530: lui $at, 0x31
    a3 = 0x31 << 16;                                            // 0x001be534: lui $a3, 0x31
    a1 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001be538: lw $a1, 0x5c1c($at)
    t0 = -1;                                                    // 0x001be53c: addiu $t0, $zero, -1
    a3 = a3 + 0x5c20;                                           // 0x001be544: addiu $a3, $a3, 0x5c20
    a0 = t1 - a1;                                               // 0x001be548: subu $a0, $t1, $a1
    at = 0x31 << 16;                                            // 0x001be54c: lui $at, 0x31
    g_00315c2a = a0;  // Global at 0x00315c2a                   // 0x001be550: sw $a0, 8($a1)
    g_00315c18 = t1;  // Global at 0x00315c18                   // 0x001be554: sw $t1, 0x5c18($at)
    at = 0x31 << 16;                                            // 0x001be558: lui $at, 0x31
    a1 = g_00315c38;  // Global at 0x00315c38                   // 0x001be55c: lw $a1, 0x5c38($at)
    at = 0x31 << 16;                                            // 0x001be560: lui $at, 0x31
    a0 = g_00315c22;  // Global at 0x00315c22                   // 0x001be564: lw $a0, 0($a1)
    a2 = g_00315c18;  // Global at 0x00315c18                   // 0x001be568: lw $a2, 0x5c18($at)
    *(uint32_t*)(a2) = a0;                                      // 0x001be56c: sw $a0, 0($a2)
    at = 0x31 << 16;                                            // 0x001be570: lui $at, 0x31
    a0 = g_00315c26;  // Global at 0x00315c26                   // 0x001be574: lw $a0, 4($a1)
    *(uint32_t*)((a2) + 4) = a0;                                // 0x001be578: sw $a0, 4($a2)
    a0 = g_00315c2a;  // Global at 0x00315c2a                   // 0x001be57c: lw $a0, 8($a1)
    *(uint32_t*)((a2) + 8) = a0;                                // 0x001be580: sw $a0, 8($a2)
    a0 = g_00315c2e;  // Global at 0x00315c2e                   // 0x001be584: lw $a0, 0xc($a1)
    *(uint32_t*)((a2) + 0xc) = a0;                              // 0x001be588: sw $a0, 0xc($a2)
    a0 = g_00315c18;  // Global at 0x00315c18                   // 0x001be58c: lw $a0, 0x5c18($at)
    g_00315c28 = t0;  // Global at 0x00315c28                   // 0x001be590: sw $t0, 8($a0)
    at = 0x31 << 16;                                            // 0x001be594: lui $at, 0x31
    a0 = g_00315c18;  // Global at 0x00315c18                   // 0x001be598: lw $a0, 0x5c18($at)
    goto label_0x1be5e8;                                        // 0x001be59c: b 0x1be5e8
    g_00315c2c = 0;  // Global at 0x00315c2c                    // 0x001be5a0: sw $zero, 0xc($a0)
label_0x1be5a4:
    a0 = a3 + a0;                                               // 0x001be5a4: addu $a0, $a3, $a0
    a0 = g_00315c38;  // Global at 0x00315c38                   // 0x001be5a8: lw $a0, 0x18($a0)
    if (a0 == t0) goto label_0x1be5e4;                          // 0x001be5ac: beq $a0, $t0, 0x1be5e4
    /* nop */                                                   // 0x001be5b0: nop 
    a0 = g_00315c2c;  // Global at 0x00315c2c                   // 0x001be5b4: lw $a0, 0xc($a0)
    a1 = v1 << 1;                                               // 0x001be5b8: sll $a1, $v1, 1
    a1 = a1 + sp;                                               // 0x001be5bc: addu $a1, $a1, $sp
    at = 0x31 << 16;                                            // 0x001be5c0: lui $at, 0x31
    a1 = a1 + 0x60;                                             // 0x001be5c4: addiu $a1, $a1, 0x60
    a0 = a0 + 1;                                                // 0x001be5c8: addiu $a0, $a0, 1
    g_00315c82 = a0;  // Global at 0x00315c82                   // 0x001be5cc: sh $a0, 0($a1)
    a2 = g_00315c18;  // Global at 0x00315c18                   // 0x001be5d0: lw $a2, 0x5c18($at)
    a1 = g_00315c82;  // Global at 0x00315c82                   // 0x001be5d4: lhu $a1, 0($a1)
    a0 = *(int32_t*)((a2) + 0xc);                               // 0x001be5d8: lw $a0, 0xc($a2)
    a0 = a0 + a1;                                               // 0x001be5dc: addu $a0, $a0, $a1
    *(uint32_t*)((a2) + 0xc) = a0;                              // 0x001be5e0: sw $a0, 0xc($a2)
label_0x1be5e4:
    v1 = v1 + 1;                                                // 0x001be5e4: addiu $v1, $v1, 1
label_0x1be5e8:
    a0 = ((unsigned)v1 < (unsigned)s2) ? 1 : 0;                 // 0x001be5e8: sltu $a0, $v1, $s2
    if (a0 != 0) goto label_0x1be5a4;                           // 0x001be5ec: bnez $a0, 0x1be5a4
    a0 = v1 << 5;                                               // 0x001be5f0: sll $a0, $v1, 5
    at = 0x31 << 16;                                            // 0x001be5f4: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001be5f8: lui $a0, 0x31
    a3 = g_00315c18;  // Global at 0x00315c18                   // 0x001be5fc: lw $a3, 0x5c18($at)
    v1 = -1;                                                    // 0x001be608: addiu $v1, $zero, -1
    a0 = a0 + 0x5c20;                                           // 0x001be60c: addiu $a0, $a0, 0x5c20
    a1 = g_00315c2c;  // Global at 0x00315c2c                   // 0x001be610: lw $a1, 0xc($a3)
    at = 0x31 << 16;                                            // 0x001be614: lui $at, 0x31
    a1 = a1 + -1;                                               // 0x001be618: addiu $a1, $a1, -1
    g_00315c2c = a1;  // Global at 0x00315c2c                   // 0x001be61c: sw $a1, 0xc($a3)
    a1 = g_00315c18;  // Global at 0x00315c18                   // 0x001be620: lw $a1, 0x5c18($at)
    t4 = a1 + 0x10;                                             // 0x001be624: addiu $t4, $a1, 0x10
    a1 = g_00315c8d;  // Global at 0x00315c8d                   // 0x001be628: lw $a1, 0xc($a1)
    a1 = a1 + 1;                                                // 0x001be62c: addiu $a1, $a1, 1
    a1 = a1 << 2;                                               // 0x001be630: sll $a1, $a1, 2
    goto label_0x1be7ec;                                        // 0x001be634: b 0x1be7ec
    t2 = t4 + a1;                                               // 0x001be638: addu $t2, $t4, $a1
label_0x1be63c:
    a1 = a0 + a1;                                               // 0x001be63c: addu $a1, $a0, $a1
    t1 = a1 + 0x18;                                             // 0x001be640: addiu $t1, $a1, 0x18
    a1 = g_00315c9a;  // Global at 0x00315c9a                   // 0x001be644: lw $a1, 0x18($a1)
    if (a1 == v1) goto label_0x1be7e8;                          // 0x001be648: beq $a1, $v1, 0x1be7e8
    a3 = a2 << 1;                                               // 0x001be64c: sll $a3, $a2, 1
    t0 = a3 + sp;                                               // 0x001be654: addu $t0, $a3, $sp
    goto label_0x1be7c8;                                        // 0x001be658: b 0x1be7c8
    t0 = t0 + 0x60;                                             // 0x001be65c: addiu $t0, $t0, 0x60
label_0x1be660:
    t6 = g_00315c9a;  // Global at 0x00315c9a                   // 0x001be660: lw $t6, 0($t1)
    t3 = a1 << 2;                                               // 0x001be664: sll $t3, $a1, 2
    t3 = t6 + t3;                                               // 0x001be668: addu $t3, $t6, $t3
    t3 = *(int32_t*)((t3) + 0x10);                              // 0x001be66c: lw $t3, 0x10($t3)
    if (t3 == v1) goto label_0x1be7bc;                          // 0x001be670: beq $t3, $v1, 0x1be7bc
    /* nop */                                                   // 0x001be674: nop 
    t3 = t3 + t6;                                               // 0x001be678: addu $t3, $t3, $t6
    at = 0x31 << 16;                                            // 0x001be67c: lui $at, 0x31
    t6 = g_00315c18;  // Global at 0x00315c18                   // 0x001be680: lw $t6, 0x5c18($at)
    t6 = t2 - t6;                                               // 0x001be684: subu $t6, $t2, $t6
    g_00315c91 = t6;  // Global at 0x00315c91                   // 0x001be688: sw $t6, 0($t4)
    t6 = *(uint16_t*)(t3);                                      // 0x001be68c: lhu $t6, 0($t3)
    t4 = t4 + 4;                                                // 0x001be690: addiu $t4, $t4, 4
    g_00315d18 = t6;  // Global at 0x00315d18                   // 0x001be694: sh $t6, 0($t2)
    t6 = *(uint8_t*)((t3) + 2);                                 // 0x001be698: lbu $t6, 2($t3)
    g_00315d1a = t6;  // Global at 0x00315d1a                   // 0x001be69c: sb $t6, 2($t2)
    t6 = *(uint8_t*)((t3) + 3);                                 // 0x001be6a0: lbu $t6, 3($t3)
    g_00315d1b = t6;  // Global at 0x00315d1b                   // 0x001be6a4: sb $t6, 3($t2)
    t6 = *(uint8_t*)((t3) + 4);                                 // 0x001be6a8: lbu $t6, 4($t3)
    g_00315d1c = t6;  // Global at 0x00315d1c                   // 0x001be6ac: sb $t6, 4($t2)
    t6 = *(int8_t*)((t3) + 5);                                  // 0x001be6b0: lb $t6, 5($t3)
    g_00315d1d = t6;  // Global at 0x00315d1d                   // 0x001be6b4: sb $t6, 5($t2)
    t6 = *(uint8_t*)((t3) + 6);                                 // 0x001be6b8: lbu $t6, 6($t3)
    g_00315d1e = t6;  // Global at 0x00315d1e                   // 0x001be6bc: sb $t6, 6($t2)
    t6 = *(uint8_t*)((t3) + 7);                                 // 0x001be6c0: lbu $t6, 7($t3)
    g_00315d1f = t6;  // Global at 0x00315d1f                   // 0x001be6c4: sb $t6, 7($t2)
    t6 = *(int8_t*)((t3) + 8);                                  // 0x001be6c8: lb $t6, 8($t3)
    g_00315d20 = t6;  // Global at 0x00315d20                   // 0x001be6cc: sb $t6, 8($t2)
    t6 = *(uint8_t*)((t3) + 9);                                 // 0x001be6d0: lbu $t6, 9($t3)
    g_00315d21 = t6;  // Global at 0x00315d21                   // 0x001be6d4: sb $t6, 9($t2)
    t6 = *(uint8_t*)((t3) + 0xa);                               // 0x001be6d8: lbu $t6, 0xa($t3)
    g_00315d22 = t6;  // Global at 0x00315d22                   // 0x001be6dc: sb $t6, 0xa($t2)
    t6 = *(uint8_t*)((t3) + 0xb);                               // 0x001be6e0: lbu $t6, 0xb($t3)
    g_00315d23 = t6;  // Global at 0x00315d23                   // 0x001be6e4: sb $t6, 0xb($t2)
    t6 = *(int8_t*)((t3) + 0xc);                                // 0x001be6e8: lb $t6, 0xc($t3)
    g_00315d24 = t6;  // Global at 0x00315d24                   // 0x001be6ec: sb $t6, 0xc($t2)
    t6 = *(int8_t*)((t3) + 0xd);                                // 0x001be6f0: lb $t6, 0xd($t3)
    g_00315d25 = t6;  // Global at 0x00315d25                   // 0x001be6f4: sb $t6, 0xd($t2)
    t6 = *(uint8_t*)((t3) + 0xe);                               // 0x001be6f8: lbu $t6, 0xe($t3)
    g_00315d26 = t6;  // Global at 0x00315d26                   // 0x001be6fc: sb $t6, 0xe($t2)
    t6 = *(uint8_t*)((t3) + 0xf);                               // 0x001be700: lbu $t6, 0xf($t3)
    g_00315d27 = t6;  // Global at 0x00315d27                   // 0x001be704: sb $t6, 0xf($t2)
    t6 = *(uint8_t*)((t3) + 0x10);                              // 0x001be708: lbu $t6, 0x10($t3)
    g_00315d28 = t6;  // Global at 0x00315d28                   // 0x001be70c: sb $t6, 0x10($t2)
    t6 = *(uint8_t*)((t3) + 0x11);                              // 0x001be710: lbu $t6, 0x11($t3)
    g_00315d29 = t6;  // Global at 0x00315d29                   // 0x001be714: sb $t6, 0x11($t2)
    t6 = *(uint16_t*)((t3) + 0x12);                             // 0x001be718: lhu $t6, 0x12($t3)
    g_00315d2a = t6;  // Global at 0x00315d2a                   // 0x001be71c: sh $t6, 0x12($t2)
    t6 = *(uint16_t*)((t3) + 0x14);                             // 0x001be720: lhu $t6, 0x14($t3)
    g_00315d2c = t6;  // Global at 0x00315d2c                   // 0x001be724: sh $t6, 0x14($t2)
    t6 = *(int8_t*)((t3) + 0x16);                               // 0x001be728: lb $t6, 0x16($t3)
    g_00315d2e = t6;  // Global at 0x00315d2e                   // 0x001be72c: sb $t6, 0x16($t2)
    t6 = *(uint8_t*)((t3) + 0x17);                              // 0x001be730: lbu $t6, 0x17($t3)
    g_00315d2f = t6;  // Global at 0x00315d2f                   // 0x001be734: sb $t6, 0x17($t2)
    t6 = *(int8_t*)((t3) + 0x18);                               // 0x001be738: lb $t6, 0x18($t3)
    g_00315d30 = t6;  // Global at 0x00315d30                   // 0x001be73c: sb $t6, 0x18($t2)
    t6 = *(uint8_t*)((t3) + 0x19);                              // 0x001be740: lbu $t6, 0x19($t3)
    g_00315d31 = t6;  // Global at 0x00315d31                   // 0x001be744: sb $t6, 0x19($t2)
    t6 = *(int8_t*)((t3) + 0x1a);                               // 0x001be748: lb $t6, 0x1a($t3)
    g_00315d32 = t6;  // Global at 0x00315d32                   // 0x001be74c: sb $t6, 0x1a($t2)
    t6 = *(uint8_t*)((t3) + 0x1b);                              // 0x001be750: lbu $t6, 0x1b($t3)
    g_00315d33 = t6;  // Global at 0x00315d33                   // 0x001be754: sb $t6, 0x1b($t2)
    t6 = *(int8_t*)((t3) + 0x1c);                               // 0x001be758: lb $t6, 0x1c($t3)
    g_00315d34 = t6;  // Global at 0x00315d34                   // 0x001be75c: sb $t6, 0x1c($t2)
    t6 = *(uint8_t*)((t3) + 0x1d);                              // 0x001be760: lbu $t6, 0x1d($t3)
    g_00315d35 = t6;  // Global at 0x00315d35                   // 0x001be764: sb $t6, 0x1d($t2)
    t6 = *(int8_t*)((t3) + 0x1e);                               // 0x001be768: lb $t6, 0x1e($t3)
    g_00315d36 = t6;  // Global at 0x00315d36                   // 0x001be76c: sb $t6, 0x1e($t2)
    t6 = *(uint8_t*)((t3) + 0x1f);                              // 0x001be770: lbu $t6, 0x1f($t3)
    g_00315d37 = t6;  // Global at 0x00315d37                   // 0x001be774: sb $t6, 0x1f($t2)
    t6 = *(uint16_t*)((t3) + 0x20);                             // 0x001be778: lhu $t6, 0x20($t3)
    g_00315d38 = t6;  // Global at 0x00315d38                   // 0x001be77c: sh $t6, 0x20($t2)
    t6 = *(uint16_t*)((t3) + 0x22);                             // 0x001be780: lhu $t6, 0x22($t3)
    g_00315d3a = t6;  // Global at 0x00315d3a                   // 0x001be784: sh $t6, 0x22($t2)
    t6 = *(uint16_t*)((t3) + 0x24);                             // 0x001be788: lhu $t6, 0x24($t3)
    g_00315d3c = t6;  // Global at 0x00315d3c                   // 0x001be78c: sh $t6, 0x24($t2)
    t6 = *(uint16_t*)((t3) + 0x26);                             // 0x001be790: lhu $t6, 0x26($t3)
    g_00315d3e = t6;  // Global at 0x00315d3e                   // 0x001be794: sh $t6, 0x26($t2)
    t6 = *(uint8_t*)((t3) + 0x28);                              // 0x001be798: lbu $t6, 0x28($t3)
    g_00315d40 = t6;  // Global at 0x00315d40                   // 0x001be79c: sb $t6, 0x28($t2)
    t3 = *(uint8_t*)((t3) + 0x29);                              // 0x001be7a0: lbu $t3, 0x29($t3)
    g_00315d41 = t3;  // Global at 0x00315d41                   // 0x001be7a4: sb $t3, 0x29($t2)
    t3 = g_00315d18;  // Global at 0x00315d18                   // 0x001be7a8: lhu $t3, 0($t2)
    t3 = t3 + t5;                                               // 0x001be7ac: addu $t3, $t3, $t5
    g_00315d18 = t3;  // Global at 0x00315d18                   // 0x001be7b0: sh $t3, 0($t2)
    goto label_0x1be7c4;                                        // 0x001be7b4: b 0x1be7c4
    t2 = t2 + 0x2a;                                             // 0x001be7b8: addiu $t2, $t2, 0x2a
label_0x1be7bc:
    g_00315c95 = t3;  // Global at 0x00315c95                   // 0x001be7bc: sw $t3, 0($t4)
    t4 = t4 + 4;                                                // 0x001be7c0: addiu $t4, $t4, 4
label_0x1be7c4:
    a1 = a1 + 1;                                                // 0x001be7c4: addiu $a1, $a1, 1
label_0x1be7c8:
    t3 = g_00315d35;  // Global at 0x00315d35                   // 0x001be7c8: lhu $t3, 0($t0)
    t3 = ((unsigned)a1 < (unsigned)t3) ? 1 : 0;                 // 0x001be7cc: sltu $t3, $a1, $t3
    if (t3 != 0) goto label_0x1be660;                           // 0x001be7d0: bnez $t3, 0x1be660
    /* nop */                                                   // 0x001be7d4: nop 
    a1 = a3 + sp;                                               // 0x001be7d8: addu $a1, $a3, $sp
    a1 = g_00315d03;  // Global at 0x00315d03                   // 0x001be7dc: lhu $a1, 0x80($a1)
    a1 = t5 + a1;                                               // 0x001be7e0: addu $a1, $t5, $a1
    t5 = a1 & 0xffff;                                           // 0x001be7e4: andi $t5, $a1, 0xffff
label_0x1be7e8:
    a2 = a2 + 1;                                                // 0x001be7e8: addiu $a2, $a2, 1
label_0x1be7ec:
    a1 = ((unsigned)a2 < (unsigned)s2) ? 1 : 0;                 // 0x001be7ec: sltu $a1, $a2, $s2
    if (a1 != 0) goto label_0x1be63c;                           // 0x001be7f0: bnez $a1, 0x1be63c
    a1 = a2 << 5;                                               // 0x001be7f4: sll $a1, $a2, 5
    at = 0x31 << 16;                                            // 0x001be7f8: lui $at, 0x31
    v1 = 0x10;                                                  // 0x001be7fc: addiu $v1, $zero, 0x10
    a0 = g_00315c18;  // Global at 0x00315c18                   // 0x001be800: lw $a0, 0x5c18($at)
    a0 = t2 - a0;                                               // 0x001be804: subu $a0, $t2, $a0
    a0 = a0 & 0xf;                                              // 0x001be808: andi $a0, $a0, 0xf
    a1 = v1 - a0;                                               // 0x001be80c: subu $a1, $v1, $a0
    if (a1 == v1) goto label_0x1be840;                          // 0x001be810: beq $a1, $v1, 0x1be840
    /* nop */                                                   // 0x001be814: nop 
    goto label_0x1be830;                                        // 0x001be81c: b 0x1be830
    a0 = 0xff;                                                  // 0x001be820: addiu $a0, $zero, 0xff
label_0x1be824:
    g_00315d42 = a0;  // Global at 0x00315d42                   // 0x001be824: sb $a0, 0($t2)
    a2 = a2 + 1;                                                // 0x001be828: addiu $a2, $a2, 1
    t2 = t2 + 1;                                                // 0x001be82c: addiu $t2, $t2, 1
label_0x1be830:
    v1 = ((unsigned)a2 < (unsigned)a1) ? 1 : 0;                 // 0x001be830: sltu $v1, $a2, $a1
    /* nop */                                                   // 0x001be834: nop 
    if (v1 != 0) goto label_0x1be824;                           // 0x001be838: bnez $v1, 0x1be824
    /* nop */                                                   // 0x001be83c: nop 
label_0x1be840:
    at = 0x31 << 16;                                            // 0x001be840: lui $at, 0x31
    a3 = 0x31 << 16;                                            // 0x001be844: lui $a3, 0x31
    a1 = g_00315c18;  // Global at 0x00315c18                   // 0x001be848: lw $a1, 0x5c18($at)
    t0 = -1;                                                    // 0x001be84c: addiu $t0, $zero, -1
    a3 = a3 + 0x5c20;                                           // 0x001be854: addiu $a3, $a3, 0x5c20
    a0 = t2 - a1;                                               // 0x001be858: subu $a0, $t2, $a1
    at = 0x31 << 16;                                            // 0x001be85c: lui $at, 0x31
    g_00315c8b = a0;  // Global at 0x00315c8b                   // 0x001be860: sw $a0, 8($a1)
    g_00315c14 = t2;  // Global at 0x00315c14                   // 0x001be864: sw $t2, 0x5c14($at)
    at = 0x31 << 16;                                            // 0x001be868: lui $at, 0x31
    a1 = g_00315c34;  // Global at 0x00315c34                   // 0x001be86c: lw $a1, 0x5c34($at)
    at = 0x31 << 16;                                            // 0x001be870: lui $at, 0x31
    a0 = g_00315c83;  // Global at 0x00315c83                   // 0x001be874: lw $a0, 0($a1)
    a2 = g_00315c14;  // Global at 0x00315c14                   // 0x001be878: lw $a2, 0x5c14($at)
    *(uint32_t*)(a2) = a0;                                      // 0x001be87c: sw $a0, 0($a2)
    at = 0x31 << 16;                                            // 0x001be880: lui $at, 0x31
    a0 = g_00315c87;  // Global at 0x00315c87                   // 0x001be884: lw $a0, 4($a1)
    *(uint32_t*)((a2) + 4) = a0;                                // 0x001be888: sw $a0, 4($a2)
    a0 = g_00315c8b;  // Global at 0x00315c8b                   // 0x001be88c: lw $a0, 8($a1)
    *(uint32_t*)((a2) + 8) = a0;                                // 0x001be890: sw $a0, 8($a2)
    a0 = g_00315c8f;  // Global at 0x00315c8f                   // 0x001be894: lw $a0, 0xc($a1)
    *(uint32_t*)((a2) + 0xc) = a0;                              // 0x001be898: sw $a0, 0xc($a2)
    a0 = g_00315c14;  // Global at 0x00315c14                   // 0x001be89c: lw $a0, 0x5c14($at)
    g_00315c28 = t0;  // Global at 0x00315c28                   // 0x001be8a0: sw $t0, 8($a0)
    at = 0x31 << 16;                                            // 0x001be8a4: lui $at, 0x31
    a0 = g_00315c14;  // Global at 0x00315c14                   // 0x001be8a8: lw $a0, 0x5c14($at)
    goto label_0x1be8f8;                                        // 0x001be8ac: b 0x1be8f8
    g_00315c2c = 0;  // Global at 0x00315c2c                    // 0x001be8b0: sw $zero, 0xc($a0)
label_0x1be8b4:
    a0 = a3 + a0;                                               // 0x001be8b4: addu $a0, $a3, $a0
    a0 = g_00315c34;  // Global at 0x00315c34                   // 0x001be8b8: lw $a0, 0x14($a0)
    if (a0 == t0) goto label_0x1be8f4;                          // 0x001be8bc: beq $a0, $t0, 0x1be8f4
    /* nop */                                                   // 0x001be8c0: nop 
    a0 = g_00315c2c;  // Global at 0x00315c2c                   // 0x001be8c4: lw $a0, 0xc($a0)
    a1 = v1 << 1;                                               // 0x001be8c8: sll $a1, $v1, 1
    a1 = a1 + sp;                                               // 0x001be8cc: addu $a1, $a1, $sp
    at = 0x31 << 16;                                            // 0x001be8d0: lui $at, 0x31
    a1 = a1 + 0x40;                                             // 0x001be8d4: addiu $a1, $a1, 0x40
    a0 = a0 + 1;                                                // 0x001be8d8: addiu $a0, $a0, 1
    g_00315cc3 = a0;  // Global at 0x00315cc3                   // 0x001be8dc: sh $a0, 0($a1)
    a2 = g_00315c14;  // Global at 0x00315c14                   // 0x001be8e0: lw $a2, 0x5c14($at)
    a1 = g_00315cc3;  // Global at 0x00315cc3                   // 0x001be8e4: lhu $a1, 0($a1)
    a0 = *(int32_t*)((a2) + 0xc);                               // 0x001be8e8: lw $a0, 0xc($a2)
    a0 = a0 + a1;                                               // 0x001be8ec: addu $a0, $a0, $a1
    *(uint32_t*)((a2) + 0xc) = a0;                              // 0x001be8f0: sw $a0, 0xc($a2)
label_0x1be8f4:
    v1 = v1 + 1;                                                // 0x001be8f4: addiu $v1, $v1, 1
label_0x1be8f8:
    a0 = ((unsigned)v1 < (unsigned)s2) ? 1 : 0;                 // 0x001be8f8: sltu $a0, $v1, $s2
    if (a0 != 0) goto label_0x1be8b4;                           // 0x001be8fc: bnez $a0, 0x1be8b4
    a0 = v1 << 5;                                               // 0x001be900: sll $a0, $v1, 5
    at = 0x31 << 16;                                            // 0x001be904: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001be908: lui $a0, 0x31
    a3 = g_00315c14;  // Global at 0x00315c14                   // 0x001be90c: lw $a3, 0x5c14($at)
    v1 = -1;                                                    // 0x001be918: addiu $v1, $zero, -1
    a0 = a0 + 0x5c20;                                           // 0x001be91c: addiu $a0, $a0, 0x5c20
    a1 = g_00315c2c;  // Global at 0x00315c2c                   // 0x001be920: lw $a1, 0xc($a3)
    at = 0x31 << 16;                                            // 0x001be924: lui $at, 0x31
    a1 = a1 + -1;                                               // 0x001be928: addiu $a1, $a1, -1
    g_00315c2c = a1;  // Global at 0x00315c2c                   // 0x001be92c: sw $a1, 0xc($a3)
    a1 = g_00315c14;  // Global at 0x00315c14                   // 0x001be930: lw $a1, 0x5c14($at)
    t6 = a1 + 0x10;                                             // 0x001be934: addiu $t6, $a1, 0x10
    a1 = g_00315cce;  // Global at 0x00315cce                   // 0x001be938: lw $a1, 0xc($a1)
    a1 = a1 + 1;                                                // 0x001be93c: addiu $a1, $a1, 1
    a1 = a1 << 2;                                               // 0x001be940: sll $a1, $a1, 2
    goto label_0x1bea2c;                                        // 0x001be944: b 0x1bea2c
    t4 = t6 + a1;                                               // 0x001be948: addu $t4, $t6, $a1
label_0x1be94c:
    a1 = a0 + a1;                                               // 0x001be94c: addu $a1, $a0, $a1
    t2 = a1 + 0x14;                                             // 0x001be950: addiu $t2, $a1, 0x14
    a1 = g_00315cd7;  // Global at 0x00315cd7                   // 0x001be954: lw $a1, 0x14($a1)
    if (a1 == v1) goto label_0x1bea28;                          // 0x001be958: beq $a1, $v1, 0x1bea28
    a3 = a2 << 1;                                               // 0x001be95c: sll $a3, $a2, 1
    t0 = a3 + sp;                                               // 0x001be964: addu $t0, $a3, $sp
    t1 = t7 & 0xffff;                                           // 0x001be968: andi $t1, $t7, 0xffff
    goto label_0x1bea08;                                        // 0x001be96c: b 0x1bea08
    t0 = t0 + 0x40;                                             // 0x001be970: addiu $t0, $t0, 0x40
label_0x1be974:
    t5 = g_00315cd7;  // Global at 0x00315cd7                   // 0x001be974: lw $t5, 0($t2)
    t3 = a1 << 2;                                               // 0x001be978: sll $t3, $a1, 2
    t3 = t5 + t3;                                               // 0x001be97c: addu $t3, $t5, $t3
    t3 = *(int32_t*)((t3) + 0x10);                              // 0x001be980: lw $t3, 0x10($t3)
    if (t3 == v1) goto label_0x1be9fc;                          // 0x001be984: beq $t3, $v1, 0x1be9fc
    at = 0x31 << 16;                                            // 0x001be988: lui $at, 0x31
    t5 = t3 + t5;                                               // 0x001be98c: addu $t5, $t3, $t5
    s1 = g_00315c14;  // Global at 0x00315c14                   // 0x001be990: lw $s1, 0x5c14($at)
    t3 = t5 + 4;                                                // 0x001be994: addiu $t3, $t5, 4
    s1 = t4 - s1;                                               // 0x001be99c: subu $s1, $t4, $s1
    g_00315cd2 = s1;  // Global at 0x00315cd2                   // 0x001be9a0: sw $s1, 0($t6)
    s1 = g_00315caa;  // Global at 0x00315caa                   // 0x001be9a4: lbu $s1, 0($t5)
    g_00315c99 = s1;  // Global at 0x00315c99                   // 0x001be9a8: sb $s1, 0($t4)
    s1 = g_00315cab;  // Global at 0x00315cab                   // 0x001be9ac: lbu $s1, 1($t5)
    g_00315c9a = s1;  // Global at 0x00315c9a                   // 0x001be9b0: sb $s1, 1($t4)
    s1 = g_00315cac;  // Global at 0x00315cac                   // 0x001be9b4: lbu $s1, 2($t5)
    g_00315c9b = s1;  // Global at 0x00315c9b                   // 0x001be9b8: sb $s1, 2($t4)
    s1 = g_00315cad;  // Global at 0x00315cad                   // 0x001be9bc: lbu $s1, 3($t5)
    g_00315c9c = s1;  // Global at 0x00315c9c                   // 0x001be9c0: sb $s1, 3($t4)
    goto label_0x1be9e4;                                        // 0x001be9c4: b 0x1be9e4
    t4 = t4 + 4;                                                // 0x001be9c8: addiu $t4, $t4, 4
label_0x1be9cc:
    s1 = g_00315cae;  // Global at 0x00315cae                   // 0x001be9cc: lhu $s1, 0($t3)
    s0 = s0 + 1;                                                // 0x001be9d0: addiu $s0, $s0, 1
    s1 = s1 + t1;                                               // 0x001be9d4: addu $s1, $s1, $t1
    t3 = t3 + 2;                                                // 0x001be9d8: addiu $t3, $t3, 2
    g_00315c9d = s1;  // Global at 0x00315c9d                   // 0x001be9dc: sh $s1, 0($t4)
    t4 = t4 + 2;                                                // 0x001be9e0: addiu $t4, $t4, 2
label_0x1be9e4:
    s1 = g_00315cad;  // Global at 0x00315cad                   // 0x001be9e4: lbu $s1, 3($t5)
    s1 = ((unsigned)s0 < (unsigned)s1) ? 1 : 0;                 // 0x001be9e8: sltu $s1, $s0, $s1
    if (s1 != 0) goto label_0x1be9cc;                           // 0x001be9ec: bnez $s1, 0x1be9cc
    /* nop */                                                   // 0x001be9f0: nop 
    goto label_0x1bea04;                                        // 0x001be9f4: b 0x1bea04
    t6 = t6 + 4;                                                // 0x001be9f8: addiu $t6, $t6, 4
label_0x1be9fc:
    g_00315cd6 = t3;  // Global at 0x00315cd6                   // 0x001be9fc: sw $t3, 0($t6)
    t6 = t6 + 4;                                                // 0x001bea00: addiu $t6, $t6, 4
label_0x1bea04:
    a1 = a1 + 1;                                                // 0x001bea04: addiu $a1, $a1, 1
label_0x1bea08:
    t3 = g_00315d75;  // Global at 0x00315d75                   // 0x001bea08: lhu $t3, 0($t0)
    t3 = ((unsigned)a1 < (unsigned)t3) ? 1 : 0;                 // 0x001bea0c: sltu $t3, $a1, $t3
    if (t3 != 0) goto label_0x1be974;                           // 0x001bea10: bnez $t3, 0x1be974
    /* nop */                                                   // 0x001bea14: nop 
    a1 = a3 + sp;                                               // 0x001bea18: addu $a1, $a3, $sp
    a1 = g_00315d24;  // Global at 0x00315d24                   // 0x001bea1c: lhu $a1, 0x60($a1)
    a1 = t7 + a1;                                               // 0x001bea20: addu $a1, $t7, $a1
    t7 = a1 & 0xffff;                                           // 0x001bea24: andi $t7, $a1, 0xffff
label_0x1bea28:
    a2 = a2 + 1;                                                // 0x001bea28: addiu $a2, $a2, 1
label_0x1bea2c:
    a1 = ((unsigned)a2 < (unsigned)s2) ? 1 : 0;                 // 0x001bea2c: sltu $a1, $a2, $s2
    if (a1 != 0) goto label_0x1be94c;                           // 0x001bea30: bnez $a1, 0x1be94c
    a1 = a2 << 5;                                               // 0x001bea34: sll $a1, $a2, 5
    at = 0x31 << 16;                                            // 0x001bea38: lui $at, 0x31
    v1 = 0x10;                                                  // 0x001bea3c: addiu $v1, $zero, 0x10
    a0 = g_00315c14;  // Global at 0x00315c14                   // 0x001bea40: lw $a0, 0x5c14($at)
    a0 = t4 - a0;                                               // 0x001bea44: subu $a0, $t4, $a0
    a0 = a0 & 0xf;                                              // 0x001bea48: andi $a0, $a0, 0xf
    a1 = v1 - a0;                                               // 0x001bea4c: subu $a1, $v1, $a0
    if (a1 == v1) goto label_0x1bea80;                          // 0x001bea50: beq $a1, $v1, 0x1bea80
    /* nop */                                                   // 0x001bea54: nop 
    goto label_0x1bea70;                                        // 0x001bea5c: b 0x1bea70
    a0 = 0xff;                                                  // 0x001bea60: addiu $a0, $zero, 0xff
label_0x1bea64:
    g_00315c9f = a0;  // Global at 0x00315c9f                   // 0x001bea64: sb $a0, 0($t4)
    a2 = a2 + 1;                                                // 0x001bea68: addiu $a2, $a2, 1
    t4 = t4 + 1;                                                // 0x001bea6c: addiu $t4, $t4, 1
label_0x1bea70:
    v1 = ((unsigned)a2 < (unsigned)a1) ? 1 : 0;                 // 0x001bea70: sltu $v1, $a2, $a1
    /* nop */                                                   // 0x001bea74: nop 
    if (v1 != 0) goto label_0x1bea64;                           // 0x001bea78: bnez $v1, 0x1bea64
    /* nop */                                                   // 0x001bea7c: nop 
label_0x1bea80:
    at = 0x31 << 16;                                            // 0x001bea80: lui $at, 0x31
    a0 = 0x31 << 16;                                            // 0x001bea84: lui $a0, 0x31
    a3 = g_00315c14;  // Global at 0x00315c14                   // 0x001bea88: lw $a3, 0x5c14($at)
    a1 = -1;                                                    // 0x001bea8c: addiu $a1, $zero, -1
    a0 = a0 + 0x5c20;                                           // 0x001bea94: addiu $a0, $a0, 0x5c20
    v1 = t4 - a3;                                               // 0x001bea98: subu $v1, $t4, $a3
    at = 0x31 << 16;                                            // 0x001bea9c: lui $at, 0x31
    g_00315c28 = v1;  // Global at 0x00315c28                   // 0x001beaa0: sw $v1, 8($a3)
    g_00315c10 = t4;  // Global at 0x00315c10                   // 0x001beaa4: sw $t4, 0x5c10($at)
    at = 0x31 << 16;                                            // 0x001beaa8: lui $at, 0x31
    a3 = g_00315c30;  // Global at 0x00315c30                   // 0x001beaac: lw $a3, 0x5c30($at)
    at = 0x31 << 16;                                            // 0x001beab0: lui $at, 0x31
    v1 = g_00315c20;  // Global at 0x00315c20                   // 0x001beab4: lw $v1, 0($a3)
    t0 = g_00315c10;  // Global at 0x00315c10                   // 0x001beab8: lw $t0, 0x5c10($at)
    g_00315d75 = v1;  // Global at 0x00315d75                   // 0x001beabc: sw $v1, 0($t0)
    at = 0x31 << 16;                                            // 0x001beac0: lui $at, 0x31
    v1 = g_00315c24;  // Global at 0x00315c24                   // 0x001beac4: lw $v1, 4($a3)
    g_00315d79 = v1;  // Global at 0x00315d79                   // 0x001beac8: sw $v1, 4($t0)
    v1 = g_00315c28;  // Global at 0x00315c28                   // 0x001beacc: lw $v1, 8($a3)
    g_00315d7d = v1;  // Global at 0x00315d7d                   // 0x001bead0: sw $v1, 8($t0)
    v1 = g_00315c2c;  // Global at 0x00315c2c                   // 0x001bead4: lw $v1, 0xc($a3)
    g_00315d81 = v1;  // Global at 0x00315d81                   // 0x001bead8: sw $v1, 0xc($t0)
    v1 = g_00315c10;  // Global at 0x00315c10                   // 0x001beadc: lw $v1, 0x5c10($at)
    *(uint32_t*)((v1) + 8) = a1;                                // 0x001beae0: sw $a1, 8($v1)
    at = 0x31 << 16;                                            // 0x001beae4: lui $at, 0x31
    v1 = g_00315c10;  // Global at 0x00315c10                   // 0x001beae8: lw $v1, 0x5c10($at)
    goto label_0x1beb2c;                                        // 0x001beaec: b 0x1beb2c
    *(uint32_t*)((v1) + 0xc) = 0;                               // 0x001beaf0: sw $zero, 0xc($v1)
label_0x1beaf4:
    v1 = a0 + v1;                                               // 0x001beaf4: addu $v1, $a0, $v1
    v1 = *(int32_t*)((v1) + 0x10);                              // 0x001beaf8: lw $v1, 0x10($v1)
    if (v1 == a1) goto label_0x1beb28;                          // 0x001beafc: beq $v1, $a1, 0x1beb28
    /* nop */                                                   // 0x001beb00: nop 
    t0 = *(int32_t*)((v1) + 0xc);                               // 0x001beb04: lw $t0, 0xc($v1)
    at = 0x31 << 16;                                            // 0x001beb08: lui $at, 0x31
    v1 = g_00315c10;  // Global at 0x00315c10                   // 0x001beb0c: lw $v1, 0x5c10($at)
    a3 = v1 + 0xc;                                              // 0x001beb10: addiu $a3, $v1, 0xc
    v1 = *(int32_t*)((v1) + 0xc);                               // 0x001beb14: lw $v1, 0xc($v1)
    at = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x001beb18: sltu $at, $v1, $t0
    if (at == 0) goto label_0x1beb28;                           // 0x001beb1c: beqz $at, 0x1beb28
    /* nop */                                                   // 0x001beb20: nop 
    g_00315c20 = t0;  // Global at 0x00315c20                   // 0x001beb24: sw $t0, 0($a3)
label_0x1beb28:
    a2 = a2 + 1;                                                // 0x001beb28: addiu $a2, $a2, 1
label_0x1beb2c:
    v1 = ((unsigned)a2 < (unsigned)s2) ? 1 : 0;                 // 0x001beb2c: sltu $v1, $a2, $s2
    if (v1 != 0) goto label_0x1beaf4;                           // 0x001beb30: bnez $v1, 0x1beaf4
    v1 = a2 << 5;                                               // 0x001beb34: sll $v1, $a2, 5
    goto label_0x1beb54;                                        // 0x001beb3c: b 0x1beb54
    a0 = -1;                                                    // 0x001beb40: addiu $a0, $zero, -1
label_0x1beb44:
    v1 = a1 << 2;                                               // 0x001beb44: sll $v1, $a1, 2
    v1 = a2 + v1;                                               // 0x001beb48: addu $v1, $a2, $v1
    a1 = a1 + 1;                                                // 0x001beb4c: addiu $a1, $a1, 1
    *(uint32_t*)((v1) + 0x10) = a0;                             // 0x001beb50: sw $a0, 0x10($v1)
label_0x1beb54:
    at = 0x31 << 16;                                            // 0x001beb54: lui $at, 0x31
    a2 = g_00315c10;  // Global at 0x00315c10                   // 0x001beb58: lw $a2, 0x5c10($at)
    v1 = *(int32_t*)((a2) + 0xc);                               // 0x001beb5c: lw $v1, 0xc($a2)
    at = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x001beb60: sltu $at, $v1, $a1
    if (at == 0) goto label_0x1beb44;                           // 0x001beb64: beqz $at, 0x1beb44
    /* nop */                                                   // 0x001beb68: nop 
    v1 = v1 + 1;                                                // 0x001beb6c: addiu $v1, $v1, 1
    a0 = a2 + 0x10;                                             // 0x001beb70: addiu $a0, $a2, 0x10
    v1 = v1 << 2;                                               // 0x001beb74: sll $v1, $v1, 2
    t2 = a0 + v1;                                               // 0x001beb7c: addu $t2, $a0, $v1
    a0 = 0x31 << 16;                                            // 0x001beb84: lui $a0, 0x31
    v1 = -1;                                                    // 0x001beb88: addiu $v1, $zero, -1
    goto label_0x1bedbc;                                        // 0x001beb8c: b 0x1bedbc
    a0 = a0 + 0x5c20;                                           // 0x001beb90: addiu $a0, $a0, 0x5c20
label_0x1beb94:
    a1 = a0 + a1;                                               // 0x001beb94: addu $a1, $a0, $a1
    t0 = a1 + 0x10;                                             // 0x001beb98: addiu $t0, $a1, 0x10
    a1 = g_00315cd5;  // Global at 0x00315cd5                   // 0x001beb9c: lw $a1, 0x10($a1)
    if (a1 == v1) goto label_0x1bedb8;                          // 0x001beba0: beq $a1, $v1, 0x1bedb8
    goto label_0x1bed94;                                        // 0x001beba8: b 0x1bed94
    t5 = g_00315cd5;  // Global at 0x00315cd5                   // 0x001bebac: lw $t5, 0($t0)
label_0x1bebb0:
    at = 0x31 << 16;                                            // 0x001bebb0: lui $at, 0x31
    a1 = t5 + t1;                                               // 0x001bebb4: addu $a1, $t5, $t1
    t3 = g_00315c10;  // Global at 0x00315c10                   // 0x001bebb8: lw $t3, 0x5c10($at)
    t6 = a1 + 0x10;                                             // 0x001bebbc: addiu $t6, $a1, 0x10
    a1 = g_00315cd5;  // Global at 0x00315cd5                   // 0x001bebc0: lw $a1, 0x10($a1)
    t1 = t3 + t1;                                               // 0x001bebc4: addu $t1, $t3, $t1
    if (a1 == v1) goto label_0x1bed8c;                          // 0x001bebc8: beq $a1, $v1, 0x1bed8c
    t5 = t1 + 0x10;                                             // 0x001bebcc: addiu $t5, $t1, 0x10
    a1 = g_00315caa;  // Global at 0x00315caa                   // 0x001bebd0: lw $a1, 0($t5)
    if (a1 == v1) goto label_0x1bebe4;                          // 0x001bebd4: beq $a1, $v1, 0x1bebe4
    t1 = t2 - t3;                                               // 0x001bebd8: subu $t1, $t2, $t3
    goto label_0x1beee0;                                        // 0x001bebdc: b 0x1beee0
    v0 = -4;                                                    // 0x001bebe0: addiu $v0, $zero, -4
label_0x1bebe4:
    g_00315caa = t1;  // Global at 0x00315caa                   // 0x001bebe8: sw $t1, 0($t5)
    t1 = g_00315cd5;  // Global at 0x00315cd5                   // 0x001bebec: lw $t1, 0($t6)
    t3 = g_00315cd5;  // Global at 0x00315cd5                   // 0x001bebf0: lw $t3, 0($t0)
    t3 = t1 + t3;                                               // 0x001bebf4: addu $t3, $t1, $t3
    t5 = g_00315cb0;  // Global at 0x00315cb0                   // 0x001bebf8: lw $t5, 0($t3)
    t1 = t3 + 0x24;                                             // 0x001bebfc: addiu $t1, $t3, 0x24
    g_00315cd7 = t5;  // Global at 0x00315cd7                   // 0x001bec00: sw $t5, 0($t2)
    t5 = g_00315cb4;  // Global at 0x00315cb4                   // 0x001bec04: lbu $t5, 4($t3)
    g_00315cdb = t5;  // Global at 0x00315cdb                   // 0x001bec08: sb $t5, 4($t2)
    t5 = g_00315cb5;  // Global at 0x00315cb5                   // 0x001bec0c: lbu $t5, 5($t3)
    g_00315cdc = t5;  // Global at 0x00315cdc                   // 0x001bec10: sb $t5, 5($t2)
    t5 = g_00315cb6;  // Global at 0x00315cb6                   // 0x001bec14: lbu $t5, 6($t3)
    g_00315cdd = t5;  // Global at 0x00315cdd                   // 0x001bec18: sb $t5, 6($t2)
    t5 = g_00315cb7;  // Global at 0x00315cb7                   // 0x001bec1c: lb $t5, 7($t3)
    g_00315cde = t5;  // Global at 0x00315cde                   // 0x001bec20: sb $t5, 7($t2)
    t5 = g_00315cb8;  // Global at 0x00315cb8                   // 0x001bec24: lb $t5, 8($t3)
    g_00315cdf = t5;  // Global at 0x00315cdf                   // 0x001bec28: sb $t5, 8($t2)
    t5 = g_00315cb9;  // Global at 0x00315cb9                   // 0x001bec2c: lb $t5, 9($t3)
    g_00315ce0 = t5;  // Global at 0x00315ce0                   // 0x001bec30: sb $t5, 9($t2)
    t5 = g_00315cba;  // Global at 0x00315cba                   // 0x001bec34: lb $t5, 0xa($t3)
    g_00315ce1 = t5;  // Global at 0x00315ce1                   // 0x001bec38: sb $t5, 0xa($t2)
    t5 = g_00315cbb;  // Global at 0x00315cbb                   // 0x001bec3c: lbu $t5, 0xb($t3)
    g_00315ce2 = t5;  // Global at 0x00315ce2                   // 0x001bec40: sb $t5, 0xb($t2)
    t5 = g_00315cbc;  // Global at 0x00315cbc                   // 0x001bec44: lbu $t5, 0xc($t3)
    g_00315ce3 = t5;  // Global at 0x00315ce3                   // 0x001bec48: sb $t5, 0xc($t2)
    t5 = g_00315cbd;  // Global at 0x00315cbd                   // 0x001bec4c: lbu $t5, 0xd($t3)
    g_00315ce4 = t5;  // Global at 0x00315ce4                   // 0x001bec50: sb $t5, 0xd($t2)
    t5 = g_00315cbe;  // Global at 0x00315cbe                   // 0x001bec54: lbu $t5, 0xe($t3)
    g_00315ce5 = t5;  // Global at 0x00315ce5                   // 0x001bec58: sb $t5, 0xe($t2)
    t5 = g_00315cbf;  // Global at 0x00315cbf                   // 0x001bec5c: lbu $t5, 0xf($t3)
    g_00315ce6 = t5;  // Global at 0x00315ce6                   // 0x001bec60: sb $t5, 0xf($t2)
    t5 = g_00315cc0;  // Global at 0x00315cc0                   // 0x001bec64: lbu $t5, 0x10($t3)
    g_00315ce7 = t5;  // Global at 0x00315ce7                   // 0x001bec68: sb $t5, 0x10($t2)
    t5 = g_00315cc1;  // Global at 0x00315cc1                   // 0x001bec6c: lbu $t5, 0x11($t3)
    g_00315ce8 = t5;  // Global at 0x00315ce8                   // 0x001bec70: sb $t5, 0x11($t2)
    t5 = g_00315cc2;  // Global at 0x00315cc2                   // 0x001bec74: lbu $t5, 0x12($t3)
    g_00315ce9 = t5;  // Global at 0x00315ce9                   // 0x001bec78: sb $t5, 0x12($t2)
    t5 = g_00315cc3;  // Global at 0x00315cc3                   // 0x001bec7c: lbu $t5, 0x13($t3)
    g_00315cea = t5;  // Global at 0x00315cea                   // 0x001bec80: sb $t5, 0x13($t2)
    t5 = g_00315cc4;  // Global at 0x00315cc4                   // 0x001bec84: lhu $t5, 0x14($t3)
    g_00315ceb = t5;  // Global at 0x00315ceb                   // 0x001bec88: sh $t5, 0x14($t2)
    t5 = g_00315cc6;  // Global at 0x00315cc6                   // 0x001bec8c: lhu $t5, 0x16($t3)
    g_00315ced = t5;  // Global at 0x00315ced                   // 0x001bec90: sh $t5, 0x16($t2)
    t5 = g_00315cc8;  // Global at 0x00315cc8                   // 0x001bec94: lh $t5, 0x18($t3)
    g_00315cef = t5;  // Global at 0x00315cef                   // 0x001bec98: sh $t5, 0x18($t2)
    t5 = g_00315cca;  // Global at 0x00315cca                   // 0x001bec9c: lh $t5, 0x1a($t3)
    g_00315cf1 = t5;  // Global at 0x00315cf1                   // 0x001beca0: sh $t5, 0x1a($t2)
    t5 = g_00315ccc;  // Global at 0x00315ccc                   // 0x001beca4: lh $t5, 0x1c($t3)
    g_00315cf3 = t5;  // Global at 0x00315cf3                   // 0x001beca8: sh $t5, 0x1c($t2)
    t5 = g_00315cce;  // Global at 0x00315cce                   // 0x001becac: lh $t5, 0x1e($t3)
    g_00315cf5 = t5;  // Global at 0x00315cf5                   // 0x001becb0: sh $t5, 0x1e($t2)
    t5 = g_00315cd0;  // Global at 0x00315cd0                   // 0x001becb4: lb $t5, 0x20($t3)
    g_00315cf7 = t5;  // Global at 0x00315cf7                   // 0x001becb8: sb $t5, 0x20($t2)
    t5 = g_00315cd1;  // Global at 0x00315cd1                   // 0x001becbc: lb $t5, 0x21($t3)
    g_00315cf8 = t5;  // Global at 0x00315cf8                   // 0x001becc0: sb $t5, 0x21($t2)
    t5 = g_00315cd2;  // Global at 0x00315cd2                   // 0x001becc4: lb $t5, 0x22($t3)
    g_00315cf9 = t5;  // Global at 0x00315cf9                   // 0x001becc8: sb $t5, 0x22($t2)
    t5 = g_00315cd3;  // Global at 0x00315cd3                   // 0x001beccc: lb $t5, 0x23($t3)
    g_00315cfa = t5;  // Global at 0x00315cfa                   // 0x001becd0: sb $t5, 0x23($t2)
    goto label_0x1bed7c;                                        // 0x001becd4: b 0x1bed7c
    t2 = t2 + 0x24;                                             // 0x001becd8: addiu $t2, $t2, 0x24
label_0x1becdc:
    t5 = g_00315cd4;  // Global at 0x00315cd4                   // 0x001becdc: lhu $t5, 0($t1)
    a1 = a1 + 1;                                                // 0x001bece0: addiu $a1, $a1, 1
    g_00315cfb = t5;  // Global at 0x00315cfb                   // 0x001bece4: sh $t5, 0($t2)
    t5 = g_00315cd6;  // Global at 0x00315cd6                   // 0x001bece8: lbu $t5, 2($t1)
    g_00315cfd = t5;  // Global at 0x00315cfd                   // 0x001becec: sb $t5, 2($t2)
    t5 = g_00315cd7;  // Global at 0x00315cd7                   // 0x001becf0: lbu $t5, 3($t1)
    g_00315cfe = t5;  // Global at 0x00315cfe                   // 0x001becf4: sb $t5, 3($t2)
    t5 = g_00315cd8;  // Global at 0x00315cd8                   // 0x001becf8: lbu $t5, 4($t1)
    g_00315cff = t5;  // Global at 0x00315cff                   // 0x001becfc: sb $t5, 4($t2)
    t5 = g_00315cd9;  // Global at 0x00315cd9                   // 0x001bed00: lbu $t5, 5($t1)
    g_00315d00 = t5;  // Global at 0x00315d00                   // 0x001bed04: sb $t5, 5($t2)
    t5 = g_00315cda;  // Global at 0x00315cda                   // 0x001bed08: lhu $t5, 6($t1)
    g_00315d01 = t5;  // Global at 0x00315d01                   // 0x001bed0c: sh $t5, 6($t2)
    t5 = g_00315cdc;  // Global at 0x00315cdc                   // 0x001bed10: lhu $t5, 8($t1)
    g_00315d03 = t5;  // Global at 0x00315d03                   // 0x001bed14: sh $t5, 8($t2)
    t5 = g_00315cde;  // Global at 0x00315cde                   // 0x001bed18: lb $t5, 0xa($t1)
    g_00315d05 = t5;  // Global at 0x00315d05                   // 0x001bed1c: sb $t5, 0xa($t2)
    t5 = g_00315cdf;  // Global at 0x00315cdf                   // 0x001bed20: lbu $t5, 0xb($t1)
    g_00315d06 = t5;  // Global at 0x00315d06                   // 0x001bed24: sb $t5, 0xb($t2)
    t5 = g_00315ce0;  // Global at 0x00315ce0                   // 0x001bed28: lb $t5, 0xc($t1)
    g_00315d07 = t5;  // Global at 0x00315d07                   // 0x001bed2c: sb $t5, 0xc($t2)
    t5 = g_00315ce1;  // Global at 0x00315ce1                   // 0x001bed30: lbu $t5, 0xd($t1)
    g_00315d08 = t5;  // Global at 0x00315d08                   // 0x001bed34: sb $t5, 0xd($t2)
    t5 = g_00315ce2;  // Global at 0x00315ce2                   // 0x001bed38: lb $t5, 0xe($t1)
    g_00315d09 = t5;  // Global at 0x00315d09                   // 0x001bed3c: sb $t5, 0xe($t2)
    t5 = g_00315ce3;  // Global at 0x00315ce3                   // 0x001bed40: lbu $t5, 0xf($t1)
    g_00315d0a = t5;  // Global at 0x00315d0a                   // 0x001bed44: sb $t5, 0xf($t2)
    t5 = g_00315ce4;  // Global at 0x00315ce4                   // 0x001bed48: lbu $t5, 0x10($t1)
    g_00315d0b = t5;  // Global at 0x00315d0b                   // 0x001bed4c: sb $t5, 0x10($t2)
    t5 = g_00315ce5;  // Global at 0x00315ce5                   // 0x001bed50: lb $t5, 0x11($t1)
    g_00315d0c = t5;  // Global at 0x00315d0c                   // 0x001bed54: sb $t5, 0x11($t2)
    t5 = g_00315ce6;  // Global at 0x00315ce6                   // 0x001bed58: lb $t5, 0x12($t1)
    g_00315d0d = t5;  // Global at 0x00315d0d                   // 0x001bed5c: sb $t5, 0x12($t2)
    t5 = g_00315ce7;  // Global at 0x00315ce7                   // 0x001bed60: lb $t5, 0x13($t1)
    g_00315d0e = t5;  // Global at 0x00315d0e                   // 0x001bed64: sb $t5, 0x13($t2)
    t1 = t1 + 0x14;                                             // 0x001bed68: addiu $t1, $t1, 0x14
    t5 = g_00315cfb;  // Global at 0x00315cfb                   // 0x001bed6c: lhu $t5, 0($t2)
    t5 = t5 + t4;                                               // 0x001bed70: addu $t5, $t5, $t4
    g_00315cfb = t5;  // Global at 0x00315cfb                   // 0x001bed74: sh $t5, 0($t2)
    t2 = t2 + 0x14;                                             // 0x001bed78: addiu $t2, $t2, 0x14
label_0x1bed7c:
    t5 = g_00315cb4;  // Global at 0x00315cb4                   // 0x001bed7c: lbu $t5, 4($t3)
    t5 = ((unsigned)a1 < (unsigned)t5) ? 1 : 0;                 // 0x001bed80: sltu $t5, $a1, $t5
    if (t5 != 0) goto label_0x1becdc;                           // 0x001bed84: bnez $t5, 0x1becdc
    /* nop */                                                   // 0x001bed88: nop 
label_0x1bed8c:
    a2 = a2 + 1;                                                // 0x001bed8c: addiu $a2, $a2, 1
    t5 = g_00315cd5;  // Global at 0x00315cd5                   // 0x001bed90: lw $t5, 0($t0)
label_0x1bed94:
    a1 = g_00315cb6;  // Global at 0x00315cb6                   // 0x001bed94: lw $a1, 0xc($t5)
    at = ((unsigned)a1 < (unsigned)a2) ? 1 : 0;                 // 0x001bed98: sltu $at, $a1, $a2
    if (at == 0) goto label_0x1bebb0;                           // 0x001bed9c: beqz $at, 0x1bebb0
    t1 = a2 << 2;                                               // 0x001beda0: sll $t1, $a2, 2
    a1 = a3 << 1;                                               // 0x001beda4: sll $a1, $a3, 1
    a1 = a1 + sp;                                               // 0x001beda8: addu $a1, $a1, $sp
    a1 = g_00315d06;  // Global at 0x00315d06                   // 0x001bedac: lhu $a1, 0x40($a1)
    a1 = t4 + a1;                                               // 0x001bedb0: addu $a1, $t4, $a1
    t4 = a1 & 0xffff;                                           // 0x001bedb4: andi $t4, $a1, 0xffff
label_0x1bedb8:
    a3 = a3 + 1;                                                // 0x001bedb8: addiu $a3, $a3, 1
label_0x1bedbc:
    a1 = ((unsigned)a3 < (unsigned)s2) ? 1 : 0;                 // 0x001bedbc: sltu $a1, $a3, $s2
    if (a1 != 0) goto label_0x1beb94;                           // 0x001bedc0: bnez $a1, 0x1beb94
    a1 = a3 << 5;                                               // 0x001bedc4: sll $a1, $a3, 5
    at = 0x31 << 16;                                            // 0x001bedc8: lui $at, 0x31
    v1 = 0x10;                                                  // 0x001bedcc: addiu $v1, $zero, 0x10
    a0 = g_00315c10;  // Global at 0x00315c10                   // 0x001bedd0: lw $a0, 0x5c10($at)
    a0 = t2 - a0;                                               // 0x001bedd4: subu $a0, $t2, $a0
    a0 = a0 & 0xf;                                              // 0x001bedd8: andi $a0, $a0, 0xf
    a1 = v1 - a0;                                               // 0x001beddc: subu $a1, $v1, $a0
    if (a1 == v1) goto label_0x1bee10;                          // 0x001bede0: beq $a1, $v1, 0x1bee10
    /* nop */                                                   // 0x001bede4: nop 
    goto label_0x1bee00;                                        // 0x001bedec: b 0x1bee00
    a0 = 0xff;                                                  // 0x001bedf0: addiu $a0, $zero, 0xff
label_0x1bedf4:
    g_00315d0f = a0;  // Global at 0x00315d0f                   // 0x001bedf4: sb $a0, 0($t2)
    a2 = a2 + 1;                                                // 0x001bedf8: addiu $a2, $a2, 1
    t2 = t2 + 1;                                                // 0x001bedfc: addiu $t2, $t2, 1
label_0x1bee00:
    v1 = ((unsigned)a2 < (unsigned)a1) ? 1 : 0;                 // 0x001bee00: sltu $v1, $a2, $a1
    /* nop */                                                   // 0x001bee04: nop 
    if (v1 != 0) goto label_0x1bedf4;                           // 0x001bee08: bnez $v1, 0x1bedf4
    /* nop */                                                   // 0x001bee0c: nop 
label_0x1bee10:
    at = 0x31 << 16;                                            // 0x001bee10: lui $at, 0x31
    v1 = -1;                                                    // 0x001bee14: addiu $v1, $zero, -1
    a1 = g_00315c10;  // Global at 0x00315c10                   // 0x001bee18: lw $a1, 0x5c10($at)
    a0 = t2 - a1;                                               // 0x001bee1c: subu $a0, $t2, $a1
    at = 0x31 << 16;                                            // 0x001bee20: lui $at, 0x31
    g_00315cce = a0;  // Global at 0x00315cce                   // 0x001bee24: sw $a0, 8($a1)
    a1 = g_00315c00;  // Global at 0x00315c00                   // 0x001bee28: lw $a1, 0x5c00($at)
    at = 0x31 << 16;                                            // 0x001bee2c: lui $at, 0x31
    a1 = t2 - a1;                                               // 0x001bee30: subu $a1, $t2, $a1
    a0 = g_00315c08;  // Global at 0x00315c08                   // 0x001bee34: lw $a0, 0x5c08($at)
    g_00315c2c = a1;  // Global at 0x00315c2c                   // 0x001bee38: sw $a1, 0xc($a0)
    at = 0x31 << 16;                                            // 0x001bee3c: lui $at, 0x31
    a0 = g_00315c08;  // Global at 0x00315c08                   // 0x001bee40: lw $a0, 0x5c08($at)
    g_00315c30 = v0;  // Global at 0x00315c30                   // 0x001bee44: sw $v0, 0x10($a0)
    at = 0x31 << 16;                                            // 0x001bee48: lui $at, 0x31
    a1 = g_00315c10;  // Global at 0x00315c10                   // 0x001bee4c: lw $a1, 0x5c10($at)
    at = 0x31 << 16;                                            // 0x001bee50: lui $at, 0x31
    a0 = g_00315c00;  // Global at 0x00315c00                   // 0x001bee54: lw $a0, 0x5c00($at)
    at = 0x31 << 16;                                            // 0x001bee58: lui $at, 0x31
    a0 = a1 - a0;                                               // 0x001bee5c: subu $a0, $a1, $a0
    v0 = g_00315c08;  // Global at 0x00315c08                   // 0x001bee60: lw $v0, 0x5c08($at)
    g_00315c36 = a0;  // Global at 0x00315c36                   // 0x001bee64: sw $a0, 0x14($v0)
    at = 0x31 << 16;                                            // 0x001bee68: lui $at, 0x31
    a1 = g_00315c14;  // Global at 0x00315c14                   // 0x001bee6c: lw $a1, 0x5c14($at)
    at = 0x31 << 16;                                            // 0x001bee70: lui $at, 0x31
    a0 = g_00315c00;  // Global at 0x00315c00                   // 0x001bee74: lw $a0, 0x5c00($at)
    at = 0x31 << 16;                                            // 0x001bee78: lui $at, 0x31
    a0 = a1 - a0;                                               // 0x001bee7c: subu $a0, $a1, $a0
    v0 = g_00315c08;  // Global at 0x00315c08                   // 0x001bee80: lw $v0, 0x5c08($at)
    g_00315c3a = a0;  // Global at 0x00315c3a                   // 0x001bee84: sw $a0, 0x18($v0)
    at = 0x31 << 16;                                            // 0x001bee88: lui $at, 0x31
    a1 = g_00315c18;  // Global at 0x00315c18                   // 0x001bee8c: lw $a1, 0x5c18($at)
    at = 0x31 << 16;                                            // 0x001bee90: lui $at, 0x31
    a0 = g_00315c00;  // Global at 0x00315c00                   // 0x001bee94: lw $a0, 0x5c00($at)
    at = 0x31 << 16;                                            // 0x001bee98: lui $at, 0x31
    a0 = a1 - a0;                                               // 0x001bee9c: subu $a0, $a1, $a0
    v0 = g_00315c08;  // Global at 0x00315c08                   // 0x001beea0: lw $v0, 0x5c08($at)
    g_00315c3e = a0;  // Global at 0x00315c3e                   // 0x001beea4: sw $a0, 0x1c($v0)
    at = 0x31 << 16;                                            // 0x001beea8: lui $at, 0x31
    a1 = g_00315c1c;  // Global at 0x00315c1c                   // 0x001beeac: lw $a1, 0x5c1c($at)
    at = 0x31 << 16;                                            // 0x001beeb0: lui $at, 0x31
    a0 = g_00315c00;  // Global at 0x00315c00                   // 0x001beeb4: lw $a0, 0x5c00($at)
    at = 0x31 << 16;                                            // 0x001beeb8: lui $at, 0x31
    a0 = a1 - a0;                                               // 0x001beebc: subu $a0, $a1, $a0
    v0 = g_00315c08;  // Global at 0x00315c08                   // 0x001beec0: lw $v0, 0x5c08($at)
    g_00315c42 = a0;  // Global at 0x00315c42                   // 0x001beec4: sw $a0, 0x20($v0)
    at = 0x31 << 16;                                            // 0x001beec8: lui $at, 0x31
    v0 = g_00315c08;  // Global at 0x00315c08                   // 0x001beecc: lw $v0, 0x5c08($at)
    g_00315c46 = v1;  // Global at 0x00315c46                   // 0x001beed0: sw $v1, 0x24($v0)
    at = 0x31 << 16;                                            // 0x001beed4: lui $at, 0x31
    v0 = g_00315c08;  // Global at 0x00315c08                   // 0x001beed8: lw $v0, 0x5c08($at)
    v0 = g_00315c2e;  // Global at 0x00315c2e                   // 0x001beedc: lw $v0, 0xc($v0)
label_0x1beee0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001beee4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001beee8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001beeec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001beef0: jr $ra
    sp = sp + 0xa0;                                             // 0x001beef4: addiu $sp, $sp, 0xa0
}