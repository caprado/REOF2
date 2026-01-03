void func_001716b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001716b0: addiu $sp, $sp, -0x20
    func_001711f0();  // 1711f0                                // 0x001716c0: jal 0x1711f0
    if (v0 == 0) goto label_0x171728;                           // 0x001716c8: beqz $v0, 0x171728
    s0 = *(int32_t*)((s1) + 0x1b30);                            // 0x001716d0: lw $s0, 0x1b30($s1)
    func_00171138();  // 171138                                // 0x001716d4: jal 0x171138
    a0 = s0 + 0xa48;                                            // 0x001716d8: addiu $a0, $s0, 0xa48
    func_001738c0();  // 1738c0                                // 0x001716dc: jal 0x1738c0
    /* nop */                                                   // 0x001716e0: nop 
    v1 = 1;                                                     // 0x001716e4: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x171708;                          // 0x001716e8: beq $v0, $v1, 0x171708
    a0 = s0 + 0xa00;                                            // 0x001716ec: addiu $a0, $s0, 0xa00
    return func_001479a8();  // Tail call                       // 0x001716fc: j 0x1479a8
    sp = sp + 0x20;                                             // 0x00171700: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00171704: nop 
label_0x171708:
    func_00147b38();  // 147b38                                // 0x00171708: jal 0x147b38
    /* nop */                                                   // 0x0017170c: nop 
    return func_00171760();  // Tail call                        // 0x00171720: j 0x171738
    sp = sp + 0x20;                                             // 0x00171724: addiu $sp, $sp, 0x20
label_0x171728:
    return;                                                     // 0x00171730: jr $ra
    sp = sp + 0x20;                                             // 0x00171734: addiu $sp, $sp, 0x20
}