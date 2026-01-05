void func_0016b000() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016b000: addiu $sp, $sp, -0x30
    s1 = s0 + 0x1ae4;                                           // 0x0016b010: addiu $s1, $s0, 0x1ae4
    func_00167980();  // 167980                                // 0x0016b020: jal 0x167980
    a1 = *(int32_t*)((s1) + 0x18);                              // 0x0016b024: lw $a1, 0x18($s1)
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x0016b02c: lw $a1, 0x14($s1)
    func_00167980();  // 167980                                // 0x0016b030: jal 0x167980
    a1 = *(int32_t*)((s1) + 0x1c);                              // 0x0016b03c: lw $a1, 0x1c($s1)
    func_00167980();  // 167980                                // 0x0016b044: jal 0x167980
    s2 = s2 | s3;                                               // 0x0016b048: or $s2, $s2, $s3
    v0 = s2 | v0;                                               // 0x0016b04c: or $v0, $s2, $v0
    return;                                                     // 0x0016b064: jr $ra
    sp = sp + 0x30;                                             // 0x0016b068: addiu $sp, $sp, 0x30
}