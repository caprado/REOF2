void func_0016e488() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x0016e488: addiu $sp, $sp, -0x40
    s1 = *(int32_t*)((a0) + 0x1b30);                            // 0x0016e4a8: lw $s1, 0x1b30($a0)
    v0 = *(int32_t*)((s1) + 0xe4);                              // 0x0016e4ac: lw $v0, 0xe4($s1)
    a0 = *(int32_t*)(s1);                                       // 0x0016e4b0: lw $a0, 0($s1)
    if (v0 == 0) goto label_0x16e4f0;                           // 0x0016e4b4: beqz $v0, 0x16e4f0
    s0 = *(int32_t*)((s1) + 0x74);                              // 0x0016e4b8: lw $s0, 0x74($s1)
    func_00159100();  // 159100                                // 0x0016e4c0: jal 0x159100
    a2 = sp + 4;                                                // 0x0016e4c4: addiu $a2, $sp, 4
    a0 = local_0;                                               // 0x0016e4c8: lw $a0, 0($sp)
    if (a0 != 0) goto label_0x16e4e8;                           // 0x0016e4cc: bnez $a0, 0x16e4e8
    v1 = a0 ^ 1;                                                // 0x0016e4d0: xori $v1, $a0, 1
    v0 = local_4;                                               // 0x0016e4d4: lw $v0, 4($sp)
    v1 = 2;                                                     // 0x0016e4d8: addiu $v1, $zero, 2
    v0 = v0 ^ 1;                                                // 0x0016e4dc: xori $v0, $v0, 1
    if (v0 == 0) s0 = v1;                                       // 0x0016e4e0: movz $s0, $v1, $v0
    v1 = a0 ^ 1;                                                // 0x0016e4e4: xori $v1, $a0, 1
label_0x16e4e8:
    v0 = 5;                                                     // 0x0016e4e8: addiu $v0, $zero, 5
    if (v1 == 0) s0 = v0;                                       // 0x0016e4ec: movz $s0, $v0, $v1
label_0x16e4f0:
    v0 = 1;                                                     // 0x0016e4f0: addiu $v0, $zero, 1
    if (s2 != v0) goto label_0x16e518;                          // 0x0016e4f4: bne $s2, $v0, 0x16e518
    v0 = 2;                                                     // 0x0016e4f8: addiu $v0, $zero, 2
    v0 = *(int32_t*)((s3) + 0x18);                              // 0x0016e4fc: lw $v0, 0x18($s3)
    v0 = v0 + -1;                                               // 0x0016e500: addiu $v0, $v0, -1
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016e504: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x16e530 */                                   // 0x0016e508: bnezl $v0, 0x16e530
    s0 = 2;                                                     // 0x0016e50c: addiu $s0, $zero, 2
    goto label_0x16e534;                                        // 0x0016e510: b 0x16e534
    *(uint32_t*)((s1) + 0x74) = s0;                             // 0x0016e514: sw $s0, 0x74($s1)
label_0x16e518:
    if (s0 != v0) goto label_0x16e528;                          // 0x0016e518: bne $s0, $v0, 0x16e528
    v1 = 5;                                                     // 0x0016e51c: addiu $v1, $zero, 5
    goto label_0x16e530;                                        // 0x0016e520: b 0x16e530
    s0 = 3;                                                     // 0x0016e524: addiu $s0, $zero, 3
label_0x16e528:
    v0 = s0 ^ 3;                                                // 0x0016e528: xori $v0, $s0, 3
    if (v0 == 0) s0 = v1;                                       // 0x0016e52c: movz $s0, $v1, $v0
label_0x16e530:
    *(uint32_t*)((s1) + 0x74) = s0;                             // 0x0016e530: sw $s0, 0x74($s1)
label_0x16e534:
    return;                                                     // 0x0016e548: jr $ra
    sp = sp + 0x40;                                             // 0x0016e54c: addiu $sp, $sp, 0x40
}