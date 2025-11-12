void func_0013cd00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013cd00: addiu $sp, $sp, -0x20
    v0 = 0x20 << 16;                                            // 0x0013cd04: lui $v0, 0x20
    s0 = v0 + 0x4710;                                           // 0x0013cd10: addiu $s0, $v0, 0x4710
    s1 = 0xf;                                                   // 0x0013cd18: addiu $s1, $zero, 0xf
    s2 = 1;                                                     // 0x0013cd20: addiu $s2, $zero, 1
    /* nop */                                                   // 0x0013cd24: nop 
label_0x13cd28:
    v0 = g_00204710;  // Global at 0x00204710                   // 0x0013cd28: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x13cd40;                          // 0x0013cd2c: bnel $v0, $s2, 0x13cd40
    s1 = s1 + -1;                                               // 0x0013cd30: addiu $s1, $s1, -1
    func_0013d808();  // 0x13d678                                // 0x0013cd34: jal 0x13d678
    s1 = s1 + -1;                                               // 0x0013cd3c: addiu $s1, $s1, -1
label_0x13cd40:
    if (s1 >= 0) goto label_0x13cd28;                           // 0x0013cd40: bgez $s1, 0x13cd28
    s0 = s0 + 0x238;                                            // 0x0013cd44: addiu $s0, $s0, 0x238
    return;                                                     // 0x0013cd58: jr $ra
    sp = sp + 0x20;                                             // 0x0013cd5c: addiu $sp, $sp, 0x20
}