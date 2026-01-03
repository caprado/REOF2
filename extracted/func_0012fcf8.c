void func_0012fcf8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012fcf8: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x0012fcfc: lui $v0, 0x20
    s0 = v0 + -0x12a0;                                          // 0x0012fd08: addiu $s0, $v0, -0x12a0
    s1 = 7;                                                     // 0x0012fd10: addiu $s1, $zero, 7
    s2 = 1;                                                     // 0x0012fd18: addiu $s2, $zero, 1
    /* nop */                                                   // 0x0012fd1c: nop 
label_0x12fd20:
    v0 = g_001fed60;  // Global at 0x001fed60                   // 0x0012fd20: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x12fd38;                          // 0x0012fd24: bnel $v0, $s2, 0x12fd38
    s1 = s1 + -1;                                               // 0x0012fd28: addiu $s1, $s1, -1
    func_0012fcb8();  // 12fcb8                                // 0x0012fd2c: jal 0x12fcb8
    s1 = s1 + -1;                                               // 0x0012fd34: addiu $s1, $s1, -1
label_0x12fd38:
    if (s1 >= 0) goto label_0x12fd20;                           // 0x0012fd38: bgez $s1, 0x12fd20
    s0 = s0 + 0x2f0;                                            // 0x0012fd3c: addiu $s0, $s0, 0x2f0
    return;                                                     // 0x0012fd50: jr $ra
    sp = sp + 0x20;                                             // 0x0012fd54: addiu $sp, $sp, 0x20
}