void func_0015d6e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015d6e8: addiu $sp, $sp, -0x20
    func_0015de20();  // 15de20                                // 0x0015d6f8: jal 0x15de20
    v0 = 1;                                                     // 0x0015d704: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x15d750;                          // 0x0015d708: bne $s1, $v0, 0x15d750
    func_00161d68();  // 161d68                                // 0x0015d710: jal 0x161d68
    /* nop */                                                   // 0x0015d714: nop 
    a1 = 1;                                                     // 0x0015d718: addiu $a1, $zero, 1
    if (v0 != s1) goto label_0x15d738;                          // 0x0015d71c: bne $v0, $s1, 0x15d738
    return func_00161280();  // Tail call                        // 0x0015d730: j 0x161250
    sp = sp + 0x20;                                             // 0x0015d734: addiu $sp, $sp, 0x20
label_0x15d738:
    return func_00161280();  // Tail call                        // 0x0015d748: j 0x161250
    sp = sp + 0x20;                                             // 0x0015d74c: addiu $sp, $sp, 0x20
label_0x15d750:
    return;                                                     // 0x0015d75c: jr $ra
    sp = sp + 0x20;                                             // 0x0015d760: addiu $sp, $sp, 0x20
}