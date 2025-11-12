void func_001a30c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a30c0: addiu $sp, $sp, -0x10
    func_001a30c0();  // 0x1a3020                                // 0x001a30c8: jal 0x1a3020
    /* nop */                                                   // 0x001a30cc: nop 
    if (v0 != 0) goto label_0x1a30e0;                           // 0x001a30d0: bnez $v0, 0x1a30e0
    /* nop */                                                   // 0x001a30d4: nop 
    goto label_0x1a30e4;                                        // 0x001a30d8: b 0x1a30e4
label_0x1a30e0:
    v0 = v0 + 0xc;                                              // 0x001a30e0: addiu $v0, $v0, 0xc
label_0x1a30e4:
    return;                                                     // 0x001a30e8: jr $ra
    sp = sp + 0x10;                                             // 0x001a30ec: addiu $sp, $sp, 0x10
}