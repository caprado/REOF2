void func_001051d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001051d0: addiu $sp, $sp, -0x40
    v0 = (s3 < 2) ? 1 : 0;                                      // 0x001051e4: slti $v0, $s3, 2
    s3 = s3 + -1;                                               // 0x001051e8: addiu $s3, $s3, -1
    if (v0 == 0) goto label_0x105250;                           // 0x00105204: beqz $v0, 0x105250
    goto label_0x1052e4;                                        // 0x0010520c: b 0x1052e4
    /* nop */                                                   // 0x00105214: nop 
label_0x105218:
    v1 = v1 + 1;                                                // 0x00105218: addiu $v1, $v1, 1
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0010521c: lw $v0, 4($s1)
    s0 = v1 - s2;                                               // 0x00105220: subu $s0, $v1, $s2
    *(uint32_t*)(s1) = v1;                                      // 0x00105224: sw $v1, 0($s1)
    v0 = v0 - s0;                                               // 0x00105228: subu $v0, $v0, $s0
    *(uint32_t*)((s1) + 4) = v0;                                // 0x00105230: sw $v0, 4($s1)
    func_00107ab8();  // 107ab8                                // 0x00105238: jal 0x107ab8
    v1 = s4 + s0;                                               // 0x00105240: addu $v1, $s4, $s0
    goto label_0x1052e0;                                        // 0x00105244: b 0x1052e0
    *(uint8_t*)(v1) = 0;                                        // 0x00105248: sb $zero, 0($v1)
    /* nop */                                                   // 0x0010524c: nop 
label_0x105250:
    s0 = *(int32_t*)((s1) + 4);                                 // 0x00105250: lw $s0, 4($s1)
    /* bnezl $s0, 0x105284 */                                   // 0x00105254: bnezl $s0, 0x105284
    s2 = *(int32_t*)(s1);                                       // 0x00105258: lw $s2, 0($s1)
    func_0010a058();  // 10a058                                // 0x0010525c: jal 0x10a058
    /* beqzl $v0, 0x105280 */                                   // 0x00105264: beqzl $v0, 0x105280
    s0 = *(int32_t*)((s1) + 4);                                 // 0x00105268: lw $s0, 4($s1)
    if (s4 != s5) goto label_0x1052e0;                          // 0x0010526c: bnel $s4, $s5, 0x1052e0
    *(uint8_t*)(s4) = 0;                                        // 0x00105270: sb $zero, 0($s4)
    goto label_0x1052e4;                                        // 0x00105274: b 0x1052e4
    /* nop */                                                   // 0x0010527c: nop 
    s2 = *(int32_t*)(s1);                                       // 0x00105280: lw $s2, 0($s1)
    v0 = ((unsigned)s3 < (unsigned)s0) ? 1 : 0;                 // 0x00105284: sltu $v0, $s3, $s0
    if (v0 != 0) s0 = s3;                                       // 0x00105288: movn $s0, $s3, $v0
    a1 = 0xa;                                                   // 0x0010528c: addiu $a1, $zero, 0xa
    func_00107940();  // 107940                                // 0x00105294: jal 0x107940
    s3 = s3 - s0;                                               // 0x001052a4: subu $s3, $s3, $s0
    if (v1 != 0) goto label_0x105218;                           // 0x001052ac: bnez $v1, 0x105218
    v1 = *(int32_t*)((s1) + 4);                                 // 0x001052b4: lw $v1, 4($s1)
    s4 = s4 + s0;                                               // 0x001052b8: addu $s4, $s4, $s0
    v0 = *(int32_t*)(s1);                                       // 0x001052bc: lw $v0, 0($s1)
    v1 = v1 - s0;                                               // 0x001052c0: subu $v1, $v1, $s0
    v0 = v0 + s0;                                               // 0x001052c4: addu $v0, $v0, $s0
    *(uint32_t*)((s1) + 4) = v1;                                // 0x001052c8: sw $v1, 4($s1)
    func_00107ab8();  // 107ab8                                // 0x001052cc: jal 0x107ab8
    *(uint32_t*)(s1) = v0;                                      // 0x001052d0: sw $v0, 0($s1)
    /* bnezl $s3, 0x105254 */                                   // 0x001052d4: bnezl $s3, 0x105254
    s0 = *(int32_t*)((s1) + 4);                                 // 0x001052d8: lw $s0, 4($s1)
    *(uint8_t*)(s4) = 0;                                        // 0x001052dc: sb $zero, 0($s4)
label_0x1052e0:
label_0x1052e4:
    return;                                                     // 0x00105300: jr $ra
    sp = sp + 0x40;                                             // 0x00105304: addiu $sp, $sp, 0x40
}