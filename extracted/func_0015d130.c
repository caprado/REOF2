void func_0015d130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 4);                                 // 0x0015d130: lw $v0, 4($a0)
    if (v0 != 0) return;  // Branch to 0x15d160                 // 0x0015d134: bnez $v0, 0x15d160
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0015d13c: lw $v0, 8($a0)
    if (v0 == 0) return;  // Branch to 0x15d174                 // 0x0015d140: beqz $v0, 0x15d174
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0015d148: lw $v0, 0xc($a0)
    /* beqzl $v0, 0x15d170 */                                   // 0x0015d14c: beqzl $v0, 0x15d170
    a1 = 2;                                                     // 0x0015d150: addiu $a1, $zero, 2
    return;                                                     // 0x0015d154: jr $ra
}