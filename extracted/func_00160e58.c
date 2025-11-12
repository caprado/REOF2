void func_00160e58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00160e58: addiu $sp, $sp, -0xc0
    func_0015fcb0();  // 0x15fc80                                // 0x00160e78: jal 0x15fc80
    /* bnezl $v0, 0x160ea0 */                                   // 0x00160e80: bnezl $v0, 0x160ea0
    v0 = *(int32_t*)(s2);                                       // 0x00160e84: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00160e88: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00160e8c: jal 0x163410
    a0 = &str_00228308;  // "E212177: mwPlyFxCnvFrmMbARGB8888: getfrm is failed." // 0x00160e90: addiu $a0, $a0, -0x7cf8
    goto label_0x160ee8;                                        // 0x00160e94: b 0x160ee8
    /* nop */                                                   // 0x00160e9c: nop 
    if (v0 != 0) goto label_0x160eb8;                           // 0x00160ea0: bnez $v0, 0x160eb8
    a0 = 0x23 << 16;                                            // 0x00160ea4: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00160ea8: jal 0x163410
    a0 = &str_00228340;  // "E301284: mwPlyFxCnvFrmRGB888: handle is invalid." // 0x00160eac: addiu $a0, $a0, -0x7cc0
    goto label_0x160ee8;                                        // 0x00160eb0: b 0x160ee8
label_0x160eb8:
    func_00160860();  // 0x160850                                // 0x00160eb8: jal 0x160850
    func_001608f0();  // 0x160878                                // 0x00160ecc: jal 0x160878
    func_0017b2d0();  // 0x17b1f0                                // 0x00160edc: jal 0x17b1f0
label_0x160ee8:
    return;                                                     // 0x00160ef8: jr $ra
    sp = sp + 0xc0;                                             // 0x00160efc: addiu $sp, $sp, 0xc0
}