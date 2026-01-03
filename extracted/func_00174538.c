void func_00174538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00174538: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00174548: lw $v0, 0x2ab0($s0)
    /* beqzl $v0, 0x174570 */                                   // 0x0017454c: beqzl $v0, 0x174570
    func_00174580();  // 174580                                // 0x00174554: jal 0x174580
    /* nop */                                                   // 0x00174558: nop 
    return func_00174ed0();  // Tail call                        // 0x00174568: j 0x174de0
    sp = sp + 0x10;                                             // 0x0017456c: addiu $sp, $sp, 0x10
    return;                                                     // 0x00174574: jr $ra
    sp = sp + 0x10;                                             // 0x00174578: addiu $sp, $sp, 0x10
}