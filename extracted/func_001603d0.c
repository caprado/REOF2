void func_001603d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10;
    
    sp = sp + -0x50;                                            // 0x001603d0: addiu $sp, $sp, -0x50
    func_0015fc80();  // 15fc80                                // 0x001603dc: jal 0x15fc80
    if (v0 != 0) goto label_0x160408;                           // 0x001603e8: bnez $v0, 0x160408
    a0 = 0x22 << 16;                                            // 0x001603f0: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x001603f4: jal 0x163410
    a0 = &str_00227ff8;  // "E1122627: mwPlySetEmptyBpicSkip: handle is invalid." // 0x001603f8: addiu $a0, $a0, 0x7ff8
    goto label_0x160414;                                        // 0x001603fc: b 0x160414
    /* nop */                                                   // 0x00160404: nop 
label_0x160408:
    func_0015fb48();  // 15fb48                                // 0x00160408: jal 0x15fb48
    /* nop */                                                   // 0x0016040c: nop 
    v0 = local_10;                                              // 0x00160410: lw $v0, 0x10($sp)
label_0x160414:
    return;                                                     // 0x0016041c: jr $ra
    sp = sp + 0x50;                                             // 0x00160420: addiu $sp, $sp, 0x50
}