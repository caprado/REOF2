void func_00160d98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00160d98: addiu $sp, $sp, -0xc0
    func_0015fc80();  // 15fc80                                // 0x00160dc0: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x00160dc8: lui $a0, 0x23
    if (v0 != 0) goto label_0x160de8;                           // 0x00160dcc: bnez $v0, 0x160de8
    a0 = &str_00228298;  // "E2011910: mwPlyFxCnvFrmYUV422: getfrm is failed." // 0x00160dd0: addiu $a0, $a0, -0x7d68
    func_00163410();  // 163410                                // 0x00160dd4: jal 0x163410
    /* nop */                                                   // 0x00160dd8: nop 
    goto label_0x160e3c;                                        // 0x00160ddc: b 0x160e3c
    /* nop */                                                   // 0x00160de4: nop 
label_0x160de8:
    v0 = *(int32_t*)(s2);                                       // 0x00160de8: lw $v0, 0($s2)
    if (v0 != 0) goto label_0x160e08;                           // 0x00160dec: bnez $v0, 0x160e08
    a0 = 0x23 << 16;                                            // 0x00160df0: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160df4: jal 0x163410
    a0 = &str_002282d0;  // "E212176: mwPlyFxCnvFrmMbARGB8888: handle is invalid." // 0x00160df8: addiu $a0, $a0, -0x7d30
    goto label_0x160e3c;                                        // 0x00160dfc: b 0x160e3c
    /* nop */                                                   // 0x00160e04: nop 
label_0x160e08:
    func_00160850();  // 160850                                // 0x00160e08: jal 0x160850
    func_00160878();  // 160878                                // 0x00160e1c: jal 0x160878
    func_0017bb98();  // 17bb98                                // 0x00160e30: jal 0x17bb98
label_0x160e3c:
    return;                                                     // 0x00160e50: jr $ra
    sp = sp + 0xc0;                                             // 0x00160e54: addiu $sp, $sp, 0xc0
}