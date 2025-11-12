void func_00107940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = ((unsigned)a2 < (unsigned)0x10) ? 1 : 0;               // 0x00107940: sltiu $v0, $a2, 0x10
    if (v0 != 0) goto label_0x1079e0;                           // 0x00107944: bnez $v0, 0x1079e0
    a1 = a1 & 0xff;                                             // 0x00107948: andi $a1, $a1, 0xff
    v0 = a0 & 0xf;                                              // 0x0010794c: andi $v0, $a0, 0xf
    if (v0 != 0) goto label_0x1079e0;                           // 0x00107950: bnez $v0, 0x1079e0
    v0 = 0x101 << 16;                                           // 0x0010795c: lui $v0, 0x101
    v0 = v0 | 0x101;                                            // 0x00107960: ori $v0, $v0, 0x101
    v0 = v0 | 0x101;                                            // 0x00107968: ori $v0, $v0, 0x101
    v0 = v0 | 0x101;                                            // 0x00107970: ori $v0, $v0, 0x101
    v1 = 0x8080 << 16;                                          // 0x00107978: lui $v1, 0x8080
    v1 = v1 | 0x8080;                                           // 0x0010797c: ori $v1, $v1, 0x8080
    v1 = v1 | 0x8080;                                           // 0x00107984: ori $v1, $v1, 0x8080
    v1 = v1 | 0x8080;                                           // 0x0010798c: ori $v1, $v1, 0x8080
label_0x1079a0:
    /* FPU: andi.b $w0, $w0, 0xe2 */                            // 0x001079a0: andi.b $w0, $w0, 0xe2
    v0 = v0 | v1;                                               // 0x001079c0: or $v0, $v0, $v1
    /* bnezl $v0, 0x1079e0 */                                   // 0x001079c4: bnezl $v0, 0x1079e0
    a2 = a2 + -0x10;                                            // 0x001079cc: addiu $a2, $a2, -0x10
    v0 = ((unsigned)a2 < (unsigned)0x10) ? 1 : 0;               // 0x001079d0: sltiu $v0, $a2, 0x10
    if (v0 == 0) goto label_0x1079a0;                           // 0x001079d4: beqz $v0, 0x1079a0
    a3 = a3 + 0x10;                                             // 0x001079d8: addiu $a3, $a3, 0x10
label_0x1079e0:
    v0 = 0xffff << 16;                                          // 0x001079e0: lui $v0, 0xffff
    a2 = a2 + -1;                                               // 0x001079e4: addiu $a2, $a2, -1
    v0 = v0 | 0xffff;                                           // 0x001079e8: ori $v0, $v0, 0xffff
    if (a2 == v0) goto label_0x107a10;                          // 0x001079ec: beq $a2, $v0, 0x107a10
    /* nop */                                                   // 0x001079f0: nop 
    v1 = 0xffff << 16;                                          // 0x001079f4: lui $v1, 0xffff
    v1 = v1 | 0xffff;                                           // 0x001079f8: ori $v1, $v1, 0xffff
label_0x1079fc:
    v0 = *(uint8_t*)(a0);                                       // 0x001079fc: lbu $v0, 0($a0)
    if (v0 == a1) return;  // Branch to 0x107a18                // 0x00107a00: beq $v0, $a1, 0x107a18
    a2 = a2 + -1;                                               // 0x00107a04: addiu $a2, $a2, -1
    if (a2 != v1) goto label_0x1079fc;                          // 0x00107a08: bne $a2, $v1, 0x1079fc
    a0 = a0 + 1;                                                // 0x00107a0c: addiu $a0, $a0, 1
label_0x107a10:
    return;                                                     // 0x00107a10: jr $ra
}