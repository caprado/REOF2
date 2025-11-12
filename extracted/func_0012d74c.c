void func_0012d74c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012d74c: addiu $sp, $sp, -0x10
    v1 = g_001fed4c;  // Global at 0x001fed4c                   // 0x0012d750: lw $v1, -0x12b4($v0)
    if (v1 == 0) goto label_0x12d76c;                           // 0x0012d758: beqz $v1, 0x12d76c
    v0 = 0x20 << 16;                                            // 0x0012d760: lui $v0, 0x20
    /* call function at address in v1 */                        // 0x0012d764: jalr $v1
    a0 = g_001fed50;  // Global at 0x001fed50                   // 0x0012d768: lw $a0, -0x12b0($v0)
label_0x12d76c:
    return;                                                     // 0x0012d774: jr $ra
    sp = sp + 0x10;                                             // 0x0012d778: addiu $sp, $sp, 0x10
}