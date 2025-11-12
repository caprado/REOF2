void func_00168660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00168660: addiu $sp, $sp, -0x40
    v0 = 0x26 << 16;                                            // 0x00168664: lui $v0, 0x26
    v1 = (s0 < 0x801) ? 1 : 0;                                  // 0x00168670: slti $v1, $s0, 0x801
    a1 = 0x800;                                                 // 0x00168674: addiu $a1, $zero, 0x800
    if (v1 == 0) s0 = a1;                                       // 0x00168678: movz $s0, $a1, $v1
    v0 = v0 + 0x1ef0;                                           // 0x00168680: addiu $v0, $v0, 0x1ef0
    func_00107b68();  // 0x107ab8                                // 0x001686a0: jal 0x107ab8
    if (s0 <= 0) goto label_0x16871c;                           // 0x001686a8: blez $s0, 0x16871c
    v0 = 0x23 << 16;                                            // 0x001686b0: lui $v0, 0x23
    s3 = v0 + -0x71d8;                                          // 0x001686b4: addiu $s3, $v0, -0x71d8
label_0x1686b8:
    s0 = s0 + -4;                                               // 0x001686bc: addiu $s0, $s0, -4
    func_001644a0();  // 0x164400                                // 0x001686c4: jal 0x164400
    if (v0 == 0) goto label_0x168710;                           // 0x001686cc: beqz $v0, 0x168710
    v0 = 1;                                                     // 0x001686d0: addiu $v0, $zero, 1
    *(uint32_t*)((s2) + 0xc) = s3;                              // 0x001686d4: sw $s3, 0xc($s2)
    v1 = *(uint8_t*)((s1) + 7);                                 // 0x001686d8: lbu $v1, 7($s1)
    *(uint8_t*)((s2) + 0x28) = v1;                              // 0x001686dc: sb $v1, 0x28($s2)
    a1 = *(uint8_t*)((s1) + 9);                                 // 0x001686e0: lbu $a1, 9($s1)
    v1 = *(uint8_t*)((s1) + 8);                                 // 0x001686e4: lbu $v1, 8($s1)
    a0 = *(uint8_t*)((s1) + 0xa);                               // 0x001686e8: lbu $a0, 0xa($s1)
    a1 = a1 << 0x10;                                            // 0x001686ec: sll $a1, $a1, 0x10
    a2 = *(uint8_t*)((s1) + 0xb);                               // 0x001686f0: lbu $a2, 0xb($s1)
    v1 = v1 << 0x18;                                            // 0x001686f4: sll $v1, $v1, 0x18
    a0 = a0 << 8;                                               // 0x001686f8: sll $a0, $a0, 8
    v1 = v1 | a2;                                               // 0x001686fc: or $v1, $v1, $a2
    a0 = a0 | a1;                                               // 0x00168700: or $a0, $a0, $a1
    v1 = v1 | a0;                                               // 0x00168704: or $v1, $v1, $a0
    goto label_0x16871c;                                        // 0x00168708: b 0x16871c
    *(uint32_t*)((s2) + 0x2c) = v1;                             // 0x0016870c: sw $v1, 0x2c($s2)
label_0x168710:
    if (s0 > 0) goto label_0x1686b8;                            // 0x00168710: bgtz $s0, 0x1686b8
    s1 = s1 + 4;                                                // 0x00168714: addiu $s1, $s1, 4
label_0x16871c:
    return;                                                     // 0x00168730: jr $ra
    sp = sp + 0x40;                                             // 0x00168734: addiu $sp, $sp, 0x40
}