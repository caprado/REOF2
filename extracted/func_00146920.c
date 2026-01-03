void func_00146920() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x00146920: addiu $sp, $sp, -0xa0
    v0 = *(int32_t*)((s2) + 0x8c);                              // 0x0014695c: lw $v0, 0x8c($s2)
    if (v0 == 0) goto label_0x1469e4;                           // 0x00146960: beqz $v0, 0x1469e4
    if (v0 >= 0) goto label_0x1469ec;                           // 0x0014696c: bgezl $v0, 0x1469ec
    s5 = *(int32_t*)((s2) + 0x98);                              // 0x00146974: lw $s5, 0x98($s2)
    if (s5 < 0) goto label_0x1469ec;                            // 0x00146978: bltzl $s5, 0x1469ec
    s6 = *(int32_t*)((s2) + 0xa8);                              // 0x00146984: lw $s6, 0xa8($s2)
    s1 = a1 & 1;                                                // 0x00146994: andi $s1, $a1, 1
    s0 = s6 & 1;                                                // 0x00146998: andi $s0, $s6, 1
    s0 = s1 & s0;                                               // 0x0014699c: and $s0, $s1, $s0
    v0 = a0 & 1;                                                // 0x001469a0: andi $v0, $a0, 1
    s0 = s0 & v0;                                               // 0x001469a4: and $s0, $s0, $v0
    func_0010f748();  // 10f748                                // 0x001469b0: jal 0x10f748
    v0 = v0 + s0;                                               // 0x001469c0: addu $v0, $v0, $s0
    v0 = s5 + v0;                                               // 0x001469c4: addu $v0, $s5, $v0
    s1 = s1 & v0;                                               // 0x001469d0: and $s1, $s1, $v0
    if (s1 == 0) goto label_0x1469ec;                           // 0x001469d4: beqz $s1, 0x1469ec
    v0 = s6 + 1;                                                // 0x001469d8: addiu $v0, $s6, 1
    goto label_0x1469ec;                                        // 0x001469dc: b 0x1469ec
    *(uint32_t*)((s2) + 0xa8) = v0;                             // 0x001469e0: sw $v0, 0xa8($s2)
label_0x1469e4:
label_0x1469ec:
    v1 = *(int32_t*)((s2) + 0x110);                             // 0x001469ec: lw $v1, 0x110($s2)
    v0 = 2;                                                     // 0x001469f0: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x146a1c;                          // 0x001469f4: bnel $v1, $v0, 0x146a1c
    a1 = *(int32_t*)((s3) + 0x40);                              // 0x001469f8: lw $a1, 0x40($s3)
    if (v0 < 0) goto label_0x146a1c;                            // 0x00146a00: bltzl $v0, 0x146a1c
    a1 = *(int32_t*)((s3) + 0x40);                              // 0x00146a04: lw $a1, 0x40($s3)
    v0 = -1;                                                    // 0x00146a0c: addiu $v0, $zero, -1
    *(uint32_t*)((s2) + 0x110) = 0;                             // 0x00146a10: sw $zero, 0x110($s2)
    a1 = *(int32_t*)((s3) + 0x40);                              // 0x00146a18: lw $a1, 0x40($s3)
label_0x146a1c:
    a0 = *(int32_t*)((s3) + 0x3c);                              // 0x00146a1c: lw $a0, 0x3c($s3)
    v0 = *(int32_t*)((s3) + 0x34);                              // 0x00146a20: lw $v0, 0x34($s3)
    a2 = *(int32_t*)((s3) + 0x30);                              // 0x00146a28: lw $a2, 0x30($s3)
    a3 = *(int32_t*)((s3) + 0x2c);                              // 0x00146a30: lw $a3, 0x2c($s3)
    a1 = a1 | a0;                                               // 0x00146a34: or $a1, $a1, $a0
    v1 = *(int32_t*)((s3) + 0x38);                              // 0x00146a38: lw $v1, 0x38($s3)
    v0 = v0 | a3;                                               // 0x00146a44: or $v0, $v0, $a3
    v0 = v0 | a1;                                               // 0x00146a50: or $v0, $v0, $a1
    v1 = v1 | a2;                                               // 0x00146a54: or $v1, $v1, $a2
    v0 = v0 | v1;                                               // 0x00146a5c: or $v0, $v0, $v1
    return;                                                     // 0x00146a8c: jr $ra
    sp = sp + 0xa0;                                             // 0x00146a90: addiu $sp, $sp, 0xa0
}