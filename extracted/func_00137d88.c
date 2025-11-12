void func_00137d88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x00137d88: lui $v0, 0x20
    sp = sp + -0x10;                                            // 0x00137d8c: addiu $sp, $sp, -0x10
    a0 = g_00202189;  // Global at 0x00202189                   // 0x00137d90: lb $a0, 0x2189($v0)
    v1 = 1;                                                     // 0x00137d94: addiu $v1, $zero, 1
    if (a0 != v1) goto label_0x137db0;                          // 0x00137d98: bne $a0, $v1, 0x137db0
    func_00137ce8();  // 0x137ca8                                // 0x00137da0: jal 0x137ca8
    /* nop */                                                   // 0x00137da4: nop 
    goto label_0x137dc8;                                        // 0x00137da8: b 0x137dc8
    v0 = v0 << 1;                                               // 0x00137dac: sll $v0, $v0, 1
label_0x137db0:
    v1 = 2;                                                     // 0x00137db0: addiu $v1, $zero, 2
    if (a0 != v1) goto label_0x137dc8;                          // 0x00137db4: bne $a0, $v1, 0x137dc8
    return func_00137d88();  // Tail call                        // 0x00137dc0: j 0x137ce8
    sp = sp + 0x10;                                             // 0x00137dc4: addiu $sp, $sp, 0x10
label_0x137dc8:
    return;                                                     // 0x00137dcc: jr $ra
    sp = sp + 0x10;                                             // 0x00137dd0: addiu $sp, $sp, 0x10
}