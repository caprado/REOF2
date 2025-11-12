void func_00187704() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00187704: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((v0) + -0x2fc0);                           // 0x00187708: lw $a0, -0x2fc0($v0)
    WaitSema();  // 0x114310                                    // 0x00187710: jal 0x114310
    /* nop */                                                   // 0x00187714: nop 
    /* memory sync */                                           // 0x00187718: sync 
    return;                                                     // 0x00187724: jr $ra
    sp = sp + 0x10;                                             // 0x00187728: addiu $sp, $sp, 0x10
}