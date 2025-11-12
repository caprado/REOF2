void func_001b1e30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b1e30: addiu $sp, $sp, -0x20
    a2 = 0x820;                                                 // 0x001b1e3c: addiu $a2, $zero, 0x820
    func_00107d30();  // 0x107c70                                // 0x001b1e44: jal 0x107c70
    v1 = 0 | 0xffff;                                            // 0x001b1e4c: ori $v1, $zero, 0xffff
    *(uint16_t*)((s0) + 0x810) = v1;                            // 0x001b1e50: sh $v1, 0x810($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1e58: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1e5c: jr $ra
    sp = sp + 0x20;                                             // 0x001b1e60: addiu $sp, $sp, 0x20
}