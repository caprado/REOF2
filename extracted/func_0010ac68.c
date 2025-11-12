void func_0010ac68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = a1 | a3;                                               // 0x0010ac6c: or $t0, $a1, $a3
    v0 = t0 & 7;                                                // 0x0010ac70: andi $v0, $t0, 7
    if (v0 != 0) goto label_0x10ad58;                           // 0x0010ac74: bnez $v0, 0x10ad58
    v0 = t0 & 0xf;                                              // 0x0010ac7c: andi $v0, $t0, 0xf
    t1 = 0x101 << 16;                                           // 0x0010ac80: lui $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010ac84: ori $t1, $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010ac8c: ori $t1, $t1, 0x101
    t1 = t1 | 0x101;                                            // 0x0010ac94: ori $t1, $t1, 0x101
    a0 = 0x8080 << 16;                                          // 0x0010ac98: lui $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010ac9c: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010aca4: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010acac: ori $a0, $a0, 0x8080
    /* bnezl $v0, 0x10ad18 */                                   // 0x0010acb0: bnezl $v0, 0x10ad18
    /* FPU: andi.b $w0, $w0, 0xa9 */                            // 0x0010acbc: andi.b $w0, $w0, 0xa9
    v1 = v0 | a0;                                               // 0x0010acd8: or $v1, $v0, $a0
    if (v1 != 0) goto label_0x10ad54;                           // 0x0010acdc: bnez $v1, 0x10ad54
label_0x10ace4:
    a1 = a1 + 0x10;                                             // 0x0010ace8: addiu $a1, $a1, 0x10
    /* FPU: andi.b $w0, $w0, 0xa9 */                            // 0x0010acec: andi.b $w0, $w0, 0xa9
    v1 = v0 | a0;                                               // 0x0010ad04: or $v1, $v0, $a0
    if (v1 == 0) goto label_0x10ace4;                           // 0x0010ad08: beqz $v1, 0x10ace4
    a2 = a2 + 0x10;                                             // 0x0010ad0c: addiu $a2, $a2, 0x10
    goto label_0x10ad58;                                        // 0x0010ad10: b 0x10ad58
    v1 = ~(0 | t2);                                             // 0x0010ad1c: nor $v1, $zero, $t2
    v0 = v0 & v1;                                               // 0x0010ad20: and $v0, $v0, $v1
    v0 = v0 & a0;                                               // 0x0010ad24: and $v0, $v0, $a0
    if (v0 != 0) goto label_0x10ad54;                           // 0x0010ad28: bnez $v0, 0x10ad54
label_0x10ad30:
    a1 = a1 + 8;                                                // 0x0010ad34: addiu $a1, $a1, 8
    v0 = ~(0 | t2);                                             // 0x0010ad3c: nor $v0, $zero, $t2
    v1 = v1 & v0;                                               // 0x0010ad44: and $v1, $v1, $v0
    v1 = v1 & a0;                                               // 0x0010ad48: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x10ad30;                           // 0x0010ad4c: beqz $v1, 0x10ad30
    a2 = a2 + 8;                                                // 0x0010ad50: addiu $a2, $a2, 8
label_0x10ad54:
label_0x10ad58:
    v0 = *(uint8_t*)(a1);                                       // 0x0010ad58: lbu $v0, 0($a1)
    a1 = a1 + 1;                                                // 0x0010ad5c: addiu $a1, $a1, 1
    *(uint8_t*)(v1) = v0;                                       // 0x0010ad60: sb $v0, 0($v1)
    v0 = v0 << 0x18;                                            // 0x0010ad64: sll $v0, $v0, 0x18
    v1 = v1 + 1;                                                // 0x0010ad68: addiu $v1, $v1, 1
    if (v0 != 0) goto label_0x10ad58;                           // 0x0010ad6c: bnez $v0, 0x10ad58
    /* nop */                                                   // 0x0010ad70: nop 
    return;                                                     // 0x0010ad74: jr $ra
}