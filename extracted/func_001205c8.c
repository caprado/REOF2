void func_001205c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x001205c8: addiu $sp, $sp, -0x20
    /* FPU: mov.s $f1, $f12 */                                  // 0x001205cc: mov.s $f1, $f12
    /* move from FPU: $a2, $f13 */                              // 0x001205d8: mfc1 $a2, $f13
    v0 = 0x7fff << 16;                                          // 0x001205dc: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x001205e0: ori $v0, $v0, 0xffff
    t0 = a2 & v0;                                               // 0x001205e4: and $t0, $a2, $v0
    /* move from FPU: $a1, $f1 */                               // 0x001205e8: mfc1 $a1, $f1
    v1 = 0x3f80 << 16;                                          // 0x001205ec: lui $v1, 0x3f80
    if (a2 != v1) goto label_0x120608;                          // 0x001205f0: bne $a2, $v1, 0x120608
    a3 = a1 & v0;                                               // 0x001205f4: and $a3, $a1, $v0
    return func_00122090();  // Tail call                        // 0x00120600: j 0x121e00
    sp = sp + 0x20;                                             // 0x00120604: addiu $sp, $sp, 0x20
label_0x120608:
    v0 = 0x7f << 16;                                            // 0x00120608: lui $v0, 0x7f
    a0 = a2 >> 0x1e;                                            // 0x0012060c: sra $a0, $a2, 0x1e
    v0 = v0 | 0xffff;                                           // 0x00120610: ori $v0, $v0, 0xffff
    a0 = a0 & 2;                                                // 0x00120614: andi $a0, $a0, 2
    v1 = (unsigned)a1 >> 0x1f;                                  // 0x00120618: srl $v1, $a1, 0x1f
    v0 = (v0 < a3) ? 1 : 0;                                     // 0x0012061c: slt $v0, $v0, $a3
    if (v0 != 0) goto label_0x12066c;                           // 0x00120620: bnez $v0, 0x12066c
    s0 = v1 | a0;                                               // 0x00120624: or $s0, $v1, $a0
    v0 = 2;                                                     // 0x00120628: addiu $v0, $zero, 2
    at = 0x4049 << 16;                                          // 0x0012062c: lui $at, 0x4049
    at = at | 0xfda;                                            // 0x00120630: ori $at, $at, 0xfda
    /* move to FPU: $at, $f0 */                                 // 0x00120634: mtc1 $at, $f0
    if (s0 == v0) goto label_0x120798;                          // 0x00120638: beq $s0, $v0, 0x120798
    v0 = (s0 < 3) ? 1 : 0;                                      // 0x0012063c: slti $v0, $s0, 3
    /* beqzl $v0, 0x120658 */                                   // 0x00120640: beqzl $v0, 0x120658
    v0 = 3;                                                     // 0x00120644: addiu $v0, $zero, 3
    if (s0 < 0) goto label_0x120670;                            // 0x00120648: bltz $s0, 0x120670
    v0 = 0x7f << 16;                                            // 0x0012064c: lui $v0, 0x7f
    goto label_0x120798;                                        // 0x00120650: b 0x120798
    /* FPU: mov.s $f0, $f1 */                                   // 0x00120654: mov.s $f0, $f1
    at = 0xc049 << 16;                                          // 0x00120658: lui $at, 0xc049
    at = at | 0xfda;                                            // 0x0012065c: ori $at, $at, 0xfda
    /* move to FPU: $at, $f0 */                                 // 0x00120660: mtc1 $at, $f0
    if (s0 == v0) goto label_0x12079c;                          // 0x00120664: beql $s0, $v0, 0x12079c
label_0x12066c:
    v0 = 0x7f << 16;                                            // 0x0012066c: lui $v0, 0x7f
label_0x120670:
    v0 = v0 | 0xffff;                                           // 0x00120670: ori $v0, $v0, 0xffff
    v0 = (v0 < t0) ? 1 : 0;                                     // 0x00120674: slt $v0, $v0, $t0
    if (v0 != 0) goto label_0x1206a8;                           // 0x00120678: bnez $v0, 0x1206a8
    v1 = a3 - t0;                                               // 0x0012067c: subu $v1, $a3, $t0
    at = 0xbfc9 << 16;                                          // 0x00120680: lui $at, 0xbfc9
    at = at | 0xfda;                                            // 0x00120684: ori $at, $at, 0xfda
    /* move to FPU: $at, $f0 */                                 // 0x00120688: mtc1 $at, $f0
    if (a1 < 0) goto label_0x120798;                            // 0x0012068c: bltz $a1, 0x120798
    at = 0x3fc9 << 16;                                          // 0x00120694: lui $at, 0x3fc9
    at = at | 0xfda;                                            // 0x00120698: ori $at, $at, 0xfda
    /* move to FPU: $at, $f0 */                                 // 0x0012069c: mtc1 $at, $f0
    goto label_0x1207a0;                                        // 0x001206a0: b 0x1207a0
