void func_00163180() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163180: addiu $sp, $sp, -0x10
    return func_00141e50();  // Tail call                        // 0x0016318c: j 0x141df8
    sp = sp + 0x10;                                             // 0x00163190: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00163194: nop 
    sp = sp + -0x10;                                            // 0x001631a0: addiu $sp, $sp, -0x10
    func_001417d0();  // 1417d0                                // 0x001631ac: jal 0x1417d0
    v1 = 0x26 << 16;                                            // 0x001631b4: lui $v1, 0x26
    g_00261ec0 = v0;  // Global at 0x00261ec0                   // 0x001631bc: sw $v0, 0x1ec0($v1)
    return;                                                     // 0x001631c0: jr $ra
    sp = sp + 0x10;                                             // 0x001631c4: addiu $sp, $sp, 0x10
}