void func_0013e9b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013e9b0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0013e9b8: lw $v0, 8($a0)
    a0 = *(int32_t*)((v0) + 8);                                 // 0x0013e9bc: lw $a0, 8($v0)
    v1 = *(int32_t*)(a0);                                       // 0x0013e9c0: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0013e9c4: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013e9c8: jalr $v0
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0013e9d0: srl $v1, $v0, 0x1f
    v1 = v1 + v0;                                               // 0x0013e9d8: addu $v1, $v1, $v0
    v0 = v1 >> 1;                                               // 0x0013e9dc: sra $v0, $v1, 1
    return;                                                     // 0x0013e9e0: jr $ra
    sp = sp + 0x10;                                             // 0x0013e9e4: addiu $sp, $sp, 0x10
}