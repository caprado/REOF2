void func_001137b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001137b0: addiu $sp, $sp, -0x40
    func_001123a0();  // 1123a0                                // 0x001137c4: jal 0x1123a0
    if (s1 != 0) goto label_0x1137f8;                           // 0x001137d0: bnez $s1, 0x1137f8
    s2 = *(int32_t*)((s0) + 8);                                 // 0x001137d4: lw $s2, 8($s0)
    func_00114dc0();  // 114dc0                                // 0x001137d8: jal 0x114dc0
    a0 = 2;                                                     // 0x001137dc: addiu $a0, $zero, 2
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x001137e0: lw $a1, 0xc($s0)
    AddDmacHandler();  // 0x113fe0                              // 0x001137e4: jal 0x113fe0
    a0 = 2;                                                     // 0x001137e8: addiu $a0, $zero, 2
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001137ec: sw $zero, 8($s0)
    goto label_0x113834;                                        // 0x001137f0: b 0x113834
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x001137f4: sw $zero, 0xc($s0)
label_0x1137f8:
    /* beqzl $s2, 0x113818 */                                   // 0x001137f8: beqzl $s2, 0x113818
    *(uint32_t*)((s0) + 8) = s1;                                // 0x001137fc: sw $s1, 8($s0)
    func_00114dc0();  // 114dc0                                // 0x00113800: jal 0x114dc0
    a0 = 2;                                                     // 0x00113804: addiu $a0, $zero, 2
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00113808: lw $a1, 0xc($s0)
    AddDmacHandler();  // 0x113fe0                              // 0x0011380c: jal 0x113fe0
    a0 = 2;                                                     // 0x00113810: addiu $a0, $zero, 2
    *(uint32_t*)((s0) + 8) = s1;                                // 0x00113814: sw $s1, 8($s0)
    a0 = 2;                                                     // 0x0011381c: addiu $a0, $zero, 2
    AddIntcHandler2();  // 0x113fc0                             // 0x00113820: jal 0x113fc0
    a2 = -1;                                                    // 0x00113824: addiu $a2, $zero, -1
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00113828: sw $v0, 0xc($s0)
    func_00114e28();  // 114e28                                // 0x0011382c: jal 0x114e28
    a0 = 2;                                                     // 0x00113830: addiu $a0, $zero, 2
label_0x113834:
    return;                                                     // 0x00113848: jr $ra
    sp = sp + 0x40;                                             // 0x0011384c: addiu $sp, $sp, 0x40
}