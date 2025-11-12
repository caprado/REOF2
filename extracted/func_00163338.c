void func_00163338() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163338: addiu $sp, $sp, -0x10
    return func_00141450();  // Tail call                        // 0x00163344: j 0x141438
    sp = sp + 0x10;                                             // 0x00163348: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016334c: nop 
    sp = sp + -0x10;                                            // 0x00163350: addiu $sp, $sp, -0x10
    func_001413f0();  // 0x1413d8                                // 0x00163358: jal 0x1413d8
    /* nop */                                                   // 0x0016335c: nop 
    v0 = 1;                                                     // 0x00163364: addiu $v0, $zero, 1
    return;                                                     // 0x00163368: jr $ra
    sp = sp + 0x10;                                             // 0x0016336c: addiu $sp, $sp, 0x10
}