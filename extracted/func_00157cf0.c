void func_00157cf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00157cf0: addiu $sp, $sp, -0x20
    func_00157cf0();  // 0x157ce0                                // 0x00157d04: jal 0x157ce0
    a0 = 0x22 << 16;                                            // 0x00157d0c: lui $a0, 0x22
    v1 = 0x25 << 16;                                            // 0x00157d10: lui $v1, 0x25
    a2 = g_00226e28;  // Global at 0x00226e28                   // 0x00157d14: lbu $a2, 0x6e28($a0)
    v1 = v1 + 0x63e0;                                           // 0x00157d18: addiu $v1, $v1, 0x63e0
    a1 = 4;                                                     // 0x00157d1c: addiu $a1, $zero, 4
    g_002563e0 = v0;  // Global at 0x002563e0                   // 0x00157d20: sw $v0, 0($v1)
    if (a2 == a1) goto label_0x157d48;                          // 0x00157d24: beq $a2, $a1, 0x157d48
    /* nop */                                                   // 0x00157d2c: nop 
label_0x157d30:
    at = -1;                                                    // 0x00157d30: addiu $at, $zero, -1
    /* call function at address in at */                        // 0x00157d34: jalr $at
    /* nop */                                                   // 0x00157d38: nop 
    goto label_0x157d30;                                        // 0x00157d3c: b 0x157d30
    /* nop */                                                   // 0x00157d40: nop 
    /* nop */                                                   // 0x00157d44: nop 
label_0x157d48:
    func_00157e18();  // 0x157d80                                // 0x00157d48: jal 0x157d80
    /* bnezl $v0, 0x157d70 */                                   // 0x00157d50: bnezl $v0, 0x157d70
    func_00156060();  // 0x156058                                // 0x00157d58: jal 0x156058
    /* nop */                                                   // 0x00157d5c: nop 
    func_00157a90();  // 0x157a80                                // 0x00157d60: jal 0x157a80
    /* nop */                                                   // 0x00157d64: nop 
    return;                                                     // 0x00157d78: jr $ra
    sp = sp + 0x20;                                             // 0x00157d7c: addiu $sp, $sp, 0x20
}