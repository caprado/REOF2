void func_00172df0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00172df0: addiu $sp, $sp, -0x10
    func_00172e60();  // 172e60                                // 0x00172dfc: jal 0x172e60
    if (v0 != 0) goto label_0x172e3c;                           // 0x00172e04: bnez $v0, 0x172e3c
    func_00172ed0();  // 172ed0                                // 0x00172e0c: jal 0x172ed0
    /* nop */                                                   // 0x00172e10: nop 
    if (v0 != 0) goto label_0x172e3c;                           // 0x00172e14: bnez $v0, 0x172e3c
    func_00172f98();  // 172f98                                // 0x00172e1c: jal 0x172f98
    /* nop */                                                   // 0x00172e20: nop 
    if (v0 != 0) goto label_0x172e3c;                           // 0x00172e24: bnez $v0, 0x172e3c
    func_00172ff0();  // 172ff0                                // 0x00172e2c: jal 0x172ff0
    /* nop */                                                   // 0x00172e30: nop 
    /* beqzl $v0, 0x172e50 */                                   // 0x00172e34: beqzl $v0, 0x172e50
label_0x172e3c:
    return func_001730b8();  // Tail call                        // 0x00172e48: j 0x173080
    sp = sp + 0x10;                                             // 0x00172e4c: addiu $sp, $sp, 0x10
    return;                                                     // 0x00172e54: jr $ra
    sp = sp + 0x10;                                             // 0x00172e58: addiu $sp, $sp, 0x10
}