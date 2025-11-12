void func_00164d60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00164d60: addiu $sp, $sp, -0x60
    v1 = s1 + 0x24;                                             // 0x00164d74: addiu $v1, $s1, 0x24
    v0 = ((unsigned)s1 < (unsigned)v1) ? 1 : 0;                 // 0x00164d7c: sltu $v0, $s1, $v1
    s2 = s4 + a2;                                               // 0x00164da0: addu $s2, $s4, $a2
    if (v0 == 0) goto label_0x164e20;                           // 0x00164dac: beqz $v0, 0x164e20
    /* nop */                                                   // 0x00164dbc: nop 
label_0x164dc4:
    v0 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x00164dc4: sltu $v0, $s0, $s2
    if (v0 == 0) goto label_0x164e08;                           // 0x00164dc8: beqz $v0, 0x164e08
    /* nop */                                                   // 0x00164dcc: nop 
    v0 = *(int8_t*)(s0);                                        // 0x00164dd0: lb $v0, 0($s0)
    if (v0 >= 0) goto label_0x164dc4;                           // 0x00164dd4: bgezl $v0, 0x164dc4
    s0 = s0 + 0x12;                                             // 0x00164dd8: addiu $s0, $s0, 0x12
    a1 = 0x12;                                                  // 0x00164de0: addiu $a1, $zero, 0x12
    func_00132f40();  // 0x132f00                                // 0x00164de8: jal 0x132f00
    s3 = 1;                                                     // 0x00164dec: addiu $s3, $zero, 1
    if (v0 == 0) goto label_0x164e08;                           // 0x00164df0: beqz $v0, 0x164e08
    v0 = ((unsigned)s5 < (unsigned)s0) ? 1 : 0;                 // 0x00164df4: sltu $v0, $s5, $s0
    if (v0 == 0) goto label_0x164e08;                           // 0x00164df8: beqz $v0, 0x164e08
    /* nop */                                                   // 0x00164dfc: nop 
label_0x164e08:
    if (s3 == 0) goto label_0x164e4c;                           // 0x00164e08: beqz $s3, 0x164e4c
    s1 = s1 + 2;                                                // 0x00164e10: addiu $s1, $s1, 2
    v0 = ((unsigned)s1 < (unsigned)s7) ? 1 : 0;                 // 0x00164e14: sltu $v0, $s1, $s7
    /* bnezl $v0, 0x164dc0 */                                   // 0x00164e18: bnezl $v0, 0x164dc0
label_0x164e20:
    if (s3 == 0) goto label_0x164e4c;                           // 0x00164e20: beqz $s3, 0x164e4c
    /* bnezl $s6, 0x164e48 */                                   // 0x00164e28: bnezl $s6, 0x164e48
    a1 = 0xff00 << 16;                                          // 0x00164e30: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x00164e38: jal 0x1698d0
    a1 = a1 | 0xc0a;                                            // 0x00164e3c: ori $a1, $a1, 0xc0a
    goto label_0x164e4c;                                        // 0x00164e40: b 0x164e4c
label_0x164e4c:
    return;                                                     // 0x00164e74: jr $ra
    sp = sp + 0x60;                                             // 0x00164e78: addiu $sp, $sp, 0x60
}