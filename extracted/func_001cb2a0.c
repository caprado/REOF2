void func_001cb2a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x001cb2a0: addiu $sp, $sp, -0x30
    ReferThreadStatus();  // 0x1141d0                           // 0x001cb2ac: jal 0x1141d0
    a1 = 0x1d << 16;                                            // 0x001cb2b4: lui $a1, 0x1d
    local_2c = v0;                                              // 0x001cb2b8: sw $v0, 0x2c($sp)
    a0 = s0 & 0xffff;                                           // 0x001cb2bc: andi $a0, $s0, 0xffff
    a1 = a1 + -0x4d90;                                          // 0x001cb2c0: addiu $a1, $a1, -0x4d90
    _iEnableIntc();  // 0x114060                                // 0x001cb2c4: jal 0x114060
    a2 = sp + 0x2c;                                             // 0x001cb2c8: addiu $a2, $sp, 0x2c
    WakeupThread();  // 0x114200                                // 0x001cb2cc: jal 0x114200
    /* nop */                                                   // 0x001cb2d0: nop 
    SuspendThread();  // 0x114230                               // 0x001cb2d4: jal 0x114230
    a0 = local_2c;                                              // 0x001cb2d8: lw $a0, 0x2c($sp)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb2e0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb2e4: jr $ra
    sp = sp + 0x30;                                             // 0x001cb2e8: addiu $sp, $sp, 0x30
}