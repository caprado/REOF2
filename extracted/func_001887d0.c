void func_001887d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x001887d0: addiu $sp, $sp, -0x30
    a0 = 0x28 << 16;                                            // 0x001887d4: lui $a0, 0x28
    a1 = 0x8000 << 16;                                          // 0x001887dc: lui $a1, 0x8000
    s0 = 0x28 << 16;                                            // 0x001887e0: lui $s0, 0x28
    a3 = s0 + 0x12c0;                                           // 0x001887e8: addiu $a3, $s0, 0x12c0
    a0 = a0 + 0x1248;                                           // 0x001887ec: addiu $a0, $a0, 0x1248
    local_0 = 0;                                                // 0x001887f0: sw $zero, 0($sp)
    a1 = a1 | 0x1363;                                           // 0x001887f4: ori $a1, $a1, 0x1363
    t0 = 0x280;                                                 // 0x001887fc: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x00188804: addiu $t2, $zero, 0x280
    func_001176a8();  // 1176a8                                // 0x00188808: jal 0x1176a8
    v0 = g_002812c0;  // Global at 0x002812c0                   // 0x00188810: lw $v0, 0x12c0($s0)
    return;                                                     // 0x0018881c: jr $ra
    sp = sp + 0x30;                                             // 0x00188820: addiu $sp, $sp, 0x30
}