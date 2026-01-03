void func_00160c18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160c18: addiu $sp, $sp, -0x10
    a0 = g_002282a0;  // Global at 0x002282a0                   // 0x00160c20: lw $a0, 0xa8($a0)
    return func_0017cfa8();  // Tail call                        // 0x00160c28: j 0x17cf48
    sp = sp + 0x10;                                             // 0x00160c2c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00160c30: addiu $sp, $sp, -0x10
    a0 = g_002282a0;  // Global at 0x002282a0                   // 0x00160c38: lw $a0, 0xa8($a0)
    return func_0017cf98();  // Tail call                       // 0x00160c40: j 0x17cf98
    sp = sp + 0x10;                                             // 0x00160c44: addiu $sp, $sp, 0x10
    sp = sp + -0xc0;                                            // 0x00160c48: addiu $sp, $sp, -0xc0
    func_0015fc80();  // 15fc80                                // 0x00160c68: jal 0x15fc80
    /* bnezl $v0, 0x160c90 */                                   // 0x00160c70: bnezl $v0, 0x160c90
    v0 = *(int32_t*)(s2);                                       // 0x00160c74: lw $v0, 0($s2)
    a0 = 0x23 << 16;                                            // 0x00160c78: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160c7c: jal 0x163410
    a0 = &str_002281c0;  // "E201196: mwPlyFxCnvFrmARGB8888: getfrm is failed." // 0x00160c80: addiu $a0, $a0, -0x7e40
    goto label_0x160cd8;                                        // 0x00160c84: b 0x160cd8
    /* nop */                                                   // 0x00160c8c: nop 
    if (v0 != 0) goto label_0x160ca8;                           // 0x00160c90: bnez $v0, 0x160ca8
    a0 = 0x23 << 16;                                            // 0x00160c94: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00160c98: jal 0x163410
    a0 = &str_002281f8;  // "E201197: mwPlyFxCnvFrmYUV422: handle is invalid." // 0x00160c9c: addiu $a0, $a0, -0x7e08
    goto label_0x160cd8;                                        // 0x00160ca0: b 0x160cd8
label_0x160ca8:
    func_00160850();  // 160850                                // 0x00160ca8: jal 0x160850
    func_00160878();  // 160878                                // 0x00160cbc: jal 0x160878
    func_0017a4d8();  // 17a4d8                                // 0x00160ccc: jal 0x17a4d8
label_0x160cd8:
    return;                                                     // 0x00160ce8: jr $ra
    sp = sp + 0xc0;                                             // 0x00160cec: addiu $sp, $sp, 0xc0
}