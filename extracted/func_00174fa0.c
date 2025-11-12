void func_00174fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00174fa0: addiu $sp, $sp, -0x10
    return func_00173178();  // Tail call                        // 0x00174fac: j 0x1730b8
    sp = sp + 0x10;                                             // 0x00174fb0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00174fb4: nop 
    sp = sp + -0x10;                                            // 0x00174fb8: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x00174fc4: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174fcc: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174fe4;                           // 0x00174fd4: beqz $v0, 0x174fe4
    a1 = a1 | 0x111;                                            // 0x00174fd8: ori $a1, $a1, 0x111
    func_00169940();  // 0x1698d0                                // 0x00174fdc: jal 0x1698d0
    /* nop */                                                   // 0x00174fe0: nop 
label_0x174fe4:
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x00174fe4: lw $v0, 0x48($s0)
    return;                                                     // 0x00174ff0: jr $ra
    sp = sp + 0x10;                                             // 0x00174ff4: addiu $sp, $sp, 0x10
}