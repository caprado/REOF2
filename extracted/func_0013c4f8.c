void func_0013c4f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013c4f8: addiu $sp, $sp, -0x30
    v0 = 0x25 << 16;                                            // 0x0013c4fc: lui $v0, 0x25
    s4 = v0 + 0x4d40;                                           // 0x0013c504: addiu $s4, $v0, 0x4d40
    a2 = 0x1000;                                                // 0x0013c520: addiu $a2, $zero, 0x1000
    func_00107d30();  // 0x107c70                                // 0x0013c534: jal 0x107c70
    v1 = 0x20 << 16;                                            // 0x0013c53c: lui $v1, 0x20
    v0 = g_00204490;  // Global at 0x00204490                   // 0x0013c540: lw $v0, 0x4490($v1)
    if (v0 != 0) goto label_0x13c554;                           // 0x0013c544: bnez $v0, 0x13c554
    /* nop */                                                   // 0x0013c548: nop 
    func_0013c4a8();  // 0x13c480                                // 0x0013c54c: jal 0x13c480
    /* nop */                                                   // 0x0013c550: nop 
label_0x13c554:
    func_0013c3b8();  // 0x13c250                                // 0x0013c554: jal 0x13c250
    /* nop */                                                   // 0x0013c558: nop 
    if (s0 == 0) goto label_0x13c660;                           // 0x0013c55c: beqz $s0, 0x13c660
    if (s3 != 0) goto label_0x13c590;                           // 0x0013c564: bnez $s3, 0x13c590
    v0 = 0x20 << 16;                                            // 0x0013c568: lui $v0, 0x20
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c56c: lw $v1, 0x44a4($v0)
    /* bnezl $v1, 0x13c660 */                                   // 0x0013c570: bnezl $v1, 0x13c660
    a0 = 0x22 << 16;                                            // 0x0013c578: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013c580: jal 0x116508
    a0 = &str_00225ac8;  // "HTCI: Invalidate filelist buffer size.\r\n" // 0x0013c584: addiu $a0, $a0, 0x5ac8
    goto label_0x13c660;                                        // 0x0013c588: b 0x13c660
label_0x13c590:
    if (s1 != 0) goto label_0x13c5c0;                           // 0x0013c590: bnez $s1, 0x13c5c0
    v0 = 0x20 << 16;                                            // 0x0013c598: lui $v0, 0x20
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c59c: lw $v1, 0x44a4($v0)
    /* bnezl $v1, 0x13c660 */                                   // 0x0013c5a0: bnezl $v1, 0x13c660
    a0 = 0x22 << 16;                                            // 0x0013c5a8: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013c5b0: jal 0x116508
    a0 = &str_00225af8;  // "HTCI: Can't read filelist file.(%s)\n" // 0x0013c5b4: addiu $a0, $a0, 0x5af8
    goto label_0x13c660;                                        // 0x0013c5b8: b 0x13c660
label_0x13c5c0:
    func_00107d30();  // 0x107c70                                // 0x0013c5c4: jal 0x107c70
    func_0013c060();  // 0x13bf00                                // 0x0013c5d0: jal 0x13bf00
    /* bnezl $v0, 0x13c618 */                                   // 0x0013c5d8: bnezl $v0, 0x13c618
    s0 = s2 + 9;                                                // 0x0013c5dc: addiu $s0, $s2, 9
    v0 = 0x20 << 16;                                            // 0x0013c5e0: lui $v0, 0x20
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013c5e4: lw $v1, 0x44a4($v0)
    if (v1 != 0) goto label_0x13c604;                           // 0x0013c5e8: bnez $v1, 0x13c604
    a1 = 0x22 << 16;                                            // 0x0013c5ec: lui $a1, 0x22
    a0 = 0x22 << 16;                                            // 0x0013c5f0: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013c5f8: jal 0x116508
    a0 = &str_00225b28;  // "E0111501:can't read filelist.(htCiLoadDirInfo)" // 0x0013c5fc: addiu $a0, $a0, 0x5b28
    a1 = 0x22 << 16;                                            // 0x0013c600: lui $a1, 0x22
label_0x13c604:
    func_0013acb8();  // 0x13ac88                                // 0x0013c608: jal 0x13ac88
    a1 = &str_00225b50;  // "host:"                             // 0x0013c60c: addiu $a1, $a1, 0x5b50
    goto label_0x13c660;                                        // 0x0013c610: b 0x13c660
    /* divide: s1 / s0 -> hi:lo */                              // 0x0013c61c: divu $zero, $s1, $s0
    /* beqzl $s0, 0x13c630 */                                   // 0x0013c628: beqzl $s0, 0x13c630
    /* break (trap) */                                          // 0x0013c62c: break 0, 7
    s2 = s2 + 1;                                                // 0x0013c630: addiu $s2, $s2, 1
    /* mflo $s1 */                                              // 0x0013c634
    func_0013bf00();  // 0x13bd60                                // 0x0013c63c: jal 0x13bd60
    s1 = s1 << 3;                                               // 0x0013c640: sll $s1, $s1, 3
    func_0013c250();  // 0x13c060                                // 0x0013c648: jal 0x13c060
    /* beqzl $s0, 0x13c658 */                                   // 0x0013c650: beqzl $s0, 0x13c658
    /* break (trap) */                                          // 0x0013c654: break 0, 7
    /* multiply: v0 * s2 -> hi:lo */                            // 0x0013c658: mult $ac2, $v0, $s2
    v0 = s1 + v0;                                               // 0x0013c65c: addu $v0, $s1, $v0
label_0x13c660:
    return;                                                     // 0x0013c678: jr $ra
    sp = sp + 0x30;                                             // 0x0013c67c: addiu $sp, $sp, 0x30
}