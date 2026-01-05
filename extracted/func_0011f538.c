void func_0011f538() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011f538: addiu $sp, $sp, -0x10
    v0 = 0x7fff << 16;                                          // 0x0011f554: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x0011f558: ori $v0, $v0, 0xffff
    t1 = t3 & v0;                                               // 0x0011f55c: and $t1, $t3, $v0
    t0 = t2 & v0;                                               // 0x0011f570: and $t0, $t2, $v0
    v1 = 0x7ff0 << 16;                                          // 0x0011f574: lui $v1, 0x7ff0
    v0 = -a3;                                                   // 0x0011f578: negu $v0, $a3
    v0 = a3 | v0;                                               // 0x0011f57c: or $v0, $a3, $v0
    v0 = (unsigned)v0 >> 0x1f;                                  // 0x0011f580: srl $v0, $v0, 0x1f
    v0 = t1 | v0;                                               // 0x0011f584: or $v0, $t1, $v0
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x0011f588: sltu $v0, $v1, $v0
    if (v0 != 0) goto label_0x11f5b0;                           // 0x0011f58c: bnez $v0, 0x11f5b0
    v0 = -a2;                                                   // 0x0011f594: negu $v0, $a2
    v0 = a2 | v0;                                               // 0x0011f598: or $v0, $a2, $v0
    v0 = (unsigned)v0 >> 0x1f;                                  // 0x0011f59c: srl $v0, $v0, 0x1f
    v0 = t0 | v0;                                               // 0x0011f5a0: or $v0, $t0, $v0
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x0011f5a4: sltu $v0, $v1, $v0
    /* beqzl $v0, 0x11f5c8 */                                   // 0x0011f5a8: beqzl $v0, 0x11f5c8
    v0 = 0xc010 << 16;                                          // 0x0011f5ac: lui $v0, 0xc010
label_0x11f5b0:
    func_00111998();  // 111998                                // 0x0011f5b8: jal 0x111998
    /* nop */                                                   // 0x0011f5bc: nop 
    goto label_0x11f868;                                        // 0x0011f5c0: b 0x11f868
    v0 = t3 + v0;                                               // 0x0011f5c8: addu $v0, $t3, $v0
    v0 = v0 | a3;                                               // 0x0011f5cc: or $v0, $v0, $a3
    /* bnezl $v0, 0x11f5e8 */                                   // 0x0011f5d0: bnezl $v0, 0x11f5e8
    v0 = t3 >> 0x1e;                                            // 0x0011f5d4: sra $v0, $t3, 0x1e
    return func_00121bb0();  // Tail call                        // 0x0011f5e0: j 0x1216e8
    sp = sp + 0x10;                                             // 0x0011f5e4: addiu $sp, $sp, 0x10
    v1 = (unsigned)t2 >> 0x1f;                                  // 0x0011f5e8: srl $v1, $t2, 0x1f
    v0 = v0 & 2;                                                // 0x0011f5ec: andi $v0, $v0, 2
    a0 = t0 | a2;                                               // 0x0011f5f0: or $a0, $t0, $a2
    if (a0 != 0) goto label_0x11f640;                           // 0x0011f5f4: bnez $a0, 0x11f640
    s0 = v1 | v0;                                               // 0x0011f5f8: or $s0, $v1, $v0
    v1 = 2;                                                     // 0x0011f5fc: addiu $v1, $zero, 2
    at = 0x22 << 16;                                            // 0x0011f600: lui $at, 0x22
    if (s0 == v1) goto label_0x11f868;                          // 0x0011f608: beql $s0, $v1, 0x11f868
    v0 = (s0 < 3) ? 1 : 0;                                      // 0x0011f610: slti $v0, $s0, 3
    /* beqzl $v0, 0x11f630 */                                   // 0x0011f614: beqzl $v0, 0x11f630
    v1 = 3;                                                     // 0x0011f618: addiu $v1, $zero, 3
    if (s0 < 0) goto label_0x11f644;                            // 0x0011f61c: bltzl $s0, 0x11f644
    v0 = t1 | a3;                                               // 0x0011f620: or $v0, $t1, $a3
    goto label_0x11f868;                                        // 0x0011f628: b 0x11f868
    at = 0x22 << 16;                                            // 0x0011f630: lui $at, 0x22
    if (s0 == v1) goto label_0x11f868;                          // 0x0011f638: beql $s0, $v1, 0x11f868
label_0x11f640:
    v0 = t1 | a3;                                               // 0x0011f640: or $v0, $t1, $a3
