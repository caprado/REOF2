void func_0016c958() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0016c958: addiu $sp, $sp, -0x50
    *(uint32_t*)(s6) = 0;                                       // 0x0016c98c: sw $zero, 0($s6)
    a1 = *(int32_t*)((s2) + 4);                                 // 0x0016c990: lw $a1, 4($s2)
    func_00158518();  // 0x158410                                // 0x0016c994: jal 0x158410
    a0 = *(int32_t*)(s2);                                       // 0x0016c998: lw $a0, 0($s2)
    /* beqzl $s1, 0x16c9c8 */                                   // 0x0016c9a0: beqzl $s1, 0x16c9c8
    a3 = *(int32_t*)((s2) + 0xc);                               // 0x0016c9a4: lw $a3, 0xc($s2)
    goto label_0x16ca74;                                        // 0x0016c9a8: b 0x16ca74
    /* nop */                                                   // 0x0016c9ac: nop 
    v0 = *(int32_t*)(s2);                                       // 0x0016c9b0: lw $v0, 0($s2)
    *(uint32_t*)(s6) = a2;                                      // 0x0016c9b4: sw $a2, 0($s6)
    v0 = v0 + v1;                                               // 0x0016c9b8: addu $v0, $v0, $v1
    v0 = v0 - s3;                                               // 0x0016c9bc: subu $v0, $v0, $s3
    goto label_0x16ca84;                                        // 0x0016c9c0: b 0x16ca84
    v0 = v0 + s4;                                               // 0x0016c9c4: addu $v0, $v0, $s4
    if (a3 == 0) goto label_0x16ca84;                           // 0x0016c9c8: beqz $a3, 0x16ca84
    v1 = 3;                                                     // 0x0016c9cc: addiu $v1, $zero, 3
    s3 = *(int32_t*)((s2) + 4);                                 // 0x0016c9d0: lw $s3, 4($s2)
    a1 = *(int32_t*)(s2);                                       // 0x0016c9d4: lw $a1, 0($s2)
    v0 = (s3 < 4) ? 1 : 0;                                      // 0x0016c9e0: slti $v0, $s3, 4
    if (v0 == 0) s3 = v1;                                       // 0x0016c9e4: movz $s3, $v1, $v0
    v0 = (a3 < 4) ? 1 : 0;                                      // 0x0016c9e8: slti $v0, $a3, 4
    a1 = a1 + a2;                                               // 0x0016c9ec: addu $a1, $a1, $a2
    if (v0 != 0) s0 = a3;                                       // 0x0016c9f4: movn $s0, $a3, $v0
    a1 = a1 - s3;                                               // 0x0016c9fc: subu $a1, $a1, $s3
    func_00107b68();  // 0x107ab8                                // 0x0016ca00: jal 0x107ab8
    a1 = *(int32_t*)((s2) + 8);                                 // 0x0016ca08: lw $a1, 8($s2)
    s0 = s3 + s0;                                               // 0x0016ca10: addu $s0, $s3, $s0
    a0 = sp + s3;                                               // 0x0016ca14: addu $a0, $sp, $s3
    func_00107b68();  // 0x107ab8                                // 0x0016ca18: jal 0x107ab8
    s0 = s0 + -3;                                               // 0x0016ca1c: addiu $s0, $s0, -3
    v0 = (s1 < s0) ? 1 : 0;                                     // 0x0016ca20: slt $v0, $s1, $s0
    /* beqzl $v0, 0x16ca5c */                                   // 0x0016ca24: beqzl $v0, 0x16ca5c
    a1 = *(int32_t*)((s2) + 0xc);                               // 0x0016ca28: lw $a1, 0xc($s2)
    /* nop */                                                   // 0x0016ca2c: nop 
label_0x16ca30:
    func_00158310();  // 0x158278                                // 0x0016ca30: jal 0x158278
    a0 = sp + s4;                                               // 0x0016ca34: addu $a0, $sp, $s4
    v0 = a2 & s5;                                               // 0x0016ca3c: and $v0, $a2, $s5
    /* bnezl $v0, 0x16c9b0 */                                   // 0x0016ca40: bnezl $v0, 0x16c9b0
    v1 = *(int32_t*)((s2) + 4);                                 // 0x0016ca44: lw $v1, 4($s2)
    s4 = s4 + 1;                                                // 0x0016ca48: addiu $s4, $s4, 1
    v0 = (s4 < s0) ? 1 : 0;                                     // 0x0016ca4c: slt $v0, $s4, $s0
    if (v0 != 0) goto label_0x16ca30;                           // 0x0016ca50: bnez $v0, 0x16ca30
    /* nop */                                                   // 0x0016ca54: nop 
    a1 = *(int32_t*)((s2) + 0xc);                               // 0x0016ca58: lw $a1, 0xc($s2)
    func_00158518();  // 0x158410                                // 0x0016ca60: jal 0x158410
    a0 = *(int32_t*)((s2) + 8);                                 // 0x0016ca64: lw $a0, 8($s2)
    /* beqzl $s1, 0x16ca88 */                                   // 0x0016ca6c: beqzl $s1, 0x16ca88
label_0x16ca74:
    func_00158310();  // 0x158278                                // 0x0016ca74: jal 0x158278
    *(uint32_t*)(s6) = v0;                                      // 0x0016ca7c: sw $v0, 0($s6)
label_0x16ca84:
    return;                                                     // 0x0016caa4: jr $ra
    sp = sp + 0x50;                                             // 0x0016caa8: addiu $sp, $sp, 0x50
}