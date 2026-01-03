void func_001c0f20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c0f20: addiu $sp, $sp, -0x20
    v1 = 0x22 << 16;                                            // 0x001c0f24: lui $v1, 0x22
    v0 = g_0021d098;  // Global at 0x0021d098                   // 0x001c0f2c: lb $v0, -0x2f68($v1)
    s0 = v1 + -0x2f68;                                          // 0x001c0f30: addiu $s0, $v1, -0x2f68
    if (v0 != 0) goto label_0x1c0f44;                           // 0x001c0f34: bnez $v0, 0x1c0f44
    func_001c0eb0();  // 1c0eb0                                // 0x001c0f3c: jal 0x1c0eb0
    /* nop */                                                   // 0x001c0f40: nop 
label_0x1c0f44:
    v0 = g_0021d09c;  // Global at 0x0021d09c                   // 0x001c0f44: lb $v0, 4($s0)
    v0 = v0 ^ 0x54;                                             // 0x001c0f4c: xori $v0, $v0, 0x54
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001c0f54: sltiu $v0, $v0, 1
    return;                                                     // 0x001c0f58: jr $ra
    sp = sp + 0x20;                                             // 0x001c0f5c: addiu $sp, $sp, 0x20
}