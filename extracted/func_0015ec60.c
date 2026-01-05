void func_0015ec60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0015ec60: addiu $sp, $sp, -0x10
    a0 = g_00227950;  // Global at 0x00227950                   // 0x0015ec68: lw $a0, 0x40($a0)
    return func_00173c50();  // Tail call                        // 0x0015ec70: j 0x173be8
    sp = sp + 0x10;                                             // 0x0015ec74: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0015ec78: addiu $sp, $sp, -0x20
    func_0015e338();  // 15e338                                // 0x0015ec8c: jal 0x15e338
    s1 = s0 + 0x1ec;                                            // 0x0015ec90: addiu $s1, $s0, 0x1ec
    v0 = *(int32_t*)((s0) + 0x40);                              // 0x0015ec94: lw $v0, 0x40($s0)
    if (v0 == 0) goto label_0x15ed10;                           // 0x0015ec98: beqz $v0, 0x15ed10
    func_0015c888();  // 15c888                                // 0x0015eca0: jal 0x15c888
    /* nop */                                                   // 0x0015eca4: nop 
    if (v0 == 0) goto label_0x15ecc8;                           // 0x0015eca8: beqz $v0, 0x15ecc8
    a0 = 0x22 << 16;                                            // 0x0015ecb0: lui $a0, 0x22
    a0 = &str_002278e0;  // "E201213 mw_sfd_start_ex: can't set AddInfSJ" // 0x0015ecbc: addiu $a0, $a0, 0x78e0
    return func_001634a8();  // Tail call                        // 0x0015ecc0: j 0x163410
    sp = sp + 0x20;                                             // 0x0015ecc4: addiu $sp, $sp, 0x20
label_0x15ecc8:
    func_00162f80();  // 162f80                                // 0x0015ecc8: jal 0x162f80
    func_0015dce0();  // 15dce0                                // 0x0015ecd0: jal 0x15dce0
    func_001616b8();  // 1616b8                                // 0x0015ecd8: jal 0x1616b8
    func_00161638();  // 161638                                // 0x0015ece0: jal 0x161638
    a0 = 0x22 << 16;                                            // 0x0015ece8: lui $a0, 0x22
    if (v0 == 0) goto label_0x15ed08;                           // 0x0015ecec: beqz $v0, 0x15ed08
    a0 = &str_00227910;  // "E1122601: mwPlyStartFname: handle is invalid." // 0x0015ecf0: addiu $a0, $a0, 0x7910
    return func_001634a8();  // Tail call                        // 0x0015ed00: j 0x163410
    sp = sp + 0x20;                                             // 0x0015ed04: addiu $sp, $sp, 0x20
label_0x15ed08:
    func_00161698();  // 161698                                // 0x0015ed08: jal 0x161698
label_0x15ed10:
    func_0015ed68();  // 15ed68                                // 0x0015ed10: jal 0x15ed68
    func_0015eb08();  // 15eb08                                // 0x0015ed18: jal 0x15eb08
    func_0015f0b0();  // 15f0b0                                // 0x0015ed24: jal 0x15f0b0
    a1 = *(int8_t*)((s0) + 0x72);                               // 0x0015ed28: lb $a1, 0x72($s0)
    func_00162d38();  // 162d38                                // 0x0015ed30: jal 0x162d38
    a1 = 1;                                                     // 0x0015ed34: addiu $a1, $zero, 1
    func_00162bb0();  // 162bb0                                // 0x0015ed38: jal 0x162bb0
    *(uint32_t*)((s0) + 0x84) = 0;                              // 0x0015ed40: sw $zero, 0x84($s0)
    v0 = 1;                                                     // 0x0015ed44: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 0x71) = 0;                               // 0x0015ed48: sb $zero, 0x71($s0)
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0015ed4c: sw $v0, 8($s0)
    return;                                                     // 0x0015ed5c: jr $ra
    sp = sp + 0x20;                                             // 0x0015ed60: addiu $sp, $sp, 0x20
}