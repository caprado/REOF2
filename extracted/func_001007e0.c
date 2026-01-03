void func_001007e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001007e0: addiu $sp, $sp, -0x40
    s2 = 1;                                                     // 0x001007ec: addiu $s2, $zero, 1
    s1 = 0x1f << 16;                                            // 0x001007f0: lui $s1, 0x1f
    func_0011d320();  // 11d320                                // 0x001007fc: jal 0x11d320
    g_001edf24 = s2;  // Global at 0x001edf24                   // 0x00100800: sw $s2, -0x20dc($s1)
    a1 = 0x10 << 16;                                            // 0x00100804: lui $a1, 0x10
    a0 = 0x8000 << 16;                                          // 0x00100808: lui $a0, 0x8000
    a1 = a1 + 0x788;                                            // 0x00100810: addiu $a1, $a1, 0x788
    a0 = a0 | 0x12;                                             // 0x00100814: ori $a0, $a0, 0x12
    func_001168c8();  // 1168c8                                // 0x00100818: jal 0x1168c8
    if (s0 == 0) goto label_0x100834;                           // 0x00100820: beqz $s0, 0x100834
    v0 = 0x1f << 16;                                            // 0x00100824: lui $v0, 0x1f
    func_0011d378();  // 11d378                                // 0x00100828: jal 0x11d378
    /* nop */                                                   // 0x0010082c: nop 
    v0 = 0x1f << 16;                                            // 0x00100830: lui $v0, 0x1f
label_0x100834:
    g_001edf24 = 0;  // Global at 0x001edf24                    // 0x00100834: sw $zero, -0x20dc($s1)
    g_001edf40 = s2;  // Global at 0x001edf40                   // 0x00100838: sw $s2, -0x20c0($v0)
    v0 = 1;                                                     // 0x00100840: addiu $v0, $zero, 1
    return;                                                     // 0x00100850: jr $ra
    sp = sp + 0x40;                                             // 0x00100854: addiu $sp, $sp, 0x40
}