void func_00114c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0xffff << 16;                                          // 0x00114c70: lui $a3, 0xffff
    a3 = a3 | 0xf000;                                           // 0x00114c78: ori $a3, $a3, 0xf000
    /* nop */                                                   // 0x00114c7c: nop 
label_0x114c80:
    /* memory sync */                                           // 0x00114c80: sync 
    /* cache 0x10, 0($a2) */                                    // 0x00114c84: cache 0x10, 0($a2)
    /* memory sync */                                           // 0x00114c88: sync 
    v0 = COP0_REG28;  // Read system control register           // 0x00114c8c: mfc0 $v0, $28, 0
    v0 = v0 & a3;                                               // 0x00114c90: and $v0, $v0, $a3
    v0 = v0 + a2;                                               // 0x00114c94: addu $v0, $v0, $a2
    v1 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x00114c98: sltu $v1, $a1, $v0
    v0 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x00114c9c: sltu $v0, $v0, $a0
    if (v0 != 0) goto label_0x114cbc;                           // 0x00114ca0: bnez $v0, 0x114cbc
    /* nop */                                                   // 0x00114ca4: nop 
    if (v1 != 0) goto label_0x114cbc;                           // 0x00114ca8: bnez $v1, 0x114cbc
    /* nop */                                                   // 0x00114cac: nop 
    /* memory sync */                                           // 0x00114cb0: sync 
    /* cache 0x16, 0($a2) */                                    // 0x00114cb4: cache 0x16, 0($a2)
    /* memory sync */                                           // 0x00114cb8: sync 
label_0x114cbc:
    /* memory sync */                                           // 0x00114cbc: sync 
    /* cache 0x10, 1($a2) */                                    // 0x00114cc0: cache 0x10, 1($a2)
    /* memory sync */                                           // 0x00114cc4: sync 
    v0 = COP0_REG28;  // Read system control register           // 0x00114cc8: mfc0 $v0, $28, 0
    v0 = v0 & a3;                                               // 0x00114ccc: and $v0, $v0, $a3
    v0 = v0 + a2;                                               // 0x00114cd0: addu $v0, $v0, $a2
    v1 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x00114cd4: sltu $v1, $a1, $v0
    v0 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x00114cd8: sltu $v0, $v0, $a0
    if (v0 != 0) goto label_0x114cf8;                           // 0x00114cdc: bnez $v0, 0x114cf8
    /* nop */                                                   // 0x00114ce0: nop 
    if (v1 != 0) goto label_0x114cf8;                           // 0x00114ce4: bnez $v1, 0x114cf8
    /* nop */                                                   // 0x00114ce8: nop 
    /* memory sync */                                           // 0x00114cec: sync 
    /* cache 0x16, 1($a2) */                                    // 0x00114cf0: cache 0x16, 1($a2)
    /* memory sync */                                           // 0x00114cf4: sync 
label_0x114cf8:
    /* memory sync */                                           // 0x00114cf8: sync 
    a2 = a2 + 0x40;                                             // 0x00114cfc: addiu $a2, $a2, 0x40
    v0 = (a2 < 0x1000) ? 1 : 0;                                 // 0x00114d00: slti $v0, $a2, 0x1000
    if (v0 != 0) goto label_0x114c80;                           // 0x00114d04: bnez $v0, 0x114c80
    /* nop */                                                   // 0x00114d08: nop 
    return;                                                     // 0x00114d0c: jr $ra
    /* nop */                                                   // 0x00114d10: nop 
}