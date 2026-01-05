void func_00174ff8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174ff8: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x175040;                           // 0x00175014: bnez $s0, 0x175040
    func_001750b0();  // 1750b0                                // 0x00175020: jal 0x1750b0
    v0 = s1 << 2;                                               // 0x00175028: sll $v0, $s1, 2
    at = 0x21 << 16;                                            // 0x0017502c: lui $at, 0x21
    at = at + v0;                                               // 0x00175030: addu $at, $at, $v0
    g_00215588 = s2;  // Global at 0x00215588                   // 0x00175034: sw $s2, 0x5588($at)
    goto label_0x175094;                                        // 0x00175038: b 0x175094
label_0x175040:
    func_00169af0();  // 169af0                                // 0x00175040: jal 0x169af0
    /* nop */                                                   // 0x00175044: nop 
    a1 = 0xff00 << 16;                                          // 0x00175048: lui $a1, 0xff00
    if (v0 == 0) goto label_0x175070;                           // 0x0017504c: beqz $v0, 0x175070
    a1 = a1 | 0x112;                                            // 0x00175058: ori $a1, $a1, 0x112
    return func_00169940();  // Tail call                        // 0x00175068: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0017506c: addiu $sp, $sp, 0x20
label_0x175070:
    func_00175120();  // 175120                                // 0x00175078: jal 0x175120
    func_00175170();  // 175170                                // 0x00175088: jal 0x175170
label_0x175094:
    return;                                                     // 0x001750a4: jr $ra
    sp = sp + 0x20;                                             // 0x001750a8: addiu $sp, $sp, 0x20
}