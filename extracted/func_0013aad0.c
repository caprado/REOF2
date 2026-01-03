void func_0013aad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013aad0: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x13aaf8;                           // 0x0013aae4: bnez $s0, 0x13aaf8
    v0 = 0x20 << 16;                                            // 0x0013aaec: lui $v0, 0x20
    goto label_0x13ab84;                                        // 0x0013aaf0: b 0x13ab84
    g_00203ef0 = 0;  // Global at 0x00203ef0                    // 0x0013aaf4: sb $zero, 0x3ef0($v0)
label_0x13aaf8:
    v1 = *(int8_t*)(s0);                                        // 0x0013aaf8: lb $v1, 0($s0)
    v0 = 0x2f;                                                  // 0x0013aafc: addiu $v0, $zero, 0x2f
    if (v1 == v0) goto label_0x13ab38;                          // 0x0013ab00: beq $v1, $v0, 0x13ab38
    v0 = 0x5c;                                                  // 0x0013ab04: addiu $v0, $zero, 0x5c
    if (v1 == v0) goto label_0x13ab38;                          // 0x0013ab08: beq $v1, $v0, 0x13ab38
    v0 = 0x22 << 16;                                            // 0x0013ab0c: lui $v0, 0x22
    a0 = 0x20 << 16;                                            // 0x0013ab10: lui $a0, 0x20
    t0 = v0 + 0x54f0;                                           // 0x0013ab14: addiu $t0, $v0, 0x54f0
    a3 = a0 + 0x3ef0;                                           // 0x0013ab18: addiu $a3, $a0, 0x3ef0
    v1 = g_002254f0;  // Global at 0x002254f0                   // 0x0013ab1c: lb $v1, 0($t0)
    a2 = g_002254f1;  // Global at 0x002254f1                   // 0x0013ab20: lb $a2, 1($t0)
    g_00203ef0 = v1;  // Global at 0x00203ef0                   // 0x0013ab24: sb $v1, 0($a3)
    g_00203ef1 = a2;  // Global at 0x00203ef1                   // 0x0013ab28: sb $a2, 1($a3)
    goto label_0x13ab44;                                        // 0x0013ab2c: b 0x13ab44
    s1 = a0 + 0x3ef0;                                           // 0x0013ab30: addiu $s1, $a0, 0x3ef0
    /* nop */                                                   // 0x0013ab34: nop 
label_0x13ab38:
    a0 = 0x20 << 16;                                            // 0x0013ab38: lui $a0, 0x20
    g_00203ef0 = 0;  // Global at 0x00203ef0                    // 0x0013ab3c: sb $zero, 0x3ef0($a0)
    s1 = a0 + 0x3ef0;                                           // 0x0013ab40: addiu $s1, $a0, 0x3ef0
label_0x13ab44:
    func_0010a860();  // 10a860                                // 0x0013ab44: jal 0x10a860
    func_0010ae00();  // 10ae00                                // 0x0013ab4c: jal 0x10ae00
    v0 = s0 + v0;                                               // 0x0013ab58: addu $v0, $s0, $v0
    v1 = 0x2f;                                                  // 0x0013ab5c: addiu $v1, $zero, 0x2f
    v0 = g_0021ffff;  // Global at 0x0021ffff                   // 0x0013ab60: lb $v0, -1($v0)
    if (v0 == v1) goto label_0x13ab74;                          // 0x0013ab64: beq $v0, $v1, 0x13ab74
    a1 = 0x5c;                                                  // 0x0013ab68: addiu $a1, $zero, 0x5c
    if (v0 != a1) goto label_0x13ab88;                          // 0x0013ab6c: bne $v0, $a1, 0x13ab88
label_0x13ab74:
    func_0010ae00();  // 10ae00                                // 0x0013ab74: jal 0x10ae00
    /* nop */                                                   // 0x0013ab78: nop 
    v0 = v0 + s1;                                               // 0x0013ab7c: addu $v0, $v0, $s1
    g_0021ffff = 0;  // Global at 0x0021ffff                    // 0x0013ab80: sb $zero, -1($v0)
label_0x13ab84:
label_0x13ab88:
    return;                                                     // 0x0013ab90: jr $ra
    sp = sp + 0x20;                                             // 0x0013ab94: addiu $sp, $sp, 0x20
}