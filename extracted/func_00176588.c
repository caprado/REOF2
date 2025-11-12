void func_00176588() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00176588: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x00176594: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x0017659c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1765c0;                           // 0x001765a4: beqz $v0, 0x1765c0
    a1 = a1 | 0x12a;                                            // 0x001765a8: ori $a1, $a1, 0x12a
    return func_00169940();  // Tail call                        // 0x001765b8: j 0x1698d0
    sp = sp + 0x10;                                             // 0x001765bc: addiu $sp, $sp, 0x10
label_0x1765c0:
    func_001752f8();  // 0x1752e8                                // 0x001765c0: jal 0x1752e8
    a1 = 0x47;                                                  // 0x001765c4: addiu $a1, $zero, 0x47
    v1 = 1;                                                     // 0x001765c8: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1765dc;                          // 0x001765cc: beq $v0, $v1, 0x1765dc
    func_00176670();  // 0x1765f0                                // 0x001765d4: jal 0x1765f0
    /* nop */                                                   // 0x001765d8: nop 
label_0x1765dc:
    return;                                                     // 0x001765e8: jr $ra
    sp = sp + 0x10;                                             // 0x001765ec: addiu $sp, $sp, 0x10
}