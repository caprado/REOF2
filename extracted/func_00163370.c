void func_00163370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163370: addiu $sp, $sp, -0x10
    return func_00141468();  // Tail call                        // 0x0016337c: j 0x141450
    sp = sp + 0x10;                                             // 0x00163380: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00163384: nop 
    sp = sp + -0x10;                                            // 0x00163388: addiu $sp, $sp, -0x10
    func_001413f0();  // 1413f0                                // 0x00163390: jal 0x1413f0
    /* nop */                                                   // 0x00163394: nop 
    v0 = 1;                                                     // 0x0016339c: addiu $v0, $zero, 1
    return;                                                     // 0x001633a0: jr $ra
    sp = sp + 0x10;                                             // 0x001633a4: addiu $sp, $sp, 0x10
}