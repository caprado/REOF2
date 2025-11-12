void func_00186af8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x28 << 16;                                            // 0x00186af8: lui $v0, 0x28
    a1 = -1;                                                    // 0x00186afc: addiu $a1, $zero, -1
    v1 = v0 + -0x7800;                                          // 0x00186b00: addiu $v1, $v0, -0x7800
    a0 = v1 + 0x4020;                                           // 0x00186b04: addiu $a0, $v1, 0x4020
label_0x186b08:
    g_00278800 = a1;  // Global at 0x00278800                   // 0x00186b08: sw $a1, 0($v1)
    g_0027880c = 0;  // Global at 0x0027880c                    // 0x00186b0c: sw $zero, 0xc($v1)
    v1 = v1 + 0x2010;                                           // 0x00186b10: addiu $v1, $v1, 0x2010
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x00186b14: slt $v0, $v1, $a0
    /* nop */                                                   // 0x00186b18: nop 
    if (v0 != 0) goto label_0x186b08;                           // 0x00186b1c: bnez $v0, 0x186b08
    /* nop */                                                   // 0x00186b20: nop 
    return;                                                     // 0x00186b24: jr $ra
    v0 = 1;                                                     // 0x00186b28: addiu $v0, $zero, 1
}