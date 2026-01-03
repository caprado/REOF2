void func_0015fbd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015fbd8: addiu $sp, $sp, -0x20
    func_00164200();  // 164200                                // 0x0015fbf0: jal 0x164200
    a0 = *(int32_t*)((s0) + 0x44);                              // 0x0015fbf4: lw $a0, 0x44($s0)
    return func_00162788();  // Tail call                        // 0x0015fc0c: j 0x162758
    sp = sp + 0x20;                                             // 0x0015fc10: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015fc14: nop 
    sp = sp + -0x10;                                            // 0x0015fc18: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x44);                              // 0x0015fc20: lw $a0, 0x44($a0)
    return func_00164268();  // Tail call                        // 0x0015fc28: j 0x164228
    sp = sp + 0x10;                                             // 0x0015fc2c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015fc30: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x44);                              // 0x0015fc38: lw $a0, 0x44($a0)
    return func_00164110();  // Tail call                        // 0x0015fc40: j 0x1640e0
    sp = sp + 0x10;                                             // 0x0015fc44: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015fc48: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x44);                              // 0x0015fc50: lw $a0, 0x44($a0)
    return func_00164108();  // Tail call                       // 0x0015fc58: j 0x164108
    sp = sp + 0x10;                                             // 0x0015fc5c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0015fc60: addiu $sp, $sp, -0x10
    a1 = 0x2c;                                                  // 0x0015fc6c: addiu $a1, $zero, 0x2c
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x0015fc70: lw $a0, 0x40($a0)
    return func_001750b0();  // Tail call                        // 0x0015fc78: j 0x174ff8
    sp = sp + 0x10;                                             // 0x0015fc7c: addiu $sp, $sp, 0x10
    if (a0 == 0) goto label_0x15fc8c;                           // 0x0015fc80: beqz $a0, 0x15fc8c
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0015fc88: lw $v0, 4($a0)
label_0x15fc8c:
    return;                                                     // 0x0015fc8c: jr $ra
    /* nop */                                                   // 0x0015fc90: nop 
}