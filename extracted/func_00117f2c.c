void func_00117f2c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8, local_c;
    
    sp = sp + -0x40;                                            // 0x00117f2c: addiu $sp, $sp, -0x40
    v1 = g_001f0738;  // Global at 0x001f0738                   // 0x00117f30: lw $v1, 0x3e0($v0)
    if (v1 == 0) goto label_0x117f48;                           // 0x00117f3c: beqz $v1, 0x117f48
    a1 = g_001f004a;  // Global at 0x001f004a                   // 0x00117f44: lw $a1, 0xc($a0)
label_0x117f48:
    v1 = 0x440;                                                 // 0x00117f48: addiu $v1, $zero, 0x440
    v0 = 0x1f << 16;                                            // 0x00117f4c: lui $v0, 0x1f
    /* multiply: a1 * v1 -> hi:lo */                            // 0x00117f50: mult $ac3, $a1, $v1
    a0 = 0x25 << 16;                                            // 0x00117f54: lui $a0, 0x25
    g_001f03d8 = a1;  // Global at 0x001f03d8                   // 0x00117f58: sw $a1, 0x3d8($v0)
    a0 = a0 + -0x11c0;                                          // 0x00117f5c: addiu $a0, $a0, -0x11c0
    a1 = 0x2000 << 16;                                          // 0x00117f60: lui $a1, 0x2000
    v1 = v1 + a0;                                               // 0x00117f64: addu $v1, $v1, $a0
    s0 = v1 | a1;                                               // 0x00117f68: or $s0, $v1, $a1
    /* lwl $v0, 3($s0) */                                       // 0x00117f6c: lwl $v0, 3($s0)
    /* lwr $v0, 0($s0) */                                       // 0x00117f70: lwr $v0, 0($s0)
    /* swl $v0, 3($sp) */                                       // 0x00117f74: swl $v0, 3($sp)
    /* swr $v0, 0($sp) */                                       // 0x00117f78: swr $v0, 0($sp)
    /* lwl $a2, 7($s0) */                                       // 0x00117f7c: lwl $a2, 7($s0)
    /* lwr $a2, 4($s0) */                                       // 0x00117f80: lwr $a2, 4($s0)
    /* swl $a2, 7($sp) */                                       // 0x00117f84: swl $a2, 7($sp)
    /* swr $a2, 4($sp) */                                       // 0x00117f88: swr $a2, 4($sp)
    /* lwl $v1, 0xb($s0) */                                     // 0x00117f8c: lwl $v1, 0xb($s0)
    /* lwr $v1, 8($s0) */                                       // 0x00117f90: lwr $v1, 8($s0)
    /* swl $v1, 0xb($sp) */                                     // 0x00117f94: swl $v1, 0xb($sp)
    /* swr $v1, 8($sp) */                                       // 0x00117f98: swr $v1, 8($sp)
    /* lwl $a3, 0xf($s0) */                                     // 0x00117f9c: lwl $a3, 0xf($s0)
    /* lwr $a3, 0xc($s0) */                                     // 0x00117fa0: lwr $a3, 0xc($s0)
    /* swl $a3, 0xf($sp) */                                     // 0x00117fa4: swl $a3, 0xf($sp)
    /* swr $a3, 0xc($sp) */                                     // 0x00117fa8: swr $a3, 0xc($sp)
    v0 = local_0;                                               // 0x00117fac: lw $v0, 0($sp)
    if (v0 < 0) goto label_0x117fc4;                            // 0x00117fb0: bltz $v0, 0x117fc4
    a0 = local_8;                                               // 0x00117fb4: lw $a0, 8($sp)
    a1 = s0 + 0x10;                                             // 0x00117fb8: addiu $a1, $s0, 0x10
    func_00107ab8();  // 107ab8                                // 0x00117fbc: jal 0x107ab8
    a2 = local_c;                                               // 0x00117fc0: lw $a2, 0xc($sp)
