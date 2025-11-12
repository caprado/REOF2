void func_001cbd10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cbd10: addiu $sp, $sp, -0x20
    func_001cf880();  // 0x1cf880                               // 0x001cbd20: jal 0x1cf880
    a0 = s0 + 0x28;                                             // 0x001cbd24: addiu $a0, $s0, 0x28
    v0 = *(uint16_t*)((s0) + 0x1e0);                            // 0x001cbd28: lhu $v0, 0x1e0($s0)
    a0 = s0 + 0x28;                                             // 0x001cbd2c: addiu $a0, $s0, 0x28
    v0 = v0 + 1;                                                // 0x001cbd30: addiu $v0, $v0, 1
    func_001cfc30();  // 0x1cfc30                               // 0x001cbd34: jal 0x1cfc30
    *(uint16_t*)((s0) + 0x1e0) = v0;                            // 0x001cbd38: sh $v0, 0x1e0($s0)
    v1 = 3;                                                     // 0x001cbd3c: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1cbd50;                          // 0x001cbd40: bne $v0, $v1, 0x1cbd50
    /* nop */                                                   // 0x001cbd44: nop 
    goto label_0x1cbd54;                                        // 0x001cbd48: b 0x1cbd54
    v0 = 1;                                                     // 0x001cbd4c: addiu $v0, $zero, 1
label_0x1cbd50:
label_0x1cbd54:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cbd58: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cbd5c: jr $ra
    sp = sp + 0x20;                                             // 0x001cbd60: addiu $sp, $sp, 0x20
}