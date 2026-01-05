void func_00178b18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00178b18: addiu $sp, $sp, -0x20
    a1 = 6;                                                     // 0x00178b1c: addiu $a1, $zero, 6
    func_00177908();  // 177908                                // 0x00178b30: jal 0x177908
    s1 = 1;                                                     // 0x00178b34: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x178b80;                          // 0x00178b38: beq $v0, $s1, 0x178b80
    func_00167980();  // 167980                                // 0x00178b40: jal 0x167980
    a1 = *(int32_t*)((s0) + 0x1c48);                            // 0x00178b44: lw $a1, 0x1c48($s0)
    if (v0 != s1) goto label_0x178b80;                          // 0x00178b48: bne $v0, $s1, 0x178b80
    func_00178b98();  // 178b98                                // 0x00178b50: jal 0x178b98
    /* nop */                                                   // 0x00178b54: nop 
    if (v0 == 0) goto label_0x178b80;                           // 0x00178b58: beqz $v0, 0x178b80
    a1 = 6;                                                     // 0x00178b68: addiu $a1, $zero, 6
    a2 = 1;                                                     // 0x00178b70: addiu $a2, $zero, 1
    return func_001778f0();  // Tail call                       // 0x00178b74: j 0x1778f0
    sp = sp + 0x20;                                             // 0x00178b78: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00178b7c: nop 
label_0x178b80:
    return;                                                     // 0x00178b8c: jr $ra
    sp = sp + 0x20;                                             // 0x00178b90: addiu $sp, $sp, 0x20
}