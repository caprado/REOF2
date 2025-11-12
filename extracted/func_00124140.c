void func_00124140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00124140: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x00124144: addiu $v0, $zero, 2
    v1 = *(int16_t*)((a0) + 0x9a);                              // 0x0012414c: lh $v1, 0x9a($a0)
    if (v1 != v0) goto label_0x124168;                          // 0x00124150: bne $v1, $v0, 0x124168
    v0 = 1;                                                     // 0x00124154: addiu $v0, $zero, 1
    return func_00124140();  // Tail call                        // 0x0012415c: j 0x123f98
    sp = sp + 0x10;                                             // 0x00124160: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00124164: nop 
label_0x124168:
    if (v1 != v0) goto label_0x124178;                          // 0x00124168: bne $v1, $v0, 0x124178
    return func_00123f98();  // Tail call                        // 0x00124170: j 0x123e18
    sp = sp + 0x10;                                             // 0x00124174: addiu $sp, $sp, 0x10
label_0x124178:
    return func_00123e18();  // Tail call                        // 0x00124178: j 0x123c80
    sp = sp + 0x10;                                             // 0x0012417c: addiu $sp, $sp, 0x10
    return;                                                     // 0x00124180: jr $ra
}