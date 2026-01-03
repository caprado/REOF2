void func_001d3fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d3fe0: addiu $sp, $sp, -0x20
    v0 = (unsigned)a1 >> 8;                                     // 0x001d3fec: srl $v0, $a1, 8
    a0 = a2 << 2;                                               // 0x001d3ff4: sll $a0, $a2, 2
    v1 = gp + -0x7ae0;                                          // 0x001d3ff8: addiu $v1, $gp, -0x7ae0
    v1 = v1 + a0;                                               // 0x001d4000: addu $v1, $v1, $a0
    t2 = a1 & 0xff;                                             // 0x001d4004: andi $t2, $a1, 0xff
    a2 = *(int32_t*)(v1);                                       // 0x001d4008: lw $a2, 0($v1)
    a0 = 0x33 << 16;                                            // 0x001d400c: lui $a0, 0x33
    a1 = 0x24 << 16;                                            // 0x001d4010: lui $a1, 0x24
    t1 = v0 & 0xff;                                             // 0x001d4014: andi $t1, $v0, 0xff
    a0 = a0 + -0x1e70;                                          // 0x001d4018: addiu $a0, $a0, -0x1e70
    a1 = &str_002472a0;  // "%sEFFECT\\ef%02d"                  // 0x001d401c: addiu $a1, $a1, 0x72a0
    func_0010a4d8();  // 10a4d8                                // 0x001d4020: jal 0x10a4d8
    if (s0 != 0) goto label_0x1d4040;                           // 0x001d4028: bnez $s0, 0x1d4040
    a0 = 0x33 << 16;                                            // 0x001d402c: lui $a0, 0x33
    a1 = 0x24 << 16;                                            // 0x001d4030: lui $a1, 0x24
    a0 = a0 + -0x1e70;                                          // 0x001d4034: addiu $a0, $a0, -0x1e70
    func_0010a860();  // 10a860                                // 0x001d4038: jal 0x10a860
    a1 = a1 + 0x7250;                                           // 0x001d403c: addiu $a1, $a1, 0x7250
label_0x1d4040:
    v0 = 0x33 << 16;                                            // 0x001d4044: lui $v0, 0x33
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d4048: xori.b $w0, $w0, 0xb0
    v0 = v0 + -0x1e70;                                          // 0x001d404c: addiu $v0, $v0, -0x1e70
    return;                                                     // 0x001d4050: jr $ra
    sp = sp + 0x20;                                             // 0x001d4054: addiu $sp, $sp, 0x20
}