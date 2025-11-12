void func_00115bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x1000 << 16;                                          // 0x00115bb0: lui $v1, 0x1000
    v1 = v1 | 0xf130;                                           // 0x00115bb4: ori $v1, $v1, 0xf130
label_0x115bb8:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00115bb8: lw $v0, 0($v1)
    v0 = v0 & 0x8000;                                           // 0x00115bbc: andi $v0, $v0, 0x8000
    /* nop */                                                   // 0x00115bc0: nop 
    /* nop */                                                   // 0x00115bc4: nop 
    /* nop */                                                   // 0x00115bc8: nop 
    if (v0 != 0) goto label_0x115bb8;                           // 0x00115bcc: bnez $v0, 0x115bb8
    /* nop */                                                   // 0x00115bd0: nop 
    v1 = 0x1000 << 16;                                          // 0x00115bd4: lui $v1, 0x1000
    v1 = v1 | 0xf180;                                           // 0x00115bdc: ori $v1, $v1, 0xf180
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00115be0: sb $a0, 0($v1)
    return;                                                     // 0x00115be4: jr $ra
    /* nop */                                                   // 0x00115be8: nop 
}