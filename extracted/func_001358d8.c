void func_001358d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001358d8: addiu $sp, $sp, -0x20
    s0 = 0x25 << 16;                                            // 0x001358e0: lui $s0, 0x25
    s0 = s0 + 0x39e8;                                           // 0x001358e4: addiu $s0, $s0, 0x39e8
    func_0010ae00();  // 10ae00                                // 0x001358f4: jal 0x10ae00
    a2 = v0 + 1;                                                // 0x001358fc: addiu $a2, $v0, 1
    v0 = g_002539e8;  // Global at 0x002539e8                   // 0x00135900: lb $v0, 0($s0)
    if (v0 != 0) return;  // Branch to 0x135928                 // 0x00135908: bnez $v0, 0x135928
    *(uint8_t*)(s1) = 0;                                        // 0x00135910: sb $zero, 0($s1)
    return;                                                     // 0x00135920: jr $ra
    sp = sp + 0x20;                                             // 0x00135924: addiu $sp, $sp, 0x20
}