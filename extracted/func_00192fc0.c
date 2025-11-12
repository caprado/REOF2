void func_00192fc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00192fc0: addiu $sp, $sp, -0x20
    func_00192b20();  // 0x192ab0                                // 0x00192fcc: jal 0x192ab0
    if (v0 == 0) goto label_0x192fe4;                           // 0x00192fd4: beqz $v0, 0x192fe4
    func_001930d0();  // 0x193000                                // 0x00192fdc: jal 0x193000
label_0x192fe4:
    v0 = 1;                                                     // 0x00192fe8: addiu $v0, $zero, 1
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00192fec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00192ff0: jr $ra
    sp = sp + 0x20;                                             // 0x00192ff4: addiu $sp, $sp, 0x20
}