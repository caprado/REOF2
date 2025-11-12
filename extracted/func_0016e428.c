void func_0016e428() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x1b30);                            // 0x0016e428: lw $v0, 0x1b30($a0)
    v1 = 3;                                                     // 0x0016e430: addiu $v1, $zero, 3
    a1 = *(int32_t*)((v0) + 0x74);                              // 0x0016e438: lw $a1, 0x74($v0)
    if (a1 == v1) return;  // Branch to 0x16e470                // 0x0016e43c: beq $a1, $v1, 0x16e470
    v0 = ((unsigned)a1 < (unsigned)4) ? 1 : 0;                  // 0x0016e440: sltiu $v0, $a1, 4
    if (v0 == 0) return;  // Branch to 0x16e47c                 // 0x0016e444: beqz $v0, 0x16e47c
    v0 = 2;                                                     // 0x0016e44c: addiu $v0, $zero, 2
    if (a1 != v0) return;  // Branch to 0x16e47c                // 0x0016e450: bne $a1, $v0, 0x16e47c
    v0 = a0 + -2;                                               // 0x0016e458: addiu $v0, $a0, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016e45c: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x16e478 */                                   // 0x0016e460: bnezl $v0, 0x16e478
    a2 = 1;                                                     // 0x0016e464: addiu $a2, $zero, 1
    return;                                                     // 0x0016e468: jr $ra
}