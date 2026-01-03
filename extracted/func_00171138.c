void func_00171138() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00171138: addiu $sp, $sp, -0x10
    func_00170718();  // 170718                                // 0x00171148: jal 0x170718
    a0 = 5;                                                     // 0x0017114c: addiu $a0, $zero, 5
    v0 = 0x1000 << 16;                                          // 0x00171150: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x00171154: lui $v1, 0x1000
    a0 = 0x1000 << 16;                                          // 0x00171158: lui $a0, 0x1000
    v1 = v1 | 0xb410;                                           // 0x0017115c: ori $v1, $v1, 0xb410
    v0 = v0 | 0xb420;                                           // 0x00171160: ori $v0, $v0, 0xb420
    a0 = a0 | 0xb430;                                           // 0x00171164: ori $a0, $a0, 0xb430
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00171168: sw $zero, 0($v0)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x0017116c: sw $zero, 0($v1)
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00171170: sw $zero, 0($a0)
    SignalSema();  // 0x1142f0                                  // 0x00171174: jal 0x1142f0
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00171178: lw $a0, 0x40($s0)
    v0 = 1;                                                     // 0x0017117c: addiu $v0, $zero, 1
    return;                                                     // 0x00171188: jr $ra
    sp = sp + 0x10;                                             // 0x0017118c: addiu $sp, $sp, 0x10
}