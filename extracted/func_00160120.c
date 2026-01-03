void func_00160120() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00160120: addiu $sp, $sp, -0x10
    a1 = 3;                                                     // 0x0016012c: addiu $a1, $zero, 3
    a0 = g_00227fa8;  // Global at 0x00227fa8                   // 0x00160130: lw $a0, 0x40($a0)
    return func_0016bc40();  // Tail call                        // 0x00160138: j 0x16bb88
    sp = sp + 0x10;                                             // 0x0016013c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00160140: addiu $sp, $sp, -0x10
    a1 = 5;                                                     // 0x0016014c: addiu $a1, $zero, 5
    a0 = g_00227fa8;  // Global at 0x00227fa8                   // 0x00160150: lw $a0, 0x40($a0)
    return func_0016bc40();  // Tail call                        // 0x00160158: j 0x16bb88
    sp = sp + 0x10;                                             // 0x0016015c: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00160160: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x00160174: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0016017c: lui $a0, 0x22
    if (v0 != 0) goto label_0x1601a0;                           // 0x00160184: bnez $v0, 0x1601a0
    a0 = &str_00227f38;  // "E1122606 mwSfdGetOutVol: handle is invalid." // 0x00160188: addiu $a0, $a0, 0x7f38
    return func_001634a8();  // Tail call                        // 0x00160198: j 0x163410
    sp = sp + 0x20;                                             // 0x0016019c: addiu $sp, $sp, 0x20
label_0x1601a0:
    return func_0015f468();  // Tail call                        // 0x001601b0: j 0x15f450
    sp = sp + 0x20;                                             // 0x001601b4: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x001601b8: addiu $sp, $sp, -0x10
    func_0015fc80();  // 15fc80                                // 0x001601c4: jal 0x15fc80
    if (v0 != 0) return;  // Branch to 0x1601f8                 // 0x001601cc: bnez $v0, 0x1601f8
    a0 = 0x22 << 16;                                            // 0x001601d4: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x001601d8: jal 0x163410
    a0 = &str_00227f68;  // "E1122607 mwSfdSetOutPan: handle is invalid." // 0x001601dc: addiu $a0, $a0, 0x7f68
    return;                                                     // 0x001601ec: jr $ra
    sp = sp + 0x10;                                             // 0x001601f0: addiu $sp, $sp, 0x10
}