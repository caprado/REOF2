void func_0017d0a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017d0a0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x0017d0a8: lw $a0, 0x24($a0)
    return func_0017dfe0();  // Tail call                        // 0x0017d0b0: j 0x17df78
    sp = sp + 0x10;                                             // 0x0017d0b4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017d0b8: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x0017d0c0: lw $a0, 0x24($a0)
    return func_0017e010();  // Tail call                       // 0x0017d0c8: j 0x17e010
    sp = sp + 0x10;                                             // 0x0017d0cc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017d0d0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x0017d0d8: lw $a0, 0x24($a0)
    a1 = *(int32_t*)((a1) + 0x4c);                              // 0x0017d0dc: lw $a1, 0x4c($a1)
    return func_0017d730();  // Tail call                        // 0x0017d0e4: j 0x17d628
    sp = sp + 0x10;                                             // 0x0017d0e8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017d0ec: nop 
    sp = sp + -0x10;                                            // 0x0017d0f0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x30);                              // 0x0017d0f8: lw $a0, 0x30($a0)
    return func_0017a498();  // Tail call                       // 0x0017d100: j 0x17a498
    sp = sp + 0x10;                                             // 0x0017d104: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017d108: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x30);                              // 0x0017d110: lw $a0, 0x30($a0)
    return func_0017a4b8();  // Tail call                       // 0x0017d118: j 0x17a4b8
    sp = sp + 0x10;                                             // 0x0017d11c: addiu $sp, $sp, 0x10
    return;                                                     // 0x0017d120: jr $ra
    *(uint32_t*)((a0) + 0x34) = a1;                             // 0x0017d124: sw $a1, 0x34($a0)
}