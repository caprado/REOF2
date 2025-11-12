void func_0012e3c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2, local_4;
    
    sp = sp + -0x60;                                            // 0x0012e3c8: addiu $sp, $sp, -0x60
    s6 = s3 + 0xc;                                              // 0x0012e3e8: addiu $s6, $s3, 0xc
    s7 = s3 + 8;                                                // 0x0012e3f0: addiu $s7, $s3, 8
    fp = s4 << 1;                                               // 0x0012e3f8: sll $fp, $s4, 1
    v1 = s4 << 2;                                               // 0x0012e400: sll $v1, $s4, 2
    v1 = v1 + s3;                                               // 0x0012e408: addu $v1, $v1, $s3
    v0 = fp + 0x80;                                             // 0x0012e410: addiu $v0, $fp, 0x80
    a0 = s6 + v0;                                               // 0x0012e418: addu $a0, $s6, $v0
    v0 = s7 + v0;                                               // 0x0012e41c: addu $v0, $s7, $v0
    s1 = *(int32_t*)((v1) + 0x80);                              // 0x0012e420: lw $s1, 0x80($v1)
    a2 = *(int16_t*)(a0);                                       // 0x0012e424: lh $a2, 0($a0)
    a1 = *(int16_t*)(v0);                                       // 0x0012e428: lh $a1, 0($v0)
    v0 = *(int32_t*)((s1) + 0x88);                              // 0x0012e430: lw $v0, 0x88($s1)
    func_0012e090();  // 0x12e080                                // 0x0012e434: jal 0x12e080
    local_4 = v0;                                               // 0x0012e438: sw $v0, 4($sp)
    v0 = *(int32_t*)((s3) + 0x44);                              // 0x0012e43c: lw $v0, 0x44($s3)
    if (v0 <= 0) goto label_0x12e480;                           // 0x0012e440: blez $v0, 0x12e480
    s5 = s4 << 6;                                               // 0x0012e448: sll $s5, $s4, 6
    v0 = s5 + s3;                                               // 0x0012e44c: addu $v0, $s5, $s3
    s0 = v0 + 0x90;                                             // 0x0012e450: addiu $s0, $v0, 0x90
    a2 = *(int16_t*)(s0);                                       // 0x0012e454: lh $a2, 0($s0)
    s0 = s0 + 2;                                                // 0x0012e458: addiu $s0, $s0, 2
    s2 = s2 + 1;                                                // 0x0012e460: addiu $s2, $s2, 1
    func_0012e178();  // 0x12e090                                // 0x0012e464: jal 0x12e090
    v0 = *(int32_t*)((s3) + 0x44);                              // 0x0012e46c: lw $v0, 0x44($s3)
    v0 = (s2 < v0) ? 1 : 0;                                     // 0x0012e470: slt $v0, $s2, $v0
    /* bnezl $v0, 0x12e458 */                                   // 0x0012e474: bnezl $v0, 0x12e458
    a2 = *(int16_t*)(s0);                                       // 0x0012e478: lh $a2, 0($s0)
label_0x12e480:
    func_0012e210();  // 0x12e178                                // 0x0012e480: jal 0x12e178
    v0 = fp + 0x80;                                             // 0x0012e488: addiu $v0, $fp, 0x80
    v1 = s6 + v0;                                               // 0x0012e48c: addu $v1, $s6, $v0
    v0 = s7 + v0;                                               // 0x0012e490: addu $v0, $s7, $v0
    a1 = *(int16_t*)(v0);                                       // 0x0012e494: lh $a1, 0($v0)
    a2 = *(int16_t*)(v1);                                       // 0x0012e498: lh $a2, 0($v1)
    func_0012deb0();  // 0x12dea0                                // 0x0012e49c: jal 0x12dea0
    a0 = *(int32_t*)((s1) + 0x88);                              // 0x0012e4a0: lw $a0, 0x88($s1)
    v0 = *(int32_t*)((s3) + 0x44);                              // 0x0012e4a4: lw $v0, 0x44($s3)
    if (v0 <= 0) goto label_0x12e5f8;                           // 0x0012e4a8: blez $v0, 0x12e5f8
    s5 = s4 << 6;                                               // 0x0012e4b0: sll $s5, $s4, 6
    s4 = 0x1249;                                                // 0x0012e4b4: addiu $s4, $zero, 0x1249
    fp = sp + 2;                                                // 0x0012e4b8: addiu $fp, $sp, 2
    s7 = 0x7fff;                                                // 0x0012e4bc: addiu $s7, $zero, 0x7fff
    s6 = -0x8000;                                               // 0x0012e4c0: addiu $s6, $zero, -0x8000
    a0 = local_4;                                               // 0x0012e4c4: lw $a0, 4($sp)
