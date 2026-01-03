void func_00163d98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00163d98: lui $v0, 0x21
    sp = sp + -0x20;                                            // 0x00163d9c: addiu $sp, $sp, -0x20
    a1 = g_00214454;  // Global at 0x00214454                   // 0x00163da0: lw $a1, 0x4454($v0)
    v1 = 1;                                                     // 0x00163da8: addiu $v1, $zero, 1
    if (a1 != v1) goto label_0x163e20;                          // 0x00163db8: bne $a1, $v1, 0x163e20
    if (s1 != 0) goto label_0x163de0;                           // 0x00163dc0: bnez $s1, 0x163de0
    /* nop */                                                   // 0x00163dc4: nop 
    a0 = 0x23 << 16;                                            // 0x00163dc8: lui $a0, 0x23
    func_00163410();  // 163410                                // 0x00163dcc: jal 0x163410
    a0 = &str_00228dc8;  // "E2011101: MWSFSVR_IsSvrBdrHndl: handle is invalid." // 0x00163dd0: addiu $a0, $a0, -0x7238
label_0x163dd4:
    goto label_0x163e20;                                        // 0x00163dd4: b 0x163e20
    /* nop */                                                   // 0x00163ddc: nop 
label_0x163de0:
    s0 = *(int32_t*)((s1) + 4);                                 // 0x00163de0: lw $s0, 4($s1)
    if (s0 != a1) goto label_0x163e20;                          // 0x00163de4: bne $s0, $a1, 0x163e20
    func_00163f80();  // 163f80                                // 0x00163dec: jal 0x163f80
    /* nop */                                                   // 0x00163df0: nop 
    if (v0 == s0) goto label_0x163e20;                          // 0x00163df4: beql $v0, $s0, 0x163e20
    func_00164028();  // 164028                                // 0x00163dfc: jal 0x164028
    /* nop */                                                   // 0x00163e00: nop 
    if (v0 == s0) goto label_0x163dd4;                          // 0x00163e04: beq $v0, $s0, 0x163dd4
    return func_00163ef8();  // Tail call                        // 0x00163e18: j 0x163e38
    sp = sp + 0x20;                                             // 0x00163e1c: addiu $sp, $sp, 0x20
label_0x163e20:
    return;                                                     // 0x00163e2c: jr $ra
    sp = sp + 0x20;                                             // 0x00163e30: addiu $sp, $sp, 0x20
}