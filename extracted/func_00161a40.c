void func_00161a40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00161a40: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0xa8);                              // 0x00161a48: lw $a0, 0xa8($a0)
    return func_0017d0b8();  // Tail call                        // 0x00161a50: j 0x17d0a0
    sp = sp + 0x10;                                             // 0x00161a54: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00161a58: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0xa8);                              // 0x00161a60: lw $a0, 0xa8($a0)
    return func_0017d0d0();  // Tail call                        // 0x00161a68: j 0x17d0b8
    sp = sp + 0x10;                                             // 0x00161a6c: addiu $sp, $sp, 0x10
    a0 = a0 + 0x100;                                            // 0x00161a70: addiu $a0, $a0, 0x100
    v0 = *(int32_t*)((a0) + 8);                                 // 0x00161a74: lw $v0, 8($a0)
    v1 = *(int32_t*)((a0) + 4);                                 // 0x00161a78: lw $v1, 4($a0)
    *(uint32_t*)(a2) = v0;                                      // 0x00161a7c: sw $v0, 0($a2)
    return;                                                     // 0x00161a80: jr $ra
    *(uint32_t*)(a1) = v1;                                      // 0x00161a84: sw $v1, 0($a1)
}