void func_0013bae8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5;
    
    sp = sp + -0x20;                                            // 0x0013bae8: addiu $sp, $sp, -0x20
    a2 = 6;                                                     // 0x0013baec: addiu $a2, $zero, 6
    func_00107d30();  // 0x107c70                                // 0x0013bb00: jal 0x107c70
    /* lwl $v0, 3($s0) */                                       // 0x0013bb08: lwl $v0, 3($s0)
    /* lwr $v0, 0($s0) */                                       // 0x0013bb0c: lwr $v0, 0($s0)
    /* swl $v0, 3($sp) */                                       // 0x0013bb10: swl $v0, 3($sp)
    a1 = 0x22 << 16;                                            // 0x0013bb14: lui $a1, 0x22
    a1 = a1 + 0x59c8;                                           // 0x0013bb18: addiu $a1, $a1, 0x59c8
    /* swr $v0, 0($sp) */                                       // 0x0013bb20: swr $v0, 0($sp)
    func_0010ac68();  // 0x10ab20                                // 0x0013bb24: jal 0x10ab20
    local_5 = 0;                                                // 0x0013bb28: sb $zero, 5($sp)
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0013bb30: sltiu $v0, $v0, 1
    return;                                                     // 0x0013bb38: jr $ra
    sp = sp + 0x20;                                             // 0x0013bb3c: addiu $sp, $sp, 0x20
}