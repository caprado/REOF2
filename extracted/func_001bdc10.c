void func_001bdc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bdc10: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((gp) + -0x7c50);                           // 0x001bdc1c: lw $v1, -0x7c50($gp)
    if (v1 != 0) goto label_0x1bdcdc;                           // 0x001bdc20: bnez $v1, 0x1bdcdc
    v1 = *(int32_t*)((gp) + -0x632c);                           // 0x001bdc28: lw $v1, -0x632c($gp)
    a0 = 1;                                                     // 0x001bdc2c: addiu $a0, $zero, 1
    if (v1 != a0) goto label_0x1bdccc;                          // 0x001bdc30: bne $v1, $a0, 0x1bdccc
    at = 0x31 << 16;                                            // 0x001bdc34: lui $at, 0x31
    v1 = *(int32_t*)((gp) + -0x6328);                           // 0x001bdc38: lw $v1, -0x6328($gp)
    if (v1 == s0) goto label_0x1bdcec;                          // 0x001bdc3c: beq $v1, $s0, 0x1bdcec
    /* nop */                                                   // 0x001bdc40: nop 
    if (s0 != 0) goto label_0x1bdc70;                           // 0x001bdc44: bnez $s0, 0x1bdc70
    /* nop */                                                   // 0x001bdc48: nop 
    func_001bdd80();  // 1bdd80                                // 0x001bdc4c: jal 0x1bdd80
    /* nop */                                                   // 0x001bdc50: nop 
    if (v0 < 0) goto label_0x1bdcec;                            // 0x001bdc54: bltz $v0, 0x1bdcec
    a1 = 0x24 << 16;                                            // 0x001bdc58: lui $a1, 0x24
    func_001a8450();  // 1a8450                                // 0x001bdc60: jal 0x1a8450
    a1 = a1 + -0x1ff8;                                          // 0x001bdc64: addiu $a1, $a1, -0x1ff8
    goto label_0x1bdc90;                                        // 0x001bdc68: b 0x1bdc90
    /* nop */                                                   // 0x001bdc6c: nop 
label_0x1bdc70:
    func_001bdd30();  // 1bdd30                                // 0x001bdc70: jal 0x1bdd30
    /* nop */                                                   // 0x001bdc74: nop 
    if (v0 < 0) goto label_0x1bdcec;                            // 0x001bdc78: bltz $v0, 0x1bdcec
    a0 = 0x24 << 16;                                            // 0x001bdc7c: lui $a0, 0x24
    a1 = 0x24 << 16;                                            // 0x001bdc80: lui $a1, 0x24
    a0 = a0 + -0x1ff0;                                          // 0x001bdc84: addiu $a0, $a0, -0x1ff0
    func_001a8450();  // 1a8450                                // 0x001bdc88: jal 0x1a8450
    a1 = &str_0023e018;  // "pfs0:"                             // 0x001bdc8c: addiu $a1, $a1, -0x1fe8
label_0x1bdc90:
    func_001a90e0();  // 1a90e0                                // 0x001bdc90: jal 0x1a90e0
    /* nop */                                                   // 0x001bdc94: nop 
    at = 0x31 << 16;                                            // 0x001bdc98: lui $at, 0x31
    *(uint32_t*)((gp) + -0x6328) = s0;                          // 0x001bdc9c: sw $s0, -0x6328($gp)
    if (s0 != 0) goto label_0x1bdcb8;                           // 0x001bdca0: bnez $s0, 0x1bdcb8
    g_00313867 = s0;  // Global at 0x00313867                   // 0x001bdca4: sb $s0, 0x3867($at)
    v1 = 3;                                                     // 0x001bdca8: addiu $v1, $zero, 3
    at = 0x31 << 16;                                            // 0x001bdcac: lui $at, 0x31
    goto label_0x1bdcc4;                                        // 0x001bdcb0: b 0x1bdcc4
    g_003137b1 = v1;  // Global at 0x003137b1                   // 0x001bdcb4: sb $v1, 0x37b1($at)
label_0x1bdcb8:
    v1 = 2;                                                     // 0x001bdcb8: addiu $v1, $zero, 2
    at = 0x31 << 16;                                            // 0x001bdcbc: lui $at, 0x31
    g_003137b1 = v1;  // Global at 0x003137b1                   // 0x001bdcc0: sb $v1, 0x37b1($at)
label_0x1bdcc4:
    goto label_0x1bdcf0;                                        // 0x001bdcc4: b 0x1bdcf0
label_0x1bdccc:
    g_003137b1 = a0;  // Global at 0x003137b1                   // 0x001bdccc: sb $a0, 0x37b1($at)
    at = 0x31 << 16;                                            // 0x001bdcd0: lui $at, 0x31
    goto label_0x1bdcec;                                        // 0x001bdcd4: b 0x1bdcec
    g_00313867 = 0;  // Global at 0x00313867                    // 0x001bdcd8: sb $zero, 0x3867($at)
label_0x1bdcdc:
    at = 0x31 << 16;                                            // 0x001bdcdc: lui $at, 0x31
    g_003137b1 = 0;  // Global at 0x003137b1                    // 0x001bdce0: sb $zero, 0x37b1($at)
    at = 0x31 << 16;                                            // 0x001bdce4: lui $at, 0x31
    g_00313867 = 0;  // Global at 0x00313867                    // 0x001bdce8: sb $zero, 0x3867($at)
label_0x1bdcec:
label_0x1bdcf0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bdcf0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bdcf4: jr $ra
    sp = sp + 0x20;                                             // 0x001bdcf8: addiu $sp, $sp, 0x20
}