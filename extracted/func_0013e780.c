void func_0013e780() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x0013e780: addiu $sp, $sp, -0x30
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013e798: lw $v1, 4($s1)
    if (v1 <= 0) goto label_0x13e7d4;                           // 0x0013e79c: blez $v1, 0x13e7d4
    s0 = s1 + 0x10;                                             // 0x0013e7a4: addiu $s0, $s1, 0x10
    a0 = *(int32_t*)(s0);                                       // 0x0013e7a8: lw $a0, 0($s0)
    /* nop */                                                   // 0x0013e7ac: nop 
    if (a0 == 0) goto label_0x13e7c4;                           // 0x0013e7b0: beqz $a0, 0x13e7c4
    s0 = s0 + 4;                                                // 0x0013e7b4: addiu $s0, $s0, 4
    func_00138890();  // 0x138868                                // 0x0013e7b8: jal 0x138868
    /* nop */                                                   // 0x0013e7bc: nop 
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013e7c0: lw $v1, 4($s1)
label_0x13e7c4:
    s2 = s2 + 1;                                                // 0x0013e7c4: addiu $s2, $s2, 1
    v0 = (s2 < v1) ? 1 : 0;                                     // 0x0013e7c8: slt $v0, $s2, $v1
    /* bnezl $v0, 0x13e7b0 */                                   // 0x0013e7cc: bnezl $v0, 0x13e7b0
    a0 = *(int32_t*)(s0);                                       // 0x0013e7d0: lw $a0, 0($s0)
label_0x13e7d4:
    v0 = *(int32_t*)((s1) + 0x20);                              // 0x0013e7d4: lw $v0, 0x20($s1)
    a0 = 9;                                                     // 0x0013e7d8: addiu $a0, $zero, 9
    a2 = 1;                                                     // 0x0013e7e0: addiu $a2, $zero, 1
    func_00139228();  // 0x139120                                // 0x0013e7ec: jal 0x139120
    local_0 = v0;                                               // 0x0013e7f0: sw $v0, 0($sp)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013e7f4: lw $v1, 4($s1)
    if (v1 <= 0) goto label_0x13e82c;                           // 0x0013e7f8: blez $v1, 0x13e82c
    s0 = s1 + 8;                                                // 0x0013e800: addiu $s0, $s1, 8
    a0 = *(int32_t*)(s0);                                       // 0x0013e804: lw $a0, 0($s0)
    if (a0 == 0) goto label_0x13e81c;                           // 0x0013e808: beqz $a0, 0x13e81c
    s0 = s0 + 4;                                                // 0x0013e80c: addiu $s0, $s0, 4
    func_0013dcc0();  // 0x13dc58                                // 0x0013e810: jal 0x13dc58
    /* nop */                                                   // 0x0013e814: nop 
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013e818: lw $v1, 4($s1)
label_0x13e81c:
    s2 = s2 + 1;                                                // 0x0013e81c: addiu $s2, $s2, 1
    v0 = (s2 < v1) ? 1 : 0;                                     // 0x0013e820: slt $v0, $s2, $v1
    /* bnezl $v0, 0x13e808 */                                   // 0x0013e824: bnezl $v0, 0x13e808
    a0 = *(int32_t*)(s0);                                       // 0x0013e828: lw $a0, 0($s0)
label_0x13e82c:
    *(uint8_t*)(s1) = 0;                                        // 0x0013e82c: sb $zero, 0($s1)
    return;                                                     // 0x0013e840: jr $ra
    sp = sp + 0x30;                                             // 0x0013e844: addiu $sp, $sp, 0x30
}