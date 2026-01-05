void func_001a82b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a82b0: addiu $sp, $sp, -0x30
    at = 0x2a << 16;                                            // 0x001a82b4: lui $at, 0x2a
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a82bc: addu.qb $zero, $sp, $s1
    g_002a14d0 = 0;  // Global at 0x002a14d0                    // 0x001a82c8: sb $zero, 0x14d0($at)
    at = 0x2a << 16;                                            // 0x001a82d0: lui $at, 0x2a
    *(uint32_t*)((gp) + -0x63f0) = 0;                           // 0x001a82d4: sw $zero, -0x63f0($gp)
    g_002a14c0 = 0;  // Global at 0x002a14c0                    // 0x001a82d8: sb $zero, 0x14c0($at)
    at = 0x2a << 16;                                            // 0x001a82dc: lui $at, 0x2a
    g_002a13c0 = 0;  // Global at 0x002a13c0                    // 0x001a82e0: sb $zero, 0x13c0($at)
    at = 0x2a << 16;                                            // 0x001a82e4: lui $at, 0x2a
    g_002a1550 = 0;  // Global at 0x002a1550                    // 0x001a82e8: sb $zero, 0x1550($at)
    at = 0x2a << 16;                                            // 0x001a82ec: lui $at, 0x2a
    g_002a1650 = 0;  // Global at 0x002a1650                    // 0x001a82f0: sb $zero, 0x1650($at)
    at = 0x2a << 16;                                            // 0x001a82f4: lui $at, 0x2a
    g_002a1530 = 0;  // Global at 0x002a1530                    // 0x001a82f8: sb $zero, 0x1530($at)
    at = 0x2a << 16;                                            // 0x001a82fc: lui $at, 0x2a
    if (s1 == 0) goto label_0x1a8388;                           // 0x001a8300: beqz $s1, 0x1a8388
    g_002a1540 = 0;  // Global at 0x002a1540                    // 0x001a8304: sb $zero, 0x1540($at)
    a0 = 0x23 << 16;                                            // 0x001a8308: lui $a0, 0x23
    func_00108ed8();  // 108ed8                                // 0x001a830c: jal 0x108ed8
    a0 = &str_0022a6f0;  // "Setup DVD file system.\n"          // 0x001a8310: addiu $a0, $a0, -0x5910
    a0 = 0x2a << 16;                                            // 0x001a8314: lui $a0, 0x2a
    a0 = a0 + 0x14f0;                                           // 0x001a831c: addiu $a0, $a0, 0x14f0
    func_00107c70();  // 107c70                                // 0x001a8320: jal 0x107c70
    a2 = 0x10;                                                  // 0x001a8324: addiu $a2, $zero, 0x10
    a0 = 0x2a << 16;                                            // 0x001a8328: lui $a0, 0x2a
    at = 0x2a << 16;                                            // 0x001a832c: lui $at, 0x2a
    a0 = a0 + 0x14f0;                                           // 0x001a8330: addiu $a0, $a0, 0x14f0
    func_00130ff8();  // 130ff8                                // 0x001a8334: jal 0x130ff8
    g_002a14f0 = s1;  // Global at 0x002a14f0                   // 0x001a8338: sw $s1, 0x14f0($at)
    a0 = 0x2a << 16;                                            // 0x001a833c: lui $a0, 0x2a
    func_0010ac68();  // 10ac68                                // 0x001a8344: jal 0x10ac68
    a0 = a0 + 0x1550;                                           // 0x001a8348: addiu $a0, $a0, 0x1550
    a0 = 0x2a << 16;                                            // 0x001a834c: lui $a0, 0x2a
    a1 = 0x23 << 16;                                            // 0x001a8350: lui $a1, 0x23
    a0 = a0 + 0x14d0;                                           // 0x001a8354: addiu $a0, $a0, 0x14d0
    a1 = a1 + -0x58f0;                                          // 0x001a8358: addiu $a1, $a1, -0x58f0
    func_0010ac68();  // 10ac68                                // 0x001a835c: jal 0x10ac68
    *(uint32_t*)((gp) + -0x63f0) = 0;                           // 0x001a8360: sw $zero, -0x63f0($gp)
    a0 = 0x2a << 16;                                            // 0x001a8364: lui $a0, 0x2a
    a1 = 0x23 << 16;                                            // 0x001a8368: lui $a1, 0x23
    a0 = a0 + 0x14c0;                                           // 0x001a836c: addiu $a0, $a0, 0x14c0
    func_0010ac68();  // 10ac68                                // 0x001a8370: jal 0x10ac68
    a1 = a1 + -0x58f0;                                          // 0x001a8374: addiu $a1, $a1, -0x58f0
    a0 = 0x2a << 16;                                            // 0x001a8378: lui $a0, 0x2a
    func_0010ac68();  // 10ac68                                // 0x001a8380: jal 0x10ac68
    a0 = a0 + 0x13c0;                                           // 0x001a8384: addiu $a0, $a0, 0x13c0
