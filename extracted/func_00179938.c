void func_00179938() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179938: addiu $sp, $sp, -0x20
    a1 = a1 & 0xff;                                             // 0x0017993c: andi $a1, $a1, 0xff
    func_00179a70();  // 0x179a18                                // 0x0017994c: jal 0x179a18
    if (s0 == 0) goto label_0x179994;                           // 0x00179960: beqz $s0, 0x179994
    a2 = 0xd;                                                   // 0x00179964: addiu $a2, $zero, 0xd
    func_00107d30();  // 0x107c70                                // 0x00179968: jal 0x107c70
    /* nop */                                                   // 0x0017996c: nop 
    v0 = 1;                                                     // 0x00179970: addiu $v0, $zero, 1
    /* lwl $a0, 0xb($s0) */                                     // 0x0017997c: lwl $a0, 0xb($s0)
    /* lwr $a0, 8($s0) */                                       // 0x00179980: lwr $a0, 8($s0)
    /* swl $a0, 0xb($s1) */                                     // 0x0017998c: swl $a0, 0xb($s1)
    /* swr $a0, 8($s1) */                                       // 0x00179990: swr $a0, 8($s1)
label_0x179994:
    return;                                                     // 0x001799a0: jr $ra
    sp = sp + 0x20;                                             // 0x001799a4: addiu $sp, $sp, 0x20
}