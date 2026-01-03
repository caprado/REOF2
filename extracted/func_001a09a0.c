void func_001a09a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x001a09a0: lw $a0, -0x645c($gp)
    return func_00198130();  // Tail call                        // 0x001a09a4: j 0x197a10
    a1 = 2;                                                     // 0x001a09a8: addiu $a1, $zero, 2
    /* nop */                                                   // 0x001a09ac: nop 
    a0 = 0x2a << 16;                                            // 0x001a09bc: lui $a0, 0x2a
    a1 = 0x29 << 16;                                            // 0x001a09c0: lui $a1, 0x29
    a0 = a0 + 0x450;                                            // 0x001a09c4: addiu $a0, $a0, 0x450
    a1 = a1 + 0x450;                                            // 0x001a09c8: addiu $a1, $a1, 0x450
    a2 = 0x1000;                                                // 0x001a09cc: addiu $a2, $zero, 0x1000
    goto label_0x1a0a40;                                        // 0x001a09d0: j 0x1a0a40
    t2 = 1;                                                     // 0x001a09d4: addiu $t2, $zero, 1
    /* nop */                                                   // 0x001a09d8: nop 
    /* nop */                                                   // 0x001a09dc: nop 
    a0 = 0x2a << 16;                                            // 0x001a09e4: lui $a0, 0x2a
    return func_001a0c10();  // Tail call                       // 0x001a09e8: j 0x1a0c10
    a0 = a0 + 0x450;                                            // 0x001a09ec: addiu $a0, $a0, 0x450
    a0 = 0x2a << 16;                                            // 0x001a09f4: lui $a0, 0x2a
    goto label_0x1a0ab0;                                        // 0x001a09f8: j 0x1a0ab0
    a0 = a0 + 0x450;                                            // 0x001a09fc: addiu $a0, $a0, 0x450
    a0 = 0x2a << 16;                                            // 0x001a0a04: lui $a0, 0x2a
    return func_001a1090();  // Tail call                        // 0x001a0a08: j 0x1a0f10
    a0 = a0 + 0x450;                                            // 0x001a0a0c: addiu $a0, $a0, 0x450
    a0 = 0x2a << 16;                                            // 0x001a0a14: lui $a0, 0x2a
    return func_001a0fd0();  // Tail call                       // 0x001a0a18: j 0x1a0fd0
    a0 = a0 + 0x450;                                            // 0x001a0a1c: addiu $a0, $a0, 0x450
    a0 = 0x2a << 16;                                            // 0x001a0a24: lui $a0, 0x2a
    return func_001a1010();  // Tail call                       // 0x001a0a28: j 0x1a1010
    a0 = a0 + 0x450;                                            // 0x001a0a2c: addiu $a0, $a0, 0x450
    a0 = 0x2a << 16;                                            // 0x001a0a30: lui $a0, 0x2a
    return func_001a1250();  // Tail call                        // 0x001a0a34: j 0x1a1090
    a0 = a0 + 0x450;                                            // 0x001a0a38: addiu $a0, $a0, 0x450
    /* nop */                                                   // 0x001a0a3c: nop 
label_0x1a0a40:
    g_002a0450 = a2;  // Global at 0x002a0450                   // 0x001a0a40: sw $a2, 0($a0)
    g_002a0458 = a1;  // Global at 0x002a0458                   // 0x001a0a44: sw $a1, 8($a0)
    g_002a0454 = t0;  // Global at 0x002a0454                   // 0x001a0a48: sw $t0, 4($a0)
    g_002a045c = t2;  // Global at 0x002a045c                   // 0x001a0a4c: sw $t2, 0xc($a0)
    if (t2 == 0) goto label_0x1a0a74;                           // 0x001a0a50: beqz $t2, 0x1a0a74
    g_002a0468 = t1;  // Global at 0x002a0468                   // 0x001a0a54: sw $t1, 0x18($a0)
    v0 = a3 + t1;                                               // 0x001a0a58: addu $v0, $a3, $t1
    v1 = t1 + -1;                                               // 0x001a0a5c: addiu $v1, $t1, -1
    v1 = ~v1;                                                   // 0x001a0a60: not $v1, $v1
    v0 = v0 + -1;                                               // 0x001a0a64: addiu $v0, $v0, -1
    v0 = v1 & v0;                                               // 0x001a0a68: and $v0, $v1, $v0
    goto label_0x1a0a88;                                        // 0x001a0a6c: b 0x1a0a88
    g_002a0464 = v0;  // Global at 0x002a0464                   // 0x001a0a70: sw $v0, 0x14($a0)
