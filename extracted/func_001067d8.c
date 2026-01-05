void func_001067d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4, local_8;
    
    sp = sp + -0x40;                                            // 0x001067d8: addiu $sp, $sp, -0x40
    v1 = 1;                                                     // 0x001067dc: addiu $v1, $zero, 1
    local_10 = a0;                                              // 0x001067f8: sw $a0, 0x10($sp)
    v0 = sp + 0x10;                                             // 0x00106800: addiu $v0, $sp, 0x10
    local_0 = v0;                                               // 0x0010680c: sw $v0, 0($sp)
    local_4 = v1;                                               // 0x00106810: sw $v1, 4($sp)
    local_14 = s0;                                              // 0x00106814: sw $s0, 0x14($sp)
    func_00106360();  // 106360                                // 0x00106818: jal 0x106360
    local_8 = s0;                                               // 0x0010681c: sw $s0, 8($sp)
    /* bnezl $v0, 0x106830 */                                   // 0x00106820: bnezl $v0, 0x106830
    v0 = local_8;                                               // 0x00106824: lw $v0, 8($sp)
    goto label_0x106844;                                        // 0x00106828: b 0x106844
    /* beqzl $s1, 0x106838 */                                   // 0x00106830: beqzl $s1, 0x106838
    /* break (trap) */                                          // 0x00106834: break 0, 7
    v0 = s0 - v0;                                               // 0x00106838: subu $v0, $s0, $v0
    /* divide: v0 / s1 -> hi:lo */                              // 0x0010683c: divu $zero, $v0, $s1
    /* mflo $v0 */                                              // 0x00106840
label_0x106844:
    return;                                                     // 0x00106854: jr $ra
    sp = sp + 0x40;                                             // 0x00106858: addiu $sp, $sp, 0x40
}