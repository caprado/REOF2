void func_00107a20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = ((unsigned)a2 < (unsigned)0x10) ? 1 : 0;               // 0x00107a20: sltiu $v0, $a2, 0x10
    if (v0 != 0) goto label_0x107a6c;                           // 0x00107a24: bnez $v0, 0x107a6c
    v0 = a0 | a1;                                               // 0x00107a28: or $v0, $a0, $a1
    v0 = v0 & 0xf;                                              // 0x00107a2c: andi $v0, $v0, 0xf
    if (v0 != 0) goto label_0x107a6c;                           // 0x00107a30: bnez $v0, 0x107a6c
    /* nop */                                                   // 0x00107a34: nop 
label_0x107a38:
    /* FPU: andi.b $w0, $w0, 0x83 */                            // 0x00107a38: andi.b $w0, $w0, 0x83
    a3 = ((unsigned)a2 < (unsigned)0x20) ? 1 : 0;               // 0x00107a3c: sltiu $a3, $a2, 0x20
    /* FPU: andi.b $w0, $w0, 0xa2 */                            // 0x00107a40: andi.b $w0, $w0, 0xa2
    a0 = a0 + 0x10;                                             // 0x00107a44: addiu $a0, $a0, 0x10
    v0 = a1 + 0x10;                                             // 0x00107a4c: addiu $v0, $a1, 0x10
    t1 = t2 | t0;                                               // 0x00107a54: or $t1, $t2, $t0
    if (t1 == 0) a1 = v0;                                       // 0x00107a58: movz $a1, $v0, $t1
    /* bnezl $t1, 0x107a6c */                                   // 0x00107a5c: bnezl $t1, 0x107a6c
    a0 = a0 + -0x10;                                            // 0x00107a60: addiu $a0, $a0, -0x10
    if (a3 == 0) goto label_0x107a38;                           // 0x00107a64: beqz $a3, 0x107a38
    a2 = a2 + -0x10;                                            // 0x00107a68: addiu $a2, $a2, -0x10
label_0x107a6c:
    v0 = 0xffff << 16;                                          // 0x00107a6c: lui $v0, 0xffff
    a2 = a2 + -1;                                               // 0x00107a70: addiu $a2, $a2, -1
    v0 = v0 | 0xffff;                                           // 0x00107a74: ori $v0, $v0, 0xffff
    if (a2 == v0) return;  // Branch to 0x107aac                // 0x00107a78: beq $a2, $v0, 0x107aac
    /* nop */                                                   // 0x00107a7c: nop 
    a3 = 0xffff << 16;                                          // 0x00107a80: lui $a3, 0xffff
    a3 = a3 | 0xffff;                                           // 0x00107a84: ori $a3, $a3, 0xffff
    v1 = *(uint8_t*)(a0);                                       // 0x00107a88: lbu $v1, 0($a0)
    v0 = *(uint8_t*)(a1);                                       // 0x00107a8c: lbu $v0, 0($a1)
    if (v1 == v0) return;  // Branch to 0x107aa0                // 0x00107a90: beq $v1, $v0, 0x107aa0
    a0 = a0 + 1;                                                // 0x00107a94: addiu $a0, $a0, 1
    return;                                                     // 0x00107a98: jr $ra
    v0 = v1 - v0;                                               // 0x00107a9c: subu $v0, $v1, $v0
}