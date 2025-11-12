void func_001037b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001037b0: addiu $sp, $sp, -0x10
    a2 = 0xa;                                                   // 0x001037bc: addiu $a2, $zero, 0xa
    return func_0010ca20();  // Tail call                        // 0x001037c4: j 0x10c7c0
    sp = sp + 0x10;                                             // 0x001037c8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001037cc: nop 
    sp = sp + -0x50;                                            // 0x001037d0: addiu $sp, $sp, -0x50
    if (s2 == 0) goto label_0x10386c;                           // 0x0010380c: beqz $s2, 0x10386c
    if (s3 == 0) goto label_0x103870;                           // 0x00103814: beqz $s3, 0x103870
    if (s2 == 0) goto label_0x103874;                           // 0x0010381c: beqz $s2, 0x103874
    v0 = s4 + s2;                                               // 0x00103824: addu $v0, $s4, $s2
label_0x103828:
    s1 = (unsigned)v0 >> 1;                                     // 0x0010382c: srl $s1, $v0, 1
    /* multiply: s1 * s3 -> hi:lo */                            // 0x00103830: mult $ac2, $s1, $s3
    s0 = v0 + s6;                                               // 0x00103834: addu $s0, $v0, $s6
    /* call function at address in s5 */                        // 0x00103838: jalr $s5
    if (v1 >= 0) goto label_0x103858;                           // 0x00103844: bgez $v1, 0x103858
    goto label_0x103860;                                        // 0x0010384c: b 0x103860
    /* nop */                                                   // 0x00103854: nop 
label_0x103858:
    if (v1 <= 0) goto label_0x103870;                           // 0x00103858: blez $v1, 0x103870
    s4 = s1 + 1;                                                // 0x0010385c: addiu $s4, $s1, 1
label_0x103860:
    v0 = ((unsigned)s4 < (unsigned)s2) ? 1 : 0;                 // 0x00103860: sltu $v0, $s4, $s2
    if (v0 != 0) goto label_0x103828;                           // 0x00103864: bnez $v0, 0x103828
    v0 = s4 + s2;                                               // 0x00103868: addu $v0, $s4, $s2
label_0x10386c:
label_0x103870:
label_0x103874:
    return;                                                     // 0x00103894: jr $ra
    sp = sp + 0x50;                                             // 0x00103898: addiu $sp, $sp, 0x50
}