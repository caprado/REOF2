void func_001696c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x26 << 16;                                            // 0x001696c0: lui $v1, 0x26
    v0 = 0x23 << 16;                                            // 0x001696c4: lui $v0, 0x23
    sp = sp + -0x10;                                            // 0x001696c8: addiu $sp, $sp, -0x10
    v1 = v1 + 0x3190;                                           // 0x001696cc: addiu $v1, $v1, 0x3190
    v0 = &str_00229010;  // "Append: GCC2096 SCE2800\n"         // 0x001696d0: addiu $v0, $v0, -0x6ff0
    a1 = 0x21 << 16;                                            // 0x001696dc: lui $a1, 0x21
    g_00263190 = v0;  // Global at 0x00263190                   // 0x001696e0: sw $v0, 0($v1)
    a0 = 0x2b80;                                                // 0x001696e8: addiu $a0, $zero, 0x2b80
    func_00169b28();  // 0x169b10                                // 0x001696ec: jal 0x169b10
    g_002157ac = a0;  // Global at 0x002157ac                   // 0x001696f0: sw $a0, 0x57ac($a1)
    func_001697e8();  // 0x169728                                // 0x001696f4: jal 0x169728
    /* bnezl $v0, 0x16971c */                                   // 0x001696fc: bnezl $v0, 0x16971c
    func_00169b60();  // 0x169b40                                // 0x00169704: jal 0x169b40
    /* nop */                                                   // 0x00169708: nop 
    func_00169b80();  // 0x169b78                                // 0x0016970c: jal 0x169b78
    /* nop */                                                   // 0x00169710: nop 
    return;                                                     // 0x00169720: jr $ra
    sp = sp + 0x10;                                             // 0x00169724: addiu $sp, $sp, 0x10
}