void func_00161740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00161740: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0xe8);                              // 0x00161750: lw $v0, 0xe8($s0)
    /* beqzl $v0, 0x161778 */                                   // 0x00161754: beqzl $v0, 0x161778
    func_00161788();  // 161788                                // 0x0016175c: jal 0x161788
    /* nop */                                                   // 0x00161760: nop 
    return func_001619e0();  // Tail call                        // 0x00161770: j 0x161938
    sp = sp + 0x10;                                             // 0x00161774: addiu $sp, $sp, 0x10
    return;                                                     // 0x0016177c: jr $ra
    sp = sp + 0x10;                                             // 0x00161780: addiu $sp, $sp, 0x10
}