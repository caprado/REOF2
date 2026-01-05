void func_00165cd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00165cd8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00165cdc: lui $a1, 0xff00
    a1 = a1 | 0xc03;                                            // 0x00165ce4: ori $a1, $a1, 0xc03
    return func_00169940();  // Tail call                        // 0x00165cec: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00165cf0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00165cf4: nop 
    sp = sp + -0x10;                                            // 0x00165cf8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00165cfc: lui $a1, 0xff00
    a1 = a1 | 0xc03;                                            // 0x00165d04: ori $a1, $a1, 0xc03
    return func_00169940();  // Tail call                        // 0x00165d0c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00165d10: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00165d14: nop 
    sp = sp + -0x10;                                            // 0x00165d18: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00165d1c: lui $a1, 0xff00
    a1 = a1 | 0xc03;                                            // 0x00165d24: ori $a1, $a1, 0xc03
    return func_00169940();  // Tail call                        // 0x00165d2c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00165d30: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00165d34: nop 
    sp = sp + -0x10;                                            // 0x00165d38: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x00165d3c: lui $a1, 0xff00
    a1 = a1 | 0xc03;                                            // 0x00165d44: ori $a1, $a1, 0xc03
    return func_00169940();  // Tail call                        // 0x00165d4c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x00165d50: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00165d54: nop 
    sp = sp + -0x20;                                            // 0x00165d58: addiu $sp, $sp, -0x20
    func_00165de8();  // 165de8                                // 0x00165d68: jal 0x165de8
    /* beqzl $a2, 0x165dd4 */                                   // 0x00165d74: beqzl $a2, 0x165dd4
    s0 = *(int32_t*)((s0) + 0x1b74);                            // 0x00165d7c: lw $s0, 0x1b74($s0)
    v1 = *(int32_t*)((s0) + 0x34);                              // 0x00165d84: lw $v1, 0x34($s0)
    if (v1 != 0) goto label_0x165dd0;                           // 0x00165d88: bnez $v1, 0x165dd0
    s1 = *(int32_t*)(s0);                                       // 0x00165d8c: lw $s1, 0($s0)
    v1 = *(int32_t*)(a2);                                       // 0x00165d90: lw $v1, 0($a2)
    if (v1 == 0) goto label_0x165dd0;                           // 0x00165d94: beqz $v1, 0x165dd0
    a3 = *(int32_t*)((a2) + 0x14);                              // 0x00165d9c: lw $a3, 0x14($a2)
    a1 = *(int32_t*)((a2) + 0xc);                               // 0x00165da0: lw $a1, 0xc($a2)
    func_0012a118();  // 12a118                                // 0x00165da4: jal 0x12a118
    a2 = *(int32_t*)((a2) + 0x10);                              // 0x00165da8: lw $a2, 0x10($a2)
    func_00132e00();  // 132e00                                // 0x00165db0: jal 0x132e00
    v0 = 1;                                                     // 0x00165db8: addiu $v0, $zero, 1
    v1 = 0x16 << 16;                                            // 0x00165dbc: lui $v1, 0x16
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x00165dc0: sw $v0, 0x34($s0)
    v1 = v1 + 0x4e80;                                           // 0x00165dc4: addiu $v1, $v1, 0x4e80
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x00165dcc: sw $v1, 0x3c($s0)
label_0x165dd0:
    return;                                                     // 0x00165ddc: jr $ra
    sp = sp + 0x20;                                             // 0x00165de0: addiu $sp, $sp, 0x20
}