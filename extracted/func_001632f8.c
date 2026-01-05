void func_001632f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001632f8: addiu $sp, $sp, -0x10
    v0 = 0x26 << 16;                                            // 0x001632fc: lui $v0, 0x26
    a0 = 5;                                                     // 0x00163304: addiu $a0, $zero, 5
    a1 = g_00261ecc;  // Global at 0x00261ecc                   // 0x00163308: lw $a1, 0x1ecc($v0)
    return func_00141918();  // Tail call                        // 0x00163310: j 0x1418a0
    sp = sp + 0x10;                                             // 0x00163314: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00163318: addiu $sp, $sp, -0x10
    func_001413c0();  // 1413c0                                // 0x00163320: jal 0x1413c0
    /* nop */                                                   // 0x00163324: nop 
    v0 = 1;                                                     // 0x0016332c: addiu $v0, $zero, 1
    return;                                                     // 0x00163330: jr $ra
    sp = sp + 0x10;                                             // 0x00163334: addiu $sp, $sp, 0x10
}