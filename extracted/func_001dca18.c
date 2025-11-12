void func_001dca18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001dca18: addiu $sp, $sp, -0x30
    v0 = -1;                                                    // 0x001dca24: addiu $v0, $zero, -1
    s1 = 0x22 << 16;                                            // 0x001dca28: lui $s1, 0x22
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dca30: lw $a0, -0x308($s1)
    if (a0 == v0) goto label_0x1dcaa4;                          // 0x001dca38: beq $a0, $v0, 0x1dcaa4
    if (v1 == 0) goto label_0x1dca5c;                           // 0x001dca40: beqz $v1, 0x1dca5c
    /* nop */                                                   // 0x001dca44: nop 
    v0 = 1;                                                     // 0x001dca48: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1dca80;                          // 0x001dca4c: beq $v1, $v0, 0x1dca80
    v0 = -0xb;                                                  // 0x001dca50: addiu $v0, $zero, -0xb
    goto label_0x1dcaa8;                                        // 0x001dca54: b 0x1dcaa8
label_0x1dca5c:
    PollSema();  // 0x114320                                    // 0x001dca5c: jal 0x114320
    /* nop */                                                   // 0x001dca60: nop 
    func_001dcb88();  // 0x1dcac8                                // 0x001dca64: jal 0x1dcac8
    /* nop */                                                   // 0x001dca68: nop 
    *(uint32_t*)(s0) = v0;                                      // 0x001dca6c: sw $v0, 0($s0)
    iSignalSema();  // 0x114300                                 // 0x001dca70: jal 0x114300
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dca74: lw $a0, -0x308($s1)
    goto label_0x1dcaa4;                                        // 0x001dca78: b 0x1dcaa4
label_0x1dca80:
    a0 = 0x33 << 16;                                            // 0x001dca80: lui $a0, 0x33
    func_001178e0();  // 0x1178a0                                // 0x001dca84: jal 0x1178a0
    a0 = a0 + -0xa0;                                            // 0x001dca88: addiu $a0, $a0, -0xa0
    /* bnezl $v0, 0x1dcaa4 */                                   // 0x001dca8c: bnezl $v0, 0x1dcaa4
    v0 = 1;                                                     // 0x001dca90: addiu $v0, $zero, 1
    func_001dcb88();  // 0x1dcac8                                // 0x001dca94: jal 0x1dcac8
    /* nop */                                                   // 0x001dca98: nop 
    *(uint32_t*)(s0) = v0;                                      // 0x001dca9c: sw $v0, 0($s0)
label_0x1dcaa4:
label_0x1dcaa8:
    return;                                                     // 0x001dcab0: jr $ra
    sp = sp + 0x30;                                             // 0x001dcab4: addiu $sp, $sp, 0x30
}