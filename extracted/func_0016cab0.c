void func_0016cab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0016cab0: addiu $sp, $sp, -0x50
    *(uint32_t*)(s6) = 0;                                       // 0x0016cadc: sw $zero, 0($s6)
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x0016cae0: lw $v0, 0xc($s2)
    if (v0 == 0) goto label_0x16cbb8;                           // 0x0016cae4: beqz $v0, 0x16cbb8
    a0 = *(int32_t*)((s2) + 8);                                 // 0x0016caec: lw $a0, 8($s2)
    func_00158410();  // 0x158310                                // 0x0016caf8: jal 0x158310
    a0 = a0 + v0;                                               // 0x0016cafc: addu $a0, $a0, $v0
    /* beqzl $s1, 0x16cb30 */                                   // 0x0016cb04: beqzl $s1, 0x16cb30
    s3 = *(int32_t*)((s2) + 4);                                 // 0x0016cb08: lw $s3, 4($s2)
    goto label_0x16cbdc;                                        // 0x0016cb0c: b 0x16cbdc
    /* nop */                                                   // 0x0016cb10: nop 
    /* nop */                                                   // 0x0016cb14: nop 
    v0 = *(int32_t*)(s2);                                       // 0x0016cb18: lw $v0, 0($s2)
    *(uint32_t*)(s6) = a2;                                      // 0x0016cb1c: sw $a2, 0($s6)
    v0 = v0 + v1;                                               // 0x0016cb20: addu $v0, $v0, $v1
    v0 = v0 - s3;                                               // 0x0016cb24: subu $v0, $v0, $s3
    goto label_0x16cbec;                                        // 0x0016cb28: b 0x16cbec
    v0 = v0 + s4;                                               // 0x0016cb2c: addu $v0, $v0, $s4
    a3 = 3;                                                     // 0x0016cb30: addiu $a3, $zero, 3
    s0 = *(int32_t*)((s2) + 0xc);                               // 0x0016cb34: lw $s0, 0xc($s2)
    a1 = *(int32_t*)(s2);                                       // 0x0016cb3c: lw $a1, 0($s2)
    v0 = (s3 < 4) ? 1 : 0;                                      // 0x0016cb44: slti $v0, $s3, 4
    if (v0 == 0) s3 = a3;                                       // 0x0016cb4c: movz $s3, $a3, $v0
    v0 = (s0 < 4) ? 1 : 0;                                      // 0x0016cb50: slti $v0, $s0, 4
    a1 = a1 + v1;                                               // 0x0016cb54: addu $a1, $a1, $v1
    if (v0 == 0) s0 = a3;                                       // 0x0016cb58: movz $s0, $a3, $v0
    func_00107b68();  // 0x107ab8                                // 0x0016cb60: jal 0x107ab8
    a1 = a1 - s3;                                               // 0x0016cb64: subu $a1, $a1, $s3
    a1 = *(int32_t*)((s2) + 8);                                 // 0x0016cb68: lw $a1, 8($s2)
    s0 = s3 + s0;                                               // 0x0016cb70: addu $s0, $s3, $s0
    a0 = sp + s3;                                               // 0x0016cb74: addu $a0, $sp, $s3
    func_00107b68();  // 0x107ab8                                // 0x0016cb78: jal 0x107ab8
    s0 = s0 + -3;                                               // 0x0016cb7c: addiu $s0, $s0, -3
    v0 = (s1 < s0) ? 1 : 0;                                     // 0x0016cb80: slt $v0, $s1, $s0
    /* beqzl $v0, 0x16cbbc */                                   // 0x0016cb84: beqzl $v0, 0x16cbbc
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0016cb88: lw $v0, 4($s2)
    /* nop */                                                   // 0x0016cb8c: nop 
label_0x16cb90:
    func_00158310();  // 0x158278                                // 0x0016cb90: jal 0x158278
    a0 = sp + s4;                                               // 0x0016cb94: addu $a0, $sp, $s4
    v0 = a2 & s5;                                               // 0x0016cb9c: and $v0, $a2, $s5
    /* bnezl $v0, 0x16cb18 */                                   // 0x0016cba0: bnezl $v0, 0x16cb18
    v1 = *(int32_t*)((s2) + 4);                                 // 0x0016cba4: lw $v1, 4($s2)
    s4 = s4 + 1;                                                // 0x0016cba8: addiu $s4, $s4, 1
    v0 = (s4 < s0) ? 1 : 0;                                     // 0x0016cbac: slt $v0, $s4, $s0
    if (v0 != 0) goto label_0x16cb90;                           // 0x0016cbb0: bnez $v0, 0x16cb90
    /* nop */                                                   // 0x0016cbb4: nop 
label_0x16cbb8:
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0016cbb8: lw $v0, 4($s2)
    a0 = *(int32_t*)(s2);                                       // 0x0016cbc0: lw $a0, 0($s2)
    func_00158410();  // 0x158310                                // 0x0016cbc8: jal 0x158310
    a0 = a0 + v0;                                               // 0x0016cbcc: addu $a0, $a0, $v0
    /* beqzl $s1, 0x16cbf0 */                                   // 0x0016cbd4: beqzl $s1, 0x16cbf0
label_0x16cbdc:
    func_00158310();  // 0x158278                                // 0x0016cbdc: jal 0x158278
    *(uint32_t*)(s6) = v0;                                      // 0x0016cbe4: sw $v0, 0($s6)
label_0x16cbec:
    return;                                                     // 0x0016cc0c: jr $ra
    sp = sp + 0x50;                                             // 0x0016cc10: addiu $sp, $sp, 0x50
}