void func_001b4550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x30 << 16;                                            // 0x001b4550: lui $a0, 0x30
    a0 = a0 + 0x6c00;                                           // 0x001b4558: addiu $a0, $a0, 0x6c00
    return func_00107d30();  // Tail call                        // 0x001b455c: j 0x107c70
    a2 = 0x1190;                                                // 0x001b4560: addiu $a2, $zero, 0x1190
    /* nop */                                                   // 0x001b4564: nop 
    /* nop */                                                   // 0x001b4568: nop 
    /* nop */                                                   // 0x001b456c: nop 
    sp = sp + -0x10;                                            // 0x001b4570: addiu $sp, $sp, -0x10
    func_0019c640();  // 19c640                                // 0x001b4578: jal 0x19c640
    a0 = 0x2000;                                                // 0x001b457c: addiu $a0, $zero, 0x2000
    at = 0x31 << 16;                                            // 0x001b4580: lui $at, 0x31
    g_00313804 = v0;  // Global at 0x00313804                   // 0x001b4584: sh $v0, 0x3804($at)
    return;                                                     // 0x001b458c: jr $ra
    sp = sp + 0x10;                                             // 0x001b4590: addiu $sp, $sp, 0x10
}