/** @category graphics/memory @status complete @author caprado */
void func_0018daf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001a0a30();  // Tail call                        // 0x0018daf0: j 0x1a0a20
    /* nop */                                                   // 0x0018daf4: nop 
    /* nop */                                                   // 0x0018daf8: nop 
    /* nop */                                                   // 0x0018dafc: nop 
    return func_001a0a20();  // Tail call                        // 0x0018db00: j 0x1a0a10
    /* nop */                                                   // 0x0018db04: nop 
    /* nop */                                                   // 0x0018db08: nop 
    /* nop */                                                   // 0x0018db0c: nop 
    sp = sp + -0x10;                                            // 0x0018db10: addiu $sp, $sp, -0x10
    func_0018d530();  // 18d530                                // 0x0018db18: jal 0x18d530
    /* nop */                                                   // 0x0018db1c: nop 
    func_001a0a30();  // 1a0a30                                // 0x0018db20: jal 0x1a0a30
    /* nop */                                                   // 0x0018db24: nop 
    func_0018bec0();  // 18bec0                                // 0x0018db28: jal 0x18bec0
    /* nop */                                                   // 0x0018db2c: nop 
    return;                                                     // 0x0018db34: jr $ra
    sp = sp + 0x10;                                             // 0x0018db38: addiu $sp, $sp, 0x10
}