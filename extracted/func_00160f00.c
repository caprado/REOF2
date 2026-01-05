void func_00160f00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00160f00: addiu $sp, $sp, -0xc0
    func_0015fc80();  // 15fc80                                // 0x00160f20: jal 0x15fc80
    /* bnezl $v0, 0x160f48 */                                   // 0x00160f28: bnezl $v0, 0x160f48
    v0 = *(int32_t*)(s2);                                       // 0x00160f2c: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00160f30: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160f34: jal 0x163410
    a0 = &str_00228378;  // "E301285: mwPlyFxCnvFrmRGB888: getfrm is failed." // 0x00160f38: addiu $a0, $a0, -0x7c88
    goto label_0x160f90;                                        // 0x00160f3c: b 0x160f90
    /* nop */                                                   // 0x00160f44: nop 
    if (v0 != 0) goto label_0x160f60;                           // 0x00160f48: bnez $v0, 0x160f60
    a0 = 0x23 << 16;                                            // 0x00160f4c: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160f50: jal 0x163410
    a0 = &str_002283b0;  // "E2011911: mwPlyFxCnvFrmZ16: handle is invalid." // 0x00160f54: addiu $a0, $a0, -0x7c50
    goto label_0x160f90;                                        // 0x00160f58: b 0x160f90
label_0x160f60:
    func_00160850();  // 160850                                // 0x00160f60: jal 0x160850
    func_00160878();  // 160878                                // 0x00160f74: jal 0x160878
    func_0017c6d0();  // 17c6d0                                // 0x00160f84: jal 0x17c6d0
label_0x160f90:
    return;                                                     // 0x00160fa0: jr $ra
    sp = sp + 0xc0;                                             // 0x00160fa4: addiu $sp, $sp, 0xc0
}