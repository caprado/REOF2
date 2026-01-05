void func_001dbd80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001dbd80: addiu $sp, $sp, -0x10
    a0 = 0x25 << 16;                                            // 0x001dbd84: lui $a0, 0x25
    a0 = &str_002481d0;  // "lobby"                             // 0x001dbd8c: addiu $a0, $a0, -0x7e30
    func_001daef0();  // 1daef0                                // 0x001dbd90: jal 0x1daef0
    a1 = 1;                                                     // 0x001dbd94: addiu $a1, $zero, 1
    a0 = 0x25 << 16;                                            // 0x001dbd98: lui $a0, 0x25
    a1 = 0xc;                                                   // 0x001dbd9c: addiu $a1, $zero, 0xc
    func_001daef0();  // 1daef0                                // 0x001dbda0: jal 0x1daef0
    a0 = &str_002481d8;  // "libusbkb : bind errr\n"            // 0x001dbda4: addiu $a0, $a0, -0x7e28
    return;                                                     // 0x001dbdac: jr $ra
    sp = sp + 0x10;                                             // 0x001dbdb0: addiu $sp, $sp, 0x10
}