void func_001a9080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a9080: addiu $sp, $sp, -0x10
    func_001a8fc0();  // 0x1a8e70                                // 0x001a9088: jal 0x1a8e70
    a0 = 5;                                                     // 0x001a908c: addiu $a0, $zero, 5
    v1 = 5;                                                     // 0x001a9090: addiu $v1, $zero, 5
    at = 0x31 << 16;                                            // 0x001a9094: lui $at, 0x31
    g_0031387a = v1;  // Global at 0x0031387a                   // 0x001a9098: sb $v1, 0x387a($at)
    return;                                                     // 0x001a90a0: jr $ra
    sp = sp + 0x10;                                             // 0x001a90a4: addiu $sp, $sp, 0x10
}