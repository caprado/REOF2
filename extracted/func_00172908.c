void func_00172908() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00172908: addiu $sp, $sp, -0x30
    s1 = s0 + 0x94c;                                            // 0x00172918: addiu $s1, $s0, 0x94c
    func_00169ba0();  // 0x169b88                                // 0x00172924: jal 0x169b88
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0017292c: lw $v0, 0x18($s1)
    if (v0 != 0) goto label_0x172970;                           // 0x00172934: bnez $v0, 0x172970
    func_00172b38();  // 0x1729b8                                // 0x0017293c: jal 0x1729b8
    /* nop */                                                   // 0x00172940: nop 
    if (v0 == 0) goto label_0x172990;                           // 0x00172944: beqz $v0, 0x172990
    a1 = 1;                                                     // 0x00172948: addiu $a1, $zero, 1
    v1 = *(int32_t*)((s1) + 0x1c);                              // 0x0017294c: lw $v1, 0x1c($s1)
    v0 = 1;                                                     // 0x00172950: addiu $v0, $zero, 1
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x00172954: sw $v0, 0x18($s1)
    v1 = v1 + 1;                                                // 0x0017295c: addiu $v1, $v1, 1
    func_00171ea8();  // 0x171e18                                // 0x00172960: jal 0x171e18
    *(uint32_t*)((s1) + 0x1c) = v1;                             // 0x00172964: sw $v1, 0x1c($s1)
    goto label_0x172990;                                        // 0x00172968: b 0x172990
label_0x172970:
    func_00172c18();  // 0x172b38                                // 0x00172970: jal 0x172b38
    if (v0 == 0) goto label_0x172990;                           // 0x0017297c: beqz $v0, 0x172990
    func_00171ea8();  // 0x171e18                                // 0x00172984: jal 0x171e18
    *(uint32_t*)((s1) + 0x18) = 0;                              // 0x00172988: sw $zero, 0x18($s1)
label_0x172990:
    func_00169bc8();  // 0x169ba0                                // 0x00172990: jal 0x169ba0
    return;                                                     // 0x001729ac: jr $ra
    sp = sp + 0x30;                                             // 0x001729b0: addiu $sp, $sp, 0x30
}