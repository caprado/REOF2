void func_00160fa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00160fa8: addiu $sp, $sp, -0xc0
    func_0015fc80();  // 15fc80                                // 0x00160fc8: jal 0x15fc80
    /* bnezl $v0, 0x160ff0 */                                   // 0x00160fd0: bnezl $v0, 0x160ff0
    v0 = *(int32_t*)(s2);                                       // 0x00160fd4: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00160fd8: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160fdc: jal 0x163410
    a0 = &str_002283e0;  // "E2011912: mwPlyFxCnvFrmZ16: getfrm is failed." // 0x00160fe0: addiu $a0, $a0, -0x7c20
    goto label_0x161038;                                        // 0x00160fe4: b 0x161038
    /* nop */                                                   // 0x00160fec: nop 
    if (v0 != 0) goto label_0x161008;                           // 0x00160ff0: bnez $v0, 0x161008
    a0 = 0x23 << 16;                                            // 0x00160ff4: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160ff8: jal 0x163410
    a0 = &str_00228410;  // "E2011913: mwPlyFxCnvFrmZ32: handle is invalid." // 0x00160ffc: addiu $a0, $a0, -0x7bf0
    goto label_0x161038;                                        // 0x00161000: b 0x161038
label_0x161008:
    func_00160850();  // 160850                                // 0x00161008: jal 0x160850
    func_00160878();  // 160878                                // 0x0016101c: jal 0x160878
    func_0017bdc0();  // 17bdc0                                // 0x0016102c: jal 0x17bdc0
label_0x161038:
    return;                                                     // 0x00161048: jr $ra
    sp = sp + 0xc0;                                             // 0x0016104c: addiu $sp, $sp, 0xc0
}