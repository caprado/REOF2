void func_00114e28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00114e28: addiu $sp, $sp, -0x30
    s0 = COP0_REG12;  // Read system control register           // 0x00114e3c: mfc0 $s0, $12, 0
    v0 = 1 << 16;                                               // 0x00114e40: lui $v0, 1
    s0 = s0 & v0;                                               // 0x00114e44: and $s0, $s0, $v0
    if (s0 == 0) goto label_0x114e58;                           // 0x00114e48: beqz $s0, 0x114e58
    /* nop */                                                   // 0x00114e4c: nop 
    func_0011d320();  // 11d320                                // 0x00114e50: jal 0x11d320
    /* nop */                                                   // 0x00114e54: nop 
label_0x114e58:
    _DisableIntc();  // 0x114020                                // 0x00114e58: jal 0x114020
    /* memory sync */                                           // 0x00114e64: sync 
    if (s0 == 0) goto label_0x114e7c;                           // 0x00114e68: beqz $s0, 0x114e7c
    func_0011d378();  // 11d378                                // 0x00114e70: jal 0x11d378
    /* nop */                                                   // 0x00114e74: nop 
label_0x114e7c:
    return;                                                     // 0x00114e88: jr $ra
    sp = sp + 0x30;                                             // 0x00114e8c: addiu $sp, $sp, 0x30
}