void func_00177b70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00177b70: addiu $sp, $sp, -0x40
    v1 = 1;                                                     // 0x00177b74: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x177bbc;                          // 0x00177ba8: beq $v0, $v1, 0x177bbc
    v0 = *(int32_t*)(s0);                                       // 0x00177bb0: lw $v0, 0($s0)
    /* bnezl $v0, 0x177bf8 */                                   // 0x00177bb4: bnezl $v0, 0x177bf8
label_0x177bbc:
    return;                                                     // 0x00177bec: jr $ra
    sp = sp + 0x40;                                             // 0x00177bf0: addiu $sp, $sp, 0x40
}