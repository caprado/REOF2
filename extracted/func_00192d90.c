void func_00192d90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00192d90: addiu $sp, $sp, -0x10
    func_0018db10();  // 0x18db00                                // 0x00192d98: jal 0x18db00
    /* nop */                                                   // 0x00192d9c: nop 
    if (v0 == 0) goto label_0x192db0;                           // 0x00192da0: beqz $v0, 0x192db0
    /* nop */                                                   // 0x00192da4: nop 
    goto label_0x192db4;                                        // 0x00192da8: b 0x192db4
    v0 = *(int16_t*)((v0) + 2);                                 // 0x00192dac: lh $v0, 2($v0)
label_0x192db0:
label_0x192db4:
    return;                                                     // 0x00192db8: jr $ra
    sp = sp + 0x10;                                             // 0x00192dbc: addiu $sp, $sp, 0x10
}