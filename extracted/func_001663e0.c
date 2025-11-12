void func_001663e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001663e0: addiu $sp, $sp, -0x50
    s1 = s0 + 8;                                                // 0x001663f0: addiu $s1, $s0, 8
    func_00166580();  // 0x166540                                // 0x00166414: jal 0x166540
    a2 = *(int32_t*)((s0) + 4);                                 // 0x00166418: lw $a2, 4($s0)
    v1 = *(int32_t*)(s1);                                       // 0x0016641c: lw $v1, 0($s1)
    v0 = *(int32_t*)((s0) + 0x28);                              // 0x00166420: lw $v0, 0x28($s0)
    /* divide: v1 / v0 -> hi:lo */                              // 0x00166430: div $zero, $v1, $v0
    /* beqzl $v0, 0x166440 */                                   // 0x00166438: beqzl $v0, 0x166440
    /* break (trap) */                                          // 0x0016643c: break 0, 7
    /* mfhi $t0 */                                              // 0x00166440
    func_00166648();  // 0x166580                                // 0x00166444: jal 0x166580
    /* nop */                                                   // 0x00166448: nop 
    a3 = 1;                                                     // 0x00166458: addiu $a3, $zero, 1
    t0 = 0x800;                                                 // 0x0016645c: addiu $t0, $zero, 0x800
    func_00166648();  // 0x166580                                // 0x00166460: jal 0x166580
    a3 = 2;                                                     // 0x00166474: addiu $a3, $zero, 2
    func_00166648();  // 0x166580                                // 0x0016647c: jal 0x166580
    a1 = 0xff00 << 16;                                          // 0x00166484: lui $a1, 0xff00
    if (s0 != 0) goto label_0x1664a0;                           // 0x00166488: bnez $s0, 0x1664a0
    if (s4 != 0) goto label_0x1664a0;                           // 0x00166490: bnez $s4, 0x1664a0
    /* nop */                                                   // 0x00166494: nop 
    if (v0 == 0) goto label_0x1664b0;                           // 0x00166498: beqz $v0, 0x1664b0
label_0x1664a0:
    func_00169940();  // 0x1698d0                                // 0x001664a0: jal 0x1698d0
    a1 = a1 | 0x40a;                                            // 0x001664a4: ori $a1, $a1, 0x40a
    goto label_0x166520;                                        // 0x001664a8: b 0x166520
label_0x1664b0:
    t0 = 3;                                                     // 0x001664b0: addiu $t0, $zero, 3
    func_00166800();  // 0x166748                                // 0x001664bc: jal 0x166748
    func_00166928();  // 0x166800                                // 0x001664d0: jal 0x166800
    a3 = 4;                                                     // 0x001664d4: addiu $a3, $zero, 4
    t0 = 5;                                                     // 0x001664e0: addiu $t0, $zero, 5
    func_00166800();  // 0x166748                                // 0x001664e8: jal 0x166748
    func_00166928();  // 0x166800                                // 0x001664fc: jal 0x166800
    a3 = 6;                                                     // 0x00166500: addiu $a3, $zero, 6
    func_00166978();  // 0x166928                                // 0x00166510: jal 0x166928
    a3 = 7;                                                     // 0x00166514: addiu $a3, $zero, 7
label_0x166520:
    return;                                                     // 0x00166534: jr $ra
    sp = sp + 0x50;                                             // 0x00166538: addiu $sp, $sp, 0x50
}