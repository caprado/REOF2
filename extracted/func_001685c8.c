void func_001685c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001685c8: addiu $sp, $sp, -0x20
    func_00168660();  // 168660                                // 0x001685e4: jal 0x168660
    a0 = s0 + 2;                                                // 0x001685ec: addiu $a0, $s0, 2
    a1 = s1 + -2;                                               // 0x001685f0: addiu $a1, $s1, -2
    if (v0 != 0) goto label_0x16862c;                           // 0x001685f4: bnez $v0, 0x16862c
    func_00168660();  // 168660                                // 0x001685fc: jal 0x168660
    /* nop */                                                   // 0x00168600: nop 
    /* bnezl $v0, 0x168644 */                                   // 0x00168604: bnezl $v0, 0x168644
    v0 = 1;                                                     // 0x00168608: addiu $v0, $zero, 1
    a0 = s0 + 1;                                                // 0x0016860c: addiu $a0, $s0, 1
    a1 = s1 + -1;                                               // 0x00168610: addiu $a1, $s1, -1
    func_00168660();  // 168660                                // 0x00168614: jal 0x168660
    a0 = s0 + 3;                                                // 0x0016861c: addiu $a0, $s0, 3
    a1 = s1 + -3;                                               // 0x00168620: addiu $a1, $s1, -3
    if (v0 == 0) goto label_0x168638;                           // 0x00168624: beqz $v0, 0x168638
label_0x16862c:
    goto label_0x168644;                                        // 0x0016862c: b 0x168644
    v0 = 1;                                                     // 0x00168630: addiu $v0, $zero, 1
    /* nop */                                                   // 0x00168634: nop 
label_0x168638:
    func_00168660();  // 168660                                // 0x00168638: jal 0x168660
    /* nop */                                                   // 0x0016863c: nop 
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00168640: sltu $v0, $zero, $v0
label_0x168644:
    return;                                                     // 0x00168654: jr $ra
    sp = sp + 0x20;                                             // 0x00168658: addiu $sp, $sp, 0x20
}