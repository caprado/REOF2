void func_00178a50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00178a50: addiu $sp, $sp, -0x20
    a1 = 6;                                                     // 0x00178a54: addiu $a1, $zero, 6
    func_00177950();  // 0x177938                                // 0x00178a68: jal 0x177938
    s1 = 1;                                                     // 0x00178a6c: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x178ab8;                          // 0x00178a70: beq $v0, $s1, 0x178ab8
    func_001679e0();  // 0x1679c0                                // 0x00178a78: jal 0x1679c0
    a1 = *(int32_t*)((s0) + 0x1c48);                            // 0x00178a7c: lw $a1, 0x1c48($s0)
    if (v0 != s1) goto label_0x178ab8;                          // 0x00178a80: bne $v0, $s1, 0x178ab8
    func_00178b18();  // 0x178ad0                                // 0x00178a88: jal 0x178ad0
    /* nop */                                                   // 0x00178a8c: nop 
    if (v0 == 0) goto label_0x178ab8;                           // 0x00178a90: beqz $v0, 0x178ab8
    a1 = 6;                                                     // 0x00178aa0: addiu $a1, $zero, 6
    a2 = 1;                                                     // 0x00178aa8: addiu $a2, $zero, 1
    return func_00177920();  // Tail call                       // 0x00178aac: j 0x177920
    sp = sp + 0x20;                                             // 0x00178ab0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00178ab4: nop 
label_0x178ab8:
    return;                                                     // 0x00178ac4: jr $ra
    sp = sp + 0x20;                                             // 0x00178ac8: addiu $sp, $sp, 0x20
}