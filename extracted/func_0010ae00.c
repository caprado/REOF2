void func_0010ae00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a0 & 7;                                                // 0x0010ae00: andi $v0, $a0, 7
    if (v0 != 0) goto label_0x10af14;                           // 0x0010ae04: bnez $v0, 0x10af14
    v1 = a0 & 0xf;                                              // 0x0010ae0c: andi $v1, $a0, 0xf
    v0 = 0x101 << 16;                                           // 0x0010ae10: lui $v0, 0x101
    v0 = v0 | 0x101;                                            // 0x0010ae14: ori $v0, $v0, 0x101
    v0 = v0 | 0x101;                                            // 0x0010ae1c: ori $v0, $v0, 0x101
    v0 = v0 | 0x101;                                            // 0x0010ae24: ori $v0, $v0, 0x101
    if (v1 != 0) goto label_0x10aea4;                           // 0x0010ae28: bnez $v1, 0x10aea4
    /* FPU: andi.b $w0, $w0, 0xa3 */                            // 0x0010ae30: andi.b $w0, $w0, 0xa3
    a0 = 0x8080 << 16;                                          // 0x0010ae38: lui $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010ae3c: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010ae44: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010ae4c: ori $a0, $a0, 0x8080
    a2 = v1 | v0;                                               // 0x0010ae68: or $a2, $v1, $v0
    /* bnezl $a2, 0x10af14 */                                   // 0x0010ae6c: bnezl $a2, 0x10af14
    a1 = a1 + 0x10;                                             // 0x0010ae74: addiu $a1, $a1, 0x10
    /* FPU: andi.b $w0, $w0, 0xa2 */                            // 0x0010ae78: andi.b $w0, $w0, 0xa2
    v1 = v1 | a0;                                               // 0x0010ae90: or $v1, $v1, $a0
    /* beqzl $v1, 0x10ae78 */                                   // 0x0010ae94: beqzl $v1, 0x10ae78
    a1 = a1 + 0x10;                                             // 0x0010ae98: addiu $a1, $a1, 0x10
    goto label_0x10af14;                                        // 0x0010ae9c: b 0x10af14
label_0x10aea4:
    a0 = 0x8080 << 16;                                          // 0x0010aea8: lui $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010aeac: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010aeb4: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010aebc: ori $a0, $a0, 0x8080
    v1 = ~(0 | v1);                                             // 0x0010aec4: nor $v1, $zero, $v1
    v0 = v0 & v1;                                               // 0x0010aec8: and $v0, $v0, $v1
    v0 = v0 & a0;                                               // 0x0010aecc: and $v0, $v0, $a0
    /* bnezl $v0, 0x10af14 */                                   // 0x0010aed0: bnezl $v0, 0x10af14
    a2 = 0x101 << 16;                                           // 0x0010aed8: lui $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010aedc: ori $a2, $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010aee4: ori $a2, $a2, 0x101
    a2 = a2 | 0x101;                                            // 0x0010aeec: ori $a2, $a2, 0x101
    a1 = a1 + 8;                                                // 0x0010aef0: addiu $a1, $a1, 8
    v1 = ~(0 | v0);                                             // 0x0010aef8: nor $v1, $zero, $v0
    v0 = v0 & v1;                                               // 0x0010af00: and $v0, $v0, $v1
    v0 = v0 & a0;                                               // 0x0010af04: and $v0, $v0, $a0
    /* beqzl $v0, 0x10aef4 */                                   // 0x0010af08: beqzl $v0, 0x10aef4
    a1 = a1 + 8;                                                // 0x0010af0c: addiu $a1, $a1, 8
label_0x10af14:
    v0 = g_80800000;  // Global at 0x80800000                   // 0x0010af14: lb $v0, 0($a0)
    /* nop */                                                   // 0x0010af18: nop 
    /* nop */                                                   // 0x0010af1c: nop 
    /* nop */                                                   // 0x0010af20: nop 
    /* nop */                                                   // 0x0010af24: nop 
    /* bnezl $v0, 0x10af14 */                                   // 0x0010af28: bnezl $v0, 0x10af14
    a0 = a0 + 1;                                                // 0x0010af2c: addiu $a0, $a0, 1
    return;                                                     // 0x0010af30: jr $ra
    v0 = a0 - a3;                                               // 0x0010af34: subu $v0, $a0, $a3
}