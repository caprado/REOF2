void func_00114dc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00114dc0: addiu $sp, $sp, -0x30
    s0 = COP0_REG12;  // Read system control register           // 0x00114dd4: mfc0 $s0, $12, 0
    v0 = 1 << 16;                                               // 0x00114dd8: lui $v0, 1
    s0 = s0 & v0;                                               // 0x00114ddc: and $s0, $s0, $v0
    if (s0 == 0) goto label_0x114df0;                           // 0x00114de0: beqz $s0, 0x114df0
    /* nop */                                                   // 0x00114de4: nop 
    func_0011d378();  // 0x11d320                                // 0x00114de8: jal 0x11d320
    /* nop */                                                   // 0x00114dec: nop 
label_0x114df0:
    _EnableDmac();  // 0x114030                                 // 0x00114df0: jal 0x114030
    /* memory sync */                                           // 0x00114dfc: sync 
    if (s0 == 0) goto label_0x114e14;                           // 0x00114e00: beqz $s0, 0x114e14
    func_0011d390();  // 0x11d378                                // 0x00114e08: jal 0x11d378
    /* nop */                                                   // 0x00114e0c: nop 
label_0x114e14:
    return;                                                     // 0x00114e20: jr $ra
    sp = sp + 0x30;                                             // 0x00114e24: addiu $sp, $sp, 0x30
}