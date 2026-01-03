void func_001ac100() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ac100: addiu $sp, $sp, -0x10
    func_001a6d80();  // 1a6d80                                // 0x001ac108: jal 0x1a6d80
    /* nop */                                                   // 0x001ac10c: nop 
    a0 = 0x10;                                                  // 0x001ac110: addiu $a0, $zero, 0x10
    func_001a7970();  // 1a7970                                // 0x001ac114: jal 0x1a7970
    func_001acfe0();  // 1acfe0                                // 0x001ac11c: jal 0x1acfe0
    *(uint32_t*)((gp) + -0x63dc) = 0;                           // 0x001ac120: sw $zero, -0x63dc($gp)
    v0 = 1;                                                     // 0x001ac128: addiu $v0, $zero, 1
    return;                                                     // 0x001ac12c: jr $ra
    sp = sp + 0x10;                                             // 0x001ac130: addiu $sp, $sp, 0x10
}