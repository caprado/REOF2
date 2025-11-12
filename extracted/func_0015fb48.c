void func_0015fb48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015fb48: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x0015fb50: lw $a0, 0x40($a0)
    return func_001754a8();  // Tail call                        // 0x0015fb58: j 0x1753d0
    sp = sp + 0x10;                                             // 0x0015fb5c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015fb60: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x0015fb68: lw $a0, 0x40($a0)
    return func_001753d0();  // Tail call                        // 0x0015fb70: j 0x1752f8
    sp = sp + 0x10;                                             // 0x0015fb74: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015fb78: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x15fb8c;                           // 0x0015fb80: beqz $a0, 0x15fb8c
    v0 = *(int32_t*)((a0) + 0x40);                              // 0x0015fb88: lw $v0, 0x40($a0)
label_0x15fb8c:
    return func_001750b0();  // Tail call                        // 0x0015fb94: j 0x174ff8
    sp = sp + 0x10;                                             // 0x0015fb98: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015fb9c: nop 
    sp = sp + -0x10;                                            // 0x0015fba0: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x15fbb4;                           // 0x0015fba8: beqz $a0, 0x15fbb4
    v0 = *(int32_t*)((a0) + 0x40);                              // 0x0015fbb0: lw $v0, 0x40($a0)
label_0x15fbb4:
    return func_001752e8();  // Tail call                        // 0x0015fbbc: j 0x175248
    sp = sp + 0x10;                                             // 0x0015fbc0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0015fbc4: nop 
    return;                                                     // 0x0015fbc8: jr $ra
    v0 = *(int32_t*)((a0) + 0x44);                              // 0x0015fbcc: lw $v0, 0x44($a0)
}