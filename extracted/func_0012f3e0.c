void func_0012f3e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012f3e0: addiu $sp, $sp, -0x10
    func_0012d7a0();  // 0x12d780                                // 0x0012f3e8: jal 0x12d780
    /* nop */                                                   // 0x0012f3ec: nop 
    a0 = 0x20 << 16;                                            // 0x0012f3f4: lui $a0, 0x20
    a0 = a0 + -0x12a0;                                          // 0x0012f3f8: addiu $a0, $a0, -0x12a0
    a2 = 0x1780;                                                // 0x0012f400: addiu $a2, $zero, 0x1780
    return func_00107d30();  // Tail call                        // 0x0012f404: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012f408: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012f40c: nop 
    sp = sp + -0x10;                                            // 0x0012f410: addiu $sp, $sp, -0x10
    func_0012d7c0();  // 0x12d7a0                                // 0x0012f418: jal 0x12d7a0
    /* nop */                                                   // 0x0012f41c: nop 
    a0 = 0x20 << 16;                                            // 0x0012f424: lui $a0, 0x20
    a0 = a0 + -0x12a0;                                          // 0x0012f428: addiu $a0, $a0, -0x12a0
    a2 = 0x1780;                                                // 0x0012f430: addiu $a2, $zero, 0x1780
    return func_00107d30();  // Tail call                        // 0x0012f434: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012f438: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012f43c: nop 
    sp = sp + -0x20;                                            // 0x0012f440: addiu $sp, $sp, -0x20
    a3 = 0x20 << 16;                                            // 0x0012f444: lui $a3, 0x20
    v1 = a3 + -0x12a0;                                          // 0x0012f454: addiu $v1, $a3, -0x12a0
    v0 = g_001fed60;  // Global at 0x001fed60                   // 0x0012f468: lb $v0, 0($v1)
    if (v0 == 0) goto label_0x12f49c;                           // 0x0012f46c: beqz $v0, 0x12f49c
    a1 = a1 + 1;                                                // 0x0012f474: addiu $a1, $a1, 1
    v0 = (a1 < 8) ? 1 : 0;                                      // 0x0012f478: slti $v0, $a1, 8
    if (v0 == 0) goto label_0x12f49c;                           // 0x0012f47c: beqz $v0, 0x12f49c
    v1 = v1 + 0x2f0;                                            // 0x0012f480: addiu $v1, $v1, 0x2f0
    v0 = g_001ff050;  // Global at 0x001ff050                   // 0x0012f484: lb $v0, 0($v1)
    /* nop */                                                   // 0x0012f488: nop 
    /* nop */                                                   // 0x0012f48c: nop 
    /* nop */                                                   // 0x0012f490: nop 
    /* bnezl $v0, 0x12f478 */                                   // 0x0012f494: bnezl $v0, 0x12f478
    a1 = a1 + 1;                                                // 0x0012f498: addiu $a1, $a1, 1
label_0x12f49c:
    v1 = 8;                                                     // 0x0012f49c: addiu $v1, $zero, 8
    if (a1 == v1) goto label_0x12f5f8;                          // 0x0012f4a0: beq $a1, $v1, 0x12f5f8
    v0 = a1 << 1;                                               // 0x0012f4a8: sll $v0, $a1, 1
    v1 = a3 + -0x12a0;                                          // 0x0012f4ac: addiu $v1, $a3, -0x12a0
    v0 = v0 + a1;                                               // 0x0012f4b0: addu $v0, $v0, $a1
    v0 = v0 << 4;                                               // 0x0012f4b8: sll $v0, $v0, 4
    v0 = v0 - a1;                                               // 0x0012f4bc: subu $v0, $v0, $a1
    v0 = v0 << 4;                                               // 0x0012f4c0: sll $v0, $v0, 4
    s1 = v0 + v1;                                               // 0x0012f4c4: addu $s1, $v0, $v1
    if (s2 <= 0) goto label_0x12f4f8;                           // 0x0012f4c8: blez $s2, 0x12f4f8
    *(uint8_t*)((s1) + 2) = s2;                                 // 0x0012f4cc: sb $s2, 2($s1)
    a3 = s1 + 4;                                                // 0x0012f4d0: addiu $a3, $s1, 4
    /* nop */                                                   // 0x0012f4d4: nop 
