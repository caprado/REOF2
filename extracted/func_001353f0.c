void func_001353f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001353f0: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x135428;                           // 0x00135400: bnez $s0, 0x135428
    a0 = 0x22 << 16;                                            // 0x00135408: lui $a0, 0x22
    a0 = &str_002240d0;  // "cvFsSetDefDev #2:unknown device name" // 0x00135414: addiu $a0, $a0, 0x40d0
    return func_00134fb0();  // Tail call                        // 0x0013541c: j 0x134ec0
    sp = sp + 0x20;                                             // 0x00135420: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00135424: nop 
label_0x135428:
    func_0010af38();  // 0x10ae00                                // 0x00135428: jal 0x10ae00
    /* nop */                                                   // 0x0013542c: nop 
    if (s1 != 0) return;  // Branch to 0x135458                 // 0x00135434: bnez $s1, 0x135458
    v0 = 0x25 << 16;                                            // 0x00135440: lui $v0, 0x25
    g_002539e8 = 0;  // Global at 0x002539e8                    // 0x0013544c: sb $zero, 0x39e8($v0)
    return;                                                     // 0x00135450: jr $ra
    sp = sp + 0x20;                                             // 0x00135454: addiu $sp, $sp, 0x20
}