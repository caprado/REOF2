void func_0012dfe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012dfe0: addiu $sp, $sp, -0x10
    if (v0 == 0) goto label_0x12e008;                           // 0x0012dfe8: beqz $v0, 0x12e008
    a2 = 0x90;                                                  // 0x0012dff8: addiu $a2, $zero, 0x90
    *(uint8_t*)(v0) = 0;                                        // 0x0012dffc: sb $zero, 0($v0)
    return func_00107d30();  // Tail call                        // 0x0012e000: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012e004: addiu $sp, $sp, 0x10
label_0x12e008:
    return;                                                     // 0x0012e00c: jr $ra
    sp = sp + 0x10;                                             // 0x0012e010: addiu $sp, $sp, 0x10
}