void func_001634a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001634a8: addiu $sp, $sp, -0x10
    a0 = 6;                                                     // 0x001634ac: addiu $a0, $zero, 6
    return func_00141ab0();  // Tail call                        // 0x001634b8: j 0x141a30
    sp = sp + 0x10;                                             // 0x001634bc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001634c0: addiu $sp, $sp, -0x10
    return func_0012b2f8();  // Tail call                        // 0x001634cc: j 0x12b2e0
    sp = sp + 0x10;                                             // 0x001634d0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001634d4: nop 
    sp = sp + -0x10;                                            // 0x001634d8: addiu $sp, $sp, -0x10
    return func_001415b8();  // Tail call                        // 0x001634e4: j 0x141568
    sp = sp + 0x10;                                             // 0x001634e8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001634ec: nop 
    sp = sp + -0x10;                                            // 0x001634f0: addiu $sp, $sp, -0x10
    func_00174fb8();  // 0x174fa0                                // 0x001634f8: jal 0x174fa0
    /* nop */                                                   // 0x001634fc: nop 
    v0 = v0 ^ 1;                                                // 0x00163500: xori $v0, $v0, 1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00163508: sltu $v0, $zero, $v0
    return;                                                     // 0x0016350c: jr $ra
    sp = sp + 0x10;                                             // 0x00163510: addiu $sp, $sp, 0x10
}