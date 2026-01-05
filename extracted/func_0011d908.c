void func_0011d908() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_0011cd90();  // Tail call                        // 0x0011d908: j 0x11cd50
    /* nop */                                                   // 0x0011d90c: nop 
    sp = sp + -0x40;                                            // 0x0011d910: addiu $sp, $sp, -0x40
    a0 = 0x22 << 16;                                            // 0x0011d92c: lui $a0, 0x22
    a0 = a0 + 0x14d0;                                           // 0x0011d938: addiu $a0, $a0, 0x14d0
    thunk_func_0011d7f0();  // 11d7f0                          // 0x0011d93c: jal 0x11d7f0
    func_0011d908();  // 11d908                                // 0x0011d944: jal 0x11d908
    /* nop */                                                   // 0x0011d948: nop 
    v0 = 0x1f << 16;                                            // 0x0011d94c: lui $v0, 0x1f
    a3 = g_001f0780;  // Global at 0x001f0780                   // 0x0011d954: lw $a3, 0x780($v0)
    func_00113f30();  // 0x113f30                               // 0x0011d960: jal 0x113f30
    a3 = a3 + 4;                                                // 0x0011d964: addiu $a3, $a3, 4
    return;                                                     // 0x0011d978: jr $ra
    sp = sp + 0x40;                                             // 0x0011d97c: addiu $sp, $sp, 0x40
}