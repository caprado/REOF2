void func_00147798() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00147798: addiu $sp, $sp, -0x50
    func_00107d30();  // 0x107c70                                // 0x001477c0: jal 0x107c70
    v1 = s0 + 3;                                                // 0x001477c8: addiu $v1, $s0, 3
    v1 = (unsigned)v1 >> 2;                                     // 0x001477cc: srl $v1, $v1, 2
    s2 = v1 << 2;                                               // 0x001477d0: sll $s2, $v1, 2
    s0 = s2 - s0;                                               // 0x001477d4: subu $s0, $s2, $s0
    a2 = s1 - s0;                                               // 0x001477d8: subu $a2, $s1, $s0
    v0 = ((unsigned)a2 < (unsigned)0x10c0) ? 1 : 0;             // 0x001477dc: sltiu $v0, $a2, 0x10c0
    if (v0 == 0) goto label_0x1477fc;                           // 0x001477e0: beqz $v0, 0x1477fc
    a1 = 0x22 << 16;                                            // 0x001477e4: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x001477ec: jal 0x148530
    a1 = &str_00226890;  // "work area size is too small"       // 0x001477f0: addiu $a1, $a1, 0x6890
    goto label_0x147988;                                        // 0x001477f4: b 0x147988
label_0x1477fc:
    s1 = s2 + 0x120;                                            // 0x001477fc: addiu $s1, $s2, 0x120
    *(uint32_t*)((s3) + 0x40) = s2;                             // 0x00147800: sw $s2, 0x40($s3)
    a2 = a2 + -0x10c0;                                          // 0x00147804: addiu $a2, $a2, -0x10c0
    a1 = s2 + 0x10c0;                                           // 0x0014780c: addiu $a1, $s2, 0x10c0
    func_00147d88();  // 0x147d70                                // 0x00147810: jal 0x147d70
    s0 = -1;                                                    // 0x00147814: addiu $s0, $zero, -1
    *(uint32_t*)(s3) = 0;                                       // 0x00147818: sw $zero, 0($s3)
    v0 = -1;                                                    // 0x0014781c: addiu $v0, $zero, -1
    *(uint32_t*)((s3) + 4) = 0;                                 // 0x00147820: sw $zero, 4($s3)
    v1 = 0x15 << 16;                                            // 0x00147824: lui $v1, 0x15
    *(uint32_t*)((s3) + 8) = 0;                                 // 0x00147828: sw $zero, 8($s3)
    t0 = 0x15 << 16;                                            // 0x0014782c: lui $t0, 0x15
    v1 = v1 + -0x71c8;                                          // 0x00147830: addiu $v1, $v1, -0x71c8
    t0 = t0 + -0x71a0;                                          // 0x00147834: addiu $t0, $t0, -0x71a0
    a3 = 8;                                                     // 0x0014783c: addiu $a3, $zero, 8
    a2 = 0x800;                                                 // 0x00147854: addiu $a2, $zero, 0x800
    *(uint32_t*)((s2) + 0xcc) = 0;                              // 0x00147860: sw $zero, 0xcc($s2)
    *(uint32_t*)((s2) + 0xd0) = 0;                              // 0x00147864: sw $zero, 0xd0($s2)
    *(uint32_t*)((s2) + 0xd4) = 0;                              // 0x00147868: sw $zero, 0xd4($s2)
    *(uint32_t*)((s2) + 0xd8) = 0;                              // 0x0014786c: sw $zero, 0xd8($s2)
    *(uint32_t*)((s2) + 0xdc) = 0;                              // 0x00147870: sw $zero, 0xdc($s2)
    *(uint32_t*)((s2) + 0xe0) = 0;                              // 0x00147874: sw $zero, 0xe0($s2)
    *(uint32_t*)((s2) + 0xe4) = 0;                              // 0x00147878: sw $zero, 0xe4($s2)
    *(uint32_t*)((s2) + 0xe8) = 0;                              // 0x0014787c: sw $zero, 0xe8($s2)
    *(uint32_t*)((s2) + 0xec) = 0;                              // 0x00147880: sw $zero, 0xec($s2)
    *(uint32_t*)((s2) + 0xf0) = 0;                              // 0x00147884: sw $zero, 0xf0($s2)
    *(uint32_t*)((s2) + 0xf4) = 0;                              // 0x00147888: sw $zero, 0xf4($s2)
    *(uint32_t*)((s2) + 0xf8) = 0;                              // 0x0014788c: sw $zero, 0xf8($s2)
    *(uint32_t*)((s2) + 0xfc) = 0;                              // 0x00147890: sw $zero, 0xfc($s2)
    *(uint32_t*)((s2) + 0x100) = 0;                             // 0x00147894: sw $zero, 0x100($s2)
    *(uint32_t*)((s2) + 0x110) = 0;                             // 0x00147898: sw $zero, 0x110($s2)
    *(uint32_t*)((s2) + 0xc) = 0;                               // 0x0014789c: sw $zero, 0xc($s2)
    *(uint32_t*)((s2) + 0x18) = 0;                              // 0x001478a0: sw $zero, 0x18($s2)
    *(uint32_t*)((s2) + 0x3c) = 0;                              // 0x001478a4: sw $zero, 0x3c($s2)
    *(uint32_t*)((s2) + 0x48) = 0;                              // 0x001478a8: sw $zero, 0x48($s2)
    *(uint32_t*)((s2) + 0x54) = 0;                              // 0x001478ac: sw $zero, 0x54($s2)
    *(uint32_t*)((s2) + 0x24) = v1;                             // 0x001478b4: sw $v1, 0x24($s2)
    func_00147e30();  // 0x147da8                                // 0x001478b8: jal 0x147da8
    *(uint32_t*)((s2) + 0x30) = t0;                             // 0x001478bc: sw $t0, 0x30($s2)
    v1 = 1;                                                     // 0x001478c0: addiu $v1, $zero, 1
    *(uint32_t*)((s2) + 0x64) = 0;                              // 0x001478c4: sw $zero, 0x64($s2)
    *(uint32_t*)((s2) + 0x114) = 0;                             // 0x001478c8: sw $zero, 0x114($s2)
    *(uint32_t*)((s2) + 0x118) = 0;                             // 0x001478d0: sw $zero, 0x118($s2)
    *(uint32_t*)((s2) + 0x11c) = 0;                             // 0x001478d4: sw $zero, 0x11c($s2)
    *(uint32_t*)((s2) + 0x8c) = 0;                              // 0x001478d8: sw $zero, 0x8c($s2)
    *(uint32_t*)((s2) + 0x98) = s0;                             // 0x001478e0: sw $s0, 0x98($s2)
    *(uint32_t*)((s2) + 0xa8) = 0;                              // 0x001478e8: sw $zero, 0xa8($s2)
    *(uint32_t*)((s2) + 0xc4) = 0;                              // 0x001478ec: sw $zero, 0xc4($s2)
    *(uint32_t*)((s2) + 0xac) = s0;                             // 0x001478f0: sw $s0, 0xac($s2)
    *(uint32_t*)((s2) + 0xb0) = s0;                             // 0x001478f4: sw $s0, 0xb0($s2)
    *(uint32_t*)((s2) + 0xb4) = s0;                             // 0x001478f8: sw $s0, 0xb4($s2)
    *(uint32_t*)((s2) + 0x870) = s3;                            // 0x001478fc: sw $s3, 0x870($s2)
    *(uint32_t*)((s2) + 0x60) = v0;                             // 0x00147900: sw $v0, 0x60($s2)
    func_00148420();  // 0x1483c0                                // 0x00147904: jal 0x1483c0
    *(uint32_t*)((s2) + 0xc8) = v1;                             // 0x00147908: sw $v1, 0xc8($s2)
    func_00147b98();  // 0x147b38                                // 0x0014790c: jal 0x147b38
    func_00147bf0();  // 0x147b98                                // 0x00147914: jal 0x147b98
    v1 = s2 + 0x200;                                            // 0x0014791c: addiu $v1, $s2, 0x200
    v0 = s2 + 0x268;                                            // 0x00147920: addiu $v0, $s2, 0x268
    a1 = s2 + 0x2d0;                                            // 0x00147924: addiu $a1, $s2, 0x2d0
    a2 = s2 + 0x338;                                            // 0x00147928: addiu $a2, $s2, 0x338
    a3 = s2 + 0x3a0;                                            // 0x0014792c: addiu $a3, $s2, 0x3a0
    t0 = s2 + 0x408;                                            // 0x00147930: addiu $t0, $s2, 0x408
    t1 = s2 + 0x470;                                            // 0x00147934: addiu $t1, $s2, 0x470
    t2 = s2 + 0x4d8;                                            // 0x00147938: addiu $t2, $s2, 0x4d8
    t3 = s2 + 0x540;                                            // 0x0014793c: addiu $t3, $s2, 0x540
    *(uint32_t*)((s2) + 0x1d0) = v1;                            // 0x00147940: sw $v1, 0x1d0($s2)
    *(uint32_t*)((s2) + 0x1d4) = v0;                            // 0x00147944: sw $v0, 0x1d4($s2)
    *(uint32_t*)((s2) + 0x1dc) = a1;                            // 0x0014794c: sw $a1, 0x1dc($s2)
    *(uint32_t*)((s2) + 0x1e0) = a2;                            // 0x00147950: sw $a2, 0x1e0($s2)
    *(uint32_t*)((s2) + 0x1e4) = a3;                            // 0x00147954: sw $a3, 0x1e4($s2)
    *(uint32_t*)((s2) + 0x1ec) = t0;                            // 0x00147958: sw $t0, 0x1ec($s2)
    *(uint32_t*)((s2) + 0x1f0) = t1;                            // 0x0014795c: sw $t1, 0x1f0($s2)
    *(uint32_t*)((s2) + 0x1f4) = t2;                            // 0x00147960: sw $t2, 0x1f4($s2)
    func_00147d98();  // 0x147d88                                // 0x00147964: jal 0x147d88
    *(uint32_t*)((s2) + 0x1fc) = t3;                            // 0x00147968: sw $t3, 0x1fc($s2)
    v0 = 0x7000 << 16;                                          // 0x0014796c: lui $v0, 0x7000
    *(uint32_t*)((s2) + 0x868) = s0;                            // 0x00147970: sw $s0, 0x868($s2)
    v0 = v0 | 0x3600;                                           // 0x00147974: ori $v0, $v0, 0x3600
    *(uint32_t*)((s2) + 0x86c) = 0;                             // 0x00147978: sw $zero, 0x86c($s2)
    *(uint32_t*)((s2) + 0x834) = v0;                            // 0x0014797c: sw $v0, 0x834($s2)
    *(uint32_t*)((s2) + 0x864) = 0;                             // 0x00147980: sw $zero, 0x864($s2)
    v0 = 1;                                                     // 0x00147984: addiu $v0, $zero, 1
label_0x147988:
    return;                                                     // 0x0014799c: jr $ra
    sp = sp + 0x50;                                             // 0x001479a0: addiu $sp, $sp, 0x50
}