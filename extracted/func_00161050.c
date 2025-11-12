void func_00161050() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xc0;                                            // 0x00161050: addiu $sp, $sp, -0xc0
    func_0015fcb0();  // 0x15fc80                                // 0x00161070: jal 0x15fc80
    /* bnezl $v0, 0x161098 */                                   // 0x00161078: bnezl $v0, 0x161098
    v0 = *(int32_t*)(s2);                                       // 0x0016107c: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00161080: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00161084: jal 0x163410
    a0 = &str_00228440;  // "E2011914: mwPlyFxCnvFrmZ32: getfrm is failed." // 0x00161088: addiu $a0, $a0, -0x7bc0
    goto label_0x1610e0;                                        // 0x0016108c: b 0x1610e0
    /* nop */                                                   // 0x00161094: nop 
    if (v0 != 0) goto label_0x1610b0;                           // 0x00161098: bnez $v0, 0x1610b0
    a0 = 0x23 << 16;                                            // 0x0016109c: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x001610a0: jal 0x163410
    a0 = &str_00228470;  // "E201214: mwPlyFxSetCompoMode: handle is invalid." // 0x001610a4: addiu $a0, $a0, -0x7b90
    goto label_0x1610e0;                                        // 0x001610a8: b 0x1610e0
label_0x1610b0:
    func_00160860();  // 0x160850                                // 0x001610b0: jal 0x160850
    func_001608f0();  // 0x160878                                // 0x001610c4: jal 0x160878
    func_0017bf50();  // 0x17be00                                // 0x001610d4: jal 0x17be00
label_0x1610e0:
    return;                                                     // 0x001610f0: jr $ra
    sp = sp + 0xc0;                                             // 0x001610f4: addiu $sp, $sp, 0xc0
}