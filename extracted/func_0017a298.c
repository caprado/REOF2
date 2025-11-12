void func_0017a298() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0xc0;                                                  // 0x0017a29c: addiu $v0, $zero, 0xc0
    v1 = a1 + -0xc0;                                            // 0x0017a2a0: addiu $v1, $a1, -0xc0
    a0 = a1 + -0xe0;                                            // 0x0017a2a4: addiu $a0, $a1, -0xe0
    v1 = ((unsigned)v1 < (unsigned)0x20) ? 1 : 0;               // 0x0017a2a8: sltiu $v1, $v1, 0x20
    if (v1 != 0) goto label_0x17a2d4;                           // 0x0017a2ac: bnez $v1, 0x17a2d4
    a0 = ((unsigned)a0 < (unsigned)0x10) ? 1 : 0;               // 0x0017a2b0: sltiu $a0, $a0, 0x10
    if (a0 != 0) goto label_0x17a2d4;                           // 0x0017a2b4: bnez $a0, 0x17a2d4
    v0 = 0xe0;                                                  // 0x0017a2b8: addiu $v0, $zero, 0xe0
    v0 = 0xbd;                                                  // 0x0017a2bc: addiu $v0, $zero, 0xbd
    if (a1 == v0) goto label_0x17a2d4;                          // 0x0017a2c0: beq $a1, $v0, 0x17a2d4
    v1 = 0xbf;                                                  // 0x0017a2c4: addiu $v1, $zero, 0xbf
    if (a1 != v1) goto label_0x17a2d4;                          // 0x0017a2c8: bne $a1, $v1, 0x17a2d4
    v0 = 0xbd;                                                  // 0x0017a2d0: addiu $v0, $zero, 0xbd
label_0x17a2d4:
    return;                                                     // 0x0017a2d4: jr $ra
    /* nop */                                                   // 0x0017a2d8: nop 
}