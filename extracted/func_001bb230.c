void func_001bb230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001bb230: lui $at, 0x31
    a2 = 0x280;                                                 // 0x001bb234: addiu $a2, $zero, 0x280
    g_00308032 = a0;  // Global at 0x00308032                   // 0x001bb238: sh $a0, -0x7fce($at)
    at = 0x31 << 16;                                            // 0x001bb23c: lui $at, 0x31
    a0 = 0x1c0;                                                 // 0x001bb240: addiu $a0, $zero, 0x1c0
    g_0030802e = 0;  // Global at 0x0030802e                    // 0x001bb244: sh $zero, -0x7fd2($at)
    v1 = a0 - a1;                                               // 0x001bb248: subu $v1, $a0, $a1
    at = 0x31 << 16;                                            // 0x001bb24c: lui $at, 0x31
    g_0030802c = 0;  // Global at 0x0030802c                    // 0x001bb250: sh $zero, -0x7fd4($at)
    at = 0x31 << 16;                                            // 0x001bb254: lui $at, 0x31
    g_0030803e = a0;  // Global at 0x0030803e                   // 0x001bb258: sh $a0, -0x7fc2($at)
    at = 0x31 << 16;                                            // 0x001bb25c: lui $at, 0x31
    g_0030803a = v1;  // Global at 0x0030803a                   // 0x001bb260: sh $v1, -0x7fc6($at)
    at = 0x31 << 16;                                            // 0x001bb264: lui $at, 0x31
    g_00308030 = a2;  // Global at 0x00308030                   // 0x001bb268: sh $a2, -0x7fd0($at)
    at = 0x31 << 16;                                            // 0x001bb26c: lui $at, 0x31
    g_0030803c = a2;  // Global at 0x0030803c                   // 0x001bb270: sh $a2, -0x7fc4($at)
    at = 0x31 << 16;                                            // 0x001bb274: lui $at, 0x31
    return;                                                     // 0x001bb278: jr $ra
    g_00308038 = 0;  // Global at 0x00308038                    // 0x001bb27c: sh $zero, -0x7fc8($at)
}