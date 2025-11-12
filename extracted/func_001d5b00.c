void func_001d5b00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = a0 & 0xff;                                             // 0x001d5b00: andi $a2, $a0, 0xff
    v0 = 0x33 << 16;                                            // 0x001d5b04: lui $v0, 0x33
    a0 = a1 & 0xffff;                                           // 0x001d5b08: andi $a0, $a1, 0xffff
    v0 = v0 + -0x1530;                                          // 0x001d5b0c: addiu $v0, $v0, -0x1530
    goto label_0x1d5b4c;                                        // 0x001d5b10: b 0x1d5b4c
label_0x1d5b18:
    v1 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d5b18: lbu $v1, 0($v0)
    if (v1 == 0) goto label_0x1d5b44;                           // 0x001d5b1c: beqz $v1, 0x1d5b44
    /* nop */                                                   // 0x001d5b20: nop 
    v1 = g_0032ead8;  // Global at 0x0032ead8                   // 0x001d5b24: lbu $v1, 8($v0)
    if (v1 != a2) goto label_0x1d5b44;                          // 0x001d5b28: bne $v1, $a2, 0x1d5b44
    /* nop */                                                   // 0x001d5b2c: nop 
    v1 = g_0032eada;  // Global at 0x0032eada                   // 0x001d5b30: lhu $v1, 0xa($v0)
    if (v1 != a0) goto label_0x1d5b44;                          // 0x001d5b34: bne $v1, $a0, 0x1d5b44
    /* nop */                                                   // 0x001d5b38: nop 
    goto label_0x1d5b5c;                                        // 0x001d5b3c: b 0x1d5b5c
    /* nop */                                                   // 0x001d5b40: nop 
label_0x1d5b44:
    a1 = a1 + 1;                                                // 0x001d5b44: addiu $a1, $a1, 1
    v0 = v0 + 0xc;                                              // 0x001d5b48: addiu $v0, $v0, 0xc
label_0x1d5b4c:
    v1 = (a1 < 0x10) ? 1 : 0;                                   // 0x001d5b4c: slti $v1, $a1, 0x10
    if (v1 != 0) goto label_0x1d5b18;                           // 0x001d5b50: bnez $v1, 0x1d5b18
    /* nop */                                                   // 0x001d5b54: nop 
label_0x1d5b5c:
    return;                                                     // 0x001d5b5c: jr $ra
    /* nop */                                                   // 0x001d5b60: nop 
}