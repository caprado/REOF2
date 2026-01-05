void func_001ce990() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ce990: addiu $sp, $sp, -0x30
    goto label_0x1ce9c0;                                        // 0x001ce99c: b 0x1ce9c0
label_0x1ce9a4:
    /* nop */                                                   // 0x001ce9a4: nop 
    /* nop */                                                   // 0x001ce9a8: nop 
    /* nop */                                                   // 0x001ce9ac: nop 
    /* nop */                                                   // 0x001ce9b0: nop 
    /* nop */                                                   // 0x001ce9b4: nop 
    /* nop */                                                   // 0x001ce9b8: nop 
    /* nop */                                                   // 0x001ce9bc: nop 
label_0x1ce9c0:
    func_0011be08();  // 11be08                                // 0x001ce9cc: jal 0x11be08
    a3 = sp + 0x2c;                                             // 0x001ce9d0: addiu $a3, $sp, 0x2c
    if (v0 < 0) goto label_0x1ce9a4;                            // 0x001ce9d4: bltz $v0, 0x1ce9a4
    at = (v0 < 0) ? 1 : 0;                                      // 0x001ce9d8: slt $at, $v0, $zero
    if (at != 0) goto label_0x1cea1c;                           // 0x001ce9dc: bnez $at, 0x1cea1c
    /* nop */                                                   // 0x001ce9e0: nop 
    goto label_0x1cea0c;                                        // 0x001ce9e4: b 0x1cea0c
label_0x1ce9ec:
    /* nop */                                                   // 0x001ce9ec: nop 
    /* nop */                                                   // 0x001ce9f0: nop 
    /* nop */                                                   // 0x001ce9f4: nop 
    /* nop */                                                   // 0x001ce9f8: nop 
    /* nop */                                                   // 0x001ce9fc: nop 
    /* nop */                                                   // 0x001cea00: nop 
    /* nop */                                                   // 0x001cea04: nop 
label_0x1cea0c:
    func_0011c010();  // 11c010                                // 0x001cea0c: jal 0x11c010
    /* nop */                                                   // 0x001cea10: nop 
    if (v0 < 0) goto label_0x1ce9ec;                            // 0x001cea14: bltz $v0, 0x1ce9ec
    /* nop */                                                   // 0x001cea18: nop 
label_0x1cea1c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cea20: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cea24: jr $ra
    sp = sp + 0x30;                                             // 0x001cea28: addiu $sp, $sp, 0x30
}