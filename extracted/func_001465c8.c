void func_001465c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001465c8: addiu $sp, $sp, -0x130
    a0 = *(int32_t*)((s0) + 0xf8);                              // 0x001465dc: lw $a0, 0xf8($s0)
    if (a0 == 0) goto label_0x14660c;                           // 0x001465e0: beqz $a0, 0x14660c
    v0 = *(int32_t*)((s0) + 0xf4);                              // 0x001465e8: lw $v0, 0xf4($s0)
    v1 = *(int32_t*)((a2) + 4);                                 // 0x001465ec: lw $v1, 4($a2)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001465f0: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x146624;                           // 0x001465f4: bnez $v0, 0x146624
    v0 = *(int32_t*)((a2) + 8);                                 // 0x001465fc: lw $v0, 8($a2)
    v0 = (a0 < v0) ? 1 : 0;                                     // 0x00146600: slt $v0, $a0, $v0
    goto label_0x146624;                                        // 0x00146604: b 0x146624
    s1 = v0 ^ 1;                                                // 0x00146608: xori $s1, $v0, 1
label_0x14660c:
    v1 = *(int32_t*)((a2) + 0xc);                               // 0x0014660c: lw $v1, 0xc($a2)
    a0 = *(int32_t*)((a2) + 0x10);                              // 0x00146610: lw $a0, 0x10($a2)
    v0 = *(int32_t*)((s0) + 0xfc);                              // 0x00146614: lw $v0, 0xfc($s0)
    /* multiply: v1 * a0 -> hi:lo */                            // 0x00146618: mult $ac3, $v1, $a0
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0014661c: slt $v0, $v0, $v1
    s1 = v0 ^ 1;                                                // 0x00146620: xori $s1, $v0, 1
label_0x146624:
    if (s1 != 0) goto label_0x146654;                           // 0x00146624: bnez $s1, 0x146654
    a3 = *(int32_t*)((a2) + 8);                                 // 0x0014662c: lw $a3, 8($a2)
    a1 = 0x22 << 16;                                            // 0x00146630: lui $a1, 0x22
    a2 = *(int32_t*)((a2) + 4);                                 // 0x00146634: lw $a2, 4($a2)
    a1 = &str_00226840;  // "CSC handler error\n"               // 0x00146638: addiu $a1, $a1, 0x6840
    func_0010a4d8();  // 10a4d8                                // 0x0014663c: jal 0x10a4d8
    func_00148530();  // 148530                                // 0x00146648: jal 0x148530
label_0x146654:
    return;                                                     // 0x00146660: jr $ra
    sp = sp + 0x130;                                            // 0x00146664: addiu $sp, $sp, 0x130
}