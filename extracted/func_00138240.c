void func_00138240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00138240: addiu $sp, $sp, -0x10
    func_00137fe8();  // 0x137fb0                                // 0x0013824c: jal 0x137fb0
    func_00118b38();  // 0x1189b8                                // 0x00138254: jal 0x1189b8
    a0 = 0x22 << 16;                                            // 0x0013825c: lui $a0, 0x22
    a0 = &str_00225000;  // "SRD: sceRead error = %d\r\n"       // 0x00138264: addiu $a0, $a0, 0x5000
    if (s0 >= 0) goto label_0x138278;                           // 0x00138268: bgez $s0, 0x138278
    func_00116598();  // 0x116508                                // 0x00138270: jal 0x116508
    /* nop */                                                   // 0x00138274: nop 
label_0x138278:
    func_00138020();  // 0x137fe8                                // 0x00138278: jal 0x137fe8
    /* nop */                                                   // 0x0013827c: nop 
    return;                                                     // 0x0013828c: jr $ra
    sp = sp + 0x10;                                             // 0x00138290: addiu $sp, $sp, 0x10
}