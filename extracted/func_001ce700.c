void func_001ce700() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_00107b68();  // Tail call                        // 0x001ce700: j 0x107ab8
    a2 = 0x14;                                                  // 0x001ce704: addiu $a2, $zero, 0x14
    /* nop */                                                   // 0x001ce708: nop 
    /* nop */                                                   // 0x001ce70c: nop 
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x001ce710: lw $v1, 0xc($a0)
    v0 = *(int32_t*)((a0) + 4);                                 // 0x001ce714: lw $v0, 4($a0)
    return;                                                     // 0x001ce718: jr $ra
    v0 = v1 - v0;                                               // 0x001ce71c: subu $v0, $v1, $v0
}