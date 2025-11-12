void func_0015df70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015df70: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x0015df74: addiu $v0, $zero, 2
    a1 = ((unsigned)a0 < (unsigned)3) ? 1 : 0;                  // 0x0015df7c: sltiu $a1, $a0, 3
    if (a0 == v0) goto label_0x15dfc8;                          // 0x0015df80: beq $a0, $v0, 0x15dfc8
    v1 = 2;                                                     // 0x0015df84: addiu $v1, $zero, 2
    /* beqzl $a1, 0x15dfa0 */                                   // 0x0015df88: beqzl $a1, 0x15dfa0
    v0 = 3;                                                     // 0x0015df8c: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x0015df90: addiu $v0, $zero, 1
    goto label_0x15dfb0;                                        // 0x0015df94: b 0x15dfb0
    v1 = 1;                                                     // 0x0015df98: addiu $v1, $zero, 1
    /* nop */                                                   // 0x0015df9c: nop 
    if (a0 == v0) goto label_0x15dfc8;                          // 0x0015dfa0: beq $a0, $v0, 0x15dfc8
    v1 = 3;                                                     // 0x0015dfa4: addiu $v1, $zero, 3
    v0 = 4;                                                     // 0x0015dfa8: addiu $v0, $zero, 4
    v1 = 4;                                                     // 0x0015dfac: addiu $v1, $zero, 4
label_0x15dfb0:
    if (a0 == v0) goto label_0x15dfcc;                          // 0x0015dfb0: beq $a0, $v0, 0x15dfcc
    a0 = 0x22 << 16;                                            // 0x0015dfb8: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015dfbc: jal 0x163410
    a0 = &str_00227580;  // "E1122615: mwPlyRelCurFrm: handle is invalid." // 0x0015dfc0: addiu $a0, $a0, 0x7580
    v1 = 1;                                                     // 0x0015dfc4: addiu $v1, $zero, 1
label_0x15dfc8:
label_0x15dfcc:
    return;                                                     // 0x0015dfd0: jr $ra
    sp = sp + 0x10;                                             // 0x0015dfd4: addiu $sp, $sp, 0x10
}