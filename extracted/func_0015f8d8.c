void func_0015f8d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_4;
    
    sp = sp + -0x50;                                            // 0x0015f8d8: addiu $sp, $sp, -0x50
    func_0015fc80();  // 15fc80                                // 0x0015f8e4: jal 0x15fc80
    if (v0 != 0) goto label_0x15f908;                           // 0x0015f8ec: bnez $v0, 0x15f908
    a0 = 0x22 << 16;                                            // 0x0015f8f4: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015f8f8: jal 0x163410
    a0 = &str_00227be8;  // "E1122628: mwPlySetBpicSkip: handle is invalid." // 0x0015f8fc: addiu $a0, $a0, 0x7be8
    goto label_0x15f928;                                        // 0x0015f900: b 0x15f928
label_0x15f908:
    func_0015f7e0();  // 15f7e0                                // 0x0015f908: jal 0x15f7e0
    /* nop */                                                   // 0x0015f90c: nop 
    func_001753d0();  // 1753d0                                // 0x0015f914: jal 0x1753d0
    v1 = local_4;                                               // 0x0015f91c: lw $v1, 4($sp)
    v0 = local_10;                                              // 0x0015f920: lw $v0, 0x10($sp)
    v0 = v1 - v0;                                               // 0x0015f924: subu $v0, $v1, $v0
label_0x15f928:
    return;                                                     // 0x0015f930: jr $ra
    sp = sp + 0x50;                                             // 0x0015f934: addiu $sp, $sp, 0x50
}