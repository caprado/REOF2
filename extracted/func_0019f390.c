void func_0019f390() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019f390: addiu $sp, $sp, -0x10
    func_001ba360();  // 1ba360                                // 0x0019f398: jal 0x1ba360
    /* nop */                                                   // 0x0019f39c: nop 
    func_0018d4c0();  // 18d4c0                                // 0x0019f3a0: jal 0x18d4c0
    /* nop */                                                   // 0x0019f3a4: nop 
    func_001a8990();  // 1a8990                                // 0x0019f3a8: jal 0x1a8990
    /* nop */                                                   // 0x0019f3ac: nop 
    v0 = 0x83;                                                  // 0x0019f3b0: addiu $v0, $zero, 0x83
    at = 0x1000 << 16;                                          // 0x0019f3b4: lui $at, 0x1000
    g_10000010 = v0;  // Global at 0x10000010                   // 0x0019f3b8: sw $v0, 0x10($at)
    at = 0x1000 << 16;                                          // 0x0019f3bc: lui $at, 0x1000
    g_10000000 = 0;  // Global at 0x10000000                    // 0x0019f3c0: sw $zero, 0($at)
    v0 = *(int32_t*)((gp) + -0x6450);                           // 0x0019f3c4: lw $v0, -0x6450($gp)
    at = 0x29 << 16;                                            // 0x0019f3c8: lui $at, 0x29
    g_0028ffcc = 0;  // Global at 0x0028ffcc                    // 0x0019f3cc: sw $zero, -0x34($at)
    v0 = v0 + 1;                                                // 0x0019f3d0: addiu $v0, $v0, 1
    func_0018d2f0();  // 18d2f0                                // 0x0019f3d4: jal 0x18d2f0
    *(uint32_t*)((gp) + -0x6450) = v0;                          // 0x0019f3d8: sw $v0, -0x6450($gp)
    func_0018dba0();  // 18dba0                                // 0x0019f3dc: jal 0x18dba0
    /* nop */                                                   // 0x0019f3e0: nop 
    func_001a05c0();  // 1a05c0                                // 0x0019f3e4: jal 0x1a05c0
    /* nop */                                                   // 0x0019f3e8: nop 
    at = 0x29 << 16;                                            // 0x0019f3ec: lui $at, 0x29
    v0 = -1;                                                    // 0x0019f3f0: addiu $v0, $zero, -1
    g_00290360 = 0;  // Global at 0x00290360                    // 0x0019f3f4: sw $zero, 0x360($at)
    at = 0x29 << 16;                                            // 0x0019f3f8: lui $at, 0x29
    func_001ba310();  // 1ba310                                // 0x0019f3fc: jal 0x1ba310
    g_0029035c = v0;  // Global at 0x0029035c                   // 0x0019f400: sw $v0, 0x35c($at)
    v0 = 1;                                                     // 0x0019f408: addiu $v0, $zero, 1
    return;                                                     // 0x0019f40c: jr $ra
    sp = sp + 0x10;                                             // 0x0019f410: addiu $sp, $sp, 0x10
}