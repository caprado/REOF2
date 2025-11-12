void func_00176170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00176170: addiu $sp, $sp, -0x20
    func_00176380();  // 0x176330                                // 0x00176184: jal 0x176330
    if (v0 == 0) goto label_0x1761a4;                           // 0x0017618c: beqz $v0, 0x1761a4
    v1 = 1;                                                     // 0x00176190: addiu $v1, $zero, 1
    v0 = -2;                                                    // 0x00176194: addiu $v0, $zero, -2
    *(uint32_t*)(s0) = v0;                                      // 0x00176198: sw $v0, 0($s0)
    *(uint32_t*)(s1) = v1;                                      // 0x001761a0: sw $v1, 0($s1)
label_0x1761a4:
    return;                                                     // 0x001761b0: jr $ra
    sp = sp + 0x20;                                             // 0x001761b4: addiu $sp, $sp, 0x20
}