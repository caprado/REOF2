void func_0015d768() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_20, local_4, local_8;
    uint32_t local_c;
    
    sp = sp + -0x80;                                            // 0x0015d768: addiu $sp, $sp, -0x80
    a0 = *(int32_t*)((s2) + 0x1c);                              // 0x0015d7a0: lw $a0, 0x1c($s2)
    s0 = *(int32_t*)((s6) + 0x40);                              // 0x0015d7a4: lw $s0, 0x40($s6)
    func_0015d9d0();  // 15d9d0                                // 0x0015d7a8: jal 0x15d9d0
    s7 = *(int32_t*)((s2) + 0x20);                              // 0x0015d7ac: lw $s7, 0x20($s2)
    local_4 = v0;                                               // 0x0015d7b0: sw $v0, 4($sp)
    v0 = *(int32_t*)(s2);                                       // 0x0015d7b4: lw $v0, 0($s2)
    a0 = *(int32_t*)((s2) + 0x10);                              // 0x0015d7b8: lw $a0, 0x10($s2)
    local_8 = v0;                                               // 0x0015d7bc: sw $v0, 8($sp)
    a1 = *(int32_t*)((s2) + 4);                                 // 0x0015d7c0: lw $a1, 4($s2)
    local_c = a1;                                               // 0x0015d7c4: sw $a1, 0xc($sp)
    a2 = *(int32_t*)((s2) + 8);                                 // 0x0015d7c8: lw $a2, 8($s2)
    local_10 = a2;                                              // 0x0015d7cc: sw $a2, 0x10($sp)
    a3 = *(int32_t*)((s2) + 0xc);                               // 0x0015d7d0: lw $a3, 0xc($s2)
    func_0015da10();  // 15da10                                // 0x0015d7d4: jal 0x15da10
    local_14 = a3;                                              // 0x0015d7d8: sw $a3, 0x14($sp)
    local_18 = v0;                                              // 0x0015d7dc: sw $v0, 0x18($sp)
    v0 = *(int32_t*)((s2) + 0x24);                              // 0x0015d7e8: lw $v0, 0x24($s2)
    s3 = *(int32_t*)((s2) + 0x18);                              // 0x0015d7ec: lw $s3, 0x18($s2)
    s4 = *(int32_t*)((s2) + 0x34);                              // 0x0015d7f0: lw $s4, 0x34($s2)
    s5 = *(int32_t*)((s2) + 0x30);                              // 0x0015d7f4: lw $s5, 0x30($s2)
    fp = *(int32_t*)((s2) + 0x2c);                              // 0x0015d7f8: lw $fp, 0x2c($s2)
    local_1c = v0;                                              // 0x0015d7fc: sw $v0, 0x1c($sp)
    a2 = *(int32_t*)((s2) + 0x28);                              // 0x0015d800: lw $a2, 0x28($s2)
    func_00176ae8();  // 176ae8                                // 0x0015d804: jal 0x176ae8
    local_20 = a2;                                              // 0x0015d808: sw $a2, 0x20($sp)
    if (v0 == 0) goto label_0x15d824;                           // 0x0015d80c: beqz $v0, 0x15d824
    a1 = local_0;                                               // 0x0015d810: lw $a1, 0($sp)
    a0 = 0x22 << 16;                                            // 0x0015d814: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015d818: jal 0x163410
    a0 = &str_00227500;  // "mwl_convPtypeFromSFD : Invalid Ptype" // 0x0015d81c: addiu $a0, $a0, 0x7500
    a1 = local_0;                                               // 0x0015d820: lw $a1, 0($sp)
label_0x15d824:
    func_0015d980();  // 15d980                                // 0x0015d828: jal 0x15d980
    a1 = local_0;                                               // 0x0015d834: lw $a1, 0($sp)
    func_0015d980();  // 15d980                                // 0x0015d83c: jal 0x15d980
    *(uint32_t*)(s1) = s7;                                      // 0x0015d844: sw $s7, 0($s1)
    a3 = local_4;                                               // 0x0015d850: lw $a3, 4($sp)
    v1 = local_0;                                               // 0x0015d854: lw $v1, 0($sp)
    *(uint32_t*)((s1) + 4) = a3;                                // 0x0015d858: sw $a3, 4($s1)
    a2 = local_8;                                               // 0x0015d85c: lw $a2, 8($sp)
    *(uint32_t*)((s1) + 8) = a2;                                // 0x0015d860: sw $a2, 8($s1)
    a3 = local_c;                                               // 0x0015d868: lw $a3, 0xc($sp)
    *(uint32_t*)((s1) + 0xc) = a3;                              // 0x0015d86c: sw $a3, 0xc($s1)
    a3 = local_10;                                              // 0x0015d870: lw $a3, 0x10($sp)
    *(uint32_t*)((s1) + 0x10) = a3;                             // 0x0015d874: sw $a3, 0x10($s1)
    a3 = local_14;                                              // 0x0015d878: lw $a3, 0x14($sp)
    *(uint32_t*)((s1) + 0x14) = a3;                             // 0x0015d87c: sw $a3, 0x14($s1)
    a3 = local_18;                                              // 0x0015d880: lw $a3, 0x18($sp)
    *(uint32_t*)((s1) + 0x1c) = v1;                             // 0x0015d884: sw $v1, 0x1c($s1)
    *(uint32_t*)((s1) + 0x20) = s0;                             // 0x0015d888: sw $s0, 0x20($s1)
    *(uint32_t*)((s1) + 0x24) = s4;                             // 0x0015d88c: sw $s4, 0x24($s1)
    *(uint32_t*)((s1) + 0x28) = s3;                             // 0x0015d890: sw $s3, 0x28($s1)
    *(uint32_t*)((s1) + 0x2c) = fp;                             // 0x0015d894: sw $fp, 0x2c($s1)
    *(uint32_t*)((s1) + 0x34) = s5;                             // 0x0015d898: sw $s5, 0x34($s1)
    *(uint32_t*)((s1) + 0x18) = a3;                             // 0x0015d89c: sw $a3, 0x18($s1)
    *(uint32_t*)((s1) + 0x30) = v0;                             // 0x0015d8a0: sw $v0, 0x30($s1)
    v0 = local_1c;                                              // 0x0015d8a4: lw $v0, 0x1c($sp)
    *(uint32_t*)((s1) + 0x38) = v0;                             // 0x0015d8a8: sw $v0, 0x38($s1)
    a3 = local_20;                                              // 0x0015d8ac: lw $a3, 0x20($sp)
    func_0015d8e8();  // 15d8e8                                // 0x0015d8b0: jal 0x15d8e8
    *(uint32_t*)((s1) + 0x3c) = a3;                             // 0x0015d8b4: sw $a3, 0x3c($s1)
    return;                                                     // 0x0015d8e0: jr $ra
    sp = sp + 0x80;                                             // 0x0015d8e4: addiu $sp, $sp, 0x80
}