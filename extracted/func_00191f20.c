void func_00191f20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_00122090();  // Tail call                        // 0x00191f20: j 0x121e00
    /* nop */                                                   // 0x00191f24: nop 
    /* nop */                                                   // 0x00191f28: nop 
    /* nop */                                                   // 0x00191f2c: nop 
    return func_001223b0();  // Tail call                       // 0x00191f30: j 0x1223b0
    /* nop */                                                   // 0x00191f34: nop 
    /* nop */                                                   // 0x00191f38: nop 
    /* nop */                                                   // 0x00191f3c: nop 
    return func_0018f190();  // Tail call                       // 0x00191f40: j 0x18f190
    /* nop */                                                   // 0x00191f44: nop 
    /* nop */                                                   // 0x00191f48: nop 
    /* nop */                                                   // 0x00191f4c: nop 
    return func_0018f2b0();  // Tail call                       // 0x00191f50: j 0x18f2b0
    /* nop */                                                   // 0x00191f54: nop 
    /* nop */                                                   // 0x00191f58: nop 
    /* nop */                                                   // 0x00191f5c: nop 
    sp = sp + -0x20;                                            // 0x00191f60: addiu $sp, $sp, -0x20
    func_0018f4c0();  // 0x18f3a0                                // 0x00191f70: jal 0x18f3a0
    a0 = sp + 0x10;                                             // 0x00191f74: addiu $a0, $sp, 0x10
    FPU_F0 = *(float*)((sp) + 0x10);  // Load float             // 0x00191f78: lwc1 $f0, 0x10($sp)
    *(float*)(t1) = FPU_F0;  // Store float                     // 0x00191f7c: swc1 $f0, 0($t1)
    FPU_F0 = *(float*)((sp) + 0x14);  // Load float             // 0x00191f80: lwc1 $f0, 0x14($sp)
    *(float*)(a2) = FPU_F0;  // Store float                     // 0x00191f84: swc1 $f0, 0($a2)
    return;                                                     // 0x00191f8c: jr $ra
    sp = sp + 0x20;                                             // 0x00191f90: addiu $sp, $sp, 0x20
}