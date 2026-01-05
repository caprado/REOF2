void func_0013aba8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013aba8: addiu $sp, $sp, -0x10
    return func_001380a8();  // Tail call                        // 0x0013abb4: j 0x138020
    sp = sp + 0x10;                                             // 0x0013abb8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013abbc: nop 
    sp = sp + -0x10;                                            // 0x0013abc0: addiu $sp, $sp, -0x10
    return func_00137ef8();  // Tail call                       // 0x0013abcc: j 0x137ef8
    sp = sp + 0x10;                                             // 0x0013abd0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013abd4: nop 
    sp = sp + -0x10;                                            // 0x0013abd8: addiu $sp, $sp, -0x10
    return func_00137f38();  // Tail call                       // 0x0013abe4: j 0x137f38
    sp = sp + 0x10;                                             // 0x0013abe8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013abec: nop 
    sp = sp + -0x10;                                            // 0x0013abf0: addiu $sp, $sp, -0x10
    return func_00137f48();  // Tail call                       // 0x0013abfc: j 0x137f48
    sp = sp + 0x10;                                             // 0x0013ac00: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ac04: nop 
    sp = sp + -0x10;                                            // 0x0013ac08: addiu $sp, $sp, -0x10
    return func_00137fa0();  // Tail call                       // 0x0013ac14: j 0x137fa0
    sp = sp + 0x10;                                             // 0x0013ac18: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ac1c: nop 
    sp = sp + -0x10;                                            // 0x0013ac20: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x0013ac24: lui $v0, 0x20
    v0 = v0 + 0x4078;                                           // 0x0013ac2c: addiu $v0, $v0, 0x4078
    func_0013c6d8();  // 13c6d8                                // 0x0013ac34: jal 0x13c6d8
    v1 = g_00204078;  // Global at 0x00204078                   // 0x0013ac38: lw $v1, 0($v0)
    func_0013c768();  // 13c768                                // 0x0013ac3c: jal 0x13c768
    v0 = 0x20 << 16;                                            // 0x0013ac44: lui $v0, 0x20
    v0 = v0 + 0x4088;                                           // 0x0013ac4c: addiu $v0, $v0, 0x4088
    return;                                                     // 0x0013ac50: jr $ra
    sp = sp + 0x10;                                             // 0x0013ac54: addiu $sp, $sp, 0x10
}