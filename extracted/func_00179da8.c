void func_00179da8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179da8: addiu $sp, $sp, -0x20
    s0 = a1 & 0xff;                                             // 0x00179db0: andi $s0, $a1, 0xff
    func_00179a70();  // 0x179a18                                // 0x00179dc4: jal 0x179a18
    if (s1 == 0) goto label_0x179dfc;                           // 0x00179dd0: beqz $s1, 0x179dfc
    func_0017a2e0();  // 0x17a298                                // 0x00179dd8: jal 0x17a298
    /* nop */                                                   // 0x00179ddc: nop 
    v1 = 0xe0;                                                  // 0x00179de0: addiu $v1, $zero, 0xe0
    if (v0 != v1) goto label_0x179dfc;                          // 0x00179de4: bne $v0, $v1, 0x179dfc
    func_0017a218();  // 0x17a1a8                                // 0x00179dec: jal 0x17a1a8
    a0 = *(uint8_t*)((s1) + 0x1f);                              // 0x00179df0: lbu $a0, 0x1f($s1)
    *(uint32_t*)(s2) = v0;                                      // 0x00179df4: sw $v0, 0($s2)
    v0 = 1;                                                     // 0x00179df8: addiu $v0, $zero, 1
label_0x179dfc:
    return;                                                     // 0x00179e0c: jr $ra
    sp = sp + 0x20;                                             // 0x00179e10: addiu $sp, $sp, 0x20
}