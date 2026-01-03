void func_00165c48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x00165c48: addiu $sp, $sp, -0x20
    func_00132b10();  // 132b10                                // 0x00165c60: jal 0x132b10
    return func_00177b08();  // Tail call                       // 0x00165c7c: j 0x177b08
    sp = sp + 0x20;                                             // 0x00165c80: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00165c84: nop 
    sp = sp + -0x30;                                            // 0x00165c88: addiu $sp, $sp, -0x30
    a2 = sp + 4;                                                // 0x00165c9c: addiu $a2, $sp, 4
    func_00176aa8();  // 176aa8                                // 0x00165ca4: jal 0x176aa8
    a1 = local_0;                                               // 0x00165cac: lw $a1, 0($sp)
    func_0015b740();  // 15b740                                // 0x00165cb4: jal 0x15b740
    a2 = local_4;                                               // 0x00165cb8: lw $a2, 4($sp)
    *(uint32_t*)(s1) = v0;                                      // 0x00165cbc: sw $v0, 0($s1)
    return;                                                     // 0x00165ccc: jr $ra
    sp = sp + 0x30;                                             // 0x00165cd0: addiu $sp, $sp, 0x30
}