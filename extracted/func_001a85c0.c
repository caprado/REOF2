void func_001a85c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a85c0: addiu $sp, $sp, -0x10
    at = 0x2a << 16;                                            // 0x001a85c4: lui $at, 0x2a
    v1 = g_002a1540;  // Global at 0x002a1540                   // 0x001a85cc: lb $v1, 0x1540($at)
    if (v1 == 0) goto label_0x1a85e8;                           // 0x001a85d0: beqz $v1, 0x1a85e8
    func_00130eb0();  // 0x130e50                                // 0x001a85d8: jal 0x130e50
    /* nop */                                                   // 0x001a85dc: nop 
    at = 0x2a << 16;                                            // 0x001a85e0: lui $at, 0x2a
    g_002a1540 = 0;  // Global at 0x002a1540                    // 0x001a85e4: sb $zero, 0x1540($at)
label_0x1a85e8:
    return;                                                     // 0x001a85ec: jr $ra
    sp = sp + 0x10;                                             // 0x001a85f0: addiu $sp, $sp, 0x10
}