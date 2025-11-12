void func_0012d3b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012d3b8: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 4);                                 // 0x0012d3c0: lw $a0, 4($a0)
    return func_00124d18();  // Tail call                        // 0x0012d3c8: j 0x124cb0
    sp = sp + 0x10;                                             // 0x0012d3cc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0012d3d0: addiu $sp, $sp, -0x10
    return func_00124d60();  // Tail call                        // 0x0012d3dc: j 0x124d18
    sp = sp + 0x10;                                             // 0x0012d3e0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012d3e4: nop 
    *(uint32_t*)((a0) + 0x54) = a2;                             // 0x0012d3e8: sw $a2, 0x54($a0)
    return;                                                     // 0x0012d3ec: jr $ra
    *(uint32_t*)((a0) + 0x50) = a1;                             // 0x0012d3f0: sw $a1, 0x50($a0)
}