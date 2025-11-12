void func_00118330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00118330: addiu $sp, $sp, -0x10
    func_00118330();  // 0x1182e0                                // 0x00118338: jal 0x1182e0
    /* nop */                                                   // 0x0011833c: nop 
    v0 = 0x1f << 16;                                            // 0x00118340: lui $v0, 0x1f
    PollSema();  // 0x114320                                    // 0x00118344: jal 0x114320
    a0 = g_001f03e4;  // Global at 0x001f03e4                   // 0x00118348: lw $a0, 0x3e4($v0)
    return;                                                     // 0x00118354: jr $ra
    sp = sp + 0x10;                                             // 0x00118358: addiu $sp, $sp, 0x10
}