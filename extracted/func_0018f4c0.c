void func_0018f4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018f4c0: addiu $sp, $sp, -0x20
    at = 0x7000 << 16;                                          // 0x0018f4c4: lui $at, 0x7000
    v0 = a0 << 6;                                               // 0x0018f4cc: sll $v0, $a0, 6
    at = at | 0x3700;                                           // 0x0018f4d4: ori $at, $at, 0x3700
    s0 = v0 + at;                                               // 0x0018f4d8: addu $s0, $v0, $at
    func_0018f600();  // 0x18f530                                // 0x0018f4dc: jal 0x18f530
    func_0018f690();  // 0x18f600                                // 0x0018f4e4: jal 0x18f600
    v0 = 0x7000 << 16;                                          // 0x0018f4ec: lui $v0, 0x7000
    a0 = 0x28 << 16;                                            // 0x0018f4f0: lui $a0, 0x28
    a0 = a0 + 0x5360;                                           // 0x0018f4f4: addiu $a0, $a0, 0x5360
    a1 = v0 | 0x3f00;                                           // 0x0018f4f8: ori $a1, $v0, 0x3f00
    func_001910b0();  // 0x191030                                // 0x0018f4fc: jal 0x191030
    a2 = v0 | 0x3f80;                                           // 0x0018f500: ori $a2, $v0, 0x3f80
    a0 = 0x28 << 16;                                            // 0x0018f504: lui $a0, 0x28
    v0 = 0x7000 << 16;                                          // 0x0018f508: lui $v0, 0x7000
    a2 = 0x28 << 16;                                            // 0x0018f50c: lui $a2, 0x28
    a0 = a0 + 0x53a0;                                           // 0x0018f510: addiu $a0, $a0, 0x53a0
    a1 = v0 | 0x3f00;                                           // 0x0018f514: ori $a1, $v0, 0x3f00
    func_001910b0();  // 0x191030                                // 0x0018f518: jal 0x191030
    a2 = a2 + 0x53e0;                                           // 0x0018f51c: addiu $a2, $a2, 0x53e0
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018f524: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018f528: jr $ra
    sp = sp + 0x20;                                             // 0x0018f52c: addiu $sp, $sp, 0x20
}