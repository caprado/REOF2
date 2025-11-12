void func_001d00f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d00f0: addiu $sp, $sp, -0x10
    at = 0x33 << 16;                                            // 0x001d00f4: lui $at, 0x33
    v0 = g_0032b9f1;  // Global at 0x0032b9f1                   // 0x001d00fc: lbu $v0, -0x460f($at)
    if (v0 != 0) goto label_0x1d0110;                           // 0x001d0100: bnez $v0, 0x1d0110
    v0 = -1;                                                    // 0x001d0104: addiu $v0, $zero, -1
    goto label_0x1d012c;                                        // 0x001d0108: b 0x1d012c
label_0x1d0110:
    func_001d06b0();  // 0x1d0580                                // 0x001d0110: jal 0x1d0580
    /* nop */                                                   // 0x001d0114: nop 
    at = 0x33 << 16;                                            // 0x001d0118: lui $at, 0x33
    g_0032b9f0 = v0;  // Global at 0x0032b9f0                   // 0x001d011c: sb $v0, -0x4610($at)
    at = 0x33 << 16;                                            // 0x001d0120: lui $at, 0x33
    v0 = g_0032b9f0;  // Global at 0x0032b9f0                   // 0x001d0124: lbu $v0, -0x4610($at)
label_0x1d012c:
    return;                                                     // 0x001d012c: jr $ra
    sp = sp + 0x10;                                             // 0x001d0130: addiu $sp, $sp, 0x10
}