label_0x1a0a74:
    v1 = t1 + -1;                                               // 0x001a0a74: addiu $v1, $t1, -1
    v0 = a3 + t0;                                               // 0x001a0a78: addu $v0, $a3, $t0
    v1 = ~v1;                                                   // 0x001a0a7c: not $v1, $v1
    v0 = v1 & v0;                                               // 0x001a0a80: and $v0, $v1, $v0
    g_002a0464 = v0;  // Global at 0x002a0464                   // 0x001a0a84: sw $v0, 0x14($a0)
label_0x1a0a88:
    v1 = g_002a0464;  // Global at 0x002a0464                   // 0x001a0a88: lw $v1, 0x14($a0)
    v0 = 0 | 0xffff;                                            // 0x001a0a8c: ori $v0, $zero, 0xffff
    a2 = a2 << 4;                                               // 0x001a0a90: sll $a2, $a2, 4
    g_002a0460 = v1;  // Global at 0x002a0460                   // 0x001a0a94: sw $v1, 0x10($a0)
    g_002a046c = 0;  // Global at 0x002a046c                    // 0x001a0a98: sw $zero, 0x1c($a0)
    g_002a0470 = 0;  // Global at 0x002a0470                    // 0x001a0a9c: sw $zero, 0x20($a0)
    g_002a0474 = v0;  // Global at 0x002a0474                   // 0x001a0aa0: sw $v0, 0x24($a0)
    return func_001a5750();  // Tail call                        // 0x001a0aa8: j 0x1a5720
label_0x1a0ab0:
    goto label_0x1a0ac0;                                        // 0x001a0ab0: j 0x1a0ac0
    a2 = g_002a0468;  // Global at 0x002a0468                   // 0x001a0ab4: lw $a2, 0x18($a0)
    /* nop */                                                   // 0x001a0ab8: nop 
    /* nop */                                                   // 0x001a0abc: nop 
label_0x1a0ac0:
    sp = sp + -0x50;                                            // 0x001a0ac0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a0ac8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a0ad4: addu.qb $zero, $sp, $s1
    func_001a1250();  // 1a1250                                // 0x001a0ae0: jal 0x1a1250
    v1 = s2 + s1;                                               // 0x001a0ae8: addu $v1, $s2, $s1
    at = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x001a0aec: sltu $at, $v1, $v0
    if (at != 0) goto label_0x1a0b00;                           // 0x001a0af0: bnez $at, 0x1a0b00
    /* nop */                                                   // 0x001a0af4: nop 
    goto label_0x1a0bec;                                        // 0x001a0af8: b 0x1a0bec
label_0x1a0b00:
    if (s2 != 0) goto label_0x1a0b10;                           // 0x001a0b00: bnez $s2, 0x1a0b10
    goto label_0x1a0bec;                                        // 0x001a0b08: b 0x1a0bec
label_0x1a0b10:
    func_001a12a0();  // 1a12a0                                // 0x001a0b10: jal 0x1a12a0
    /* nop */                                                   // 0x001a0b14: nop 
    v0 = 0 | 0xffff;                                            // 0x001a0b1c: ori $v0, $zero, 0xffff
    if (s0 != v0) goto label_0x1a0b30;                          // 0x001a0b20: bne $s0, $v0, 0x1a0b30
    /* nop */                                                   // 0x001a0b24: nop 
    goto label_0x1a0bec;                                        // 0x001a0b28: b 0x1a0bec
