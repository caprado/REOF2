void func_0011d980() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0011d980: addiu $sp, $sp, -0x30
    thunk_func_0011d7f0();  // 11d7f0                          // 0x0011d990: jal 0x11d7f0
    func_0011d908();  // 11d908                                // 0x0011d998: jal 0x11d908
    v0 = 0x1f << 16;                                            // 0x0011d9a0: lui $v0, 0x1f
    a2 = g_001f0780;  // Global at 0x001f0780                   // 0x0011d9a8: lw $a2, 0x780($v0)
    a2 = a2 + 4;                                                // 0x0011d9b8: addiu $a2, $a2, 4
    return func_00113f20();  // Tail call                       // 0x0011d9c0: j 0x113f20
    sp = sp + 0x30;                                             // 0x0011d9c4: addiu $sp, $sp, 0x30
    sp = sp + -0x20;                                            // 0x0011d9c8: addiu $sp, $sp, -0x20
    func_0011d908();  // 11d908                                // 0x0011d9d4: jal 0x11d908
    return func_00113f00();  // Tail call                       // 0x0011d9e8: j 0x113f00
    sp = sp + 0x20;                                             // 0x0011d9ec: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x0011d9f0: addiu $sp, $sp, -0x20
    a0 = 0x22 << 16;                                            // 0x0011da04: lui $a0, 0x22
    thunk_func_0011d7f0();  // 11d7f0                          // 0x0011da0c: jal 0x11d7f0
    a0 = a0 + 0x14d0;                                           // 0x0011da10: addiu $a0, $a0, 0x14d0
    func_0011d908();  // 11d908                                // 0x0011da14: jal 0x11d908
    /* nop */                                                   // 0x0011da18: nop 
    v0 = 0x1f << 16;                                            // 0x0011da1c: lui $v0, 0x1f
    a1 = g_001f0780;  // Global at 0x001f0780                   // 0x0011da24: lw $a1, 0x780($v0)
    a1 = a1 + 4;                                                // 0x0011da30: addiu $a1, $a1, 4
    return func_00114700();  // Tail call                       // 0x0011da34: j 0x114700
    sp = sp + 0x20;                                             // 0x0011da38: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0011da3c: nop 
    v1 = 0x74;                                                  // 0x0011da40: addiu $v1, $zero, 0x74
    syscall();                                                  // 0x0011da44: syscall 
    return;                                                     // 0x0011da48: jr $ra
    /* nop */                                                   // 0x0011da4c: nop 
}