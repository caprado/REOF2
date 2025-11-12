void func_00178ef8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00178ef8: addiu $sp, $sp, -0x20
    if (v0 <= 0) goto label_0x178f34;                           // 0x00178f0c: blez $v0, 0x178f34
label_0x178f20:
    s1 = s1 + 0x10;                                             // 0x00178f20: addiu $s1, $s1, 0x10
    func_00178ee0();  // 0x178ec8                                // 0x00178f24: jal 0x178ec8
    s0 = s0 + -1;                                               // 0x00178f28: addiu $s0, $s0, -1
    if (s0 != 0) goto label_0x178f20;                           // 0x00178f2c: bnez $s0, 0x178f20
label_0x178f34:
    return;                                                     // 0x00178f40: jr $ra
    sp = sp + 0x20;                                             // 0x00178f44: addiu $sp, $sp, 0x20
}