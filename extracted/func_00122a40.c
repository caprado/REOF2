void func_00122a40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00122a40: addiu $sp, $sp, -0x10
    v0 = 2;                                                     // 0x00122a44: addiu $v0, $zero, 2
    v1 = *(int8_t*)((a0) + 1);                                  // 0x00122a4c: lb $v1, 1($a0)
    if (v1 != v0) goto label_0x122a60;                          // 0x00122a50: bne $v1, $v0, 0x122a60
    return func_00122a40();  // Tail call                        // 0x00122a58: j 0x1227b0
    sp = sp + 0x10;                                             // 0x00122a5c: addiu $sp, $sp, 0x10
label_0x122a60:
    return;                                                     // 0x00122a60: jr $ra
    sp = sp + 0x10;                                             // 0x00122a64: addiu $sp, $sp, 0x10
}