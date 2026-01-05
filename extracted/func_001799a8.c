void func_001799a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001799a8: addiu $sp, $sp, -0x20
    a1 = a1 & 0xff;                                             // 0x001799ac: andi $a1, $a1, 0xff
    func_00179a18();  // 179a18                                // 0x001799bc: jal 0x179a18
    if (s0 == 0) goto label_0x179a04;                           // 0x001799d0: beqz $s0, 0x179a04
    a2 = 0xd;                                                   // 0x001799d4: addiu $a2, $zero, 0xd
    func_00107c70();  // 107c70                                // 0x001799d8: jal 0x107c70
    /* nop */                                                   // 0x001799dc: nop 
    v0 = 1;                                                     // 0x001799e0: addiu $v0, $zero, 1
    /* lwl $a0, 0x17($s0) */                                    // 0x001799ec: lwl $a0, 0x17($s0)
    /* lwr $a0, 0x14($s0) */                                    // 0x001799f0: lwr $a0, 0x14($s0)
    /* swl $a0, 0xb($s1) */                                     // 0x001799fc: swl $a0, 0xb($s1)
    /* swr $a0, 8($s1) */                                       // 0x00179a00: swr $a0, 8($s1)
label_0x179a04:
    return;                                                     // 0x00179a10: jr $ra
    sp = sp + 0x20;                                             // 0x00179a14: addiu $sp, $sp, 0x20
}