label_0x11f644:
    if (v0 == 0) goto label_0x11f730;                           // 0x0011f644: beqz $v0, 0x11f730
    v0 = 0x7ff0 << 16;                                          // 0x0011f648: lui $v0, 0x7ff0
    if (t1 != v0) goto label_0x11f728;                          // 0x0011f64c: bne $t1, $v0, 0x11f728
    /* nop */                                                   // 0x0011f650: nop 
    if (t0 != t1) goto label_0x11f6c8;                          // 0x0011f654: bne $t0, $t1, 0x11f6c8
    v0 = 1;                                                     // 0x0011f658: addiu $v0, $zero, 1
    v1 = 1;                                                     // 0x0011f65c: addiu $v1, $zero, 1
    at = 0x22 << 16;                                            // 0x0011f660: lui $at, 0x22
    if (s0 == v1) goto label_0x11f868;                          // 0x0011f668: beql $s0, $v1, 0x11f868
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0011f670: slti $v0, $s0, 2
    /* beqzl $v0, 0x11f698 */                                   // 0x0011f674: beqzl $v0, 0x11f698
    v1 = 2;                                                     // 0x0011f678: addiu $v1, $zero, 2
    at = 0x22 << 16;                                            // 0x0011f67c: lui $at, 0x22
    /* beqzl $s0, 0x11f868 */                                   // 0x0011f684: beqzl $s0, 0x11f868
    goto label_0x11f728;                                        // 0x0011f68c: b 0x11f728
    v0 = 0x7ff0 << 16;                                          // 0x0011f690: lui $v0, 0x7ff0
    /* nop */                                                   // 0x0011f694: nop 
    at = 0x22 << 16;                                            // 0x0011f698: lui $at, 0x22
    if (s0 == v1) goto label_0x11f868;                          // 0x0011f6a0: beql $s0, $v1, 0x11f868
    v0 = 3;                                                     // 0x0011f6a8: addiu $v0, $zero, 3
    if (s0 != v0) goto label_0x11f728;                          // 0x0011f6ac: bnel $s0, $v0, 0x11f728
    v0 = 0x7ff0 << 16;                                          // 0x0011f6b0: lui $v0, 0x7ff0
    at = 0x22 << 16;                                            // 0x0011f6b4: lui $at, 0x22
    goto label_0x11f868;                                        // 0x0011f6bc: b 0x11f868
    /* nop */                                                   // 0x0011f6c4: nop 
label_0x11f6c8:
    if (s0 == v0) goto label_0x11f718;                          // 0x0011f6c8: beq $s0, $v0, 0x11f718
    v1 = 0x22 << 16;                                            // 0x0011f6cc: lui $v1, 0x22
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0011f6d0: slti $v0, $s0, 2
    if (v0 == 0) goto label_0x11f6f0;                           // 0x0011f6d4: beqz $v0, 0x11f6f0
    v1 = 2;                                                     // 0x0011f6d8: addiu $v1, $zero, 2
    /* beqzl $s0, 0x11f868 */                                   // 0x0011f6e0: beqzl $s0, 0x11f868
    goto label_0x11f728;                                        // 0x0011f6e8: b 0x11f728
    v0 = 0x7ff0 << 16;                                          // 0x0011f6ec: lui $v0, 0x7ff0
label_0x11f6f0:
    at = 0x22 << 16;                                            // 0x0011f6f0: lui $at, 0x22
    if (s0 == v1) goto label_0x11f864;                          // 0x0011f6f8: beq $s0, $v1, 0x11f864
    v1 = 3;                                                     // 0x0011f6fc: addiu $v1, $zero, 3
    at = 0x22 << 16;                                            // 0x0011f700: lui $at, 0x22
    if (s0 == v1) goto label_0x11f868;                          // 0x0011f708: beql $s0, $v1, 0x11f868
    goto label_0x11f728;                                        // 0x0011f710: b 0x11f728
    v0 = 0x7ff0 << 16;                                          // 0x0011f714: lui $v0, 0x7ff0
label_0x11f718:
    goto label_0x11f868;                                        // 0x0011f71c: b 0x11f868
    /* nop */                                                   // 0x0011f724: nop 
label_0x11f728:
    if (t0 != v0) goto label_0x11f750;                          // 0x0011f728: bne $t0, $v0, 0x11f750
    v1 = t0 - t1;                                               // 0x0011f72c: subu $v1, $t0, $t1
label_0x11f730:
    at = 0x22 << 16;                                            // 0x0011f730: lui $at, 0x22
    if (t2 < 0) goto label_0x11f864;                            // 0x0011f738: bltz $t2, 0x11f864
    at = 0x22 << 16;                                            // 0x0011f740: lui $at, 0x22
    goto label_0x11f86c;                                        // 0x0011f748: b 0x11f86c
