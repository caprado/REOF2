void func_00165438() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00165438: addiu $sp, $sp, -0x30
    a1 = 6;                                                     // 0x0016543c: addiu $a1, $zero, 6
    s1 = s0 + 0x29b8;                                           // 0x0016544c: addiu $s1, $s0, 0x29b8
    func_001752e8();  // 1752e8                                // 0x0016545c: jal 0x1752e8
    s3 = s0 + 0x29b0;                                           // 0x00165460: addiu $s3, $s0, 0x29b0
    if (v0 == 0) goto label_0x165570;                           // 0x00165468: beqz $v0, 0x165570
    func_00165590();  // 165590                                // 0x00165470: jal 0x165590
    *(uint32_t*)((s0) + 0x1b74) = s3;                           // 0x00165474: sw $s3, 0x1b74($s0)
    if (v0 != 0) goto label_0x165570;                           // 0x00165478: bnez $v0, 0x165570
    func_00165748();  // 165748                                // 0x00165480: jal 0x165748
    /* nop */                                                   // 0x00165484: nop 
    a1 = 0xff00 << 16;                                          // 0x00165488: lui $a1, 0xff00
    if (s2 != 0) goto label_0x1654b8;                           // 0x00165494: bnez $s2, 0x1654b8
    a1 = a1 | 0xc04;                                            // 0x00165498: ori $a1, $a1, 0xc04
    return func_00169940();  // Tail call                        // 0x001654b0: j 0x1698d0
    sp = sp + 0x30;                                             // 0x001654b4: addiu $sp, $sp, 0x30
label_0x1654b8:
    a2 = *(int32_t*)((s1) + 4);                                 // 0x001654b8: lw $a2, 4($s1)
    a0 = *(int32_t*)((s1) + 8);                                 // 0x001654bc: lw $a0, 8($s1)
    func_0013f568();  // 13f568                                // 0x001654c0: jal 0x13f568
    a1 = *(int32_t*)(s1);                                       // 0x001654c4: lw $a1, 0($s1)
    v0 = 0x16 << 16;                                            // 0x001654d0: lui $v0, 0x16
    a1 = 0x16 << 16;                                            // 0x001654d4: lui $a1, 0x16
    v1 = 0x16 << 16;                                            // 0x001654d8: lui $v1, 0x16
    a2 = 0x16 << 16;                                            // 0x001654dc: lui $a2, 0x16
    a3 = 0x16 << 16;                                            // 0x001654e0: lui $a3, 0x16
    t3 = a1 + 0x44e0;                                           // 0x001654e4: addiu $t3, $a1, 0x44e0
    t0 = s0 + 0x2a5c;                                           // 0x001654ec: addiu $t0, $s0, 0x2a5c
    t2 = v0 + 0x44a0;                                           // 0x001654f0: addiu $t2, $v0, 0x44a0
    v1 = v1 + 0x44c0;                                           // 0x001654f4: addiu $v1, $v1, 0x44c0
    a2 = a2 + 0x4500;                                           // 0x001654f8: addiu $a2, $a2, 0x4500
    if (t1 != 0) goto label_0x165528;                           // 0x001654fc: bnez $t1, 0x165528
    a3 = a3 + 0x4520;                                           // 0x00165500: addiu $a3, $a3, 0x4520
    a1 = 0xff00 << 16;                                          // 0x00165504: lui $a1, 0xff00
    a1 = a1 | 0xc05;                                            // 0x00165510: ori $a1, $a1, 0xc05
    return func_00169940();  // Tail call                        // 0x00165520: j 0x1698d0
    sp = sp + 0x30;                                             // 0x00165524: addiu $sp, $sp, 0x30
label_0x165528:
    *(uint32_t*)((s3) + 4) = t1;                                // 0x00165528: sw $t1, 4($s3)
    *(uint32_t*)(s3) = s2;                                      // 0x00165530: sw $s2, 0($s3)
    *(uint32_t*)((s0) + 0x1c84) = t0;                           // 0x00165534: sw $t0, 0x1c84($s0)
    *(uint32_t*)((t0) + 0x14) = a3;                             // 0x00165538: sw $a3, 0x14($t0)
    v0 = *(int32_t*)((s2) + 0xc);                               // 0x0016553c: lw $v0, 0xc($s2)
    *(uint32_t*)((t0) + 4) = t2;                                // 0x00165540: sw $t2, 4($t0)
    *(uint32_t*)(t0) = v0;                                      // 0x00165544: sw $v0, 0($t0)
    *(uint32_t*)((t0) + 8) = v1;                                // 0x00165548: sw $v1, 8($t0)
    *(uint32_t*)((t0) + 0xc) = t3;                              // 0x0016554c: sw $t3, 0xc($t0)
    func_001319d8();  // 1319d8                                // 0x00165550: jal 0x1319d8
    *(uint32_t*)((t0) + 0x10) = a2;                             // 0x00165554: sw $a2, 0x10($t0)
    func_00165bb0();  // 165bb0                                // 0x0016555c: jal 0x165bb0
    a1 = 1;                                                     // 0x00165560: addiu $a1, $zero, 1
    func_001657c8();  // 1657c8                                // 0x00165564: jal 0x1657c8
label_0x165570:
    return;                                                     // 0x00165584: jr $ra
    sp = sp + 0x30;                                             // 0x00165588: addiu $sp, $sp, 0x30
}