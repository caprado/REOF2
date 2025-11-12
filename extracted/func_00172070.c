void func_00172070() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172070: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00172084: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x0017208c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1720b8;                           // 0x00172098: beqz $v0, 0x1720b8
    a1 = a1 | 0x146;                                            // 0x0017209c: ori $a1, $a1, 0x146
    return func_00169940();  // Tail call                        // 0x001720ac: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001720b0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001720b4: nop 
label_0x1720b8:
    func_00175170();  // 0x175120                                // 0x001720bc: jal 0x175120
    a1 = 0x1d;                                                  // 0x001720c0: addiu $a1, $zero, 0x1d
    return;                                                     // 0x001720d4: jr $ra
    sp = sp + 0x20;                                             // 0x001720d8: addiu $sp, $sp, 0x20
}