void func_001400f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001400f8: addiu $sp, $sp, -0x20
    v0 = ((unsigned)s2 < (unsigned)4) ? 1 : 0;                  // 0x00140104: sltiu $v0, $s2, 4
    if (v0 != 0) goto label_0x140140;                           // 0x00140118: bnez $v0, 0x140140
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x00140120: lw $v0, 0x28($s0)
    /* beqzl $v0, 0x140238 */                                   // 0x00140124: beqzl $v0, 0x140238
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0014012c: lw $a0, 0x2c($s0)
    /* call function at address in v0 */                        // 0x00140130: jalr $v0
    a1 = -3;                                                    // 0x00140134: addiu $a1, $zero, -3
    goto label_0x140238;                                        // 0x00140138: b 0x140238
label_0x140140:
    v0 = *(int32_t*)((s1) + 4);                                 // 0x00140140: lw $v0, 4($s1)
    if (v0 <= 0) goto label_0x140238;                           // 0x00140144: blezl $v0, 0x140238
    v0 = *(int32_t*)(s1);                                       // 0x0014014c: lw $v0, 0($s1)
    /* beqzl $v0, 0x140238 */                                   // 0x00140150: beqzl $v0, 0x140238
    func_0013ef30();  // 0x13ef18                                // 0x00140158: jal 0x13ef18
    /* nop */                                                   // 0x0014015c: nop 
    v0 = s2 << 2;                                               // 0x00140160: sll $v0, $s2, 2
    v0 = s0 + v0;                                               // 0x00140164: addu $v0, $s0, $v0
    a1 = v0 + 0x18;                                             // 0x00140168: addiu $a1, $v0, 0x18
    v0 = *(int32_t*)(a1);                                       // 0x0014016c: lw $v0, 0($a1)
    if (v0 == 0) goto label_0x140194;                           // 0x00140170: beqz $v0, 0x140194
label_0x140178:
    v0 = *(int32_t*)(a0);                                       // 0x0014017c: lw $v0, 0($a0)
    /* nop */                                                   // 0x00140180: nop 
    /* nop */                                                   // 0x00140184: nop 
    /* nop */                                                   // 0x00140188: nop 
    if (v0 != 0) goto label_0x140178;                           // 0x0014018c: bnez $v0, 0x140178
label_0x140194:
    v1 = *(int8_t*)((s0) + 5);                                  // 0x00140194: lb $v1, 5($s0)
    v0 = 1;                                                     // 0x00140198: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1401d8;                          // 0x0014019c: bnel $v1, $v0, 0x1401d8
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x001401a0: lw $a0, 0x14($s0)
    /* beqzl $a0, 0x1401d8 */                                   // 0x001401a4: beqzl $a0, 0x1401d8
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x001401a8: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001401ac: lw $v0, 8($a0)
    a2 = *(int32_t*)((a0) + 0xc);                               // 0x001401b0: lw $a2, 0xc($a0)
    v1 = *(int32_t*)(s1);                                       // 0x001401b4: lw $v1, 0($s1)
    v0 = v0 + a2;                                               // 0x001401b8: addu $v0, $v0, $a2
    if (v0 != v1) goto label_0x1401d8;                          // 0x001401bc: bnel $v0, $v1, 0x1401d8
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x001401c0: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x001401c4: lw $v0, 4($s1)
    v0 = a2 + v0;                                               // 0x001401c8: addu $v0, $a2, $v0
    goto label_0x14021c;                                        // 0x001401cc: b 0x14021c
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x001401d0: sw $v0, 0xc($a0)
    /* nop */                                                   // 0x001401d4: nop 
label_0x1401d8:
    /* bnezl $a0, 0x140200 */                                   // 0x001401d8: bnezl $a0, 0x140200
    v0 = *(int32_t*)(a0);                                       // 0x001401dc: lw $v0, 0($a0)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x001401e0: lw $v0, 0x28($s0)
    /* beqzl $v0, 0x140220 */                                   // 0x001401e4: beqzl $v0, 0x140220
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x001401ec: lw $a0, 0x2c($s0)
    /* call function at address in v0 */                        // 0x001401f0: jalr $v0
    a1 = -3;                                                    // 0x001401f4: addiu $a1, $zero, -3
    goto label_0x140220;                                        // 0x001401f8: b 0x140220
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x00140210: sw $v0, 0x14($s0)
    *(uint32_t*)(a0) = 0;                                       // 0x00140214: sw $zero, 0($a0)
    *(uint32_t*)(a1) = a0;                                      // 0x00140218: sw $a0, 0($a1)
label_0x14021c:
label_0x140220:
    return func_0013ef80();  // Tail call                        // 0x0014022c: j 0x13ef30
    sp = sp + 0x20;                                             // 0x00140230: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00140234: nop 
label_0x140238:
    return;                                                     // 0x00140244: jr $ra
    sp = sp + 0x20;                                             // 0x00140248: addiu $sp, $sp, 0x20
}