label_0x1a8388:
    if (s0 == 0) goto label_0x1a8418;                           // 0x001a8388: beqz $s0, 0x1a8418
    a0 = 0x23 << 16;                                            // 0x001a8390: lui $a0, 0x23
    func_00108ed8();  // 108ed8                                // 0x001a8394: jal 0x108ed8
    a0 = &str_0022a720;  // "pfs1:\\0flist.dir"                 // 0x001a8398: addiu $a0, $a0, -0x58e0
    a0 = 0x2a << 16;                                            // 0x001a839c: lui $a0, 0x2a
    a0 = a0 + 0x1510;                                           // 0x001a83a4: addiu $a0, $a0, 0x1510
    func_00107c70();  // 107c70                                // 0x001a83a8: jal 0x107c70
    a2 = 0x14;                                                  // 0x001a83ac: addiu $a2, $zero, 0x14
    a0 = 0x2a << 16;                                            // 0x001a83b0: lui $a0, 0x2a
    at = 0x2a << 16;                                            // 0x001a83b4: lui $at, 0x2a
    a0 = a0 + 0x1510;                                           // 0x001a83b8: addiu $a0, $a0, 0x1510
    func_00130d48();  // 130d48                                // 0x001a83bc: jal 0x130d48
    g_002a1510 = s0;  // Global at 0x002a1510                   // 0x001a83c0: sw $s0, 0x1510($at)
    a0 = 0x2a << 16;                                            // 0x001a83c4: lui $a0, 0x2a
    func_0010ac68();  // 10ac68                                // 0x001a83cc: jal 0x10ac68
    a0 = a0 + 0x1650;                                           // 0x001a83d0: addiu $a0, $a0, 0x1650
    v0 = 1;                                                     // 0x001a83d4: addiu $v0, $zero, 1
    a0 = 0x2a << 16;                                            // 0x001a83d8: lui $a0, 0x2a
    a1 = 0x23 << 16;                                            // 0x001a83dc: lui $a1, 0x23
    a0 = a0 + 0x14d0;                                           // 0x001a83e0: addiu $a0, $a0, 0x14d0
    *(uint32_t*)((gp) + -0x63f0) = v0;                          // 0x001a83e4: sw $v0, -0x63f0($gp)
    func_0010ac68();  // 10ac68                                // 0x001a83e8: jal 0x10ac68
    a1 = a1 + -0x58c8;                                          // 0x001a83ec: addiu $a1, $a1, -0x58c8
    a0 = 0x2a << 16;                                            // 0x001a83f0: lui $a0, 0x2a
    a1 = 0x23 << 16;                                            // 0x001a83f4: lui $a1, 0x23
    a0 = a0 + 0x14c0;                                           // 0x001a83f8: addiu $a0, $a0, 0x14c0
    func_0010ac68();  // 10ac68                                // 0x001a83fc: jal 0x10ac68
    a1 = a1 + -0x58c8;                                          // 0x001a8400: addiu $a1, $a1, -0x58c8
    a0 = 0x2a << 16;                                            // 0x001a8404: lui $a0, 0x2a
    func_0010ac68();  // 10ac68                                // 0x001a840c: jal 0x10ac68
    a0 = a0 + 0x13c0;                                           // 0x001a8410: addiu $a0, $a0, 0x13c0
label_0x1a8418:
    func_0012b2f8();  // 12b2f8                                // 0x001a8418: jal 0x12b2f8
    /* nop */                                                   // 0x001a841c: nop 
    v0 = 1;                                                     // 0x001a8420: addiu $v0, $zero, 1
    a0 = 2;                                                     // 0x001a8424: addiu $a0, $zero, 2
    func_0012c160();  // 12c160                                // 0x001a8428: jal 0x12c160
    *(uint32_t*)((gp) + -0x63f4) = v0;                          // 0x001a842c: sw $v0, -0x63f4($gp)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a8434: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a8438: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a843c: jr $ra
    sp = sp + 0x30;                                             // 0x001a8440: addiu $sp, $sp, 0x30
}