label_0x117fc4:
    v0 = local_4;                                               // 0x00117fc4: lw $v0, 4($sp)
    a0 = v0 + -2;                                               // 0x00117fc8: addiu $a0, $v0, -2
    v1 = ((unsigned)a0 < (unsigned)0x19) ? 1 : 0;               // 0x00117fcc: sltiu $v1, $a0, 0x19
    if (v1 == 0) goto label_0x118258;                           // 0x00117fd0: beqz $v1, 0x118258
    v0 = 0x22 << 16;                                            // 0x00117fd4: lui $v0, 0x22
    v1 = a0 << 2;                                               // 0x00117fd8: sll $v1, $a0, 2
    v0 = v0 + 0x13a0;                                           // 0x00117fdc: addiu $v0, $v0, 0x13a0
    v1 = v1 + v0;                                               // 0x00117fe0: addu $v1, $v1, $v0
    a0 = *(int32_t*)(v1);                                       // 0x00117fe4: lw $a0, 0($v1)
    /* jump to address in a0 */                                 // 0x00117fe8: jr $a0
    /* nop */                                                   // 0x00117fec: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00117ff0: lw $v1, 0x14($s0)
    if (v1 <= 0) goto label_0x118040;                           // 0x00117ff4: blez $v1, 0x118040
    a3 = s0 + 0x14;                                             // 0x00117ff8: addiu $a3, $s0, 0x14
    t0 = g_001f0008;  // Global at 0x001f0008                   // 0x00117ffc: lw $t0, 8($a3)
    v0 = 0x2000 << 16;                                          // 0x00118000: lui $v0, 0x2000
    if (v1 <= 0) goto label_0x118040;                           // 0x00118008: blez $v1, 0x118040
    t2 = t0 | v0;                                               // 0x0011800c: or $t2, $t0, $v0
    t1 = s0 + 0x24;                                             // 0x00118010: addiu $t1, $s0, 0x24
    v0 = t1 + a2;                                               // 0x00118014: addu $v0, $t1, $a2
label_0x118018:
    a1 = t2 + a2;                                               // 0x00118018: addu $a1, $t2, $a2
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011801c: lbu $v1, 0($v0)
    a0 = t0 + a2;                                               // 0x00118020: addu $a0, $t0, $a2
    a2 = a2 + 1;                                                // 0x00118024: addiu $a2, $a2, 1
    g_20000000 = v1;  // Global at 0x20000000                   // 0x00118028: sb $v1, 0($a1)
    g_001efffe = v1;  // Global at 0x001efffe                   // 0x0011802c: sb $v1, 0($a0)
    v0 = g_001f0000;  // Global at 0x001f0000                   // 0x00118030: lw $v0, 0($a3)
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x00118034: slt $v0, $a2, $v0
    if (v0 != 0) goto label_0x118018;                           // 0x00118038: bnez $v0, 0x118018
    v0 = t1 + a2;                                               // 0x0011803c: addu $v0, $t1, $a2
label_0x118040:
    v1 = g_001f0004;  // Global at 0x001f0004                   // 0x00118040: lw $v1, 4($a3)
    if (v1 <= 0) goto label_0x118258;                           // 0x00118044: blez $v1, 0x118258
    v0 = 0x2000 << 16;                                          // 0x00118048: lui $v0, 0x2000
    t0 = g_001f000c;  // Global at 0x001f000c                   // 0x0011804c: lw $t0, 0xc($a3)
    if (v1 <= 0) goto label_0x118258;                           // 0x00118054: blez $v1, 0x118258
    t2 = t0 | v0;                                               // 0x00118058: or $t2, $t0, $v0
    t1 = a3 + 0x50;                                             // 0x0011805c: addiu $t1, $a3, 0x50
    v0 = t1 + a2;                                               // 0x00118060: addu $v0, $t1, $a2
    /* nop */                                                   // 0x00118064: nop 
