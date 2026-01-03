void func_00191df0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x00191df0: addiu $sp, $sp, -0x70
    v0 = 0x7000 << 16;                                          // 0x00191df4: lui $v0, 0x7000
    a2 = v0 | 0x3f40;                                           // 0x00191dfc: ori $a2, $v0, 0x3f40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00191e00: addu.qb $zero, $sp, $s1
    a0 = sp + 0x30;                                             // 0x00191e10: addiu $a0, $sp, 0x30
    func_00191030();  // 191030                                // 0x00191e14: jal 0x191030
    a1 = v0 | 0x3700;                                           // 0x00191e18: ori $a1, $v0, 0x3700
    a1 = 0x28 << 16;                                            // 0x00191e1c: lui $a1, 0x28
    a0 = sp + 0x30;                                             // 0x00191e20: addiu $a0, $sp, 0x30
    func_001910b0();  // 1910b0                                // 0x00191e24: jal 0x1910b0
    a1 = a1 + 0x53a0;                                           // 0x00191e28: addiu $a1, $a1, 0x53a0
    func_00191860();  // 191860                                // 0x00191e34: jal 0x191860
    a2 = sp + 0x30;                                             // 0x00191e38: addiu $a2, $sp, 0x30
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00191e40: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00191e44: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00191e48: jr $ra
    sp = sp + 0x70;                                             // 0x00191e4c: addiu $sp, $sp, 0x70
}