label_0x12f4d8:
    v0 = a2 << 2;                                               // 0x0012f4d8: sll $v0, $a2, 2
    a2 = a2 + 1;                                                // 0x0012f4dc: addiu $a2, $a2, 1
    v1 = v0 + t0;                                               // 0x0012f4e0: addu $v1, $v0, $t0
    v0 = a3 + v0;                                               // 0x0012f4e4: addu $v0, $a3, $v0
    a0 = g_001fed60;  // Global at 0x001fed60                   // 0x0012f4e8: lw $a0, 0($v1)
    a1 = (a2 < s2) ? 1 : 0;                                     // 0x0012f4ec: slt $a1, $a2, $s2
    if (a1 != 0) goto label_0x12f4d8;                           // 0x0012f4f0: bnez $a1, 0x12f4d8
    *(uint32_t*)(v0) = a0;                                      // 0x0012f4f4: sw $a0, 0($v0)
label_0x12f4f8:
    s0 = 0x7fff << 16;                                          // 0x0012f4f8: lui $s0, 0x7fff
    *(uint32_t*)((s1) + 0xc) = t1;                              // 0x0012f4fc: sw $t1, 0xc($s1)
    *(uint8_t*)((s1) + 1) = 0;                                  // 0x0012f500: sb $zero, 1($s1)
    *(uint32_t*)((s1) + 0x28) = 0;                              // 0x0012f508: sw $zero, 0x28($s1)
    a2 = 4;                                                     // 0x0012f50c: addiu $a2, $zero, 4
    *(uint32_t*)((s1) + 0x2c) = 0;                              // 0x0012f510: sw $zero, 0x2c($s1)
    a3 = 4;                                                     // 0x0012f514: addiu $a3, $zero, 4
    *(uint32_t*)((s1) + 0x30) = 0;                              // 0x0012f518: sw $zero, 0x30($s1)
    func_00126e18();  // 0x126c40                                // 0x0012f520: jal 0x126c40
    *(uint32_t*)((s1) + 0x34) = s0;                             // 0x0012f524: sw $s0, 0x34($s1)
    v1 = 4;                                                     // 0x0012f528: addiu $v1, $zero, 4
    a1 = 0x80;                                                  // 0x0012f52c: addiu $a1, $zero, 0x80
    a2 = 3;                                                     // 0x0012f530: addiu $a2, $zero, 3
    /* divide: a1 / v1 -> hi:lo */                              // 0x0012f534: div $zero, $a1, $v1
    a3 = 0 | 0xac44;                                            // 0x0012f538: ori $a3, $zero, 0xac44
    t0 = 0x12;                                                  // 0x0012f53c: addiu $t0, $zero, 0x12
    t1 = 4;                                                     // 0x0012f540: addiu $t1, $zero, 4
    t2 = 0x1f4;                                                 // 0x0012f544: addiu $t2, $zero, 0x1f4
    t3 = 0x20;                                                  // 0x0012f548: addiu $t3, $zero, 0x20
    *(uint32_t*)((s1) + 0x4c) = a2;                             // 0x0012f54c: sw $a2, 0x4c($s1)
    a0 = 0x20;                                                  // 0x0012f550: addiu $a0, $zero, 0x20
    *(uint32_t*)((s1) + 0x5c) = a3;                             // 0x0012f554: sw $a3, 0x5c($s1)
    *(uint32_t*)((s1) + 0x50) = t0;                             // 0x0012f558: sw $t0, 0x50($s1)
    *(uint32_t*)((s1) + 0x54) = v1;                             // 0x0012f55c: sw $v1, 0x54($s1)
    *(uint32_t*)((s1) + 0x48) = v0;                             // 0x0012f560: sw $v0, 0x48($s1)
    *(uint32_t*)((s1) + 0x58) = s2;                             // 0x0012f564: sw $s2, 0x58($s1)
    /* beqzl $t1, 0x12f570 */                                   // 0x0012f568: beqzl $t1, 0x12f570
    /* break (trap) */                                          // 0x0012f56c: break 0, 7
    *(uint32_t*)((s1) + 0x64) = t2;                             // 0x0012f570: sw $t2, 0x64($s1)
    *(uint32_t*)((s1) + 0x60) = s0;                             // 0x0012f574: sw $s0, 0x60($s1)
    *(uint32_t*)((s1) + 0x68) = 0;                              // 0x0012f578: sw $zero, 0x68($s1)
    *(uint32_t*)((s1) + 0x6c) = 0;                              // 0x0012f57c: sw $zero, 0x6c($s1)
    *(uint32_t*)((s1) + 0x70) = 0;                              // 0x0012f580: sw $zero, 0x70($s1)
    *(uint32_t*)((s1) + 0x74) = 0;                              // 0x0012f584: sw $zero, 0x74($s1)
    *(uint32_t*)((s1) + 0x78) = 0;                              // 0x0012f588: sw $zero, 0x78($s1)
    *(uint32_t*)((s1) + 0x7c) = 0;                              // 0x0012f58c: sw $zero, 0x7c($s1)
    *(uint32_t*)((s1) + 0x38) = 0;                              // 0x0012f590: sw $zero, 0x38($s1)
    *(uint32_t*)((s1) + 0x3c) = 0;                              // 0x0012f594: sw $zero, 0x3c($s1)
    /* mflo $a1 */                                              // 0x0012f598
    *(uint32_t*)((s1) + 0x44) = a1;                             // 0x0012f59c: sw $a1, 0x44($s1)
    func_0012dfe0();  // 0x12df40                                // 0x0012f5a0: jal 0x12df40
    *(uint32_t*)((s1) + 0x40) = s0;                             // 0x0012f5a4: sw $s0, 0x40($s1)
    a0 = *(int32_t*)((s1) + 0x44);                              // 0x0012f5a8: lw $a0, 0x44($s1)
    func_0012dfe0();  // 0x12df40                                // 0x0012f5ac: jal 0x12df40
    *(uint32_t*)((s1) + 0x80) = v0;                             // 0x0012f5b0: sw $v0, 0x80($s1)
    *(uint16_t*)((s1) + 0x2cc) = 0;                             // 0x0012f5b4: sh $zero, 0x2cc($s1)
    v1 = -0x80;                                                 // 0x0012f5b8: addiu $v1, $zero, -0x80
    *(uint32_t*)((s1) + 0x84) = v0;                             // 0x0012f5bc: sw $v0, 0x84($s1)
    *(uint16_t*)((s1) + 0x2ec) = v1;                            // 0x0012f5c0: sh $v1, 0x2ec($s1)
    a0 = s1 + 0x2d7;                                            // 0x0012f5c4: addiu $a0, $s1, 0x2d7
    *(uint16_t*)((s1) + 0x2ea) = v1;                            // 0x0012f5c8: sh $v1, 0x2ea($s1)
    *(uint16_t*)((s1) + 0x2c8) = 0;                             // 0x0012f5d0: sh $zero, 0x2c8($s1)
    a2 = 0x10;                                                  // 0x0012f5d4: addiu $a2, $zero, 0x10
    *(uint16_t*)((s1) + 0x2ce) = 0;                             // 0x0012f5d8: sh $zero, 0x2ce($s1)
    *(uint16_t*)((s1) + 0x2ca) = 0;                             // 0x0012f5dc: sh $zero, 0x2ca($s1)
    *(uint8_t*)((s1) + 0x2d6) = 0;                              // 0x0012f5e0: sb $zero, 0x2d6($s1)
    func_00107d30();  // 0x107c70                                // 0x0012f5e4: jal 0x107c70
    *(uint16_t*)((s1) + 0x2e8) = 0;                             // 0x0012f5e8: sh $zero, 0x2e8($s1)
    v1 = 1;                                                     // 0x0012f5ec: addiu $v1, $zero, 1
    *(uint8_t*)(s1) = v1;                                       // 0x0012f5f0: sb $v1, 0($s1)
label_0x12f5f8:
    return;                                                     // 0x0012f608: jr $ra
    sp = sp + 0x20;                                             // 0x0012f60c: addiu $sp, $sp, 0x20
}