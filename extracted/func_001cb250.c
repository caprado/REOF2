void func_001cb250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001cb2f0();  // Tail call                        // 0x001cb250: j 0x1cb2a0
    a0 = 0x40;                                                  // 0x001cb254: addiu $a0, $zero, 0x40
    /* nop */                                                   // 0x001cb258: nop 
    /* nop */                                                   // 0x001cb25c: nop 
    return func_001cb2f0();  // Tail call                        // 0x001cb260: j 0x1cb2a0
    a0 = 0x40;                                                  // 0x001cb264: addiu $a0, $zero, 0x40
    /* nop */                                                   // 0x001cb268: nop 
    /* nop */                                                   // 0x001cb26c: nop 
    sp = sp + -0x10;                                            // 0x001cb270: addiu $sp, $sp, -0x10
    func_00115190();  // 115190                                // 0x001cb278: jal 0x115190
    a0 = *(int32_t*)(a2);                                       // 0x001cb27c: lw $a0, 0($a2)
    /* memory sync */                                           // 0x001cb280: sync 
    return;                                                     // 0x001cb28c: jr $ra
    sp = sp + 0x10;                                             // 0x001cb290: addiu $sp, $sp, 0x10
}