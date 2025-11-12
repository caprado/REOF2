void func_00172000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172000: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00172014: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x0017201c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x172048;                           // 0x00172028: beqz $v0, 0x172048
    a1 = a1 | 0x145;                                            // 0x0017202c: ori $a1, $a1, 0x145
    return func_00169940();  // Tail call                        // 0x0017203c: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00172040: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00172044: nop 
label_0x172048:
    func_00175170();  // 0x175120                                // 0x0017204c: jal 0x175120
    a1 = 0x1e;                                                  // 0x00172050: addiu $a1, $zero, 0x1e
    return;                                                     // 0x00172064: jr $ra
    sp = sp + 0x20;                                             // 0x00172068: addiu $sp, $sp, 0x20
}