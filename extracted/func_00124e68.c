void func_00124e68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int16_t*)((a3) + 0x98);                              // 0x00124e6c: lh $v0, 0x98($a3)
    if (v0 != 0) return;  // Branch to 0x124ea8                 // 0x00124e70: bnez $v0, 0x124ea8
    v0 = *(int8_t*)((a3) + 0xf);                                // 0x00124e78: lb $v0, 0xf($a3)
    *(uint32_t*)((a3) + 0x48) = t0;                             // 0x00124e7c: sw $t0, 0x48($a3)
    /* divide: a2 / v0 -> hi:lo */                              // 0x00124e80: div $zero, $a2, $v0
    /* beqzl $v0, 0x124e8c */                                   // 0x00124e84: beqzl $v0, 0x124e8c
    /* break (trap) */                                          // 0x00124e88: break 0, 7
    *(uint32_t*)((a3) + 0x74) = 0;                              // 0x00124e8c: sw $zero, 0x74($a3)
    *(uint32_t*)((a3) + 0x94) = 0;                              // 0x00124e90: sw $zero, 0x94($a3)
    *(uint32_t*)((a3) + 0x90) = 0;                              // 0x00124e94: sw $zero, 0x90($a3)
    /* mflo $v1 */                                              // 0x00124e98
    return;                                                     // 0x00124e9c: jr $ra
    *(uint32_t*)((a3) + 0x4c) = v1;                             // 0x00124ea0: sw $v1, 0x4c($a3)
}