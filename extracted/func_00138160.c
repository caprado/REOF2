void func_00138160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00138160: addiu $sp, $sp, -0x20
    func_00137fe8();  // 0x137fb0                                // 0x0013817c: jal 0x137fb0
    func_00119608();  // 0x119290                                // 0x0013818c: jal 0x119290
    a0 = 0x22 << 16;                                            // 0x00138194: lui $a0, 0x22
    a0 = &str_00224fc0;  // "SRD: sceOpen error = %d\r\n"       // 0x0013819c: addiu $a0, $a0, 0x4fc0
    if (s0 >= 0) goto label_0x1381b0;                           // 0x001381a0: bgez $s0, 0x1381b0
    func_00116598();  // 0x116508                                // 0x001381a8: jal 0x116508
    /* nop */                                                   // 0x001381ac: nop 
label_0x1381b0:
    func_00138020();  // 0x137fe8                                // 0x001381b0: jal 0x137fe8
    /* nop */                                                   // 0x001381b4: nop 
    return;                                                     // 0x001381cc: jr $ra
    sp = sp + 0x20;                                             // 0x001381d0: addiu $sp, $sp, 0x20
}