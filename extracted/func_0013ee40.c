void func_0013ee40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013ee40: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013ee44: lui $a0, 0x22
    a0 = &str_00226230;  // "PS2RNA_SetStmHdInfo: not implemented\n" // 0x0013ee4c: addiu $a0, $a0, 0x6230
    return func_00116598();  // Tail call                        // 0x0013ee54: j 0x116508
    sp = sp + 0x10;                                             // 0x0013ee58: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ee5c: nop 
    a0 = 0x22 << 16;                                            // 0x0013ee60: lui $a0, 0x22
    sp = sp + -0x10;                                            // 0x0013ee64: addiu $sp, $sp, -0x10
    func_00116598();  // 0x116508                                // 0x0013ee6c: jal 0x116508
    a0 = &str_00226260;  // "SJMEM Error"                       // 0x0013ee70: addiu $a0, $a0, 0x6260
    return;                                                     // 0x0013ee7c: jr $ra
    sp = sp + 0x10;                                             // 0x0013ee80: addiu $sp, $sp, 0x10
}