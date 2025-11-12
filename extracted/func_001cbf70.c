void func_001cbf70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001cbf70: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cbf78: addu.qb $zero, $sp, $s1
    func_001cfd80();  // 0x1cfd70                                // 0x001cbf80: jal 0x1cfd70
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001cbf8c: lw $a0, 8($s1)
    v0 = *(int32_t*)((s1) + 4);                                 // 0x001cbf90: lw $v0, 4($s1)
    func_00107c70();  // 0x107b68                                // 0x001cbf98: jal 0x107b68
    a1 = a0 + v0;                                               // 0x001cbf9c: addu $a1, $a0, $v0
    func_001cfe80();  // 0x1cfe70                                // 0x001cbfa0: jal 0x1cfe70
    *(uint32_t*)((s1) + 0xc) = s0;                              // 0x001cbfa8: sw $s0, 0xc($s1)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cbfb0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cbfb4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cbfb8: jr $ra
    sp = sp + 0x30;                                             // 0x001cbfbc: addiu $sp, $sp, 0x30
}