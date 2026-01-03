void func_00148150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00148150: addiu $sp, $sp, -0x60
    v0 = -1;                                                    // 0x00148154: addiu $v0, $zero, -1
    s0 = *(int32_t*)((s2) + 0x40);                              // 0x00148178: lw $s0, 0x40($s2)
    if (a2 == v0) goto label_0x148190;                          // 0x0014817c: beq $a2, $v0, 0x148190
    *(uint32_t*)((s0) + 0x138) = 0;                             // 0x00148180: sw $zero, 0x138($s0)
    v0 = (a1 < a2) ? 1 : 0;                                     // 0x00148184: slt $v0, $a1, $a2
    /* beqzl $v0, 0x148198 */                                   // 0x00148188: beqzl $v0, 0x148198
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0014818c: lw $v0, 8($s0)
label_0x148190:
    s3 = 1;                                                     // 0x00148190: addiu $s3, $zero, 1
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00148194: lw $v0, 8($s0)
    if (v0 != 0) goto label_0x1481ac;                           // 0x00148198: bnez $v0, 0x1481ac
    *(uint32_t*)((s2) + 8) = 0;                                 // 0x001481a0: sw $zero, 8($s2)
    v0 = 1;                                                     // 0x001481a4: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 8) = v0;                                // 0x001481a8: sw $v0, 8($s0)
label_0x1481ac:
    func_00146310();  // 146310                                // 0x001481ac: jal 0x146310
    /* beqzl $v0, 0x1481d0 */                                   // 0x001481b4: beqzl $v0, 0x1481d0
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001481b8: lw $v0, 0x10a0($s0)
    /* beqzl $s3, 0x1481d0 */                                   // 0x001481bc: beqzl $s3, 0x1481d0
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001481c0: lw $v0, 0x10a0($s0)
    func_001461b0();  // 1461b0                                // 0x001481c4: jal 0x1461b0
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001481cc: lw $v0, 0x10a0($s0)
    if (v0 != 0) goto label_0x1482a4;                           // 0x001481d0: bnez $v0, 0x1482a4
    s1 = 1;                                                     // 0x001481d8: addiu $s1, $zero, 1
    func_00145900();  // 145900                                // 0x001481e0: jal 0x145900
    *(uint32_t*)((s0) + 0x138) = s1;                            // 0x001481e4: sw $s1, 0x138($s0)
    /* bnezl $v0, 0x148204 */                                   // 0x001481e8: bnezl $v0, 0x148204
    v0 = *(int32_t*)((s0) + 0xec);                              // 0x001481ec: lw $v0, 0xec($s0)
    func_001482c8();  // 1482c8                                // 0x001481f0: jal 0x1482c8
    *(uint32_t*)(s0) = s1;                                      // 0x001481f8: sw $s1, 0($s0)
    goto label_0x1482a4;                                        // 0x001481fc: b 0x1482a4
    v1 = 2;                                                     // 0x00148204: addiu $v1, $zero, 2
    a0 = *(int32_t*)((s0) + 0x18c);                             // 0x00148208: lw $a0, 0x18c($s0)
    v0 = v0 ^ 1;                                                // 0x0014820c: xori $v0, $v0, 1
    if (v0 != 0) v1 = s1;                                       // 0x00148210: movn $v1, $s1, $v0
    if (a0 != v1) goto label_0x1482a4;                          // 0x00148214: bne $a0, $v1, 0x1482a4
    v0 = -1;                                                    // 0x00148218: addiu $v0, $zero, -1
    func_00146310();  // 146310                                // 0x00148220: jal 0x146310
    a1 = 1;                                                     // 0x00148224: addiu $a1, $zero, 1
    if (v0 != 0) v1 = s1;                                       // 0x0014822c: movn $v1, $s1, $v0
    if (v1 == 0) goto label_0x14824c;                           // 0x00148230: beqz $v1, 0x14824c
    /* beqzl $s3, 0x148250 */                                   // 0x00148238: beqzl $s3, 0x148250
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x0014823c: lw $v0, 0x10a0($s0)
    func_001461b0();  // 1461b0                                // 0x00148240: jal 0x1461b0
    if (v0 != 0) s4 = s1;                                       // 0x00148248: movn $s4, $s1, $v0
label_0x14824c:
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x0014824c: lw $v0, 0x10a0($s0)
    if (v0 != 0) goto label_0x1482a4;                           // 0x00148250: bnez $v0, 0x1482a4
    a1 = *(int32_t*)((s0) + 0x130);                             // 0x00148258: lw $a1, 0x130($s0)
    func_00146280();  // 146280                                // 0x00148260: jal 0x146280
    a2 = *(int32_t*)((s0) + 4);                                 // 0x00148264: lw $a2, 4($s0)
    v0 = *(int32_t*)((s0) + 0x130);                             // 0x00148268: lw $v0, 0x130($s0)
    v1 = *(int32_t*)((s0) + 0xc4);                              // 0x0014826c: lw $v1, 0xc4($s0)
    *(uint32_t*)((s0) + 0x138) = 0;                             // 0x00148270: sw $zero, 0x138($s0)
    v0 = v0 - v1;                                               // 0x00148274: subu $v0, $v0, $v1
    *(uint32_t*)((s2) + 8) = v0;                                // 0x00148278: sw $v0, 8($s2)
    v1 = *(int32_t*)((s0) + 0x130);                             // 0x0014827c: lw $v1, 0x130($s0)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00148280: lw $v0, 4($s0)
    v1 = v1 + 1;                                                // 0x00148284: addiu $v1, $v1, 1
    v0 = v0 + 1;                                                // 0x00148288: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x130) = v1;                            // 0x0014828c: sw $v1, 0x130($s0)
    if (s3 != 0) goto label_0x1482a0;                           // 0x00148290: bnez $s3, 0x1482a0
    *(uint32_t*)((s0) + 4) = v0;                                // 0x00148294: sw $v0, 4($s0)
    func_00147ca0();  // 147ca0                                // 0x00148298: jal 0x147ca0
label_0x1482a0:
label_0x1482a4:
    return;                                                     // 0x001482bc: jr $ra
    sp = sp + 0x60;                                             // 0x001482c0: addiu $sp, $sp, 0x60
}