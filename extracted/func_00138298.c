void func_00138298() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00138298: addiu $sp, $sp, -0x20
    func_00137fe8();  // 0x137fb0                                // 0x001382b4: jal 0x137fb0
    func_00118fd0();  // 0x118d70                                // 0x001382c4: jal 0x118d70
    a0 = 0x22 << 16;                                            // 0x001382cc: lui $a0, 0x22
    a0 = &str_00225020;  // "\nDTR Ver.1.03 Build:Jul 28 2003 17:50:08\n" // 0x001382d4: addiu $a0, $a0, 0x5020
    if (s0 >= 0) goto label_0x1382e8;                           // 0x001382d8: bgez $s0, 0x1382e8
    func_00116598();  // 0x116508                                // 0x001382e0: jal 0x116508
    /* nop */                                                   // 0x001382e4: nop 
label_0x1382e8:
    func_00138020();  // 0x137fe8                                // 0x001382e8: jal 0x137fe8
    /* nop */                                                   // 0x001382ec: nop 
    return;                                                     // 0x00138304: jr $ra
    sp = sp + 0x20;                                             // 0x00138308: addiu $sp, $sp, 0x20
}