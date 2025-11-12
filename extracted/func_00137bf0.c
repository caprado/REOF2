void func_00137bf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00137bf0: addiu $sp, $sp, -0x10
    func_00137bb8();  // 0x137b50                                // 0x00137bfc: jal 0x137b50
    s0 = s0 << 0x18;                                            // 0x00137c04: sll $s0, $s0, 0x18
    v0 = 0x20 << 16;                                            // 0x00137c08: lui $v0, 0x20
    v0 = v0 + 0x21cc;                                           // 0x00137c0c: addiu $v0, $v0, 0x21cc
    s0 = s0 >> 0x18;                                            // 0x00137c10: sra $s0, $s0, 0x18
    g_002021cc = s0;  // Global at 0x002021cc                   // 0x00137c14: sw $s0, 0($v0)
    return;                                                     // 0x00137c20: jr $ra
    sp = sp + 0x10;                                             // 0x00137c24: addiu $sp, $sp, 0x10
}