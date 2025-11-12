void func_0013f148() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013f148: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0013f14c: addiu $v0, $zero, 1
    if (a1 != v0) goto label_0x13f160;                          // 0x0013f150: bne $a1, $v0, 0x13f160
    goto label_0x13f184;                                        // 0x0013f158: b 0x13f184
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0013f15c: lw $v0, 0xc($a0)
label_0x13f160:
    if (a1 == 0) goto label_0x13f184;                           // 0x0013f160: beqz $a1, 0x13f184
    v0 = *(int32_t*)((a0) + 0x1c);                              // 0x0013f168: lw $v0, 0x1c($a0)
    /* beqzl $v0, 0x13f184 */                                   // 0x0013f16c: beqzl $v0, 0x13f184
    a0 = *(int32_t*)((a0) + 0x20);                              // 0x0013f174: lw $a0, 0x20($a0)
    /* call function at address in v0 */                        // 0x0013f178: jalr $v0
    a1 = -3;                                                    // 0x0013f17c: addiu $a1, $zero, -3
label_0x13f184:
    return;                                                     // 0x0013f188: jr $ra
    sp = sp + 0x10;                                             // 0x0013f18c: addiu $sp, $sp, 0x10
}