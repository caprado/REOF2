void func_001a6c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a6c70: addiu $sp, $sp, -0x20
    ReferThreadStatus();  // 0x1141d0                           // 0x001a6c7c: jal 0x1141d0
    a1 = 0x1a << 16;                                            // 0x001a6c84: lui $a1, 0x1a
    a0 = s0 & 0xffff;                                           // 0x001a6c88: andi $a0, $s0, 0xffff
    a1 = a1 + 0x6c40;                                           // 0x001a6c8c: addiu $a1, $a1, 0x6c40
    _iEnableIntc();  // 0x114060                                // 0x001a6c90: jal 0x114060
    if (v0 >= 0) goto label_0x1a6ca8;                           // 0x001a6c98: bgez $v0, 0x1a6ca8
    /* nop */                                                   // 0x001a6c9c: nop 
    goto label_0x1a6cb0;                                        // 0x001a6ca0: b 0x1a6cb0
    v0 = -2;                                                    // 0x001a6ca4: addiu $v0, $zero, -2
label_0x1a6ca8:
    WakeupThread();  // 0x114200                                // 0x001a6ca8: jal 0x114200
    /* nop */                                                   // 0x001a6cac: nop 
label_0x1a6cb0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a6cb4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a6cb8: jr $ra
    sp = sp + 0x20;                                             // 0x001a6cbc: addiu $sp, $sp, 0x20
}