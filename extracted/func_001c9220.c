void func_001c9220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c9220: addiu $sp, $sp, -0x20
    func_001c7d70();  // 0x1c7c00                                // 0x001c9234: jal 0x1c7c00
    func_001c8c90();  // 0x1c8c80                                // 0x001c9240: jal 0x1c8c80
    if (v0 >= 0) goto label_0x1c9258;                           // 0x001c9248: bgez $v0, 0x1c9258
    /* nop */                                                   // 0x001c924c: nop 
    goto label_0x1c9268;                                        // 0x001c9250: b 0x1c9268
    /* nop */                                                   // 0x001c9254: nop 
label_0x1c9258:
    if (v0 != 0) goto label_0x1c9268;                           // 0x001c9258: bnez $v0, 0x1c9268
    /* nop */                                                   // 0x001c925c: nop 
label_0x1c9268:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c926c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c9270: jr $ra
    sp = sp + 0x20;                                             // 0x001c9274: addiu $sp, $sp, 0x20
}