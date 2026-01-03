void func_0016b130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016b130: addiu $sp, $sp, -0x20
    a1 = 6;                                                     // 0x0016b134: addiu $a1, $zero, 6
    func_001752e8();  // 1752e8                                // 0x0016b148: jal 0x1752e8
    s1 = *(int32_t*)((s0) + 0x1aec);                            // 0x0016b14c: lw $s1, 0x1aec($s0)
    v1 = 1;                                                     // 0x0016b150: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x16b18c;                          // 0x0016b154: bne $v0, $v1, 0x16b18c
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0016b15c: lw $v0, 8($s1)
    if (v0 != 0) goto label_0x16b18c;                           // 0x0016b160: bnez $v0, 0x16b18c
    /* nop */                                                   // 0x0016b164: nop 
    func_00177908();  // 177908                                // 0x0016b168: jal 0x177908
    a1 = 6;                                                     // 0x0016b16c: addiu $a1, $zero, 6
    a1 = 6;                                                     // 0x0016b174: addiu $a1, $zero, 6
    if (v0 == 0) goto label_0x16b18c;                           // 0x0016b178: beqz $v0, 0x16b18c
    func_00175120();  // 175120                                // 0x0016b180: jal 0x175120
    /* nop */                                                   // 0x0016b184: nop 
label_0x16b18c:
    func_001752e8();  // 1752e8                                // 0x0016b18c: jal 0x1752e8
    a1 = 5;                                                     // 0x0016b190: addiu $a1, $zero, 5
    v1 = 1;                                                     // 0x0016b194: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x16b1e4;                          // 0x0016b198: bnel $v0, $v1, 0x16b1e4
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0016b1a0: lw $v0, 4($s1)
    /* bnezl $v0, 0x16b1e4 */                                   // 0x0016b1a4: bnezl $v0, 0x16b1e4
    func_00177908();  // 177908                                // 0x0016b1b0: jal 0x177908
    a1 = 7;                                                     // 0x0016b1b4: addiu $a1, $zero, 7
    a1 = 5;                                                     // 0x0016b1bc: addiu $a1, $zero, 5
    if (v0 == 0) goto label_0x16b1e0;                           // 0x0016b1c0: beqz $v0, 0x16b1e0
    return func_00175170();  // Tail call                        // 0x0016b1d4: j 0x175120
    sp = sp + 0x20;                                             // 0x0016b1d8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016b1dc: nop 
label_0x16b1e0:
label_0x16b1e4:
    return;                                                     // 0x0016b1ec: jr $ra
    sp = sp + 0x20;                                             // 0x0016b1f0: addiu $sp, $sp, 0x20
}