void func_0011d320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = COP0_REG12;  // Read system control register           // 0x0011d320: mfc0 $v1, $12, 0
    v0 = 1 << 16;                                               // 0x0011d324: lui $v0, 1
    v1 = v1 & v0;                                               // 0x0011d328: and $v1, $v1, $v0
    if (v1 == 0) return;  // Branch to 0x11d364                 // 0x0011d32c: beqz $v1, 0x11d364
    a0 = ((unsigned)0 < (unsigned)v1) ? 1 : 0;                  // 0x0011d330: sltu $a0, $zero, $v1
    /* nop */                                                   // 0x0011d334: nop 
label_0x11d338:
    /* memory sync */                                           // 0x0011d33c: sync 0x10
    v0 = COP0_REG12;  // Read system control register           // 0x0011d340: mfc0 $v0, $12, 0
    v1 = 1 << 16;                                               // 0x0011d344: lui $v1, 1
    v0 = v0 & v1;                                               // 0x0011d348: and $v0, $v0, $v1
    /* nop */                                                   // 0x0011d34c: nop 
    /* nop */                                                   // 0x0011d350: nop 
    if (v0 != 0) goto label_0x11d338;                           // 0x0011d354: bnez $v0, 0x11d338
    /* nop */                                                   // 0x0011d358: nop 
    return;                                                     // 0x0011d35c: jr $ra
}