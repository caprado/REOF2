void func_001089b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001089b8: addiu $sp, $sp, -0x30
    s4 = a0 + 0x14;                                             // 0x001089cc: addiu $s4, $a0, 0x14
    v0 = g_ffff0010;  // Global at 0xffff0010                   // 0x001089dc: lw $v0, 0x10($a0)
    v0 = v0 << 2;                                               // 0x001089e0: sll $v0, $v0, 2
    s2 = s4 + v0;                                               // 0x001089e4: addu $s2, $s4, $v0
    s2 = s2 + -4;                                               // 0x001089e8: addiu $s2, $s2, -4
    s3 = *(int32_t*)(s2);                                       // 0x001089ec: lw $s3, 0($s2)
    func_00108110();  // 108110                                // 0x001089f0: jal 0x108110
    v0 = 0x20;                                                  // 0x001089fc: addiu $v0, $zero, 0x20
    v0 = v0 - a2;                                               // 0x00108a00: subu $v0, $v0, $a2
    v1 = (a2 < 0xb) ? 1 : 0;                                    // 0x00108a04: slti $v1, $a2, 0xb
    if (v1 == 0) goto label_0x108a78;                           // 0x00108a08: beqz $v1, 0x108a78
    *(uint32_t*)(s0) = v0;                                      // 0x00108a0c: sw $v0, 0($s0)
    v0 = 0xb;                                                   // 0x00108a10: addiu $v0, $zero, 0xb
    a0 = 0x3ff0 << 16;                                          // 0x00108a14: lui $a0, 0x3ff0
    v0 = v0 - a2;                                               // 0x00108a18: subu $v0, $v0, $a2
    v1 = 0xffff << 16;                                          // 0x00108a1c: lui $v1, 0xffff
    v0 = (unsigned)s3 >> v0;                                    // 0x00108a24: srlv $v0, $s3, $v0
    s1 = s1 & v1;                                               // 0x00108a28: and $s1, $s1, $v1
    v0 = v0 | a0;                                               // 0x00108a2c: or $v0, $v0, $a0
    v1 = ((unsigned)s4 < (unsigned)s2) ? 1 : 0;                 // 0x00108a38: sltu $v1, $s4, $s2
    if (v1 == 0) goto label_0x108a48;                           // 0x00108a3c: beqz $v1, 0x108a48
    s1 = s1 | v0;                                               // 0x00108a40: or $s1, $s1, $v0
    a0 = *(int32_t*)((s2) + -4);                                // 0x00108a44: lw $a0, -4($s2)
label_0x108a48:
    v0 = 0xb;                                                   // 0x00108a48: addiu $v0, $zero, 0xb
    v1 = a2 + 0x15;                                             // 0x00108a4c: addiu $v1, $a2, 0x15
    v0 = v0 - a2;                                               // 0x00108a50: subu $v0, $v0, $a2
    v1 = s3 << v1;                                              // 0x00108a54: sllv $v1, $s3, $v1
    v0 = (unsigned)a0 >> v0;                                    // 0x00108a58: srlv $v0, $a0, $v0
    a0 = -1;                                                    // 0x00108a5c: addiu $a0, $zero, -1
    v1 = v1 | v0;                                               // 0x00108a64: or $v1, $v1, $v0
    s1 = s1 & a0;                                               // 0x00108a68: and $s1, $s1, $a0
    goto label_0x108b28;                                        // 0x00108a70: b 0x108b28
label_0x108a78:
    v0 = ((unsigned)s4 < (unsigned)s2) ? 1 : 0;                 // 0x00108a78: sltu $v0, $s4, $s2
    /* beqzl $v0, 0x108a8c */                                   // 0x00108a7c: beqzl $v0, 0x108a8c
    s2 = s2 + -4;                                               // 0x00108a84: addiu $s2, $s2, -4
    a3 = *(int32_t*)(s2);                                       // 0x00108a88: lw $a3, 0($s2)
    a2 = a2 + -0xb;                                             // 0x00108a8c: addiu $a2, $a2, -0xb
    if (a2 == 0) goto label_0x108af8;                           // 0x00108a90: beqz $a2, 0x108af8
    v1 = -a2;                                                   // 0x00108a94: negu $v1, $a2
    v0 = s3 << a2;                                              // 0x00108a98: sllv $v0, $s3, $a2
    v1 = (unsigned)a3 >> v1;                                    // 0x00108a9c: srlv $v1, $a3, $v1
    a1 = 0x3ff0 << 16;                                          // 0x00108aa0: lui $a1, 0x3ff0
    v0 = v0 | v1;                                               // 0x00108aa4: or $v0, $v0, $v1
    v1 = ((unsigned)s4 < (unsigned)s2) ? 1 : 0;                 // 0x00108aa8: sltu $v1, $s4, $s2
    a0 = 0xffff << 16;                                          // 0x00108aac: lui $a0, 0xffff
    v0 = v0 | a1;                                               // 0x00108ab4: or $v0, $v0, $a1
    s1 = s1 & a0;                                               // 0x00108ab8: and $s1, $s1, $a0
    s1 = s1 | v0;                                               // 0x00108ac0: or $s1, $s1, $v0
    if (v1 == 0) goto label_0x108ad0;                           // 0x00108ac4: beqz $v1, 0x108ad0
    s3 = *(int32_t*)((s2) + -4);                                // 0x00108acc: lw $s3, -4($s2)
label_0x108ad0:
    v0 = -a2;                                                   // 0x00108ad0: negu $v0, $a2
    v1 = a3 << a2;                                              // 0x00108ad4: sllv $v1, $a3, $a2
    v0 = (unsigned)s3 >> v0;                                    // 0x00108ad8: srlv $v0, $s3, $v0
    a0 = -1;                                                    // 0x00108adc: addiu $a0, $zero, -1
    v1 = v1 | v0;                                               // 0x00108ae4: or $v1, $v1, $v0
    s1 = s1 & a0;                                               // 0x00108ae8: and $s1, $s1, $a0
    goto label_0x108b28;                                        // 0x00108af0: b 0x108b28
label_0x108af8:
    v0 = 0x3ff0 << 16;                                          // 0x00108af8: lui $v0, 0x3ff0
    v1 = 0xffff << 16;                                          // 0x00108afc: lui $v1, 0xffff
    v0 = s3 | v0;                                               // 0x00108b04: or $v0, $s3, $v0
    s1 = s1 & v1;                                               // 0x00108b08: and $s1, $s1, $v1
    a0 = -1;                                                    // 0x00108b10: addiu $a0, $zero, -1
    s1 = s1 | v0;                                               // 0x00108b1c: or $s1, $s1, $v0
    s1 = s1 & a0;                                               // 0x00108b24: and $s1, $s1, $a0
label_0x108b28:
    s1 = s1 | v1;                                               // 0x00108b28: or $s1, $s1, $v1
    return;                                                     // 0x00108b48: jr $ra
    sp = sp + 0x30;                                             // 0x00108b4c: addiu $sp, $sp, 0x30
}