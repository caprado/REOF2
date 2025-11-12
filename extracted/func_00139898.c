void func_00139898() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00139898: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x1398e0;                           // 0x001398a4: beqz $s0, 0x1398e0
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x001398ac: lbu $v0, 2($s0)
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x001398b0: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x1398c8 */                                   // 0x001398b4: bnezl $v0, 0x1398c8
    *(uint8_t*)(s0) = 0;                                        // 0x001398b8: sb $zero, 0($s0)
    func_00139c68();  // 0x139b68                                // 0x001398bc: jal 0x139b68
    /* nop */                                                   // 0x001398c0: nop 
    *(uint8_t*)(s0) = 0;                                        // 0x001398c4: sb $zero, 0($s0)
    return func_00139898();  // Tail call                        // 0x001398d4: j 0x1396f0
    sp = sp + 0x10;                                             // 0x001398d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001398dc: nop 
label_0x1398e0:
    return;                                                     // 0x001398e8: jr $ra
    sp = sp + 0x10;                                             // 0x001398ec: addiu $sp, $sp, 0x10
}