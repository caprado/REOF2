void func_0015df30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 2;                                                     // 0x0015df30: addiu $v0, $zero, 2
    a1 = ((unsigned)a0 < (unsigned)3) ? 1 : 0;                  // 0x0015df34: sltiu $a1, $a0, 3
    if (a0 == v0) goto label_0x15df64;                          // 0x0015df38: beq $a0, $v0, 0x15df64
    v1 = 2;                                                     // 0x0015df3c: addiu $v1, $zero, 2
    /* beqzl $a1, 0x15df58 */                                   // 0x0015df40: beqzl $a1, 0x15df58
    v0 = 3;                                                     // 0x0015df44: addiu $v0, $zero, 3
    v0 = 1;                                                     // 0x0015df48: addiu $v0, $zero, 1
    goto label_0x15df5c;                                        // 0x0015df4c: b 0x15df5c
    v1 = 1;                                                     // 0x0015df50: addiu $v1, $zero, 1
    /* nop */                                                   // 0x0015df54: nop 
    v1 = 3;                                                     // 0x0015df58: addiu $v1, $zero, 3
label_0x15df5c:
    if (a0 != v0) goto label_0x15df64;                          // 0x0015df5c: bnel $a0, $v0, 0x15df64
    v1 = 3;                                                     // 0x0015df60: addiu $v1, $zero, 3
label_0x15df64:
    return;                                                     // 0x0015df64: jr $ra
}