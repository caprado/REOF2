void func_001053e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001053e0: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s1) + 0x38);                              // 0x001053f8: lw $v0, 0x38($s1)
    if (v0 != 0) goto label_0x10540c;                           // 0x001053fc: bnez $v0, 0x10540c
    s0 = s1 + 0x1d8;                                            // 0x00105400: addiu $s0, $s1, 0x1d8
    func_001055a8();  // 0x105518                                // 0x00105404: jal 0x105518
    /* nop */                                                   // 0x00105408: nop 
label_0x10540c:
    s2 = 0xc;                                                   // 0x0010540c: addiu $s2, $zero, 0xc
label_0x105410:
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00105410: lw $v1, 4($s0)
    v1 = v1 + -1;                                               // 0x00105414: addiu $v1, $v1, -1
    if (v1 < 0) goto label_0x105444;                            // 0x00105418: bltz $v1, 0x105444
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0010541c: lw $a0, 8($s0)
label_0x105420:
    v0 = *(int16_t*)((a0) + 0xc);                               // 0x00105420: lh $v0, 0xc($a0)
    if (v0 == 0) goto label_0x105480;                           // 0x00105424: beqz $v0, 0x105480
    v1 = v1 + -1;                                               // 0x00105428: addiu $v1, $v1, -1
    /* nop */                                                   // 0x0010542c: nop 
    /* nop */                                                   // 0x00105430: nop 
    /* nop */                                                   // 0x00105434: nop 
    /* nop */                                                   // 0x00105438: nop 
    if (v1 >= 0) goto label_0x105420;                           // 0x0010543c: bgez $v1, 0x105420
    a0 = a0 + 0x58;                                             // 0x00105440: addiu $a0, $a0, 0x58
label_0x105444:
    a0 = *(int32_t*)(s0);                                       // 0x00105444: lw $a0, 0($s0)
    /* nop */                                                   // 0x00105448: nop 
    /* bnezl $a0, 0x105410 */                                   // 0x0010544c: bnezl $a0, 0x105410
    func_001053e0();  // 0x105368                                // 0x00105458: jal 0x105368
    a1 = 4;                                                     // 0x0010545c: addiu $a1, $zero, 4
    *(uint32_t*)(s0) = v1;                                      // 0x00105464: sw $v1, 0($s0)
    if (v1 != 0) goto label_0x105478;                           // 0x00105468: bnez $v1, 0x105478
    goto label_0x1054c0;                                        // 0x00105470: b 0x1054c0
    *(uint32_t*)(s1) = s2;                                      // 0x00105474: sw $s2, 0($s1)
label_0x105478:
    goto label_0x105410;                                        // 0x00105478: b 0x105410
label_0x105480:
    v1 = -1;                                                    // 0x00105480: addiu $v1, $zero, -1
    v0 = 1;                                                     // 0x00105484: addiu $v0, $zero, 1
    *(uint16_t*)((a0) + 0xe) = v1;                              // 0x00105488: sh $v1, 0xe($a0)
    *(uint32_t*)((a0) + 0x54) = s1;                             // 0x0010548c: sw $s1, 0x54($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x00105490: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x00105494: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x00105498: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x0010549c: sw $zero, 0x10($a0)
    *(uint32_t*)((a0) + 0x14) = 0;                              // 0x001054a0: sw $zero, 0x14($a0)
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x001054a4: sw $zero, 0x18($a0)
    *(uint32_t*)((a0) + 0x30) = 0;                              // 0x001054a8: sw $zero, 0x30($a0)
    *(uint32_t*)((a0) + 0x34) = 0;                              // 0x001054ac: sw $zero, 0x34($a0)
    *(uint32_t*)((a0) + 0x44) = 0;                              // 0x001054b0: sw $zero, 0x44($a0)
    *(uint32_t*)((a0) + 0x48) = 0;                              // 0x001054b4: sw $zero, 0x48($a0)
    *(uint16_t*)((a0) + 0xc) = v0;                              // 0x001054b8: sh $v0, 0xc($a0)
label_0x1054c0:
    return;                                                     // 0x001054d0: jr $ra
    sp = sp + 0x20;                                             // 0x001054d4: addiu $sp, $sp, 0x20
}