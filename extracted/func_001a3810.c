void func_001a3810() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3810: addiu $sp, $sp, -0x10
    a1 = 8 << 16;                                               // 0x001a381c: lui $a1, 8
    func_001a3230();  // 1a3230                                // 0x001a3820: jal 0x1a3230
    if (v0 != 0) goto label_0x1a3838;                           // 0x001a3828: bnez $v0, 0x1a3838
    v1 = t0 << 1;                                               // 0x001a382c: sll $v1, $t0, 1
    goto label_0x1a3848;                                        // 0x001a3830: b 0x1a3848
label_0x1a3838:
    v1 = v1 + t0;                                               // 0x001a3838: addu $v1, $v1, $t0
    v1 = v1 << 2;                                               // 0x001a383c: sll $v1, $v1, 2
    v0 = v1 + v0;                                               // 0x001a3840: addu $v0, $v1, $v0
    v0 = v0 + 0xc;                                              // 0x001a3844: addiu $v0, $v0, 0xc
label_0x1a3848:
    return;                                                     // 0x001a384c: jr $ra
    sp = sp + 0x10;                                             // 0x001a3850: addiu $sp, $sp, 0x10
}