void func_00170220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x1b30);                            // 0x00170220: lw $v1, 0x1b30($a0)
    v0 = 1;                                                     // 0x00170224: addiu $v0, $zero, 1
    return;                                                     // 0x00170228: jr $ra
    *(uint32_t*)((v1) + 0x7c) = v0;                             // 0x0017022c: sw $v0, 0x7c($v1)
}