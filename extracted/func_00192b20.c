void func_00192b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00192b20: addiu $sp, $sp, -0x10
    func_0018db10();  // 0x18db00                                // 0x00192b28: jal 0x18db00
    /* nop */                                                   // 0x00192b2c: nop 
    FPU_F0 = *(float*)((v0) + 8);  // Load float                // 0x00192b34: lwc1 $f0, 8($v0)
    return;                                                     // 0x00192b38: jr $ra
    sp = sp + 0x10;                                             // 0x00192b3c: addiu $sp, $sp, 0x10
}