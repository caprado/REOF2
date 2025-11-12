void func_001c9370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9370: addiu $sp, $sp, -0x10
    func_001c7830();  // 0x1c77f0                                // 0x001c9378: jal 0x1c77f0
    /* nop */                                                   // 0x001c937c: nop 
    at = 0x31 << 16;                                            // 0x001c9380: lui $at, 0x31
    g_00316aa8 = 0;  // Global at 0x00316aa8                    // 0x001c9388: sb $zero, 0x6aa8($at)
    at = 0x31 << 16;                                            // 0x001c9390: lui $at, 0x31
    g_00316a90 = 0;  // Global at 0x00316a90                    // 0x001c9394: sw $zero, 0x6a90($at)
    at = 0x31 << 16;                                            // 0x001c9398: lui $at, 0x31
    g_00316aa0 = 0;  // Global at 0x00316aa0                    // 0x001c939c: sw $zero, 0x6aa0($at)
    return;                                                     // 0x001c93a4: jr $ra
    sp = sp + 0x10;                                             // 0x001c93a8: addiu $sp, $sp, 0x10
}