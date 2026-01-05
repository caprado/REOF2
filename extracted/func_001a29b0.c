void func_001a29b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a29b0: addiu $sp, $sp, -0x10
    func_001a2930();  // 1a2930                                // 0x001a29b8: jal 0x1a2930
    /* nop */                                                   // 0x001a29bc: nop 
    if (v0 == 0) goto label_0x1a29d0;                           // 0x001a29c0: beqz $v0, 0x1a29d0
    /* nop */                                                   // 0x001a29c4: nop 
    goto label_0x1a29d4;                                        // 0x001a29c8: b 0x1a29d4
    v0 = v0 + 0xc;                                              // 0x001a29cc: addiu $v0, $v0, 0xc
label_0x1a29d0:
label_0x1a29d4:
    return;                                                     // 0x001a29d8: jr $ra
    sp = sp + 0x10;                                             // 0x001a29dc: addiu $sp, $sp, 0x10
}