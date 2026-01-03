void func_0012a118() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_24, local_4;
    
    sp = sp + -0x70;                                            // 0x0012a118: addiu $sp, $sp, -0x70
    s0 = 0x1f << 16;                                            // 0x0012a120: lui $s0, 0x1f
    func_0012f3e0();  // 12f3e0                                // 0x0012a14c: jal 0x12f3e0
    s0 = s0 + 0x6a08;                                           // 0x0012a150: addiu $s0, $s0, 0x6a08
    a0 = 0x1f << 16;                                            // 0x0012a154: lui $a0, 0x1f
    a0 = a0 + 0x6608;                                           // 0x0012a15c: addiu $a0, $a0, 0x6608
    func_0013f568();  // 13f568                                // 0x0012a160: jal 0x13f568
    a1 = 0x400;                                                 // 0x0012a164: addiu $a1, $zero, 0x400
    a1 = 0x20;                                                  // 0x0012a168: addiu $a1, $zero, 0x20
    func_0013f020();  // 13f020                                // 0x0012a170: jal 0x13f020
    a0 = s0 + 0x20;                                             // 0x0012a178: addiu $a0, $s0, 0x20
    a1 = 0x20;                                                  // 0x0012a17c: addiu $a1, $zero, 0x20
    func_0013f020();  // 13f020                                // 0x0012a180: jal 0x13f020
    local_0 = v0;                                               // 0x0012a184: sw $v0, 0($sp)
    s0 = *(int32_t*)((s1) + 0x14);                              // 0x0012a188: lw $s0, 0x14($s1)
    a0 = 2;                                                     // 0x0012a190: addiu $a0, $zero, 2
    func_0012f440();  // 12f440                                // 0x0012a198: jal 0x12f440
    local_4 = v0;                                               // 0x0012a19c: sw $v0, 4($sp)
    func_0012f9a0();  // 12f9a0                                // 0x0012a1b0: jal 0x12f9a0
    func_0012f680();  // 12f680                                // 0x0012a1b8: jal 0x12f680
    func_0012fcf8();  // 12fcf8                                // 0x0012a1c0: jal 0x12fcf8
    /* nop */                                                   // 0x0012a1c4: nop 
    v1 = *(int32_t*)(s5);                                       // 0x0012a1c8: lw $v1, 0($s5)
    s3 = sp + 0x10;                                             // 0x0012a1cc: addiu $s3, $sp, 0x10
    a2 = 0x400;                                                 // 0x0012a1d0: addiu $a2, $zero, 0x400
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x0012a1d8: lw $v0, 0x18($v1)
    a1 = 1;                                                     // 0x0012a1dc: addiu $a1, $zero, 1
    /* call function at address in v0 */                        // 0x0012a1e0: jalr $v0
    a2 = local_14;                                              // 0x0012a1e8: lw $a2, 0x14($sp)
    /* bnezl $a2, 0x12a218 */                                   // 0x0012a1ec: bnezl $a2, 0x12a218
    v0 = g_001f6a08;  // Global at 0x001f6a08                   // 0x0012a1f0: lw $v0, 0($s0)
    /* nop */                                                   // 0x0012a1f4: nop 
label_0x12a1f8:
    /* nop */                                                   // 0x0012a1f8: nop 
    /* nop */                                                   // 0x0012a1fc: nop 
    /* nop */                                                   // 0x0012a200: nop 
    /* nop */                                                   // 0x0012a204: nop 
    /* nop */                                                   // 0x0012a208: nop 
    goto label_0x12a1f8;                                        // 0x0012a20c: b 0x12a1f8
    /* nop */                                                   // 0x0012a210: nop 
    /* nop */                                                   // 0x0012a214: nop 
    s2 = sp + 0x20;                                             // 0x0012a218: addiu $s2, $sp, 0x20
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x0012a224: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0012a228: jalr $v1
    v0 = local_24;                                              // 0x0012a230: lw $v0, 0x24($sp)
    a2 = local_14;                                              // 0x0012a234: lw $a2, 0x14($sp)
    v0 = (v0 < a2) ? 1 : 0;                                     // 0x0012a238: slt $v0, $v0, $a2
    if (v0 == 0) goto label_0x12a268;                           // 0x0012a23c: beqz $v0, 0x12a268
    a0 = local_20;                                              // 0x0012a240: lw $a0, 0x20($sp)
    /* nop */                                                   // 0x0012a244: nop 
label_0x12a248:
    /* nop */                                                   // 0x0012a248: nop 
    /* nop */                                                   // 0x0012a24c: nop 
    /* nop */                                                   // 0x0012a250: nop 
    /* nop */                                                   // 0x0012a254: nop 
    /* nop */                                                   // 0x0012a258: nop 
    goto label_0x12a248;                                        // 0x0012a25c: b 0x12a248
    /* nop */                                                   // 0x0012a260: nop 
    /* nop */                                                   // 0x0012a264: nop 
label_0x12a268:
    func_00107ab8();  // 107ab8                                // 0x0012a268: jal 0x107ab8
    a1 = local_10;                                              // 0x0012a26c: lw $a1, 0x10($sp)
    v1 = *(int32_t*)(s5);                                       // 0x0012a270: lw $v1, 0($s5)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012a27c: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012a280: jalr $v0
    v1 = g_001f6a08;  // Global at 0x001f6a08                   // 0x0012a288: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x0012a290: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012a294: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012a298: jalr $v0
    func_0012f7a8();  // 12f7a8                                // 0x0012a2a0: jal 0x12f7a8
    func_0012f610();  // 12f610                                // 0x0012a2a8: jal 0x12f610
    v1 = *(int32_t*)(s5);                                       // 0x0012a2b0: lw $v1, 0($s5)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0012a2b4: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x0012a2b8: jalr $v0
    a0 = local_4;                                               // 0x0012a2c0: lw $a0, 4($sp)
    v1 = g_001f6a28;  // Global at 0x001f6a28                   // 0x0012a2c4: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0012a2c8: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x0012a2cc: jalr $v0
    /* nop */                                                   // 0x0012a2d0: nop 
    a0 = local_0;                                               // 0x0012a2d4: lw $a0, 0($sp)
    v1 = g_001f6a28;  // Global at 0x001f6a28                   // 0x0012a2d8: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0012a2dc: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x0012a2e0: jalr $v0
    /* nop */                                                   // 0x0012a2e4: nop 
    func_0012f410();  // 12f410                                // 0x0012a2e8: jal 0x12f410
    /* nop */                                                   // 0x0012a2ec: nop 
    return;                                                     // 0x0012a30c: jr $ra
    sp = sp + 0x70;                                             // 0x0012a310: addiu $sp, $sp, 0x70
}