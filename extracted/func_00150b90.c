void func_00150b90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00150b90: addiu $sp, $sp, -0x30
    v0 = 1;                                                     // 0x00150b94: addiu $v0, $zero, 1
    v1 = *(int32_t*)((s2) + 0xc);                               // 0x00150bb0: lw $v1, 0xc($s2)
    if (v1 != v0) goto label_0x150c30;                          // 0x00150bb4: bne $v1, $v0, 0x150c30
    v0 = v1 << 3;                                               // 0x00150bb8: sll $v0, $v1, 3
    s0 = *(int32_t*)((s2) + 0x2c4);                             // 0x00150bbc: lw $s0, 0x2c4($s2)
    func_00112048();  // 0x111f90                                // 0x00150bc0: jal 0x111f90
    if (s0 >= 0) goto label_0x150bec;                           // 0x00150bcc: bgezl $s0, 0x150bec
    s0 = *(int32_t*)((s2) + 0x2c8);                             // 0x00150bd0: lw $s0, 0x2c8($s2)
    a1 = 0 | 0x83e0;                                            // 0x00150bd4: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x00150bdc: jal 0x111998
    s0 = *(int32_t*)((s2) + 0x2c8);                             // 0x00150be8: lw $s0, 0x2c8($s2)
label_0x150bec:
    func_00112048();  // 0x111f90                                // 0x00150bec: jal 0x111f90
    if (s0 >= 0) goto label_0x150c0c;                           // 0x00150bf4: bgez $s0, 0x150c0c
    /* nop */                                                   // 0x00150bf8: nop 
    a1 = 0 | 0x83e0;                                            // 0x00150bfc: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x00150c04: jal 0x111998
label_0x150c0c:
    func_00111e20();  // 0x111ce0                                // 0x00150c10: jal 0x111ce0
    v1 = 0 | 0xffc0;                                            // 0x00150c18: ori $v1, $zero, 0xffc0
    goto label_0x150d18;                                        // 0x00150c28: b 0x150d18
label_0x150c30:
    s0 = *(int32_t*)((s2) + 0x80);                              // 0x00150c30: lw $s0, 0x80($s2)
    s3 = 0x22 << 16;                                            // 0x00150c34: lui $s3, 0x22
    s3 = s3 + v0;                                               // 0x00150c38: addu $s3, $s3, $v0
    /* beqzl $s0, 0x150cb0 */                                   // 0x00150c44: beqzl $s0, 0x150cb0
    s0 = *(int32_t*)((s2) + 0x2c4);                             // 0x00150c48: lw $s0, 0x2c4($s2)
    s1 = *(int32_t*)((s2) + 0x84);                              // 0x00150c4c: lw $s1, 0x84($s2)
    /* beqzl $s1, 0x150cb0 */                                   // 0x00150c50: beqzl $s1, 0x150cb0
    s0 = *(int32_t*)((s2) + 0x2c4);                             // 0x00150c54: lw $s0, 0x2c4($s2)
    func_00112048();  // 0x111f90                                // 0x00150c58: jal 0x111f90
    if (s0 >= 0) goto label_0x150c78;                           // 0x00150c60: bgez $s0, 0x150c78
    /* nop */                                                   // 0x00150c64: nop 
    a1 = 0 | 0x83e0;                                            // 0x00150c68: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x00150c70: jal 0x111998
label_0x150c78:
    func_00111ce0();  // 0x111a58                                // 0x00150c7c: jal 0x111a58
    func_00112048();  // 0x111f90                                // 0x00150c88: jal 0x111f90
    if (s1 >= 0) goto label_0x150ca8;                           // 0x00150c90: bgez $s1, 0x150ca8
    /* nop */                                                   // 0x00150c94: nop 
    a1 = 0 | 0x83e0;                                            // 0x00150c98: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x00150ca0: jal 0x111998
label_0x150ca8:
    goto label_0x150d08;                                        // 0x00150ca8: b 0x150d08
    func_00112048();  // 0x111f90                                // 0x00150cb0: jal 0x111f90
    if (s0 >= 0) goto label_0x150cd0;                           // 0x00150cb8: bgez $s0, 0x150cd0
    /* nop */                                                   // 0x00150cbc: nop 
    a1 = 0 | 0x83e0;                                            // 0x00150cc0: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x00150cc8: jal 0x111998
label_0x150cd0:
    func_00111ce0();  // 0x111a58                                // 0x00150cd4: jal 0x111a58
    s0 = *(int32_t*)((s2) + 0x2c8);                             // 0x00150cdc: lw $s0, 0x2c8($s2)
    func_00112048();  // 0x111f90                                // 0x00150ce4: jal 0x111f90
    if (s0 >= 0) goto label_0x150d04;                           // 0x00150cec: bgez $s0, 0x150d04
    /* nop */                                                   // 0x00150cf0: nop 
    a1 = 0 | 0x83e0;                                            // 0x00150cf4: ori $a1, $zero, 0x83e0
    func_001119f0();  // 0x111998                                // 0x00150cfc: jal 0x111998
label_0x150d04:
label_0x150d08:
    func_00111e20();  // 0x111ce0                                // 0x00150d08: jal 0x111ce0
label_0x150d18:
    return;                                                     // 0x00150d28: jr $ra
    sp = sp + 0x30;                                             // 0x00150d2c: addiu $sp, $sp, 0x30
}