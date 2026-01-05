void func_0018fd90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0018fd90: addiu $sp, $sp, -0x60
    func_0018fc60();  // 18fc60                                // 0x0018fda0: jal 0x18fc60
    a0 = sp + 0x20;                                             // 0x0018fda4: addiu $a0, $sp, 0x20
    func_00191190();  // 191190                                // 0x0018fdac: jal 0x191190
    a1 = sp + 0x20;                                             // 0x0018fdb0: addiu $a1, $sp, 0x20
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018fdb8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018fdbc: jr $ra
    sp = sp + 0x60;                                             // 0x0018fdc0: addiu $sp, $sp, 0x60
}