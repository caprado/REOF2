void func_0015b5d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_20, local_24, local_28;
    uint32_t local_2c, local_30, local_34, local_38, local_3c, local_4, local_40, local_44;
    uint32_t local_48, local_4c, local_50, local_60, local_64, local_68, local_70, local_74;
    uint32_t local_8, local_c;
    
    sp = sp + -0xb0;                                            // 0x0015b5d0: addiu $sp, $sp, -0xb0
    func_00150190();  // 0x150168                                // 0x0015b5f0: jal 0x150168
    a0 = *(int32_t*)((s0) + 0x380);                             // 0x0015b5f4: lw $a0, 0x380($s0)
    a0 = *(int32_t*)((s0) + 0x380);                             // 0x0015b5f8: lw $a0, 0x380($s0)
    func_001501b8();  // 0x150190                                // 0x0015b5fc: jal 0x150190
    a1 = sp + 0x60;                                             // 0x0015b600: addiu $a1, $sp, 0x60
    a0 = *(int32_t*)((s0) + 0x380);                             // 0x0015b604: lw $a0, 0x380($s0)
    a1 = sp + 0x64;                                             // 0x0015b608: addiu $a1, $sp, 0x64
    a2 = sp + 0x68;                                             // 0x0015b60c: addiu $a2, $sp, 0x68
    func_001501e0();  // 0x1501b8                                // 0x0015b610: jal 0x1501b8
    a3 = sp + 0x6c;                                             // 0x0015b614: addiu $a3, $sp, 0x6c
    a0 = *(int32_t*)((s0) + 0x380);                             // 0x0015b618: lw $a0, 0x380($s0)
    a1 = sp + 0x70;                                             // 0x0015b61c: addiu $a1, $sp, 0x70
    func_00150208();  // 0x1501e0                                // 0x0015b620: jal 0x1501e0
    a2 = sp + 0x74;                                             // 0x0015b624: addiu $a2, $sp, 0x74
    v0 = local_0;                                               // 0x0015b628: lw $v0, 0($sp)
    v1 = local_4;                                               // 0x0015b62c: lw $v1, 4($sp)
    a0 = local_8;                                               // 0x0015b630: lw $a0, 8($sp)
    a1 = local_c;                                               // 0x0015b634: lw $a1, 0xc($sp)
    a3 = local_14;                                              // 0x0015b638: lw $a3, 0x14($sp)
    t1 = local_1c;                                              // 0x0015b63c: lw $t1, 0x1c($sp)
    t2 = local_20;                                              // 0x0015b640: lw $t2, 0x20($sp)
    s3 = local_40;                                              // 0x0015b644: lw $s3, 0x40($sp)
    t3 = local_24;                                              // 0x0015b648: lw $t3, 0x24($sp)
    t4 = local_28;                                              // 0x0015b64c: lw $t4, 0x28($sp)
    t5 = local_2c;                                              // 0x0015b650: lw $t5, 0x2c($sp)
    t6 = local_30;                                              // 0x0015b654: lw $t6, 0x30($sp)
    t7 = local_34;                                              // 0x0015b658: lw $t7, 0x34($sp)
    a2 = local_10;                                              // 0x0015b65c: lw $a2, 0x10($sp)
    t0 = local_18;                                              // 0x0015b660: lw $t0, 0x18($sp)
    s1 = local_38;                                              // 0x0015b664: lw $s1, 0x38($sp)
    s2 = local_3c;                                              // 0x0015b668: lw $s2, 0x3c($sp)
    *(uint32_t*)((s0) + 0x1d0) = v0;                            // 0x0015b66c: sw $v0, 0x1d0($s0)
    *(uint32_t*)((s0) + 0x1d4) = v1;                            // 0x0015b670: sw $v1, 0x1d4($s0)
    *(uint32_t*)((s0) + 0x1d8) = a0;                            // 0x0015b674: sw $a0, 0x1d8($s0)
    *(uint32_t*)((s0) + 0x1dc) = a1;                            // 0x0015b678: sw $a1, 0x1dc($s0)
    *(uint32_t*)((s0) + 0x1e0) = a2;                            // 0x0015b67c: sw $a2, 0x1e0($s0)
    *(uint32_t*)((s0) + 0x1e4) = a3;                            // 0x0015b680: sw $a3, 0x1e4($s0)
    *(uint32_t*)((s0) + 0x1e8) = t0;                            // 0x0015b684: sw $t0, 0x1e8($s0)
    *(uint32_t*)((s0) + 0x1ec) = t1;                            // 0x0015b688: sw $t1, 0x1ec($s0)
    *(uint32_t*)((s0) + 0x1f0) = t2;                            // 0x0015b68c: sw $t2, 0x1f0($s0)
    *(uint32_t*)((s0) + 0x1f4) = t3;                            // 0x0015b690: sw $t3, 0x1f4($s0)
    *(uint32_t*)((s0) + 0x1f8) = t4;                            // 0x0015b694: sw $t4, 0x1f8($s0)
    *(uint32_t*)((s0) + 0x1fc) = t5;                            // 0x0015b698: sw $t5, 0x1fc($s0)
    *(uint32_t*)((s0) + 0x200) = t6;                            // 0x0015b69c: sw $t6, 0x200($s0)
    *(uint32_t*)((s0) + 0x204) = t7;                            // 0x0015b6a0: sw $t7, 0x204($s0)
    *(uint32_t*)((s0) + 0x208) = s1;                            // 0x0015b6a4: sw $s1, 0x208($s0)
    *(uint32_t*)((s0) + 0x20c) = s2;                            // 0x0015b6a8: sw $s2, 0x20c($s0)
    *(uint32_t*)((s0) + 0x210) = s3;                            // 0x0015b6ac: sw $s3, 0x210($s0)
    v1 = local_64;                                              // 0x0015b6b0: lw $v1, 0x64($sp)
    a1 = local_60;                                              // 0x0015b6b4: lw $a1, 0x60($sp)
    a0 = v1 + 0x7ff;                                            // 0x0015b6b8: addiu $a0, $v1, 0x7ff
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x0015b6bc: slti $v0, $v1, 0
    t0 = local_68;                                              // 0x0015b6c0: lw $t0, 0x68($sp)
    if (v0 != 0) v1 = a0;                                       // 0x0015b6c4: movn $v1, $a0, $v0
    t1 = local_70;                                              // 0x0015b6c8: lw $t1, 0x70($sp)
    v1 = v1 >> 0xb;                                             // 0x0015b6cc: sra $v1, $v1, 0xb
    v0 = local_74;                                              // 0x0015b6d0: lw $v0, 0x74($sp)
    t2 = local_44;                                              // 0x0015b6d4: lw $t2, 0x44($sp)
    a2 = local_48;                                              // 0x0015b6d8: lw $a2, 0x48($sp)
    a3 = local_4c;                                              // 0x0015b6dc: lw $a3, 0x4c($sp)
    a0 = local_50;                                              // 0x0015b6e0: lw $a0, 0x50($sp)
    *(uint32_t*)((s0) + 0x214) = t2;                            // 0x0015b6e4: sw $t2, 0x214($s0)
    *(uint32_t*)((s0) + 0x28c) = v0;                            // 0x0015b6e8: sw $v0, 0x28c($s0)
    *(uint32_t*)((s0) + 0x218) = a2;                            // 0x0015b6ec: sw $a2, 0x218($s0)
    *(uint32_t*)((s0) + 0x21c) = a3;                            // 0x0015b6f0: sw $a3, 0x21c($s0)
    *(uint32_t*)((s0) + 0x220) = a0;                            // 0x0015b6f4: sw $a0, 0x220($s0)
    *(uint32_t*)((s0) + 0x27c) = a1;                            // 0x0015b6f8: sw $a1, 0x27c($s0)
    *(uint32_t*)((s0) + 0x280) = v1;                            // 0x0015b6fc: sw $v1, 0x280($s0)
    *(uint32_t*)((s0) + 0x290) = t0;                            // 0x0015b700: sw $t0, 0x290($s0)
    *(uint32_t*)((s0) + 0x288) = t1;                            // 0x0015b704: sw $t1, 0x288($s0)
    return;                                                     // 0x0015b71c: jr $ra
    sp = sp + 0xb0;                                             // 0x0015b720: addiu $sp, $sp, 0xb0
}