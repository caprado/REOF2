void func_001632a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001632a8: addiu $sp, $sp, -0x10
    v0 = 0x26 << 16;                                            // 0x001632ac: lui $v0, 0x26
    a0 = 6;                                                     // 0x001632b4: addiu $a0, $zero, 6
    a1 = g_00261ec8;  // Global at 0x00261ec8                   // 0x001632b8: lw $a1, 0x1ec8($v0)
    return func_00141918();  // Tail call                        // 0x001632c0: j 0x1418a0
    sp = sp + 0x10;                                             // 0x001632c4: addiu $sp, $sp, 0x10
    a0 = 5;                                                     // 0x001632cc: addiu $a0, $zero, 5
    sp = sp + -0x10;                                            // 0x001632d0: addiu $sp, $sp, -0x10
    func_001417d0();  // 1417d0                                // 0x001632dc: jal 0x1417d0
    v1 = 0x26 << 16;                                            // 0x001632e4: lui $v1, 0x26
    g_00261ecc = v0;  // Global at 0x00261ecc                   // 0x001632ec: sw $v0, 0x1ecc($v1)
    return;                                                     // 0x001632f0: jr $ra
    sp = sp + 0x10;                                             // 0x001632f4: addiu $sp, $sp, 0x10
}