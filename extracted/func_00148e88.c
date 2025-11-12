void func_00148e88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x25 << 16;                                            // 0x00148e88: lui $v1, 0x25
    v0 = 0x22 << 16;                                            // 0x00148e8c: lui $v0, 0x22
    sp = sp + -0x10;                                            // 0x00148e90: addiu $sp, $sp, -0x10
    v1 = v1 + 0x6380;                                           // 0x00148e94: addiu $v1, $v1, 0x6380
    v0 = &str_00226ae0;  // "Append: GCC2096 SCE2800\n"         // 0x00148e98: addiu $v0, $v0, 0x6ae0
    func_00148ed8();  // 0x148ec8                                // 0x00148ea0: jal 0x148ec8
    g_00256380 = v0;  // Global at 0x00256380                   // 0x00148ea4: sw $v0, 0($v1)
    a0 = 0x80;                                                  // 0x00148ea8: addiu $a0, $zero, 0x80
    str_00226ae0 = 0;  // Global at 0x00226ae0                  // 0x00148eb0: sw $zero, 0($v0)
    return func_00148f00();  // Tail call                        // 0x00148eb4: j 0x148ed8
    sp = sp + 0x10;                                             // 0x00148eb8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00148ebc: nop 
    return;                                                     // 0x00148ec0: jr $ra
    /* nop */                                                   // 0x00148ec4: nop 
}