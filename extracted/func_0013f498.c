void func_0013f498() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013f498: addiu $sp, $sp, -0x10
    a0 = 0x22 << 16;                                            // 0x0013f49c: lui $a0, 0x22
    a0 = &str_002262e8;  // "SJUNI Error"                       // 0x0013f4a4: addiu $a0, $a0, 0x62e8
    return func_0013ef48();  // Tail call                       // 0x0013f4ac: j 0x13ef48
    sp = sp + 0x10;                                             // 0x0013f4b0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013f4b4: nop 
    sp = sp + -0x10;                                            // 0x0013f4b8: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0013f4bc: lui $v0, 0x21
    v0 = v0 + -0x4de0;                                          // 0x0013f4c4: addiu $v0, $v0, -0x4de0
    func_0013ef30();  // 0x13ef18                                // 0x0013f4cc: jal 0x13ef18
    v1 = g_0020b220;  // Global at 0x0020b220                   // 0x0013f4d0: lw $v1, 0($v0)
    v0 = 0x21 << 16;                                            // 0x0013f4d4: lui $v0, 0x21
    a0 = 0x21 << 16;                                            // 0x0013f4d8: lui $a0, 0x21
    s0 = v0 + -0x4da8;                                          // 0x0013f4dc: addiu $s0, $v0, -0x4da8
    a0 = a0 + -0x4da0;                                          // 0x0013f4e0: addiu $a0, $a0, -0x4da0
    v0 = g_0020b258;  // Global at 0x0020b258                   // 0x0013f4e4: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x13f500;                           // 0x0013f4ec: bnez $v0, 0x13f500
    a2 = 0x4000;                                                // 0x0013f4f0: addiu $a2, $zero, 0x4000
    func_00107d30();  // 0x107c70                                // 0x0013f4f4: jal 0x107c70
    /* nop */                                                   // 0x0013f4f8: nop 
    v0 = g_0020b258;  // Global at 0x0020b258                   // 0x0013f4fc: lw $v0, 0($s0)
label_0x13f500:
    v0 = v0 + 1;                                                // 0x0013f500: addiu $v0, $v0, 1
    g_0020b258 = v0;  // Global at 0x0020b258                   // 0x0013f508: sw $v0, 0($s0)
    return func_0013ef80();  // Tail call                        // 0x0013f510: j 0x13ef30
    sp = sp + 0x10;                                             // 0x0013f514: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0013f518: addiu $sp, $sp, -0x10
    func_0013ef30();  // 0x13ef18                                // 0x0013f520: jal 0x13ef18
    /* nop */                                                   // 0x0013f524: nop 
    v1 = 0x21 << 16;                                            // 0x0013f528: lui $v1, 0x21
    a0 = 0x21 << 16;                                            // 0x0013f52c: lui $a0, 0x21
    v1 = v1 + -0x4da8;                                          // 0x0013f530: addiu $v1, $v1, -0x4da8
    a0 = a0 + -0x4da0;                                          // 0x0013f534: addiu $a0, $a0, -0x4da0
    v0 = g_0020b258;  // Global at 0x0020b258                   // 0x0013f538: lw $v0, 0($v1)
    a2 = 0x4000;                                                // 0x0013f540: addiu $a2, $zero, 0x4000
    v0 = v0 + -1;                                               // 0x0013f544: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x13f558;                           // 0x0013f548: bnez $v0, 0x13f558
    g_0020b258 = v0;  // Global at 0x0020b258                   // 0x0013f54c: sw $v0, 0($v1)
    func_00107d30();  // 0x107c70                                // 0x0013f550: jal 0x107c70
    /* nop */                                                   // 0x0013f554: nop 