label_0x1a0b30:
    v1 = *(int32_t*)((s3) + 8);                                 // 0x001a0b30: lw $v1, 8($s3)
    v0 = s0 << 4;                                               // 0x001a0b34: sll $v0, $s0, 4
    v1 = v0 + v1;                                               // 0x001a0b38: addu $v1, $v0, $v1
    *(uint16_t*)((v1) + 0xa) = 0;                               // 0x001a0b3c: sh $zero, 0xa($v1)
    v1 = *(int32_t*)((s3) + 8);                                 // 0x001a0b40: lw $v1, 8($s3)
    v1 = v0 + v1;                                               // 0x001a0b44: addu $v1, $v0, $v1
    *(uint32_t*)((v1) + 4) = s2;                                // 0x001a0b48: sw $s2, 4($v1)
    v1 = *(int32_t*)((s3) + 8);                                 // 0x001a0b4c: lw $v1, 8($s3)
    a0 = *(int32_t*)((s3) + 0x18);                              // 0x001a0b50: lw $a0, 0x18($s3)
    v1 = v0 + v1;                                               // 0x001a0b54: addu $v1, $v0, $v1
    *(uint16_t*)((v1) + 8) = a0;                                // 0x001a0b58: sh $a0, 8($v1)
    v1 = *(int32_t*)((s3) + 0xc);                               // 0x001a0b5c: lw $v1, 0xc($s3)
    if (v1 == 0) goto label_0x1a0ba4;                           // 0x001a0b60: beqz $v1, 0x1a0ba4
    v1 = s1 + -1;                                               // 0x001a0b64: addiu $v1, $s1, -1
    a0 = *(int32_t*)((s3) + 8);                                 // 0x001a0b68: lw $a0, 8($s3)
    v1 = s1 + -1;                                               // 0x001a0b6c: addiu $v1, $s1, -1
    a1 = *(int32_t*)((s3) + 0x10);                              // 0x001a0b70: lw $a1, 0x10($s3)
    v1 = ~v1;                                                   // 0x001a0b74: not $v1, $v1
    a0 = a0 + v0;                                               // 0x001a0b78: addu $a0, $a0, $v0
    g_002a0450 = a1;  // Global at 0x002a0450                   // 0x001a0b7c: sw $a1, 0($a0)
    a0 = *(int32_t*)((s3) + 8);                                 // 0x001a0b80: lw $a0, 8($s3)
    v0 = a0 + v0;                                               // 0x001a0b84: addu $v0, $a0, $v0
    v0 = *(int32_t*)(v0);                                       // 0x001a0b88: lw $v0, 0($v0)
    v0 = v0 + s2;                                               // 0x001a0b8c: addu $v0, $v0, $s2
    v0 = s1 + v0;                                               // 0x001a0b90: addu $v0, $s1, $v0
    v0 = v0 + -1;                                               // 0x001a0b94: addiu $v0, $v0, -1
    v0 = v1 & v0;                                               // 0x001a0b98: and $v0, $v1, $v0
    goto label_0x1a0bd0;                                        // 0x001a0b9c: b 0x1a0bd0
    *(uint32_t*)((s3) + 0x10) = v0;                             // 0x001a0ba0: sw $v0, 0x10($s3)
label_0x1a0ba4:
    a0 = *(int32_t*)((s3) + 0x10);                              // 0x001a0ba4: lw $a0, 0x10($s3)
    a1 = ~v1;                                                   // 0x001a0ba8: not $a1, $v1
    v1 = *(int32_t*)((s3) + 8);                                 // 0x001a0bac: lw $v1, 8($s3)
    a0 = a0 - s2;                                               // 0x001a0bb0: subu $a0, $a0, $s2
    a0 = a1 & a0;                                               // 0x001a0bb4: and $a0, $a1, $a0
    v1 = v1 + v0;                                               // 0x001a0bb8: addu $v1, $v1, $v0
    *(uint32_t*)(v1) = a0;                                      // 0x001a0bbc: sw $a0, 0($v1)
    v1 = *(int32_t*)((s3) + 8);                                 // 0x001a0bc0: lw $v1, 8($s3)
    v0 = v1 + v0;                                               // 0x001a0bc4: addu $v0, $v1, $v0
    v0 = *(int32_t*)(v0);                                       // 0x001a0bc8: lw $v0, 0($v0)
    *(uint32_t*)((s3) + 0x10) = v0;                             // 0x001a0bcc: sw $v0, 0x10($s3)
label_0x1a0bd0:
    v0 = *(int32_t*)((s3) + 0x1c);                              // 0x001a0bd0: lw $v0, 0x1c($s3)
    v0 = v0 + s2;                                               // 0x001a0bdc: addu $v0, $v0, $s2
    func_001a1310();  // 1a1310                                // 0x001a0be0: jal 0x1a1310
    *(uint32_t*)((s3) + 0x1c) = v0;                             // 0x001a0be4: sw $v0, 0x1c($s3)
    v0 = s0 + 1;                                                // 0x001a0be8: addiu $v0, $s0, 1
label_0x1a0bec:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a0bf4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a0bf8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a0bfc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a0c00: jr $ra
    sp = sp + 0x50;                                             // 0x001a0c04: addiu $sp, $sp, 0x50
}