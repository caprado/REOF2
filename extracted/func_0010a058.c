void func_0010a058() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010a058: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((s0) + 0x54);                              // 0x0010a068: lw $v1, 0x54($s0)
    /* bnezl $v1, 0x10a088 */                                   // 0x0010a06c: bnezl $v1, 0x10a088
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x0010a070: lw $v0, 0x38($v1)
    v0 = 0x1f << 16;                                            // 0x0010a074: lui $v0, 0x1f
    v1 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010a078: lw $v1, -0x210($v0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x0010a07c: sw $v1, 0x54($s0)
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x0010a080: lw $v0, 0x38($v1)
    /* nop */                                                   // 0x0010a084: nop 
    /* bnezl $v0, 0x10a09c */                                   // 0x0010a088: bnezl $v0, 0x10a09c
    a0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a08c: lhu $a0, 0xc($s0)
    func_00105518();  // 105518                                // 0x0010a090: jal 0x105518
    a0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a098: lhu $a0, 0xc($s0)
    v0 = -1;                                                    // 0x0010a09c: addiu $v0, $zero, -1
    v1 = a0 & 0x20;                                             // 0x0010a0a0: andi $v1, $a0, 0x20
    if (v1 != 0) goto label_0x10a1c4;                           // 0x0010a0a4: bnez $v1, 0x10a1c4
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0010a0a8: sw $zero, 4($s0)
    v0 = a0 & 4;                                                // 0x0010a0ac: andi $v0, $a0, 4
    /* bnezl $v0, 0x10a108 */                                   // 0x0010a0b0: bnezl $v0, 0x10a108
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x0010a0b4: lw $a1, 0x30($s0)
    v1 = a0 & 0x10;                                             // 0x0010a0b8: andi $v1, $a0, 0x10
    if (v1 == 0) goto label_0x10a1c4;                           // 0x0010a0bc: beqz $v1, 0x10a1c4
    v0 = -1;                                                    // 0x0010a0c0: addiu $v0, $zero, -1
    v0 = a0 & 8;                                                // 0x0010a0c4: andi $v0, $a0, 8
    /* beqzl $v0, 0x10a0fc */                                   // 0x0010a0c8: beqzl $v0, 0x10a0fc
    v0 = a0 | 4;                                                // 0x0010a0cc: ori $v0, $a0, 4
    func_001050b8();  // 1050b8                                // 0x0010a0d0: jal 0x1050b8
    if (v0 != 0) goto label_0x10a1c4;                           // 0x0010a0d8: bnez $v0, 0x10a1c4
    v0 = -1;                                                    // 0x0010a0dc: addiu $v0, $zero, -1
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a0e0: lhu $v0, 0xc($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0010a0e4: sw $zero, 8($s0)
    v0 = v0 & 0xfff7;                                           // 0x0010a0e8: andi $v0, $v0, 0xfff7
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x0010a0ec: sw $zero, 0x18($s0)
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010a0f0: sh $v0, 0xc($s0)
    v0 = a0 | 4;                                                // 0x0010a0f8: ori $v0, $a0, 4
    goto label_0x10a140;                                        // 0x0010a0fc: b 0x10a140
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010a100: sh $v0, 0xc($s0)
    /* nop */                                                   // 0x0010a104: nop 
    if (a1 == 0) goto label_0x10a140;                           // 0x0010a108: beqz $a1, 0x10a140
    v0 = s0 + 0x40;                                             // 0x0010a10c: addiu $v0, $s0, 0x40
    if (a1 == v0) goto label_0x10a124;                          // 0x0010a110: beql $a1, $v0, 0x10a124
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x0010a114: lw $v0, 0x3c($s0)
    func_001058e0();  // 1058e0                                // 0x0010a118: jal 0x1058e0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010a11c: lw $a0, 0x54($s0)
    v0 = *(int32_t*)((s0) + 0x3c);                              // 0x0010a120: lw $v0, 0x3c($s0)
label_0x10a124:
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x0010a124: sw $zero, 0x30($s0)
    if (v0 == 0) goto label_0x10a140;                           // 0x0010a128: beqz $v0, 0x10a140
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0010a12c: sw $v0, 4($s0)
    v1 = *(int32_t*)((s0) + 0x38);                              // 0x0010a130: lw $v1, 0x38($s0)
    goto label_0x10a1c4;                                        // 0x0010a138: b 0x10a1c4
    *(uint32_t*)(s0) = v1;                                      // 0x0010a13c: sw $v1, 0($s0)
label_0x10a140:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x0010a140: lw $v0, 0x10($s0)
    /* bnezl $v0, 0x10a158 */                                   // 0x0010a144: bnezl $v0, 0x10a158
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a148: lhu $v0, 0xc($s0)
    func_00106b60();  // 106b60                                // 0x0010a14c: jal 0x106b60
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a154: lhu $v0, 0xc($s0)
    v0 = v0 & 3;                                                // 0x0010a158: andi $v0, $v0, 3
    if (v0 == 0) goto label_0x10a170;                           // 0x0010a15c: beqz $v0, 0x10a170
    a1 = 0x11 << 16;                                            // 0x0010a160: lui $a1, 0x11
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010a164: lw $a0, 0x54($s0)
    func_00106740();  // 106740                                // 0x0010a168: jal 0x106740
    a1 = a1 + -0x5fe0;                                          // 0x0010a16c: addiu $a1, $a1, -0x5fe0
label_0x10a170:
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0010a170: lw $a1, 0x10($s0)
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x0010a174: lw $a0, 0x1c($s0)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0010a178: lw $v0, 0x20($s0)
    *(uint32_t*)(s0) = a1;                                      // 0x0010a17c: sw $a1, 0($s0)
    /* call function at address in v0 */                        // 0x0010a180: jalr $v0
    a2 = *(int32_t*)((s0) + 0x14);                              // 0x0010a184: lw $a2, 0x14($s0)
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x0010a188: lhu $v1, 0xc($s0)
    v1 = v1 & 0xdfff;                                           // 0x0010a194: andi $v1, $v1, 0xdfff
    *(uint32_t*)((s0) + 4) = a0;                                // 0x0010a198: sw $a0, 4($s0)
    if (a0 > 0) goto label_0x10a1c4;                            // 0x0010a19c: bgtz $a0, 0x10a1c4
    *(uint16_t*)((s0) + 0xc) = v1;                              // 0x0010a1a0: sh $v1, 0xc($s0)
    /* bnezl $a0, 0x10a1b8 */                                   // 0x0010a1a4: bnezl $a0, 0x10a1b8
    v0 = v1 | 0x40;                                             // 0x0010a1a8: ori $v0, $v1, 0x40
    goto label_0x10a1bc;                                        // 0x0010a1ac: b 0x10a1bc
    v0 = v1 | 0x20;                                             // 0x0010a1b0: ori $v0, $v1, 0x20
    /* nop */                                                   // 0x0010a1b4: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0010a1b8: sw $zero, 4($s0)
label_0x10a1bc:
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010a1bc: sh $v0, 0xc($s0)
    v0 = -1;                                                    // 0x0010a1c0: addiu $v0, $zero, -1
label_0x10a1c4:
    return;                                                     // 0x0010a1cc: jr $ra
    sp = sp + 0x10;                                             // 0x0010a1d0: addiu $sp, $sp, 0x10
}