label_0x1206a8:
    at = 0x3fc9 << 16;                                          // 0x001206a8: lui $at, 0x3fc9
    at = at | 0xfda;                                            // 0x001206ac: ori $at, $at, 0xfda
    /* move to FPU: $at, $f2 */                                 // 0x001206b0: mtc1 $at, $f2
    v1 = v1 >> 0x17;                                            // 0x001206b4: sra $v1, $v1, 0x17
    v0 = (v1 < 0x3d) ? 1 : 0;                                   // 0x001206b8: slti $v0, $v1, 0x3d
    if (v0 == 0) goto label_0x1206fc;                           // 0x001206bc: beqz $v0, 0x1206fc
    v0 = 1;                                                     // 0x001206c0: addiu $v0, $zero, 1
    if (a2 >= 0) goto label_0x1206d8;                           // 0x001206c4: bgez $a2, 0x1206d8
    v0 = (v1 < -0x3c) ? 1 : 0;                                  // 0x001206c8: slti $v0, $v1, -0x3c
    /* move to FPU: $zero, $f2 */                               // 0x001206cc: mtc1 $zero, $f2
    if (v0 != 0) goto label_0x1206fc;                           // 0x001206d0: bnez $v0, 0x1206fc
    v0 = 1;                                                     // 0x001206d4: addiu $v0, $zero, 1
label_0x1206d8:
    /* nop */                                                   // 0x001206d8: nop 
    /* nop */                                                   // 0x001206dc: nop 
    /* FPU: div.s $f12, $f1, $f13 */                            // 0x001206e0: div.s $f12, $f1, $f13
    func_00122190();  // 0x122168                                // 0x001206e4: jal 0x122168
    /* nop */                                                   // 0x001206e8: nop 
    func_00122090();  // 0x121e00                                // 0x001206ec: jal 0x121e00
    /* FPU: mov.s $f12, $f0 */                                  // 0x001206f0: mov.s $f12, $f0
    /* FPU: mov.s $f2, $f0 */                                   // 0x001206f4: mov.s $f2, $f0
    v0 = 1;                                                     // 0x001206f8: addiu $v0, $zero, 1
label_0x1206fc:
    if (s0 == v0) goto label_0x120730;                          // 0x001206fc: beq $s0, $v0, 0x120730
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x00120700: slti $v0, $s0, 2
    /* beqzl $v0, 0x120720 */                                   // 0x00120704: beqzl $v0, 0x120720
    v0 = 2;                                                     // 0x00120708: addiu $v0, $zero, 2
    if (s0 == 0) goto label_0x120798;                           // 0x0012070c: beqz $s0, 0x120798
    /* FPU: mov.s $f0, $f2 */                                   // 0x00120710: mov.s $f0, $f2
    goto label_0x120778;                                        // 0x00120714: b 0x120778
    /* nop */                                                   // 0x00120718: nop 
    /* nop */                                                   // 0x0012071c: nop 
    if (s0 == v0) goto label_0x120750;                          // 0x00120720: beq $s0, $v0, 0x120750
    /* nop */                                                   // 0x00120724: nop 
    goto label_0x120778;                                        // 0x00120728: b 0x120778
    /* nop */                                                   // 0x0012072c: nop 
label_0x120730:
    *(float*)(sp) = FPU_F2;  // Store float                     // 0x00120730: swc1 $f2, 0($sp)
    v0 = 0x8000 << 16;                                          // 0x00120734: lui $v0, 0x8000
    v1 = local_0;                                               // 0x00120738: lw $v1, 0($sp)
    v1 = v1 ^ v0;                                               // 0x0012073c: xor $v1, $v1, $v0
    /* move to FPU: $v1, $f2 */                                 // 0x00120740: mtc1 $v1, $f2
    goto label_0x120798;                                        // 0x00120744: b 0x120798
    /* FPU: mov.s $f0, $f2 */                                   // 0x00120748: mov.s $f0, $f2
    /* nop */                                                   // 0x0012074c: nop 
label_0x120750:
    at = 0x3422 << 16;                                          // 0x00120750: lui $at, 0x3422
    at = at | 0x2168;                                           // 0x00120754: ori $at, $at, 0x2168
    /* move to FPU: $at, $f0 */                                 // 0x00120758: mtc1 $at, $f0
    at = 0x4049 << 16;                                          // 0x0012075c: lui $at, 0x4049
    at = at | 0xfda;                                            // 0x00120760: ori $at, $at, 0xfda
    /* move to FPU: $at, $f1 */                                 // 0x00120764: mtc1 $at, $f1
    /* FPU: sub.s $f0, $f2, $f0 */                              // 0x00120768: sub.s $f0, $f2, $f0
    goto label_0x120798;                                        // 0x0012076c: b 0x120798
    /* FPU: sub.s $f0, $f1, $f0 */                              // 0x00120770: sub.s $f0, $f1, $f0
    /* nop */                                                   // 0x00120774: nop 
label_0x120778:
    at = 0x3422 << 16;                                          // 0x00120778: lui $at, 0x3422
    at = at | 0x2168;                                           // 0x0012077c: ori $at, $at, 0x2168
    /* move to FPU: $at, $f0 */                                 // 0x00120780: mtc1 $at, $f0
    at = 0x4049 << 16;                                          // 0x00120784: lui $at, 0x4049
    at = at | 0xfda;                                            // 0x00120788: ori $at, $at, 0xfda
    /* move to FPU: $at, $f1 */                                 // 0x0012078c: mtc1 $at, $f1
    /* FPU: sub.s $f0, $f2, $f0 */                              // 0x00120790: sub.s $f0, $f2, $f0
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x00120794: sub.s $f0, $f0, $f1
label_0x120798:
label_0x12079c:
label_0x1207a0:
    return;                                                     // 0x001207a0: jr $ra
    sp = sp + 0x20;                                             // 0x001207a4: addiu $sp, $sp, 0x20
}