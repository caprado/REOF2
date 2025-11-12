void func_00147b98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x40);                              // 0x00147b98: lw $v1, 0x40($a0)
    v0 = *(int32_t*)((v1) + 0x1d0);                             // 0x00147b9c: lw $v0, 0x1d0($v1)
    /* bnezl $v0, 0x147ba8 */                                   // 0x00147ba0: bnezl $v0, 0x147ba8
    *(uint32_t*)((v0) + 0x28) = 0;                              // 0x00147ba4: sw $zero, 0x28($v0)
    v0 = *(int32_t*)((v1) + 0x1e0);                             // 0x00147ba8: lw $v0, 0x1e0($v1)
    /* bnezl $v0, 0x147bb4 */                                   // 0x00147bac: bnezl $v0, 0x147bb4
    *(uint32_t*)((v0) + 0x28) = 0;                              // 0x00147bb0: sw $zero, 0x28($v0)
    v0 = *(int32_t*)((v1) + 0x1f0);                             // 0x00147bb4: lw $v0, 0x1f0($v1)
    /* bnezl $v0, 0x147bc0 */                                   // 0x00147bb8: bnezl $v0, 0x147bc0
    *(uint32_t*)((v0) + 0x28) = 0;                              // 0x00147bbc: sw $zero, 0x28($v0)
    v0 = *(int32_t*)((v1) + 0x1d4);                             // 0x00147bc0: lw $v0, 0x1d4($v1)
    /* bnezl $v0, 0x147bcc */                                   // 0x00147bc4: bnezl $v0, 0x147bcc
    *(uint32_t*)((v0) + 0x28) = 0;                              // 0x00147bc8: sw $zero, 0x28($v0)
    v0 = *(int32_t*)((v1) + 0x1e4);                             // 0x00147bcc: lw $v0, 0x1e4($v1)
    /* bnezl $v0, 0x147bd8 */                                   // 0x00147bd0: bnezl $v0, 0x147bd8
    *(uint32_t*)((v0) + 0x28) = 0;                              // 0x00147bd4: sw $zero, 0x28($v0)
    v0 = *(int32_t*)((v1) + 0x1f4);                             // 0x00147bd8: lw $v0, 0x1f4($v1)
    /* bnezl $v0, 0x147be4 */                                   // 0x00147bdc: bnezl $v0, 0x147be4
    *(uint32_t*)((v0) + 0x28) = 0;                              // 0x00147be0: sw $zero, 0x28($v0)
    return;                                                     // 0x00147be4: jr $ra
    v0 = 1;                                                     // 0x00147be8: addiu $v0, $zero, 1
}