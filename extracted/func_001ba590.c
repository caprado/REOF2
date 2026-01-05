void func_001ba590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba590: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001ba594: lui $at, 0x31
    a3 = g_003135a0;  // Global at 0x003135a0                   // 0x001ba59c: lb $a3, 0x35a0($at)
    at = 0x31 << 16;                                            // 0x001ba5a0: lui $at, 0x31
    a2 = g_003135a1;  // Global at 0x003135a1                   // 0x001ba5a4: lb $a2, 0x35a1($at)
    at = 0x31 << 16;                                            // 0x001ba5a8: lui $at, 0x31
    a1 = g_003135a2;  // Global at 0x003135a2                   // 0x001ba5ac: lb $a1, 0x35a2($at)
    at = 0x31 << 16;                                            // 0x001ba5b0: lui $at, 0x31
    a0 = g_003135a3;  // Global at 0x003135a3                   // 0x001ba5b4: lb $a0, 0x35a3($at)
    at = 0x31 << 16;                                            // 0x001ba5b8: lui $at, 0x31
    v1 = g_003135a4;  // Global at 0x003135a4                   // 0x001ba5bc: lb $v1, 0x35a4($at)
    at = 0x31 << 16;                                            // 0x001ba5c0: lui $at, 0x31
    v0 = g_003135a6;  // Global at 0x003135a6                   // 0x001ba5c4: lb $v0, 0x35a6($at)
    at = 0x31 << 16;                                            // 0x001ba5c8: lui $at, 0x31
    g_003137a5 = a3;  // Global at 0x003137a5                   // 0x001ba5cc: sb $a3, 0x37a5($at)
    at = 0x31 << 16;                                            // 0x001ba5d0: lui $at, 0x31
    g_003137a9 = a2;  // Global at 0x003137a9                   // 0x001ba5d4: sb $a2, 0x37a9($at)
    at = 0x31 << 16;                                            // 0x001ba5d8: lui $at, 0x31
    g_003137aa = a1;  // Global at 0x003137aa                   // 0x001ba5dc: sb $a1, 0x37aa($at)
    at = 0x31 << 16;                                            // 0x001ba5e0: lui $at, 0x31
    g_003137cc = a0;  // Global at 0x003137cc                   // 0x001ba5e4: sb $a0, 0x37cc($at)
    at = 0x31 << 16;                                            // 0x001ba5e8: lui $at, 0x31
    g_003137cf = v1;  // Global at 0x003137cf                   // 0x001ba5ec: sb $v1, 0x37cf($at)
    at = 0x31 << 16;                                            // 0x001ba5f0: lui $at, 0x31
    g_003137cd = v0;  // Global at 0x003137cd                   // 0x001ba5f4: sb $v0, 0x37cd($at)
    at = 0x31 << 16;                                            // 0x001ba5f8: lui $at, 0x31
    v1 = g_003135a7;  // Global at 0x003135a7                   // 0x001ba5fc: lb $v1, 0x35a7($at)
    at = 0x31 << 16;                                            // 0x001ba600: lui $at, 0x31
    v0 = g_003135a5;  // Global at 0x003135a5                   // 0x001ba604: lb $v0, 0x35a5($at)
    at = 0x31 << 16;                                            // 0x001ba608: lui $at, 0x31
    a0 = g_003137cd;  // Global at 0x003137cd                   // 0x001ba60c: lb $a0, 0x37cd($at)
    at = 0x31 << 16;                                            // 0x001ba610: lui $at, 0x31
    g_003137ce = v1;  // Global at 0x003137ce                   // 0x001ba614: sb $v1, 0x37ce($at)
    at = 0x31 << 16;                                            // 0x001ba618: lui $at, 0x31
    g_003137d0 = v0;  // Global at 0x003137d0                   // 0x001ba61c: sb $v0, 0x37d0($at)
    at = 0x31 << 16;                                            // 0x001ba620: lui $at, 0x31
    func_001af010();  // 1af010                                // 0x001ba624: jal 0x1af010
    a1 = g_003137ce;  // Global at 0x003137ce                   // 0x001ba628: lb $a1, 0x37ce($at)
    at = 0x31 << 16;                                            // 0x001ba62c: lui $at, 0x31
    func_001b7e60();  // 1b7e60                                // 0x001ba630: jal 0x1b7e60
    a0 = g_003137a5;  // Global at 0x003137a5                   // 0x001ba634: lbu $a0, 0x37a5($at)
    at = 0x31 << 16;                                            // 0x001ba638: lui $at, 0x31
    func_001b7e90();  // 1b7e90                                // 0x001ba63c: jal 0x1b7e90
    a0 = g_003137aa;  // Global at 0x003137aa                   // 0x001ba640: lbu $a0, 0x37aa($at)
    at = 0x31 << 16;                                            // 0x001ba644: lui $at, 0x31
    func_001b7f10();  // 1b7f10                                // 0x001ba648: jal 0x1b7f10
    a0 = g_003137a9;  // Global at 0x003137a9                   // 0x001ba64c: lbu $a0, 0x37a9($at)
    return;                                                     // 0x001ba654: jr $ra
    sp = sp + 0x10;                                             // 0x001ba658: addiu $sp, $sp, 0x10
}