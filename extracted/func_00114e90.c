void func_00114e90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00114e90: addiu $sp, $sp, -0x30
    s0 = COP0_REG12;  // Read system control register           // 0x00114ea4: mfc0 $s0, $12, 0
    v0 = 1 << 16;                                               // 0x00114ea8: lui $v0, 1
    s0 = s0 & v0;                                               // 0x00114eac: and $s0, $s0, $v0
    if (s0 == 0) goto label_0x114ec0;                           // 0x00114eb0: beqz $s0, 0x114ec0
    /* nop */                                                   // 0x00114eb4: nop 
    func_0011d378();  // 0x11d320                                // 0x00114eb8: jal 0x11d320
    /* nop */                                                   // 0x00114ebc: nop 
label_0x114ec0:
    SetAlarm();  // 0x114050                                    // 0x00114ec0: jal 0x114050
    /* memory sync */                                           // 0x00114ecc: sync 
    if (s0 == 0) goto label_0x114ee4;                           // 0x00114ed0: beqz $s0, 0x114ee4
    func_0011d390();  // 0x11d378                                // 0x00114ed8: jal 0x11d378
    /* nop */                                                   // 0x00114edc: nop 
label_0x114ee4:
    return;                                                     // 0x00114ef0: jr $ra
    sp = sp + 0x30;                                             // 0x00114ef4: addiu $sp, $sp, 0x30
}