label_0x12e4c8:
    v0 = s5 + s3;                                               // 0x0012e4c8: addu $v0, $s5, $s3
    v1 = s2 << 1;                                               // 0x0012e4cc: sll $v1, $s2, 1
    v1 = v1 + v0;                                               // 0x0012e4d4: addu $v1, $v1, $v0
    func_0012dec8();  // 0x12deb0                                // 0x0012e4dc: jal 0x12deb0
    s0 = *(int16_t*)((v1) + 0x90);                              // 0x0012e4e0: lh $s0, 0x90($v1)
    a1 = local_0;                                               // 0x0012e4e4: lh $a1, 0($sp)
    func_0012e090();  // 0x12e080                                // 0x0012e4ec: jal 0x12e080
    a2 = local_2;                                               // 0x0012e4f0: lh $a2, 2($sp)
    func_0012e178();  // 0x12e090                                // 0x0012e4fc: jal 0x12e090
    func_0012e248();  // 0x12e210                                // 0x0012e508: jal 0x12e210
    func_00112048();  // 0x111f90                                // 0x0012e510: jal 0x111f90
    func_00111ce0();  // 0x111a58                                // 0x0012e51c: jal 0x111a58
    func_001120e8();  // 0x112048                                // 0x0012e524: jal 0x112048
    v0 = (s7 < s0) ? 1 : 0;                                     // 0x0012e530: slt $v0, $s7, $s0
    /* bnezl $v0, 0x12e550 */                                   // 0x0012e534: bnezl $v0, 0x12e550
    v0 = 0x7fff;                                                // 0x0012e538: addiu $v0, $zero, 0x7fff
    v1 = (s0 < -0x8000) ? 1 : 0;                                // 0x0012e53c: slti $v1, $s0, -0x8000
    if (v1 == 0) v0 = s0;                                       // 0x0012e544: movz $v0, $s0, $v1
    v0 = v0 << 0x10;                                            // 0x0012e548: sll $v0, $v0, 0x10
    v0 = v0 >> 0x10;                                            // 0x0012e54c: sra $v0, $v0, 0x10
    if (s0 >= 0) goto label_0x12e560;                           // 0x0012e554: bgezl $s0, 0x12e560
    v0 = s0 + 0x924;                                            // 0x0012e558: addiu $v0, $s0, 0x924
    v0 = s0 + -0x924;                                           // 0x0012e55c: addiu $v0, $s0, -0x924
label_0x12e560:
    /* beqzl $s4, 0x12e568 */                                   // 0x0012e560: beqzl $s4, 0x12e568
    /* break (trap) */                                          // 0x0012e564: break 0, 7
    /* divide: v0 / s4 -> hi:lo */                              // 0x0012e568: div $zero, $v0, $s4
    /* mflo $v0 */                                              // 0x0012e56c
    v0 = (s0 < 7) ? 1 : 0;                                      // 0x0012e574: slti $v0, $s0, 7
    if (v0 == 0) goto label_0x12e598;                           // 0x0012e578: beqz $v0, 0x12e598
    v1 = 7;                                                     // 0x0012e57c: addiu $v1, $zero, 7
    v0 = (v1 < -8) ? 1 : 0;                                     // 0x0012e584: slti $v0, $v1, -8
    /* bnezl $v0, 0x12e598 */                                   // 0x0012e588: bnezl $v0, 0x12e598
    v1 = -8;                                                    // 0x0012e58c: addiu $v1, $zero, -8
    goto label_0x12e59c;                                        // 0x0012e590: b 0x12e59c
label_0x12e598:
label_0x12e59c:
    a2 = s0 << 0x18;                                            // 0x0012e5a0: sll $a2, $s0, 0x18
    func_0012e258();  // 0x12e248                                // 0x0012e5a8: jal 0x12e248
    a2 = a2 >> 0x18;                                            // 0x0012e5ac: sra $a2, $a2, 0x18
    v0 = *(int16_t*)((s1) + 0x7c);                              // 0x0012e5b0: lh $v0, 0x7c($s1)
    v1 = (s7 < s0) ? 1 : 0;                                     // 0x0012e5b8: slt $v1, $s7, $s0
    /* bnezl $v1, 0x12e5d8 */                                   // 0x0012e5bc: bnezl $v1, 0x12e5d8
    a1 = 0x7fff;                                                // 0x0012e5c0: addiu $a1, $zero, 0x7fff
    v1 = (s0 < -0x8000) ? 1 : 0;                                // 0x0012e5c4: slti $v1, $s0, -0x8000
    if (v1 == 0) v0 = s0;                                       // 0x0012e5cc: movz $v0, $s0, $v1
    v0 = v0 << 0x10;                                            // 0x0012e5d0: sll $v0, $v0, 0x10
    a1 = v0 >> 0x10;                                            // 0x0012e5d4: sra $a1, $v0, 0x10
    a0 = *(int32_t*)((s1) + 0x88);                              // 0x0012e5d8: lw $a0, 0x88($s1)
    func_0012df40();  // 0x12dec8                                // 0x0012e5dc: jal 0x12dec8
    s2 = s2 + 1;                                                // 0x0012e5e0: addiu $s2, $s2, 1
    v1 = *(int32_t*)((s3) + 0x44);                              // 0x0012e5e4: lw $v1, 0x44($s3)
    v1 = (s2 < v1) ? 1 : 0;                                     // 0x0012e5e8: slt $v1, $s2, $v1
    if (v1 != 0) goto label_0x12e4c8;                           // 0x0012e5ec: bnez $v1, 0x12e4c8
    a0 = local_4;                                               // 0x0012e5f0: lw $a0, 4($sp)
label_0x12e5f8:
    return;                                                     // 0x0012e620: jr $ra
    sp = sp + 0x60;                                             // 0x0012e624: addiu $sp, $sp, 0x60
}