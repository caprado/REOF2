void func_00167af8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00167af8: addiu $sp, $sp, -0x10
    a1 = 0x31;                                                  // 0x00167afc: addiu $a1, $zero, 0x31
    func_001752f8();  // 0x1752e8                                // 0x00167b08: jal 0x1752e8
    if (v0 != 0) goto label_0x167b2c;                           // 0x00167b14: bnez $v0, 0x167b2c
    a1 = 0x39;                                                  // 0x00167b18: addiu $a1, $zero, 0x39
    func_001752f8();  // 0x1752e8                                // 0x00167b1c: jal 0x1752e8
    /* nop */                                                   // 0x00167b20: nop 
    if (v0 == 0) goto label_0x167b34;                           // 0x00167b24: beqz $v0, 0x167b34
label_0x167b2c:
    v0 = 1;                                                     // 0x00167b2c: addiu $v0, $zero, 1
label_0x167b34:
    return;                                                     // 0x00167b38: jr $ra
    sp = sp + 0x10;                                             // 0x00167b3c: addiu $sp, $sp, 0x10
}