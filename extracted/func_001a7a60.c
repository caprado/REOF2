void func_001a7a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a7a60: addiu $sp, $sp, -0x10
    func_001a7970();  // 1a7970                                // 0x001a7a68: jal 0x1a7970
    /* nop */                                                   // 0x001a7a6c: nop 
    if (v0 >= 0) goto label_0x1a7a80;                           // 0x001a7a70: bgez $v0, 0x1a7a80
    goto label_0x1a7a8c;                                        // 0x001a7a78: b 0x1a7a8c
label_0x1a7a80:
    func_001a7a00();  // 1a7a00                                // 0x001a7a80: jal 0x1a7a00
    /* nop */                                                   // 0x001a7a84: nop 
label_0x1a7a8c:
    return;                                                     // 0x001a7a8c: jr $ra
    sp = sp + 0x10;                                             // 0x001a7a90: addiu $sp, $sp, 0x10
}