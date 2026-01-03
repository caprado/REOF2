void func_001787c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001787c0: addiu $sp, $sp, -0x20
    a1 = 8;                                                     // 0x001787c4: addiu $a1, $zero, 8
    func_00177908();  // 177908                                // 0x001787d8: jal 0x177908
    s1 = 1;                                                     // 0x001787dc: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x178828;                          // 0x001787e0: beq $v0, $s1, 0x178828
    func_00167980();  // 167980                                // 0x001787e8: jal 0x167980
    a1 = *(int32_t*)((s0) + 0x1cd0);                            // 0x001787ec: lw $a1, 0x1cd0($s0)
    if (v0 != s1) goto label_0x178828;                          // 0x001787f0: bne $v0, $s1, 0x178828
    func_00178840();  // 178840                                // 0x001787f8: jal 0x178840
    /* nop */                                                   // 0x001787fc: nop 
    if (v0 == 0) goto label_0x178828;                           // 0x00178800: beqz $v0, 0x178828
    a1 = 8;                                                     // 0x00178810: addiu $a1, $zero, 8
    a2 = 1;                                                     // 0x00178818: addiu $a2, $zero, 1
    return func_001778f0();  // Tail call                       // 0x0017881c: j 0x1778f0
    sp = sp + 0x20;                                             // 0x00178820: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00178824: nop 
label_0x178828:
    return;                                                     // 0x00178834: jr $ra
    sp = sp + 0x20;                                             // 0x00178838: addiu $sp, $sp, 0x20
}