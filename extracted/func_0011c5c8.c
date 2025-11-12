void func_0011c5c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x0011c5c8: addiu $sp, $sp, -0x60
    func_0011bb38();  // 0x11ba38                                // 0x0011c5e8: jal 0x11ba38
    if (v0 >= 0) goto label_0x11c600;                           // 0x0011c5f0: bgez $v0, 0x11c600
    v0 = ((unsigned)s0 < (unsigned)3) ? 1 : 0;                  // 0x0011c5f4: sltiu $v0, $s0, 3
    goto label_0x11c698;                                        // 0x0011c5f8: b 0x11c698
    v0 = 0xffff << 16;                                          // 0x0011c5fc: lui $v0, 0xffff
label_0x11c600:
    if (v0 == 0) goto label_0x11c684;                           // 0x0011c600: beqz $v0, 0x11c684
    s1 = 0x25 << 16;                                            // 0x0011c604: lui $s1, 0x25
    a0 = 0x25 << 16;                                            // 0x0011c608: lui $a0, 0x25
    v0 = s1 + -0x480;                                           // 0x0011c60c: addiu $v0, $s1, -0x480
    g_0024fb80 = s3;  // Global at 0x0024fb80                   // 0x0011c610: sw $s3, -0x480($s1)
    g_0024fb84 = s0;  // Global at 0x0024fb84                   // 0x0011c618: sw $s0, 4($v0)
    a0 = a0 + -0x280;                                           // 0x0011c61c: addiu $a0, $a0, -0x280
    a1 = 3;                                                     // 0x0011c620: addiu $a1, $zero, 3
    local_0 = 0;                                                // 0x0011c624: sw $zero, 0($sp)
    t0 = 0x20;                                                  // 0x0011c62c: addiu $t0, $zero, 0x20
    t2 = 0x20;                                                  // 0x0011c634: addiu $t2, $zero, 0x20
    func_001178a0();  // 0x1176a8                                // 0x0011c638: jal 0x1176a8
    if (v0 >= 0) goto label_0x11c654;                           // 0x0011c640: bgez $v0, 0x11c654
    /* nop */                                                   // 0x0011c644: nop 
    v0 = 0xfffe << 16;                                          // 0x0011c648: lui $v0, 0xfffe
    goto label_0x11c698;                                        // 0x0011c64c: b 0x11c698
    v0 = v0 | 0xffff;                                           // 0x0011c650: ori $v0, $v0, 0xffff
label_0x11c654:
    if (s0 != 0) goto label_0x11c668;                           // 0x0011c654: bnez $s0, 0x11c668
    v0 = 1;                                                     // 0x0011c658: addiu $v0, $zero, 1
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011c65c: lbu $v0, -0x480($s1)
    goto label_0x11c694;                                        // 0x0011c660: b 0x11c694
    *(uint8_t*)(s2) = v0;                                       // 0x0011c664: sb $v0, 0($s2)
label_0x11c668:
    if (s0 != v0) goto label_0x11c67c;                          // 0x0011c668: bne $s0, $v0, 0x11c67c
    v0 = 2;                                                     // 0x0011c66c: addiu $v0, $zero, 2
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011c670: lhu $v0, -0x480($s1)
    goto label_0x11c694;                                        // 0x0011c674: b 0x11c694
    *(uint16_t*)(s2) = v0;                                      // 0x0011c678: sh $v0, 0($s2)
label_0x11c67c:
    if (s0 == v0) goto label_0x11c690;                          // 0x0011c67c: beql $s0, $v0, 0x11c690
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011c680: lw $v0, -0x480($s1)
label_0x11c684:
    v0 = 0xfffe << 16;                                          // 0x0011c684: lui $v0, 0xfffe
    goto label_0x11c698;                                        // 0x0011c688: b 0x11c698
    v0 = v0 | 0xfffe;                                           // 0x0011c68c: ori $v0, $v0, 0xfffe
label_0x11c690:
    *(uint32_t*)(s2) = v0;                                      // 0x0011c690: sw $v0, 0($s2)
label_0x11c694:
label_0x11c698:
    return;                                                     // 0x0011c6ac: jr $ra
    sp = sp + 0x60;                                             // 0x0011c6b0: addiu $sp, $sp, 0x60
}