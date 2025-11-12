void func_00125358() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00125358: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x0012535c: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00125370: lw $v1, 4($s0)
    if (v1 != v0) goto label_0x1253c0;                          // 0x00125374: bnel $v1, $v0, 0x1253c0
    v0 = 2;                                                     // 0x00125378: addiu $v0, $zero, 2
    func_00134c60();  // 0x134c58                                // 0x0012537c: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00125380: lw $a0, 8($s0)
    a1 = s0 + 0x68;                                             // 0x00125384: addiu $a1, $s0, 0x68
    a2 = s0 + 0x6c;                                             // 0x00125388: addiu $a2, $s0, 0x6c
    if (v0 != 0) goto label_0x1253b8;                           // 0x0012538c: bnez $v0, 0x1253b8
    a3 = s0 + 0x70;                                             // 0x00125390: addiu $a3, $s0, 0x70
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x00125394: lw $v0, 0x78($s0)
    /* call function at address in v0 */                        // 0x00125398: jalr $v0
    a0 = *(int32_t*)((s0) + 0x7c);                              // 0x0012539c: lw $a0, 0x7c($s0)
    func_00125118();  // 0x125030                                // 0x001253a0: jal 0x125030
    v0 = 2;                                                     // 0x001253a8: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001253ac: sw $v0, 4($s0)
    goto label_0x1253c0;                                        // 0x001253b0: b 0x1253c0
    v1 = 2;                                                     // 0x001253b4: addiu $v1, $zero, 2
label_0x1253b8:
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001253b8: lw $v1, 4($s0)
    v0 = 2;                                                     // 0x001253bc: addiu $v0, $zero, 2
label_0x1253c0:
    if (v1 != v0) goto label_0x125414;                          // 0x001253c0: bnel $v1, $v0, 0x125414
    func_00134e30();  // 0x134d38                                // 0x001253c8: jal 0x134d38
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001253cc: lw $a0, 8($s0)
    func_00134c60();  // 0x134c58                                // 0x001253d0: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001253d4: lw $a0, 8($s0)
    v0 = 3;                                                     // 0x001253dc: addiu $v0, $zero, 3
    if (s1 != v0) goto label_0x125410;                          // 0x001253e0: bne $s1, $v0, 0x125410
    func_00125358();  // 0x1251d8                                // 0x001253e8: jal 0x1251d8
    /* nop */                                                   // 0x001253ec: nop 
    func_00134d20();  // 0x134d08                                // 0x001253f0: jal 0x134d08
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001253f4: lw $a0, 8($s0)
    v0 = *(int32_t*)((s0) + 0x80);                              // 0x001253f8: lw $v0, 0x80($s0)
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x001253fc: lw $a0, 0x84($s0)
    a1 = *(int32_t*)((s0) + 0x94);                              // 0x00125400: lw $a1, 0x94($s0)
    /* call function at address in v0 */                        // 0x00125404: jalr $v0
    a2 = *(int32_t*)((s0) + 0x90);                              // 0x00125408: lw $a2, 0x90($s0)
    *(uint32_t*)((s0) + 4) = s1;                                // 0x0012540c: sw $s1, 4($s0)
label_0x125410:
label_0x125414:
    return;                                                     // 0x0012541c: jr $ra
    sp = sp + 0x20;                                             // 0x00125420: addiu $sp, $sp, 0x20
}