void func_00174368() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174368: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x0017437c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174384: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1743a8;                           // 0x00174388: beqz $v0, 0x1743a8
    a1 = a1 | 0x151;                                            // 0x00174394: ori $a1, $a1, 0x151
    return func_00169940();  // Tail call                        // 0x001743a0: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001743a4: addiu $sp, $sp, 0x20
label_0x1743a8:
    *(uint32_t*)((s0) + 0x2ab0) = s1;                           // 0x001743a8: sw $s1, 0x2ab0($s0)
    return;                                                     // 0x001743b8: jr $ra
    sp = sp + 0x20;                                             // 0x001743bc: addiu $sp, $sp, 0x20
}