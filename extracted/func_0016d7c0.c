void func_0016d7c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016d7c0: addiu $sp, $sp, -0x10
    a1 = 0x157 << 16;                                           // 0x0016d7cc: lui $a1, 0x157
    a1 = a1 | 0x52a0;                                           // 0x0016d7d0: ori $a1, $a1, 0x52a0
    return func_0015b7b0();  // Tail call                        // 0x0016d7d8: j 0x15b740
    sp = sp + 0x10;                                             // 0x0016d7dc: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x0016d7e0: addiu $sp, $sp, -0x30
    a1 = 0x34;                                                  // 0x0016d7ec: addiu $a1, $zero, 0x34
    func_001752f8();  // 0x1752e8                                // 0x0016d80c: jal 0x1752e8
    if (s0 != 0) goto label_0x16d860;                           // 0x0016d818: bnez $s0, 0x16d860
    v0 = 1;                                                     // 0x0016d81c: addiu $v0, $zero, 1
    if (s3 >= 0) goto label_0x16d84c;                           // 0x0016d820: bgez $s3, 0x16d84c
    v0 = *(int32_t*)((s2) + 0x30);                              // 0x0016d828: lw $v0, 0x30($s2)
    if (v0 == 0) goto label_0x16d850;                           // 0x0016d82c: beqz $v0, 0x16d850
    a1 = 0x34;                                                  // 0x0016d830: addiu $a1, $zero, 0x34
    /* beqzl $s4, 0x16d860 */                                   // 0x0016d834: beqzl $s4, 0x16d860
    v0 = 1;                                                     // 0x0016d838: addiu $v0, $zero, 1
    func_0016d948();  // 0x16d8b8                                // 0x0016d83c: jal 0x16d8b8
    if (v0 == 0) goto label_0x16d85c;                           // 0x0016d844: beqz $v0, 0x16d85c
label_0x16d84c:
    a1 = 0x34;                                                  // 0x0016d84c: addiu $a1, $zero, 0x34
label_0x16d850:
    a2 = 1;                                                     // 0x0016d850: addiu $a2, $zero, 1
    func_00175170();  // 0x175120                                // 0x0016d854: jal 0x175120
    s0 = 1;                                                     // 0x0016d858: addiu $s0, $zero, 1
label_0x16d85c:
    v0 = 1;                                                     // 0x0016d85c: addiu $v0, $zero, 1
label_0x16d860:
    if (s0 != v0) goto label_0x16d898;                          // 0x0016d860: bne $s0, $v0, 0x16d898
    return func_0016da58();  // Tail call                        // 0x0016d88c: j 0x16d948
    sp = sp + 0x30;                                             // 0x0016d890: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0016d894: nop 
label_0x16d898:
    return;                                                     // 0x0016d8ac: jr $ra
    sp = sp + 0x30;                                             // 0x0016d8b0: addiu $sp, $sp, 0x30
}