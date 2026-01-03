void func_00160cf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00160cf0: addiu $sp, $sp, -0xc0
    func_0015fc80();  // 15fc80                                // 0x00160d10: jal 0x15fc80
    /* bnezl $v0, 0x160d38 */                                   // 0x00160d18: bnezl $v0, 0x160d38
    v0 = *(int32_t*)(s2);                                       // 0x00160d1c: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00160d20: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160d24: jal 0x163410
    a0 = &str_00228230;  // "E201198: mwPlyFxCnvFrmYUV422: getfrm is failed." // 0x00160d28: addiu $a0, $a0, -0x7dd0
    goto label_0x160d80;                                        // 0x00160d2c: b 0x160d80
    /* nop */                                                   // 0x00160d34: nop 
    if (v0 != 0) goto label_0x160d50;                           // 0x00160d38: bnez $v0, 0x160d50
    a0 = 0x23 << 16;                                            // 0x00160d3c: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160d40: jal 0x163410
    a0 = &str_00228268;  // "E201199: mwPlyFxCnvFrmYUV422: handle is invalid." // 0x00160d44: addiu $a0, $a0, -0x7d98
    goto label_0x160d80;                                        // 0x00160d48: b 0x160d80
label_0x160d50:
    func_00160850();  // 160850                                // 0x00160d50: jal 0x160850
    func_00160878();  // 160878                                // 0x00160d64: jal 0x160878
    func_0017b6e0();  // 17b6e0                                // 0x00160d74: jal 0x17b6e0
label_0x160d80:
    return;                                                     // 0x00160d90: jr $ra
    sp = sp + 0xc0;                                             // 0x00160d94: addiu $sp, $sp, 0xc0
}