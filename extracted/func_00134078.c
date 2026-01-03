void func_00134078() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x00134078: addiu $sp, $sp, -0x40
    s2 = *(int32_t*)((s1) + 0xc);                               // 0x00134098: lw $s2, 0xc($s1)
    s4 = *(int32_t*)((s1) + 4);                                 // 0x0013409c: lw $s4, 4($s1)
    func_0012c3f0();  // 12c3f0                                // 0x001340a0: jal 0x12c3f0
    func_0012c408();  // 12c408                                // 0x001340ac: jal 0x12c408
    v0 = *(int32_t*)((s1) + 0x48);                              // 0x001340b8: lw $v0, 0x48($s1)
    v0 = v0 << 1;                                               // 0x001340bc: sll $v0, $v0, 1
    s0 = (s0 < v0) ? 1 : 0;                                     // 0x001340c0: slt $s0, $s0, $v0
    /* beqzl $s0, 0x1340f8 */                                   // 0x001340c4: beqzl $s0, 0x1340f8
    v0 = *(int8_t*)((s1) + 0x70);                               // 0x001340c8: lb $v0, 0x70($s1)
    func_0012d498();  // 12d498                                // 0x001340cc: jal 0x12d498
    v0 = (v0 < s3) ? 1 : 0;                                     // 0x001340d4: slt $v0, $v0, $s3
    /* beqzl $v0, 0x1340f8 */                                   // 0x001340d8: beqzl $v0, 0x1340f8
    v0 = *(int8_t*)((s1) + 0x70);                               // 0x001340dc: lb $v0, 0x70($s1)
    func_0012c878();  // 12c878                                // 0x001340e0: jal 0x12c878
    a0 = *(int32_t*)((s1) + 4);                                 // 0x001340e4: lw $a0, 4($s1)
    v1 = 3;                                                     // 0x001340e8: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x13413c;                          // 0x001340ec: bne $v0, $v1, 0x13413c
    /* nop */                                                   // 0x001340f0: nop 
    v0 = *(int8_t*)((s1) + 0x70);                               // 0x001340f4: lb $v0, 0x70($s1)
    if (v0 != 0) goto label_0x134138;                           // 0x001340f8: bnez $v0, 0x134138
    v0 = 1;                                                     // 0x001340fc: addiu $v0, $zero, 1
    v0 = *(int8_t*)((s1) + 0x72);                               // 0x00134100: lb $v0, 0x72($s1)
    /* bnezl $v0, 0x134130 */                                   // 0x00134104: bnezl $v0, 0x134130
    v0 = 3;                                                     // 0x00134108: addiu $v0, $zero, 3
    func_0012c3c0();  // 12c3c0                                // 0x00134110: jal 0x12c3c0
    a1 = 1;                                                     // 0x00134114: addiu $a1, $zero, 1
    *(uint32_t*)((s1) + 0x9c) = 0;                              // 0x00134118: sw $zero, 0x9c($s1)
    v0 = 0x1f << 16;                                            // 0x0013411c: lui $v0, 0x1f
    v0 = v0 + 0x59c4;                                           // 0x00134120: addiu $v0, $v0, 0x59c4
    v1 = g_001f59c4;  // Global at 0x001f59c4                   // 0x00134124: lw $v1, 0($v0)
    *(uint32_t*)((s1) + 0xa0) = v1;                             // 0x00134128: sw $v1, 0xa0($s1)
    v0 = 3;                                                     // 0x0013412c: addiu $v0, $zero, 3
    *(uint8_t*)((s1) + 1) = v0;                                 // 0x00134130: sb $v0, 1($s1)
    v0 = 1;                                                     // 0x00134134: addiu $v0, $zero, 1
label_0x134138:
    *(uint8_t*)((s1) + 0x71) = v0;                              // 0x00134138: sb $v0, 0x71($s1)
label_0x13413c:
    func_0012c878();  // 12c878                                // 0x0013413c: jal 0x12c878
    a0 = *(int32_t*)((s1) + 4);                                 // 0x00134140: lw $a0, 4($s1)
    v1 = 3;                                                     // 0x00134144: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1341d0;                          // 0x00134148: bne $v0, $v1, 0x1341d0
    func_00132208();  // 132208                                // 0x00134150: jal 0x132208
    v0 = *(int32_t*)((s1) + 0x48);                              // 0x0013415c: lw $v0, 0x48($s1)
    /* multiply: v0 * v1 -> hi:lo */                            // 0x00134160: mult $ac2, $v0, $v1
    if (v1 <= 0) goto label_0x1341cc;                           // 0x00134164: blez $v1, 0x1341cc
    s3 = v0 << 1;                                               // 0x00134168: sll $s3, $v0, 1
    s2 = s1 + 0x18;                                             // 0x0013416c: addiu $s2, $s1, 0x18
    s0 = *(int32_t*)(s2);                                       // 0x00134174: lw $s0, 0($s2)
    s2 = s2 + 4;                                                // 0x00134178: addiu $s2, $s2, 4
    v1 = *(int32_t*)(s0);                                       // 0x00134184: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00134190: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00134194: jalr $v0
    s1 = s1 + -1;                                               // 0x00134198: addiu $s1, $s1, -1
    a0 = local_0;                                               // 0x001341a0: lw $a0, 0($sp)
    func_00107c70();  // 107c70                                // 0x001341a4: jal 0x107c70
    a2 = local_4;                                               // 0x001341a8: lw $a2, 4($sp)
    v1 = *(int32_t*)(s0);                                       // 0x001341ac: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x001341b4: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x001341b8: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x001341bc: jalr $v0
    /* bnezl $s1, 0x134178 */                                   // 0x001341c4: bnezl $s1, 0x134178
    s0 = *(int32_t*)(s2);                                       // 0x001341c8: lw $s0, 0($s2)
label_0x1341cc:
label_0x1341d0:
    return;                                                     // 0x001341e4: jr $ra
    sp = sp + 0x40;                                             // 0x001341e8: addiu $sp, $sp, 0x40
}