label_0x118068:
    a1 = t2 + a2;                                               // 0x00118068: addu $a1, $t2, $a2
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011806c: lbu $v1, 0($v0)
    a0 = t0 + a2;                                               // 0x00118070: addu $a0, $t0, $a2
    a2 = a2 + 1;                                                // 0x00118074: addiu $a2, $a2, 1
    g_20000000 = v1;  // Global at 0x20000000                   // 0x00118078: sb $v1, 0($a1)
    g_001efffe = v1;  // Global at 0x001efffe                   // 0x0011807c: sb $v1, 0($a0)
    v0 = g_001f0004;  // Global at 0x001f0004                   // 0x00118080: lw $v0, 4($a3)
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x00118084: slt $v0, $a2, $v0
    if (v0 != 0) goto label_0x118068;                           // 0x00118088: bnez $v0, 0x118068
    v0 = t1 + a2;                                               // 0x0011808c: addu $v0, $t1, $a2
    goto label_0x11825c;                                        // 0x00118090: b 0x11825c
    a0 = local_0;                                               // 0x00118094: lw $a0, 0($sp)
    v0 = local_8;                                               // 0x00118098: lw $v0, 8($sp)
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011809c: lw $v1, 0($v0)
    if (v1 <= 0) goto label_0x11825c;                           // 0x001180a0: blez $v1, 0x11825c
    a0 = local_0;                                               // 0x001180a4: lw $a0, 0($sp)
    /* lwl $a0, 0x17($s0) */                                    // 0x001180a8: lwl $a0, 0x17($s0)
    /* lwr $a0, 0x14($s0) */                                    // 0x001180ac: lwr $a0, 0x14($s0)
    /* swl $a0, 0x13($sp) */                                    // 0x001180b0: swl $a0, 0x13($sp)
    /* swr $a0, 0x10($sp) */                                    // 0x001180b4: swr $a0, 0x10($sp)
    a0 = s0 + 0x18;                                             // 0x001180b8: addiu $a0, $s0, 0x18
    a2 = local_10;                                              // 0x001180bc: lw $a2, 0x10($sp)
    v0 = a0 | a2;                                               // 0x001180c0: or $v0, $a0, $a2
    v0 = v0 & 7;                                                // 0x001180c4: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x11812c;                           // 0x001180c8: beqz $v0, 0x11812c
    v0 = s0 + 0x158;                                            // 0x001180cc: addiu $v0, $s0, 0x158
label_0x1180d0:
    a0 = a0 + 0x20;                                             // 0x00118110: addiu $a0, $a0, 0x20
    a2 = a2 + 0x20;                                             // 0x00118114: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00118118: nop 
    if (a0 != v0) goto label_0x1180d0;                          // 0x0011811c: bne $a0, $v0, 0x1180d0
    /* nop */                                                   // 0x00118120: nop 
    goto label_0x118160;                                        // 0x00118124: b 0x118160
    /* nop */                                                   // 0x00118128: nop 
label_0x11812c:
    a0 = a0 + 0x20;                                             // 0x0011814c: addiu $a0, $a0, 0x20
    a2 = a2 + 0x20;                                             // 0x00118150: addiu $a2, $a2, 0x20
    /* nop */                                                   // 0x00118154: nop 
    if (a0 != v0) goto label_0x11812c;                          // 0x00118158: bne $a0, $v0, 0x11812c
    /* nop */                                                   // 0x0011815c: nop 
label_0x118160:
    /* lwl $t0, 3($a0) */                                       // 0x00118160: lwl $t0, 3($a0)
    /* lwr $t0, 0($a0) */                                       // 0x00118164: lwr $t0, 0($a0)
    /* swl $t0, 3($a2) */                                       // 0x00118168: swl $t0, 3($a2)
    goto label_0x118258;                                        // 0x0011816c: b 0x118258
    /* swr $t0, 0($a2) */                                       // 0x00118170: swr $t0, 0($a2)
    /* lwl $a2, 0x17($s0) */                                    // 0x00118174: lwl $a2, 0x17($s0)
    /* lwr $a2, 0x14($s0) */                                    // 0x00118178: lwr $a2, 0x14($s0)
    /* swl $a2, 0x13($sp) */                                    // 0x0011817c: swl $a2, 0x13($sp)
    /* swr $a2, 0x10($sp) */                                    // 0x00118180: swr $a2, 0x10($sp)
    v0 = local_10;                                              // 0x00118184: lw $v0, 0x10($sp)
    goto label_0x11825c;                                        // 0x00118208: b 0x11825c
    a0 = local_0;                                               // 0x0011820c: lw $a0, 0($sp)
    /* lwl $a3, 0x17($s0) */                                    // 0x00118210: lwl $a3, 0x17($s0)
    /* lwr $a3, 0x14($s0) */                                    // 0x00118214: lwr $a3, 0x14($s0)
    /* swl $a3, 0x13($sp) */                                    // 0x00118218: swl $a3, 0x13($sp)
    /* swr $a3, 0x10($sp) */                                    // 0x0011821c: swr $a3, 0x10($sp)
    /* lwl $a0, 0x1b($s0) */                                    // 0x00118220: lwl $a0, 0x1b($s0)
    /* lwr $a0, 0x18($s0) */                                    // 0x00118224: lwr $a0, 0x18($s0)
    /* swl $a0, 0x17($sp) */                                    // 0x00118228: swl $a0, 0x17($sp)
    /* swr $a0, 0x14($sp) */                                    // 0x0011822c: swr $a0, 0x14($sp)
    a2 = local_14;                                              // 0x00118230: lw $a2, 0x14($sp)
    v0 = ((unsigned)a2 < (unsigned)0x401) ? 1 : 0;              // 0x00118234: sltiu $v0, $a2, 0x401
    if (v0 != 0) goto label_0x118250;                           // 0x00118238: bnez $v0, 0x118250
    a0 = local_10;                                              // 0x0011823c: lw $a0, 0x10($sp)
    v0 = 0x400;                                                 // 0x00118240: addiu $v0, $zero, 0x400
    a2 = 0x400;                                                 // 0x00118244: addiu $a2, $zero, 0x400
    local_14 = v0;                                              // 0x00118248: sw $v0, 0x14($sp)
    a0 = local_10;                                              // 0x0011824c: lw $a0, 0x10($sp)
