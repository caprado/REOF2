void func_00141a70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00141a70: addiu $sp, $sp, -0x20
    func_00141390();  // 141390                                // 0x00141a84: jal 0x141390
    v0 = 0x25 << 16;                                            // 0x00141a8c: lui $v0, 0x25
    v0 = v0 + 0x6170;                                           // 0x00141a94: addiu $v0, $v0, 0x6170
    g_00256174 = s0;  // Global at 0x00256174                   // 0x00141a98: sw $s0, 4($v0)
    g_00256170 = s1;  // Global at 0x00256170                   // 0x00141a9c: sw $s1, 0($v0)
    return func_001413c0();  // Tail call                        // 0x00141aa8: j 0x1413a8
    sp = sp + 0x20;                                             // 0x00141aac: addiu $sp, $sp, 0x20
    v0 = 0x25 << 16;                                            // 0x00141ab0: lui $v0, 0x25
    v0 = v0 + 0x6160;                                           // 0x00141ab4: addiu $v0, $v0, 0x6160
    g_00256164 = a1;  // Global at 0x00256164                   // 0x00141ab8: sw $a1, 4($v0)
    return;                                                     // 0x00141abc: jr $ra
    g_00256160 = a0;  // Global at 0x00256160                   // 0x00141ac0: sw $a0, 0($v0)
}