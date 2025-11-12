void func_001381d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001381d8: addiu $sp, $sp, -0x20
    func_00137fe8();  // 0x137fb0                                // 0x001381ec: jal 0x137fb0
    func_001189b8();  // 0x118730                                // 0x001381f8: jal 0x118730
    a0 = 0x22 << 16;                                            // 0x00138200: lui $a0, 0x22
    a0 = &str_00224fe0;  // "SRD: sceClose error = %d\r\n"      // 0x00138208: addiu $a0, $a0, 0x4fe0
    if (s0 >= 0) goto label_0x13821c;                           // 0x0013820c: bgez $s0, 0x13821c
    func_00116598();  // 0x116508                                // 0x00138214: jal 0x116508
    /* nop */                                                   // 0x00138218: nop 
label_0x13821c:
    func_00138020();  // 0x137fe8                                // 0x0013821c: jal 0x137fe8
    /* nop */                                                   // 0x00138220: nop 
    return;                                                     // 0x00138234: jr $ra
    sp = sp + 0x20;                                             // 0x00138238: addiu $sp, $sp, 0x20
}