label_0x11f750:
    at = 0x22 << 16;                                            // 0x0011f750: lui $at, 0x22
    v1 = v1 >> 0x14;                                            // 0x0011f758: sra $v1, $v1, 0x14
    v0 = (v1 < 0x3d) ? 1 : 0;                                   // 0x0011f75c: slti $v0, $v1, 0x3d
    if (v0 == 0) goto label_0x11f7a8;                           // 0x0011f760: beqz $v0, 0x11f7a8
    v0 = 1;                                                     // 0x0011f764: addiu $v0, $zero, 1
    if (t3 >= 0) goto label_0x11f77c;                           // 0x0011f768: bgez $t3, 0x11f77c
    v0 = (v1 < -0x3c) ? 1 : 0;                                  // 0x0011f76c: slti $v0, $v1, -0x3c
    if (v0 != 0) goto label_0x11f7a8;                           // 0x0011f774: bnez $v0, 0x11f7a8
    v0 = 1;                                                     // 0x0011f778: addiu $v0, $zero, 1
label_0x11f77c:
    func_00111ce0();  // 111ce0                                // 0x0011f780: jal 0x111ce0
    /* nop */                                                   // 0x0011f784: nop 
    func_00121bb0();  // 121bb0                                // 0x0011f78c: jal 0x121bb0
    /* nop */                                                   // 0x0011f790: nop 
    func_001216e8();  // 1216e8                                // 0x0011f798: jal 0x1216e8
    /* nop */                                                   // 0x0011f79c: nop 
    v0 = 1;                                                     // 0x0011f7a4: addiu $v0, $zero, 1
label_0x11f7a8:
    if (s0 == v0) goto label_0x11f7e0;                          // 0x0011f7a8: beq $s0, $v0, 0x11f7e0
    v1 = 0x8000 << 16;                                          // 0x0011f7ac: lui $v1, 0x8000
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x0011f7b0: slti $v0, $s0, 2
    if (v0 == 0) goto label_0x11f7d0;                           // 0x0011f7b4: beqz $v0, 0x11f7d0
    v0 = 2;                                                     // 0x0011f7b8: addiu $v0, $zero, 2
    if (s0 == 0) goto label_0x11f868;                           // 0x0011f7c0: beqz $s0, 0x11f868
    goto label_0x11f840;                                        // 0x0011f7c8: b 0x11f840
    /* nop */                                                   // 0x0011f7cc: nop 
label_0x11f7d0:
    if (s0 == v0) goto label_0x11f810;                          // 0x0011f7d0: beq $s0, $v0, 0x11f810
    /* nop */                                                   // 0x0011f7d4: nop 
    goto label_0x11f840;                                        // 0x0011f7d8: b 0x11f840
    /* nop */                                                   // 0x0011f7dc: nop 
label_0x11f7e0:
    a1 = 0xffff << 16;                                          // 0x0011f7e8: lui $a1, 0xffff
    v0 = v0 ^ v1;                                               // 0x0011f7f0: xor $v0, $v0, $v1
    a0 = a0 & a1;                                               // 0x0011f7f4: and $a0, $a0, $a1
    a0 = a0 | v0;                                               // 0x0011f7fc: or $a0, $a0, $v0
    goto label_0x11f868;                                        // 0x0011f804: b 0x11f868
    /* nop */                                                   // 0x0011f80c: nop 
label_0x11f810:
    at = 0x22 << 16;                                            // 0x0011f810: lui $at, 0x22
    func_001119f0();  // 1119f0                                // 0x0011f818: jal 0x1119f0
    /* nop */                                                   // 0x0011f81c: nop 
    at = 0x22 << 16;                                            // 0x0011f820: lui $at, 0x22
    func_001119f0();  // 1119f0                                // 0x0011f82c: jal 0x1119f0
    /* nop */                                                   // 0x0011f830: nop 
    goto label_0x11f868;                                        // 0x0011f834: b 0x11f868
    /* nop */                                                   // 0x0011f83c: nop 
label_0x11f840:
    at = 0x22 << 16;                                            // 0x0011f840: lui $at, 0x22
    func_001119f0();  // 1119f0                                // 0x0011f848: jal 0x1119f0
    /* nop */                                                   // 0x0011f84c: nop 
    at = 0x22 << 16;                                            // 0x0011f850: lui $at, 0x22
    func_001119f0();  // 1119f0                                // 0x0011f85c: jal 0x1119f0
    /* nop */                                                   // 0x0011f860: nop 
label_0x11f864:
label_0x11f868:
label_0x11f86c:
    return;                                                     // 0x0011f86c: jr $ra
    sp = sp + 0x10;                                             // 0x0011f870: addiu $sp, $sp, 0x10
}