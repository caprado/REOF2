void func_00163258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163258: addiu $sp, $sp, -0x10
    v0 = 0x26 << 16;                                            // 0x0016325c: lui $v0, 0x26
    a0 = 2;                                                     // 0x00163264: addiu $a0, $zero, 2
    a1 = g_00261ec4;  // Global at 0x00261ec4                   // 0x00163268: lw $a1, 0x1ec4($v0)
    return func_00141918();  // Tail call                        // 0x00163270: j 0x1418a0
    sp = sp + 0x10;                                             // 0x00163274: addiu $sp, $sp, 0x10
    a0 = 6;                                                     // 0x0016327c: addiu $a0, $zero, 6
    sp = sp + -0x10;                                            // 0x00163280: addiu $sp, $sp, -0x10
    func_001417d0();  // 1417d0                                // 0x0016328c: jal 0x1417d0
    v1 = 0x26 << 16;                                            // 0x00163294: lui $v1, 0x26
    g_00261ec8 = v0;  // Global at 0x00261ec8                   // 0x0016329c: sw $v0, 0x1ec8($v1)
    return;                                                     // 0x001632a0: jr $ra
    sp = sp + 0x10;                                             // 0x001632a4: addiu $sp, $sp, 0x10
}