label_0x118250:
    func_00107ab8();  // 107ab8                                // 0x00118250: jal 0x107ab8
    a1 = s0 + 0x1c;                                             // 0x00118254: addiu $a1, $s0, 0x1c
label_0x118258:
    a0 = local_0;                                               // 0x00118258: lw $a0, 0($sp)
label_0x11825c:
    if (a0 >= 0) goto label_0x1182c4;                           // 0x0011825c: bgez $a0, 0x1182c4
    a3 = 0x1f << 16;                                            // 0x00118260: lui $a3, 0x1f
    v0 = -a0;                                                   // 0x00118264: negu $v0, $a0
    v1 = g_001f0358;  // Global at 0x001f0358                   // 0x00118268: lw $v1, 0x358($a3)
    local_0 = v0;                                               // 0x00118270: sw $v0, 0($sp)
    if (v1 != a1) goto label_0x118290;                          // 0x00118274: bne $v1, $a1, 0x118290
    v0 = -1;                                                    // 0x0011827c: addiu $v0, $zero, -1
    g_001f0358 = v0;  // Global at 0x001f0358                   // 0x00118280: sw $v0, 0x358($a3)
    goto label_0x1182d0;                                        // 0x00118284: b 0x1182d0
    /* nop */                                                   // 0x0011828c: nop 
label_0x118290:
    a2 = a2 + 1;                                                // 0x00118290: addiu $a2, $a2, 1
label_0x118294:
    v0 = (a2 < 0x20) ? 1 : 0;                                   // 0x00118294: slti $v0, $a2, 0x20
    if (v0 == 0) goto label_0x1182cc;                           // 0x00118298: beqz $v0, 0x1182cc
    v0 = a3 + 0x358;                                            // 0x0011829c: addiu $v0, $a3, 0x358
    v1 = a2 << 2;                                               // 0x001182a0: sll $v1, $a2, 2
    v1 = v1 + v0;                                               // 0x001182a4: addu $v1, $v1, $v0
    a0 = *(int32_t*)(v1);                                       // 0x001182a8: lw $a0, 0($v1)
    if (a0 != a1) goto label_0x118294;                          // 0x001182ac: bne $a0, $a1, 0x118294
    a2 = a2 + 1;                                                // 0x001182b0: addiu $a2, $a2, 1
    v0 = -1;                                                    // 0x001182b4: addiu $v0, $zero, -1
    *(uint32_t*)(v1) = v0;                                      // 0x001182b8: sw $v0, 0($v1)
    goto label_0x1182d0;                                        // 0x001182bc: b 0x1182d0
label_0x1182c4:
    WaitSema();  // 0x114310                                    // 0x001182c4: jal 0x114310
    /* nop */                                                   // 0x001182c8: nop 
label_0x1182cc:
label_0x1182d0:
    return;                                                     // 0x001182d4: jr $ra
    sp = sp + 0x40;                                             // 0x001182d8: addiu $sp, $sp, 0x40
}