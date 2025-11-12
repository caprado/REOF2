void func_001d64a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x33 << 16;                                            // 0x001d64a0: lui $v0, 0x33
    goto label_0x1d64cc;                                        // 0x001d64a8: b 0x1d64cc
    v0 = v0 + -0x1570;                                          // 0x001d64ac: addiu $v0, $v0, -0x1570
label_0x1d64b0:
    v1 = g_0032ea90;  // Global at 0x0032ea90                   // 0x001d64b0: lbu $v1, 0($v0)
    if (v1 != 0) goto label_0x1d64c4;                           // 0x001d64b4: bnez $v1, 0x1d64c4
    /* nop */                                                   // 0x001d64b8: nop 
    goto label_0x1d64dc;                                        // 0x001d64bc: b 0x1d64dc
    /* nop */                                                   // 0x001d64c0: nop 
label_0x1d64c4:
    a0 = a0 + 1;                                                // 0x001d64c4: addiu $a0, $a0, 1
    v0 = v0 + 0x10;                                             // 0x001d64c8: addiu $v0, $v0, 0x10
label_0x1d64cc:
    v1 = (a0 < 4) ? 1 : 0;                                      // 0x001d64cc: slti $v1, $a0, 4
    if (v1 != 0) goto label_0x1d64b0;                           // 0x001d64d0: bnez $v1, 0x1d64b0
    /* nop */                                                   // 0x001d64d4: nop 
label_0x1d64dc:
    return;                                                     // 0x001d64dc: jr $ra
    /* nop */                                                   // 0x001d64e0: nop 
}