void func_00134c18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134c18: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x134c40;                           // 0x00134c20: beqz $v0, 0x134c40
    a2 = 0x3c;                                                  // 0x00134c30: addiu $a2, $zero, 0x3c
    *(uint32_t*)(v0) = 0;                                       // 0x00134c34: sw $zero, 0($v0)
    return func_00107d30();  // Tail call                        // 0x00134c38: j 0x107c70
    sp = sp + 0x10;                                             // 0x00134c3c: addiu $sp, $sp, 0x10
label_0x134c40:
    return;                                                     // 0x00134c44: jr $ra
    sp = sp + 0x10;                                             // 0x00134c48: addiu $sp, $sp, 0x10
}