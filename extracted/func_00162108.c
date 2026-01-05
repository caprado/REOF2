void func_00162108() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162108: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0016211c: jal 0x15fc80
    if (v0 != 0) goto label_0x162148;                           // 0x00162124: bnez $v0, 0x162148
    a0 = 0x23 << 16;                                            // 0x0016212c: lui $a0, 0x23
    a0 = &str_00228928;  // "E304161: MWSFD_GetMaxAlpha: handle is invalid." // 0x00162138: addiu $a0, $a0, -0x76d8
    return func_001634a8();  // Tail call                        // 0x00162140: j 0x163410
    sp = sp + 0x20;                                             // 0x00162144: addiu $sp, $sp, 0x20
label_0x162148:
    func_00160850();  // 160850                                // 0x00162148: jal 0x160850
    /* nop */                                                   // 0x0016214c: nop 
    return func_0017d2e0();  // Tail call                        // 0x00162164: j 0x17d2b0
    sp = sp + 0x20;                                             // 0x00162168: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016216c: nop 
    sp = sp + -0x10;                                            // 0x00162170: addiu $sp, $sp, -0x10
    func_0015fc80();  // 15fc80                                // 0x0016217c: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x1621b0                 // 0x00162184: bnez $v0, 0x1621b0
    a0 = 0x23 << 16;                                            // 0x0016218c: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00162190: jal 0x163410
    a0 = &str_00228958;  // "E1122633: mwPlyEntryFname: handle is invalid." // 0x00162194: addiu $a0, $a0, -0x76a8
    return;                                                     // 0x001621a4: jr $ra
    sp = sp + 0x10;                                             // 0x001621a8: addiu $sp, $sp, 0x10
}