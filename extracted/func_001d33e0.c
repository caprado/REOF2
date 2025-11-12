void func_001d33e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d33e0: addiu $sp, $sp, -0x10
    a0 = 0x33 << 16;                                            // 0x001d33e4: lui $a0, 0x33
    a0 = a0 + -0x1330;                                          // 0x001d33ec: addiu $a0, $a0, -0x1330
    func_00107d30();  // 0x107c70                                // 0x001d33f4: jal 0x107c70
    a2 = 0x1000;                                                // 0x001d33f8: addiu $a2, $zero, 0x1000
    at = 0x31 << 16;                                            // 0x001d33fc: lui $at, 0x31
    v1 = -1;                                                    // 0x001d3400: addiu $v1, $zero, -1
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d3404: lw $a0, 0x37fc($at)
    *(uint32_t*)((gp) + -0x7ae4) = v1;                          // 0x001d3408: sw $v1, -0x7ae4($gp)
    v1 = 1 << 16;                                               // 0x001d340c: lui $v1, 1
    v1 = a0 + v1;                                               // 0x001d3410: addu $v1, $a0, $v1
    *(uint32_t*)((gp) + -0x6230) = a0;                          // 0x001d3414: sw $a0, -0x6230($gp)
    *(uint32_t*)((gp) + -0x6234) = v1;                          // 0x001d3418: sw $v1, -0x6234($gp)
    return;                                                     // 0x001d3420: jr $ra
    sp = sp + 0x10;                                             // 0x001d3424: addiu $sp, $sp, 0x10
}