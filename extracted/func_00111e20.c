void func_00111e20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = *(int32_t*)(a0);                                       // 0x00111e20: lw $a2, 0($a0)
    v0 = ((unsigned)a2 < (unsigned)2) ? 1 : 0;                  // 0x00111e24: sltiu $v0, $a2, 2
    if (v0 != 0) goto label_0x111e40;                           // 0x00111e28: bnez $v0, 0x111e40
    /* nop */                                                   // 0x00111e2c: nop 
    v1 = *(int32_t*)(a1);                                       // 0x00111e30: lw $v1, 0($a1)
    v0 = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x00111e34: sltiu $v0, $v1, 2
    /* beqzl $v0, 0x111e48 */                                   // 0x00111e38: beqzl $v0, 0x111e48
    v0 = a2 ^ 4;                                                // 0x00111e3c: xori $v0, $a2, 4
label_0x111e40:
    return;                                                     // 0x00111e40: jr $ra
    v0 = 1;                                                     // 0x00111e44: addiu $v0, $zero, 1
}