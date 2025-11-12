void func_001a2ff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a2ff0: addiu $sp, $sp, -0x10
    func_001a2ff0();  // 0x1a2f50                                // 0x001a2ff8: jal 0x1a2f50
    /* nop */                                                   // 0x001a2ffc: nop 
    if (v0 != 0) goto label_0x1a3010;                           // 0x001a3000: bnez $v0, 0x1a3010
    /* nop */                                                   // 0x001a3004: nop 
    goto label_0x1a3014;                                        // 0x001a3008: b 0x1a3014
label_0x1a3010:
    v0 = v0 + 0xc;                                              // 0x001a3010: addiu $v0, $v0, 0xc
label_0x1a3014:
    return;                                                     // 0x001a3018: jr $ra
    sp = sp + 0x10;                                             // 0x001a301c: addiu $sp, $sp, 0x10
}