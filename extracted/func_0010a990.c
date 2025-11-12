void func_0010a990() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 & 7;                                                // 0x0010a990: andi $v0, $a0, 7
    if (v0 != 0) goto label_0x10ab00;                           // 0x0010a994: bnez $v0, 0x10ab00
    a1 = a1 & 0xff;                                             // 0x0010a998: andi $a1, $a1, 0xff
    a2 = 0x101 << 16;                                           // 0x0010a9a0: lui $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010a9a4: ori $a2, $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010a9ac: ori $a2, $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010a9b4: ori $a2, $a2, 0x101
    v1 = a0 & 0xf;                                              // 0x0010a9bc: andi $v1, $a0, 0xf
    t0 = 0x8080 << 16;                                          // 0x0010a9c4: lui $t0, 0x8080
    t0 = t0 | 0x8080;                                           // 0x0010a9c8: ori $t0, $t0, 0x8080
    t0 = t0 | 0x8080;                                           // 0x0010a9d0: ori $t0, $t0, 0x8080
    t0 = t0 | 0x8080;                                           // 0x0010a9d8: ori $t0, $t0, 0x8080
    if (v1 != 0) goto label_0x10aa78;                           // 0x0010a9e4: bnez $v1, 0x10aa78
    /* FPU: andi.b $w0, $w0, 0x89 */                            // 0x0010a9ec: andi.b $w0, $w0, 0x89
    v1 = v0 | v1;                                               // 0x0010aa10: or $v1, $v0, $v1
    /* bnezl $v1, 0x10ab04 */                                   // 0x0010aa14: bnezl $v1, 0x10ab04
    v0 = *(uint8_t*)(a0);                                       // 0x0010aa18: lbu $v0, 0($a0)
    t0 = 0x8080 << 16;                                          // 0x0010aa28: lui $t0, 0x8080
    t0 = t0 | 0x8080;                                           // 0x0010aa2c: ori $t0, $t0, 0x8080
    t0 = t0 | 0x8080;                                           // 0x0010aa34: ori $t0, $t0, 0x8080
    t0 = t0 | 0x8080;                                           // 0x0010aa3c: ori $t0, $t0, 0x8080
    a2 = 0x101 << 16;                                           // 0x0010aa48: lui $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010aa4c: ori $a2, $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010aa54: ori $a2, $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010aa5c: ori $a2, $a2, 0x101
    v1 = v0 | v1;                                               // 0x0010aa64: or $v1, $v0, $v1
    /* beqzl $v1, 0x10a9ec */                                   // 0x0010aa68: beqzl $v1, 0x10a9ec
    a0 = a0 + 0x10;                                             // 0x0010aa6c: addiu $a0, $a0, 0x10
    goto label_0x10ab04;                                        // 0x0010aa70: b 0x10ab04
    v0 = *(uint8_t*)(a0);                                       // 0x0010aa74: lbu $v0, 0($a0)
label_0x10aa78:
    v1 = ~(0 | t1);                                             // 0x0010aa7c: nor $v1, $zero, $t1
    v0 = v0 & v1;                                               // 0x0010aa84: and $v0, $v0, $v1
    v0 = v0 & t0;                                               // 0x0010aa88: and $v0, $v0, $t0
    /* bnezl $v0, 0x10ab04 */                                   // 0x0010aa8c: bnezl $v0, 0x10ab04
    v0 = *(uint8_t*)(a0);                                       // 0x0010aa90: lbu $v0, 0($a0)
    v0 = t1 ^ a3;                                               // 0x0010aa94: xor $v0, $t1, $a3
    v0 = ~(0 | v0);                                             // 0x0010aa9c: nor $v0, $zero, $v0
    v1 = v1 & v0;                                               // 0x0010aaa0: and $v1, $v1, $v0
    v1 = v1 & t0;                                               // 0x0010aaa4: and $v1, $v1, $t0
    /* bnezl $v1, 0x10ab04 */                                   // 0x0010aaa8: bnezl $v1, 0x10ab04
    v0 = *(uint8_t*)(a0);                                       // 0x0010aaac: lbu $v0, 0($a0)
    a0 = a0 + 8;                                                // 0x0010aab4: addiu $a0, $a0, 8
    v1 = ~(0 | a2);                                             // 0x0010aac0: nor $v1, $zero, $a2
    v0 = v0 & v1;                                               // 0x0010aac4: and $v0, $v0, $v1
    v0 = v0 & t0;                                               // 0x0010aac8: and $v0, $v0, $t0
    if (v0 != 0) goto label_0x10ab00;                           // 0x0010aacc: bnez $v0, 0x10ab00
    v0 = a2 ^ a3;                                               // 0x0010aad0: xor $v0, $a2, $a3
    v1 = ~(0 | v0);                                             // 0x0010aad4: nor $v1, $zero, $v0
    v0 = v0 & v1;                                               // 0x0010aadc: and $v0, $v0, $v1
    v0 = v0 & t0;                                               // 0x0010aae0: and $v0, $v0, $t0
    /* beqzl $v0, 0x10aab8 */                                   // 0x0010aae4: beqzl $v0, 0x10aab8
    a0 = a0 + 8;                                                // 0x0010aae8: addiu $a0, $a0, 8
    goto label_0x10ab04;                                        // 0x0010aaec: b 0x10ab04
    v0 = *(uint8_t*)(a0);                                       // 0x0010aaf0: lbu $v0, 0($a0)
label_0x10aaf4:
    if (v0 == a1) goto label_0x10ab10;                          // 0x0010aaf4: beql $v0, $a1, 0x10ab10
    v1 = *(uint8_t*)(a0);                                       // 0x0010aaf8: lbu $v1, 0($a0)
    a0 = a0 + 1;                                                // 0x0010aafc: addiu $a0, $a0, 1
label_0x10ab00:
    v0 = *(uint8_t*)(a0);                                       // 0x0010ab00: lbu $v0, 0($a0)
label_0x10ab04:
    if (v0 != 0) goto label_0x10aaf4;                           // 0x0010ab04: bnez $v0, 0x10aaf4
    /* nop */                                                   // 0x0010ab08: nop 
    v1 = *(uint8_t*)(a0);                                       // 0x0010ab0c: lbu $v1, 0($a0)
label_0x10ab10:
    v1 = v1 ^ a1;                                               // 0x0010ab14: xor $v1, $v1, $a1
    return;                                                     // 0x0010ab18: jr $ra
    if (v1 == 0) v0 = a0;                                       // 0x0010ab1c: movz $v0, $a0, $v1
}