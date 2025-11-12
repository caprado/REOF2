void func_00180760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t2 = 8;                                                     // 0x00180770: addiu $t2, $zero, 8
    /* nop */                                                   // 0x00180774: nop 
label_0x180778:
    v0 = *(uint8_t*)(a0);                                       // 0x00180778: lbu $v0, 0($a0)
    v0 = v0 >> t0;                                              // 0x0018077c: srav $v0, $v0, $t0
    v0 = v0 & 1;                                                // 0x00180780: andi $v0, $v0, 1
    if (v0 == 0) goto label_0x1807d8;                           // 0x00180784: beqz $v0, 0x1807d8
    v1 = 1;                                                     // 0x00180788: addiu $v1, $zero, 1
    v0 = a2 + -0x10;                                            // 0x0018078c: addiu $v0, $a2, -0x10
    v0 = ((unsigned)v0 < (unsigned)0x10) ? 1 : 0;               // 0x00180790: sltiu $v0, $v0, 0x10
    *(uint32_t*)(a1) = v1;                                      // 0x00180794: sw $v1, 0($a1)
    *(uint32_t*)((a1) + 8) = t1;                                // 0x00180798: sw $t1, 8($a1)
    if (v0 != 0) goto label_0x1807b4;                           // 0x0018079c: bnez $v0, 0x1807b4
    *(uint32_t*)((a1) + 0xc) = a3;                              // 0x001807a0: sw $a3, 0xc($a1)
    v0 = a2 + -0x23;                                            // 0x001807a4: addiu $v0, $a2, -0x23
    v0 = ((unsigned)v0 < (unsigned)4) ? 1 : 0;                  // 0x001807a8: sltiu $v0, $v0, 4
    /* beqzl $v0, 0x1807c0 */                                   // 0x001807ac: beqzl $v0, 0x1807c0
    a3 = a3 + 1;                                                // 0x001807b0: addiu $a3, $a3, 1
label_0x1807b4:
    *(uint32_t*)((a1) + 4) = t2;                                // 0x001807b4: sw $t2, 4($a1)
    goto label_0x1807e4;                                        // 0x001807b8: b 0x1807e4
    t1 = t1 + 1;                                                // 0x001807bc: addiu $t1, $t1, 1
    v0 = a3 & 7;                                                // 0x001807c0: andi $v0, $a3, 7
    if (v0 != 0) goto label_0x1807e4;                           // 0x001807c4: bnez $v0, 0x1807e4
    *(uint32_t*)((a1) + 4) = v1;                                // 0x001807c8: sw $v1, 4($a1)
    t1 = t1 + 1;                                                // 0x001807cc: addiu $t1, $t1, 1
    goto label_0x1807e4;                                        // 0x001807d0: b 0x1807e4
label_0x1807d8:
    *(uint32_t*)(a1) = 0;                                       // 0x001807d8: sw $zero, 0($a1)
    *(uint32_t*)((a1) + 8) = 0;                                 // 0x001807dc: sw $zero, 8($a1)
    *(uint32_t*)((a1) + 0xc) = 0;                               // 0x001807e0: sw $zero, 0xc($a1)
label_0x1807e4:
    t0 = t0 + 1;                                                // 0x001807e4: addiu $t0, $t0, 1
    v0 = t0 & 7;                                                // 0x001807e8: andi $v0, $t0, 7
    if (v0 != 0) goto label_0x1807fc;                           // 0x001807ec: bnez $v0, 0x1807fc
    a2 = a2 + 1;                                                // 0x001807f0: addiu $a2, $a2, 1
    a0 = a0 + 1;                                                // 0x001807f4: addiu $a0, $a0, 1
label_0x1807fc:
    v0 = (a2 < 0x28) ? 1 : 0;                                   // 0x001807fc: slti $v0, $a2, 0x28
    if (v0 != 0) goto label_0x180778;                           // 0x00180800: bnez $v0, 0x180778
    a1 = a1 + 0x10;                                             // 0x00180804: addiu $a1, $a1, 0x10
    return;                                                     // 0x00180808: jr $ra
    v0 = 1;                                                     // 0x0018080c: addiu $v0, $zero, 1
}