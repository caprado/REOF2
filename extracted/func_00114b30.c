void func_00114b30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = 0xffff << 16;                                          // 0x00114b30: lui $a3, 0xffff
    a3 = a3 | 0xf000;                                           // 0x00114b38: ori $a3, $a3, 0xf000
    /* nop */                                                   // 0x00114b3c: nop 
label_0x114b40:
    /* memory sync */                                           // 0x00114b40: sync 
    /* cache 0x10, 0($a2) */                                    // 0x00114b44: cache 0x10, 0($a2)
    /* memory sync */                                           // 0x00114b48: sync 
    v0 = COP0_REG28;  // Read system control register           // 0x00114b4c: mfc0 $v0, $28, 0
    v0 = v0 & a3;                                               // 0x00114b50: and $v0, $v0, $a3
    v0 = v0 + a2;                                               // 0x00114b54: addu $v0, $v0, $a2
    v1 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x00114b58: sltu $v1, $a1, $v0
    v0 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x00114b5c: sltu $v0, $v0, $a0
    if (v0 != 0) goto label_0x114b7c;                           // 0x00114b60: bnez $v0, 0x114b7c
    /* nop */                                                   // 0x00114b64: nop 
    if (v1 != 0) goto label_0x114b7c;                           // 0x00114b68: bnez $v1, 0x114b7c
    /* nop */                                                   // 0x00114b6c: nop 
    /* memory sync */                                           // 0x00114b70: sync 
    /* cache 0x14, 0($a2) */                                    // 0x00114b74: cache 0x14, 0($a2)
    /* memory sync */                                           // 0x00114b78: sync 
label_0x114b7c:
    /* memory sync */                                           // 0x00114b7c: sync 
    /* cache 0x10, 1($a2) */                                    // 0x00114b80: cache 0x10, 1($a2)
    /* memory sync */                                           // 0x00114b84: sync 
    v0 = COP0_REG28;  // Read system control register           // 0x00114b88: mfc0 $v0, $28, 0
    v0 = v0 & a3;                                               // 0x00114b8c: and $v0, $v0, $a3
    v0 = v0 + a2;                                               // 0x00114b90: addu $v0, $v0, $a2
    v1 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x00114b94: sltu $v1, $a1, $v0
    v0 = ((unsigned)v0 < (unsigned)a0) ? 1 : 0;                 // 0x00114b98: sltu $v0, $v0, $a0
    if (v0 != 0) goto label_0x114bb8;                           // 0x00114b9c: bnez $v0, 0x114bb8
    /* nop */                                                   // 0x00114ba0: nop 
    if (v1 != 0) goto label_0x114bb8;                           // 0x00114ba4: bnez $v1, 0x114bb8
    /* nop */                                                   // 0x00114ba8: nop 
    /* memory sync */                                           // 0x00114bac: sync 
    /* cache 0x14, 1($a2) */                                    // 0x00114bb0: cache 0x14, 1($a2)
    /* memory sync */                                           // 0x00114bb4: sync 
label_0x114bb8:
    /* memory sync */                                           // 0x00114bb8: sync 
    a2 = a2 + 0x40;                                             // 0x00114bbc: addiu $a2, $a2, 0x40
    v0 = (a2 < 0x1000) ? 1 : 0;                                 // 0x00114bc0: slti $v0, $a2, 0x1000
    if (v0 != 0) goto label_0x114b40;                           // 0x00114bc4: bnez $v0, 0x114b40
    /* nop */                                                   // 0x00114bc8: nop 
    return;                                                     // 0x00114bcc: jr $ra
    /* nop */                                                   // 0x00114bd0: nop 
}