label_0x13f558:
    return func_0013ef80();  // Tail call                        // 0x0013f55c: j 0x13ef30
    sp = sp + 0x10;                                             // 0x0013f560: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013f564: nop 
    sp = sp + -0x30;                                            // 0x0013f568: addiu $sp, $sp, -0x30
    func_0013ef30();  // 0x13ef18                                // 0x0013f588: jal 0x13ef18
    a1 = 0x21 << 16;                                            // 0x0013f590: lui $a1, 0x21
    v0 = a1 + -0x4da0;                                          // 0x0013f594: addiu $v0, $a1, -0x4da0
    v0 = v0 + 4;                                                // 0x0013f598: addiu $v0, $v0, 4
    v1 = g_0020b264;  // Global at 0x0020b264                   // 0x0013f59c: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x13f5d4;                           // 0x0013f5a0: beqz $v1, 0x13f5d4
    a0 = a0 + 1;                                                // 0x0013f5ac: addiu $a0, $a0, 1
    v0 = (a0 < 0x100) ? 1 : 0;                                  // 0x0013f5b0: slti $v0, $a0, 0x100
    if (v0 == 0) goto label_0x13f5d4;                           // 0x0013f5b4: beqz $v0, 0x13f5d4
    v1 = v1 + 0x40;                                             // 0x0013f5b8: addiu $v1, $v1, 0x40
    v0 = g_0020b298;  // Global at 0x0020b298                   // 0x0013f5bc: lw $v0, 0($v1)
    /* nop */                                                   // 0x0013f5c0: nop 
    /* nop */                                                   // 0x0013f5c4: nop 
    /* nop */                                                   // 0x0013f5c8: nop 
    /* bnezl $v0, 0x13f5b0 */                                   // 0x0013f5cc: bnezl $v0, 0x13f5b0
    a0 = a0 + 1;                                                // 0x0013f5d0: addiu $a0, $a0, 1
label_0x13f5d4:
    v0 = 0x100;                                                 // 0x0013f5d4: addiu $v0, $zero, 0x100
    if (a0 == v0) goto label_0x13f630;                          // 0x0013f5d8: beq $a0, $v0, 0x13f630
    v0 = a1 + -0x4da0;                                          // 0x0013f5e0: addiu $v0, $a1, -0x4da0
    a1 = 0x22 << 16;                                            // 0x0013f5e4: lui $a1, 0x22
    a0 = a0 << 6;                                               // 0x0013f5e8: sll $a0, $a0, 6
    v1 = 0x21 << 16;                                            // 0x0013f5ec: lui $v1, 0x21
    a2 = 0x14 << 16;                                            // 0x0013f5f0: lui $a2, 0x14
    s0 = a0 + v0;                                               // 0x0013f5f4: addu $s0, $a0, $v0
    v1 = v1 + -0x4dd8;                                          // 0x0013f5f8: addiu $v1, $v1, -0x4dd8
    a1 = a1 + 0x62d8;                                           // 0x0013f5fc: addiu $a1, $a1, 0x62d8
    a2 = a2 + -0xb68;                                           // 0x0013f600: addiu $a2, $a2, -0xb68
    v0 = 1;                                                     // 0x0013f604: addiu $v0, $zero, 1
    g_0020b25c = v0;  // Global at 0x0020b25c                   // 0x0013f608: sw $v0, 4($s0)
    g_0020b258 = v1;  // Global at 0x0020b258                   // 0x0013f610: sw $v1, 0($s0)
    g_0020b274 = s1;  // Global at 0x0020b274                   // 0x0013f614: sw $s1, 0x1c($s0)
    g_0020b278 = s2;  // Global at 0x0020b278                   // 0x0013f618: sw $s2, 0x20($s0)
    g_0020b27c = s3;  // Global at 0x0020b27c                   // 0x0013f61c: sw $s3, 0x24($s0)
    g_0020b260 = a1;  // Global at 0x0020b260                   // 0x0013f620: sw $a1, 8($s0)
    g_0020b290 = a2;  // Global at 0x0020b290                   // 0x0013f624: sw $a2, 0x38($s0)
    func_0013f6f8();  // 0x13f6b0                                // 0x0013f628: jal 0x13f6b0
    g_0020b294 = s0;  // Global at 0x0020b294                   // 0x0013f62c: sw $s0, 0x3c($s0)
label_0x13f630:
    func_0013ef80();  // 0x13ef30                                // 0x0013f630: jal 0x13ef30
    /* nop */                                                   // 0x0013f634: nop 
    return;                                                     // 0x0013f650: jr $ra
    sp = sp + 0x30;                                             // 0x0013f654: addiu $sp, $sp, 0x30
}