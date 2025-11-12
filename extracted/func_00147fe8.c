void func_00147fe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00147fe8: addiu $sp, $sp, -0x50
    v0 = -1;                                                    // 0x00147fec: addiu $v0, $zero, -1
    if (a2 == v0) goto label_0x148020;                          // 0x0014800c: beq $a2, $v0, 0x148020
    s0 = *(int32_t*)((s1) + 0x40);                              // 0x00148010: lw $s0, 0x40($s1)
    v0 = (a1 < a2) ? 1 : 0;                                     // 0x00148014: slt $v0, $a1, $a2
    if (v0 == 0) goto label_0x14805c;                           // 0x00148018: beqz $v0, 0x14805c
label_0x148020:
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00148020: lw $v0, 8($s0)
    if (v0 != 0) goto label_0x148038;                           // 0x00148024: bnez $v0, 0x148038
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x0014802c: sw $zero, 8($s1)
    v0 = 1;                                                     // 0x00148030: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00148034: sw $v0, 8($s0)
label_0x148038:
    func_001465c8();  // 0x146310                                // 0x00148038: jal 0x146310
    if (v0 == 0) goto label_0x148054;                           // 0x00148040: beqz $v0, 0x148054
    func_00146280();  // 0x1461b0                                // 0x00148048: jal 0x1461b0
    v1 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00148050: sltu $v1, $zero, $v0
label_0x148054:
    goto label_0x148074;                                        // 0x00148054: b 0x148074
label_0x14805c:
    func_001465c8();  // 0x146310                                // 0x0014805c: jal 0x146310
    s3 = 1;                                                     // 0x00148064: addiu $s3, $zero, 1
    func_00147d70();  // 0x147ca0                                // 0x0014806c: jal 0x147ca0
label_0x148074:
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00148074: lw $v0, 0x10a0($s0)
    if (v0 != 0) goto label_0x1480ec;                           // 0x00148078: bnez $v0, 0x1480ec
    a1 = *(int32_t*)((s0) + 0x130);                             // 0x00148080: lw $a1, 0x130($s0)
    func_00146310();  // 0x146280                                // 0x00148088: jal 0x146280
    a2 = *(int32_t*)((s0) + 4);                                 // 0x0014808c: lw $a2, 4($s0)
    v1 = *(int32_t*)((s0) + 0x18c);                             // 0x00148090: lw $v1, 0x18c($s0)
    v0 = 3;                                                     // 0x00148094: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1480b8;                          // 0x00148098: beql $v1, $v0, 0x1480b8
    v1 = *(int32_t*)((s0) + 0xc4);                              // 0x0014809c: lw $v1, 0xc4($s0)
    /* bnezl $s3, 0x1480b8 */                                   // 0x001480a0: bnezl $s3, 0x1480b8
    v1 = *(int32_t*)((s0) + 0xc4);                              // 0x001480a4: lw $v1, 0xc4($s0)
    v0 = *(int32_t*)((s0) + 0x138);                             // 0x001480a8: lw $v0, 0x138($s0)
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001480ac: sltiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x138) = v0;                            // 0x001480b0: sw $v0, 0x138($s0)
    v1 = *(int32_t*)((s0) + 0xc4);                              // 0x001480b4: lw $v1, 0xc4($s0)
label_0x1480b8:
    v0 = *(int32_t*)((s0) + 0x130);                             // 0x001480b8: lw $v0, 0x130($s0)
    v0 = v0 - v1;                                               // 0x001480bc: subu $v0, $v0, $v1
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001480c0: sw $v0, 8($s1)
    v1 = *(int32_t*)((s0) + 0x138);                             // 0x001480c4: lw $v1, 0x138($s0)
    if (v1 != 0) goto label_0x1480ec;                           // 0x001480c8: bnez $v1, 0x1480ec
    v0 = *(int32_t*)((s0) + 0x130);                             // 0x001480d0: lw $v0, 0x130($s0)
    v1 = *(int32_t*)((s0) + 4);                                 // 0x001480d4: lw $v1, 4($s0)
    v0 = v0 + 1;                                                // 0x001480d8: addiu $v0, $v0, 1
    v1 = v1 + 1;                                                // 0x001480dc: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 0x130) = v0;                            // 0x001480e0: sw $v0, 0x130($s0)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x001480e4: sw $v1, 4($s0)
label_0x1480ec:
    return;                                                     // 0x00148100: jr $ra
    sp = sp + 0x50;                                             // 0x00148104: addiu $sp, $sp, 0x50
}