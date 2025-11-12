void func_001614a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001614a8: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x001614bc: jal 0x15fc80
    if (v0 != 0) goto label_0x1614e8;                           // 0x001614c4: bnez $v0, 0x1614e8
    a0 = 0x23 << 16;                                            // 0x001614cc: lui $a0, 0x23
    a0 = &str_00228690;  // "E2011921: mwPlyFxGetOutZoffset: handle is invalid." // 0x001614d8: addiu $a0, $a0, -0x7970
    return func_001634a8();  // Tail call                        // 0x001614e0: j 0x163410
    sp = sp + 0x20;                                             // 0x001614e4: addiu $sp, $sp, 0x20
label_0x1614e8:
    func_00160860();  // 0x160850                                // 0x001614e8: jal 0x160850
    /* nop */                                                   // 0x001614ec: nop 
    return func_0017d090();  // Tail call                       // 0x00161504: j 0x17d090
    sp = sp + 0x20;                                             // 0x00161508: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016150c: nop 
    sp = sp + -0x10;                                            // 0x00161510: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x0016151c: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x161550                 // 0x00161524: bnez $v0, 0x161550
    a0 = 0x23 << 16;                                            // 0x0016152c: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00161530: jal 0x163410
    a0 = &str_002286c8;  // "E201211 mwPlyCreate: can't create AddInfSJ" // 0x00161534: addiu $a0, $a0, -0x7938
    return;                                                     // 0x00161544: jr $ra
    sp = sp + 0x10;                                             // 0x00161548: addiu $sp, $sp, 0x10
}