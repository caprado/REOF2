void func_001a37c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a37c0: addiu $sp, $sp, -0x10
    a1 = 7 << 16;                                               // 0x001a37cc: lui $a1, 7
    func_001a3230();  // 1a3230                                // 0x001a37d0: jal 0x1a3230
    if (v0 != 0) goto label_0x1a37e8;                           // 0x001a37d8: bnez $v0, 0x1a37e8
    v1 = t0 << 1;                                               // 0x001a37dc: sll $v1, $t0, 1
    goto label_0x1a37f8;                                        // 0x001a37e0: b 0x1a37f8
label_0x1a37e8:
    v1 = v1 + t0;                                               // 0x001a37e8: addu $v1, $v1, $t0
    v1 = v1 << 2;                                               // 0x001a37ec: sll $v1, $v1, 2
    v0 = v1 + v0;                                               // 0x001a37f0: addu $v0, $v1, $v0
    v0 = v0 + 0xc;                                              // 0x001a37f4: addiu $v0, $v0, 0xc
label_0x1a37f8:
    return;                                                     // 0x001a37fc: jr $ra
    sp = sp + 0x10;                                             // 0x001a3800: addiu $sp, $sp, 0x10
}