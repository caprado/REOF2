void func_001ad904() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ad904: addiu $sp, $sp, -0x10
    a2 = a2 + -0x57e0;                                          // 0x001ad908: addiu $a2, $a2, -0x57e0
    v0 = 0x2b << 16;                                            // 0x001ad90c: lui $v0, 0x2b
    v0 = v0 + -0x5788;                                          // 0x001ad910: addiu $v0, $v0, -0x5788
    a1 = 1;                                                     // 0x001ad918: addiu $a1, $zero, 1
    a0 = a2 + a0;                                               // 0x001ad91c: addu $a0, $a2, $a0
    v0 = v0 + v1;                                               // 0x001ad920: addu $v0, $v0, $v1
    *(uint8_t*)(a0) = a1;                                       // 0x001ad924: sb $a1, 0($a0)
    func_00132b10();  // 132b10                                // 0x001ad928: jal 0x132b10
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001ad92c: lw $a0, 0($v0)
    return;                                                     // 0x001ad938: jr $ra
    sp = sp + 0x10;                                             // 0x001ad93c: addiu $sp, $sp, 0x10
}