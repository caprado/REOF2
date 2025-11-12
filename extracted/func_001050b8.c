void func_001050b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001050b8: addiu $sp, $sp, -0x20
    if (s1 != 0) goto label_0x105100;                           // 0x001050cc: bnez $s1, 0x105100
    v0 = 0x1f << 16;                                            // 0x001050d4: lui $v0, 0x1f
    a1 = 0x10 << 16;                                            // 0x001050d8: lui $a1, 0x10
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x001050dc: lw $a0, -0x210($v0)
    a1 = a1 + 0x50b8;                                           // 0x001050e0: addiu $a1, $a1, 0x50b8
    return func_001067d8();  // Tail call                        // 0x001050f4: j 0x106740
    sp = sp + 0x20;                                             // 0x001050f8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001050fc: nop 
label_0x105100:
    v1 = *(int32_t*)((s1) + 0x54);                              // 0x00105100: lw $v1, 0x54($s1)
    /* bnezl $v1, 0x105120 */                                   // 0x00105104: bnezl $v1, 0x105120
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x00105108: lw $v0, 0x38($v1)
    v0 = 0x1f << 16;                                            // 0x0010510c: lui $v0, 0x1f
    v1 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00105110: lw $v1, -0x210($v0)
    *(uint32_t*)((s1) + 0x54) = v1;                             // 0x00105114: sw $v1, 0x54($s1)
    v0 = *(int32_t*)((v1) + 0x38);                              // 0x00105118: lw $v0, 0x38($v1)
    /* nop */                                                   // 0x0010511c: nop 
    /* bnezl $v0, 0x105134 */                                   // 0x00105120: bnezl $v0, 0x105134
    v1 = *(int16_t*)((s1) + 0xc);                               // 0x00105124: lh $v1, 0xc($s1)
    func_001055a8();  // 0x105518                                // 0x00105128: jal 0x105518
    v1 = *(int16_t*)((s1) + 0xc);                               // 0x00105130: lh $v1, 0xc($s1)
    v0 = v1 & 8;                                                // 0x00105134: andi $v0, $v1, 8
    if (v0 == 0) goto label_0x1051b4;                           // 0x00105138: beqz $v0, 0x1051b4
    s2 = *(int32_t*)((s1) + 0x10);                              // 0x00105140: lw $s2, 0x10($s1)
    if (s2 == 0) goto label_0x1051b4;                           // 0x00105144: beqz $s2, 0x1051b4
    v0 = *(int32_t*)(s1);                                       // 0x0010514c: lw $v0, 0($s1)
    v1 = v1 & 3;                                                // 0x00105150: andi $v1, $v1, 3
    *(uint32_t*)(s1) = s2;                                      // 0x00105154: sw $s2, 0($s1)
    if (v1 != 0) goto label_0x105180;                           // 0x00105158: bnez $v1, 0x105180
    s0 = v0 - s2;                                               // 0x0010515c: subu $s0, $v0, $s2
    goto label_0x105180;                                        // 0x00105160: b 0x105180
    a0 = *(int32_t*)((s1) + 0x14);                              // 0x00105164: lw $a0, 0x14($s1)
label_0x105168:
    v1 = *(uint16_t*)((s1) + 0xc);                              // 0x00105168: lhu $v1, 0xc($s1)
    v0 = -1;                                                    // 0x0010516c: addiu $v0, $zero, -1
    v1 = v1 | 0x40;                                             // 0x00105170: ori $v1, $v1, 0x40
    goto label_0x1051b4;                                        // 0x00105174: b 0x1051b4
    *(uint16_t*)((s1) + 0xc) = v1;                              // 0x00105178: sh $v1, 0xc($s1)
    /* nop */                                                   // 0x0010517c: nop 
label_0x105180:
    if (s0 <= 0) goto label_0x1051b0;                           // 0x00105180: blez $s0, 0x1051b0
    *(uint32_t*)((s1) + 8) = a0;                                // 0x00105184: sw $a0, 8($s1)
label_0x105188:
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x00105188: lw $v0, 0x24($s1)
    a0 = *(int32_t*)((s1) + 0x1c);                              // 0x00105190: lw $a0, 0x1c($s1)
    /* call function at address in v0 */                        // 0x00105194: jalr $v0
    if (v1 <= 0) goto label_0x105168;                           // 0x001051a0: blez $v1, 0x105168
    s0 = s0 - v1;                                               // 0x001051a4: subu $s0, $s0, $v1
    if (s0 > 0) goto label_0x105188;                            // 0x001051a8: bgtz $s0, 0x105188
    s2 = s2 + v1;                                               // 0x001051ac: addu $s2, $s2, $v1
label_0x1051b0:
label_0x1051b4:
    return;                                                     // 0x001051c4: jr $ra
    sp = sp + 0x20;                                             // 0x001051c8: addiu $sp, $sp, 0x20
}