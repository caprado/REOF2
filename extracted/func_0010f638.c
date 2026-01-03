void func_0010f638() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0010f638: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((s0) + 0x54);                              // 0x0010f648: lw $v1, 0x54($s0)
    /* bnezl $v1, 0x10f668 */                                   // 0x0010f64c: bnezl $v1, 0x10f668
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x0010f650: lw $v0, 0x38($v1)
    v0 = 0x1f << 16;                                            // 0x0010f654: lui $v0, 0x1f
    v1 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010f658: lw $v1, -0x210($v0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x0010f65c: sw $v1, 0x54($s0)
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x0010f660: lw $v0, 0x38($v1)
    /* nop */                                                   // 0x0010f664: nop 
    /* bnezl $v0, 0x10f67c */                                   // 0x0010f668: bnezl $v0, 0x10f67c
    a0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010f66c: lhu $a0, 0xc($s0)
    func_00105518();  // 105518                                // 0x0010f670: jal 0x105518
    a0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010f678: lhu $a0, 0xc($s0)
    v0 = a0 & 8;                                                // 0x0010f67c: andi $v0, $a0, 8
    /* bnezl $v0, 0x10f6e8 */                                   // 0x0010f680: bnezl $v0, 0x10f6e8
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0010f684: lw $a1, 0x10($s0)
    v1 = a0 & 0x10;                                             // 0x0010f688: andi $v1, $a0, 0x10
    if (v1 == 0) goto label_0x10f734;                           // 0x0010f68c: beqz $v1, 0x10f734
    v0 = -1;                                                    // 0x0010f690: addiu $v0, $zero, -1
    v0 = a0 & 4;                                                // 0x0010f694: andi $v0, $a0, 4
    /* beqzl $v0, 0x10f6e0 */                                   // 0x0010f698: beqzl $v0, 0x10f6e0
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0010f69c: lw $a1, 0x10($s0)
    a1 = *(int32_t*)((s0) + 0x30);                              // 0x0010f6a0: lw $a1, 0x30($s0)
    if (a1 == 0) goto label_0x10f6c4;                           // 0x0010f6a4: beqz $a1, 0x10f6c4
    v0 = s0 + 0x40;                                             // 0x0010f6a8: addiu $v0, $s0, 0x40
    if (a1 == v0) goto label_0x10f6c4;                          // 0x0010f6ac: beql $a1, $v0, 0x10f6c4
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x0010f6b0: sw $zero, 0x30($s0)
    func_001058e0();  // 1058e0                                // 0x0010f6b4: jal 0x1058e0
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x0010f6b8: lw $a0, 0x54($s0)
    a0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010f6bc: lhu $a0, 0xc($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x0010f6c0: sw $zero, 0x30($s0)
label_0x10f6c4:
    v0 = -0x25;                                                 // 0x0010f6c4: addiu $v0, $zero, -0x25
    a1 = *(int32_t*)((s0) + 0x10);                              // 0x0010f6c8: lw $a1, 0x10($s0)
    v0 = a0 & v0;                                               // 0x0010f6cc: and $v0, $a0, $v0
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0010f6d0: sw $zero, 4($s0)
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010f6d4: sh $v0, 0xc($s0)
    *(uint32_t*)(s0) = a1;                                      // 0x0010f6dc: sw $a1, 0($s0)
    v0 = a0 | 8;                                                // 0x0010f6e0: ori $v0, $a0, 8
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010f6e4: sh $v0, 0xc($s0)
    /* bnezl $a1, 0x10f6fc */                                   // 0x0010f6e8: bnezl $a1, 0x10f6fc
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x0010f6ec: lhu $v1, 0xc($s0)
    func_00106b60();  // 106b60                                // 0x0010f6f0: jal 0x106b60
    v1 = *(uint16_t*)((s0) + 0xc);                              // 0x0010f6f8: lhu $v1, 0xc($s0)
    v0 = v1 & 1;                                                // 0x0010f6fc: andi $v0, $v1, 1
    if (v0 == 0) goto label_0x10f720;                           // 0x0010f700: beqz $v0, 0x10f720
    v0 = v1 & 2;                                                // 0x0010f704: andi $v0, $v1, 2
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x0010f708: lw $v0, 0x14($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0010f70c: sw $zero, 8($s0)
    v0 = -v0;                                                   // 0x0010f710: negu $v0, $v0
    goto label_0x10f730;                                        // 0x0010f714: b 0x10f730
    *(uint32_t*)((s0) + 0x18) = v0;                             // 0x0010f718: sw $v0, 0x18($s0)
    /* nop */                                                   // 0x0010f71c: nop 
label_0x10f720:
    if (v0 != 0) goto label_0x10f72c;                           // 0x0010f720: bnez $v0, 0x10f72c
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x0010f728: lw $v1, 0x14($s0)
label_0x10f72c:
    *(uint32_t*)((s0) + 8) = v1;                                // 0x0010f72c: sw $v1, 8($s0)
label_0x10f730:
label_0x10f734:
    return;                                                     // 0x0010f73c: jr $ra
    sp = sp + 0x10;                                             // 0x0010f740: addiu $sp, $sp, 0x10
}