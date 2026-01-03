void func_0016d648() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0016d648: addiu $sp, $sp, -0x50
    s6 = s0 + 0xc;                                              // 0x0016d674: addiu $s6, $s0, 0xc
    v0 = *(int32_t*)((s3) + 0x10);                              // 0x0016d688: lw $v0, 0x10($s3)
    t1 = *(int32_t*)((s1) + 0x114);                             // 0x0016d68c: lw $t1, 0x114($s1)
    v0 = v0 << 2;                                               // 0x0016d690: sll $v0, $v0, 2
    s5 = 0x23 << 16;                                            // 0x0016d694: lui $s5, 0x23
    s5 = s5 + v0;                                               // 0x0016d698: addu $s5, $s5, $v0
    s5 = g_00229370;  // Global at 0x00229370                   // 0x0016d69c: lw $s5, -0x6c90($s5)
    if (t1 >= 0) goto label_0x16d6cc;                           // 0x0016d6a0: bgez $t1, 0x16d6cc
    s4 = *(int32_t*)((s3) + 0x14);                              // 0x0016d6a4: lw $s4, 0x14($s3)
    func_0016d7c0();  // 16d7c0                                // 0x0016d6ac: jal 0x16d7c0
    v1 = *(int32_t*)(s2);                                       // 0x0016d6b4: lw $v1, 0($s2)
    v1 = v1 - v0;                                               // 0x0016d6b8: subu $v1, $v1, $v0
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x0016d6bc: slti $v0, $v1, 0
    if (v0 != 0) v1 = 0;                                        // 0x0016d6c0: movn $v1, $zero, $v0
    *(uint32_t*)((s1) + 0x114) = v1;                            // 0x0016d6c4: sw $v1, 0x114($s1)
label_0x16d6cc:
    v1 = *(int32_t*)(s2);                                       // 0x0016d6cc: lw $v1, 0($s2)
    a2 = 4;                                                     // 0x0016d6d8: addiu $a2, $zero, 4
    s1 = v1 - t1;                                               // 0x0016d6dc: subu $s1, $v1, $t1
    v0 = (s1 < 0) ? 1 : 0;                                      // 0x0016d6e0: slti $v0, $s1, 0
    func_00107a20();  // 107a20                                // 0x0016d6e4: jal 0x107a20
    if (v0 != 0) s1 = 0;                                        // 0x0016d6e8: movn $s1, $zero, $v0
    if (v0 == 0) goto label_0x16d738;                           // 0x0016d6f0: beqz $v0, 0x16d738
    v1 = 3;                                                     // 0x0016d6f4: addiu $v1, $zero, 3
    v0 = *(int32_t*)((s3) + 0x18);                              // 0x0016d6f8: lw $v0, 0x18($s3)
    a1 = *(int32_t*)((s2) + 8);                                 // 0x0016d704: lw $a1, 8($s2)
    *(uint32_t*)((s6) + 8) = a1;                                // 0x0016d710: sw $a1, 8($s6)
    *(uint32_t*)(s0) = s4;                                      // 0x0016d714: sw $s4, 0($s0)
    if (v0 != v1) goto label_0x16d730;                          // 0x0016d718: bne $v0, $v1, 0x16d730
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0016d71c: sw $zero, 4($s0)
    v0 = 1;                                                     // 0x0016d720: addiu $v0, $zero, 1
    goto label_0x16d78c;                                        // 0x0016d724: b 0x16d78c
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0016d728: sw $v0, 8($s0)
    /* nop */                                                   // 0x0016d72c: nop 
label_0x16d730:
    goto label_0x16d78c;                                        // 0x0016d730: b 0x16d78c
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0016d734: sw $zero, 8($s0)
label_0x16d738:
    /* beqzl $s7, 0x16d760 */                                   // 0x0016d738: beqzl $s7, 0x16d760
    v0 = *(int32_t*)(s0);                                       // 0x0016d73c: lw $v0, 0($s0)
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0016d740: lw $v1, 8($s0)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0016d744: lw $v0, 4($s0)
    *(uint32_t*)(s0) = 0;                                       // 0x0016d748: sw $zero, 0($s0)
    v0 = v0 + v1;                                               // 0x0016d74c: addu $v0, $v0, $v1
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0016d750: sw $zero, 8($s0)
    v0 = v0 + 1;                                                // 0x0016d754: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0016d758: sw $v0, 4($s0)
    v0 = *(int32_t*)(s0);                                       // 0x0016d75c: lw $v0, 0($s0)
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0016d760: lw $v1, 8($s0)
    v0 = s4 - v0;                                               // 0x0016d764: subu $v0, $s4, $v0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0016d768: lw $a0, 4($s0)
    a2 = (v0 < v1) ? 1 : 0;                                     // 0x0016d76c: slt $a2, $v0, $v1
    if (a2 == 0) v1 = v0;                                       // 0x0016d770: movz $v1, $v0, $a2
    a0 = a0 + v0;                                               // 0x0016d774: addu $a0, $a0, $v0
    func_0016d7c0();  // 16d7c0                                // 0x0016d778: jal 0x16d7c0
    *(uint32_t*)((s0) + 8) = v1;                                // 0x0016d77c: sw $v1, 8($s0)
    s1 = s1 + v0;                                               // 0x0016d780: addu $s1, $s1, $v0
    v0 = (s1 < 0) ? 1 : 0;                                      // 0x0016d784: slti $v0, $s1, 0
    if (v0 != 0) s1 = 0;                                        // 0x0016d788: movn $s1, $zero, $v0
label_0x16d78c:
    return;                                                     // 0x0016d7b4: jr $ra
    sp = sp + 0x50;                                             // 0x0016d7b8: addiu $sp, $sp, 0x50
}