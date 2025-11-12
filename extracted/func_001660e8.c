void func_001660e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001660e8: addiu $sp, $sp, -0x20
    a1 = 7;                                                     // 0x001660ec: addiu $a1, $zero, 7
    func_00177938();  // 0x177908                                // 0x00166100: jal 0x177908
    s1 = 1;                                                     // 0x00166104: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x166140;                          // 0x00166108: beq $v0, $s1, 0x166140
    func_001679a0();  // 0x167980                                // 0x00166110: jal 0x167980
    a1 = *(int32_t*)((s0) + 0x1c8c);                            // 0x00166114: lw $a1, 0x1c8c($s0)
    a1 = 7;                                                     // 0x0016611c: addiu $a1, $zero, 7
    if (v0 != s1) goto label_0x166140;                          // 0x00166120: bne $v0, $s1, 0x166140
    a2 = 1;                                                     // 0x00166124: addiu $a2, $zero, 1
    return func_001778f0();  // Tail call                       // 0x00166134: j 0x1778f0
    sp = sp + 0x20;                                             // 0x00166138: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016613c: nop 
label_0x166140:
    return;                                                     // 0x0016614c: jr $ra
    sp = sp + 0x20;                                             // 0x00166150: addiu $sp, $sp, 0x20
}