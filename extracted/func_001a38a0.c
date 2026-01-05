void func_001a38a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a38a0: addiu $sp, $sp, -0x10
    a1 = 0xb << 16;                                             // 0x001a38ac: lui $a1, 0xb
    func_001a3230();  // 1a3230                                // 0x001a38b0: jal 0x1a3230
    if (v0 != 0) goto label_0x1a38c8;                           // 0x001a38b8: bnez $v0, 0x1a38c8
    v1 = t0 << 4;                                               // 0x001a38bc: sll $v1, $t0, 4
    goto label_0x1a38d0;                                        // 0x001a38c0: b 0x1a38d0
label_0x1a38c8:
    v0 = v1 + v0;                                               // 0x001a38c8: addu $v0, $v1, $v0
    v0 = v0 + 0xc;                                              // 0x001a38cc: addiu $v0, $v0, 0xc
label_0x1a38d0:
    return;                                                     // 0x001a38d4: jr $ra
    sp = sp + 0x10;                                             // 0x001a38d8: addiu $sp, $sp, 0x10
}