void func_001633a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001633a8: addiu $sp, $sp, -0x10
    return func_00141480();  // Tail call                        // 0x001633b4: j 0x141468
    sp = sp + 0x10;                                             // 0x001633b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001633bc: nop 
    sp = sp + -0x10;                                            // 0x001633c0: addiu $sp, $sp, -0x10
    func_00141420();  // 0x141408                                // 0x001633c8: jal 0x141408
    /* nop */                                                   // 0x001633cc: nop 
    v0 = 1;                                                     // 0x001633d4: addiu $v0, $zero, 1
    return;                                                     // 0x001633d8: jr $ra
    sp = sp + 0x10;                                             // 0x001633dc: addiu $sp, $sp, 0x10
}