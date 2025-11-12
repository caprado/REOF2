void func_0010b2a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = a1 | a0;                                               // 0x0010b2a4: or $a3, $a1, $a0
    t2 = 0x10;                                                  // 0x0010b2a8: addiu $t2, $zero, 0x10
    v0 = a3 & 7;                                                // 0x0010b2ac: andi $v0, $a3, 7
    t1 = 8;                                                     // 0x0010b2b0: addiu $t1, $zero, 8
    if (v0 != 0) goto label_0x10b408;                           // 0x0010b2b4: bnez $v0, 0x10b408
    v0 = a3 & 0xf;                                              // 0x0010b2b8: andi $v0, $a3, 0xf
    if (v0 == 0) t1 = t2;                                       // 0x0010b2bc: movz $t1, $t2, $v0
    if (v0 != 0) goto label_0x10b374;                           // 0x0010b2c0: bnez $v0, 0x10b374
    v0 = ((unsigned)a2 < (unsigned)t1) ? 1 : 0;                 // 0x0010b2c4: sltu $v0, $a2, $t1
    if (v0 != 0) goto label_0x10b408;                           // 0x0010b2c8: bnez $v0, 0x10b408
    /* nop */                                                   // 0x0010b2cc: nop 
    a3 = 0x101 << 16;                                           // 0x0010b2d0: lui $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010b2d4: ori $a3, $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010b2dc: ori $a3, $a3, 0x101
    a3 = a3 | 0x101;                                            // 0x0010b2e4: ori $a3, $a3, 0x101
    /* FPU: andi.b $w0, $w0, 0xa3 */                            // 0x0010b2e8: andi.b $w0, $w0, 0xa3
    a3 = 0x8080 << 16;                                          // 0x0010b2f4: lui $a3, 0x8080
    a3 = a3 | 0x8080;                                           // 0x0010b2f8: ori $a3, $a3, 0x8080
    a3 = a3 | 0x8080;                                           // 0x0010b300: ori $a3, $a3, 0x8080
    a3 = a3 | 0x8080;                                           // 0x0010b308: ori $a3, $a3, 0x8080
    v1 = v0 | v1;                                               // 0x0010b320: or $v1, $v0, $v1
    if (v1 != 0) goto label_0x10b404;                           // 0x0010b324: bnez $v1, 0x10b404
    /* FPU: andi.b $w0, $w0, 0xa3 */                            // 0x0010b32c: andi.b $w0, $w0, 0xa3
    a2 = a2 + -0x10;                                            // 0x0010b330: addiu $a2, $a2, -0x10
    a1 = a1 + 0x10;                                             // 0x0010b334: addiu $a1, $a1, 0x10
    v0 = ((unsigned)a2 < (unsigned)0x10) ? 1 : 0;               // 0x0010b338: sltiu $v0, $a2, 0x10
    if (v0 != 0) goto label_0x10b404;                           // 0x0010b340: bnez $v0, 0x10b404
    a3 = a3 + 0x10;                                             // 0x0010b344: addiu $a3, $a3, 0x10
    /* FPU: andi.b $w0, $w0, 0xa2 */                            // 0x0010b348: andi.b $w0, $w0, 0xa2
    v0 = v0 | v1;                                               // 0x0010b360: or $v0, $v0, $v1
    /* beqzl $v0, 0x10b3d0 */                                   // 0x0010b364: beqzl $v0, 0x10b3d0
    /* FPU: andi.b $w0, $w0, 0xa3 */                            // 0x0010b368: andi.b $w0, $w0, 0xa3
    goto label_0x10b408;                                        // 0x0010b36c: b 0x10b408
label_0x10b374:
    if (v0 != 0) goto label_0x10b408;                           // 0x0010b374: bnez $v0, 0x10b408
    /* nop */                                                   // 0x0010b378: nop 
    t1 = 0x101 << 16;                                           // 0x0010b380: lui $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010b384: ori $t1, $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010b38c: ori $t1, $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010b394: ori $t1, $t1, 0x101
    t2 = 0x8080 << 16;                                          // 0x0010b398: lui $t2, 0x8080
    t2 = t2 | 0x8080;                                           // 0x0010b39c: ori $t2, $t2, 0x8080
    t2 = t2 | 0x8080;                                           // 0x0010b3a4: ori $t2, $t2, 0x8080
    t2 = t2 | 0x8080;                                           // 0x0010b3ac: ori $t2, $t2, 0x8080
    v1 = ~(0 | v1);                                             // 0x0010b3b4: nor $v1, $zero, $v1
    v0 = v0 & v1;                                               // 0x0010b3b8: and $v0, $v0, $v1
    v0 = v0 & t2;                                               // 0x0010b3bc: and $v0, $v0, $t2
    if (v0 != 0) goto label_0x10b404;                           // 0x0010b3c0: bnez $v0, 0x10b404
    /* nop */                                                   // 0x0010b3cc: nop 
    a2 = a2 + -8;                                               // 0x0010b3d0: addiu $a2, $a2, -8
    a1 = a1 + 8;                                                // 0x0010b3d4: addiu $a1, $a1, 8
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x0010b3d8: sltiu $v0, $a2, 8
    if (v0 != 0) goto label_0x10b404;                           // 0x0010b3e0: bnez $v0, 0x10b404
    a3 = a3 + 8;                                                // 0x0010b3e4: addiu $a3, $a3, 8
    v1 = ~(0 | v0);                                             // 0x0010b3ec: nor $v1, $zero, $v0
    v0 = v0 & v1;                                               // 0x0010b3f4: and $v0, $v0, $v1
    v0 = v0 & t2;                                               // 0x0010b3f8: and $v0, $v0, $t2
    /* beqzl $v0, 0x10b3d0 */                                   // 0x0010b3fc: beqzl $v0, 0x10b3d0
label_0x10b404:
label_0x10b408:
    if (a2 == 0) goto label_0x10b454;                           // 0x0010b408: beqz $a2, 0x10b454
    v0 = *(uint8_t*)(a1);                                       // 0x0010b410: lbu $v0, 0($a1)
    a2 = a2 + -1;                                               // 0x0010b414: addiu $a2, $a2, -1
    a1 = a1 + 1;                                                // 0x0010b418: addiu $a1, $a1, 1
    *(uint8_t*)(a0) = v0;                                       // 0x0010b41c: sb $v0, 0($a0)
    v0 = v0 << 0x18;                                            // 0x0010b420: sll $v0, $v0, 0x18
    if (v0 != 0) goto label_0x10b408;                           // 0x0010b424: bnez $v0, 0x10b408
    a0 = a0 + 1;                                                // 0x0010b428: addiu $a0, $a0, 1
    if (v0 == 0) goto label_0x10b454;                           // 0x0010b430: beqz $v0, 0x10b454
    a2 = a2 + -1;                                               // 0x0010b434: addiu $a2, $a2, -1
label_0x10b438:
    *(uint8_t*)(a0) = 0;                                        // 0x0010b438: sb $zero, 0($a0)
    a0 = a0 + 1;                                                // 0x0010b440: addiu $a0, $a0, 1
    a2 = a2 + -1;                                               // 0x0010b444: addiu $a2, $a2, -1
    /* nop */                                                   // 0x0010b448: nop 
    if (v0 != 0) goto label_0x10b438;                           // 0x0010b44c: bnez $v0, 0x10b438
    /* nop */                                                   // 0x0010b450: nop 
label_0x10b454:
    return;                                                     // 0x0010b454: jr $ra
}