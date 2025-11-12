void func_0010a860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0010a860: addiu $sp, $sp, -0x20
    v0 = s0 & 7;                                                // 0x0010a86c: andi $v0, $s0, 7
    if (v0 != 0) goto label_0x10a954;                           // 0x0010a870: bnez $v0, 0x10a954
    /* FPU: addu.qb $zero, $sp, $ra */                          // 0x0010a874: addu.qb $zero, $sp, $ra
    v0 = s0 & 0xf;                                              // 0x0010a878: andi $v0, $s0, 0xf
    v1 = 0x101 << 16;                                           // 0x0010a87c: lui $v1, 0x101
    v1 = v1 | 0x101;                                            // 0x0010a880: ori $v1, $v1, 0x101
    v1 = v1 | 0x101;                                            // 0x0010a888: ori $v1, $v1, 0x101
    v1 = v1 | 0x101;                                            // 0x0010a890: ori $v1, $v1, 0x101
    a0 = 0x8080 << 16;                                          // 0x0010a894: lui $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010a898: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010a8a0: ori $a0, $a0, 0x8080
    a0 = a0 | 0x8080;                                           // 0x0010a8a8: ori $a0, $a0, 0x8080
    if (v0 != 0) goto label_0x10a910;                           // 0x0010a8ac: bnez $v0, 0x10a910
    /* FPU: nori.b $w0, $w0, 2 */                               // 0x0010a8b4: nori.b $w0, $w0, 2
    v1 = v0 | v1;                                               // 0x0010a8d4: or $v1, $v0, $v1
    if (v1 != 0) goto label_0x10a954;                           // 0x0010a8d8: bnez $v1, 0x10a954
    a2 = a0 + 0x10;                                             // 0x0010a8e0: addiu $a2, $a0, 0x10
    /* FPU: andi.b $w0, $w0, 0xc2 */                            // 0x0010a8e4: andi.b $w0, $w0, 0xc2
    v0 = v0 | v1;                                               // 0x0010a8fc: or $v0, $v0, $v1
    /* beqzl $v0, 0x10a8e4 */                                   // 0x0010a900: beqzl $v0, 0x10a8e4
    a2 = a2 + 0x10;                                             // 0x0010a904: addiu $a2, $a2, 0x10
    goto label_0x10a954;                                        // 0x0010a908: b 0x10a954
label_0x10a910:
    v0 = ~(0 | a2);                                             // 0x0010a91c: nor $v0, $zero, $a2
    v1 = v1 & v0;                                               // 0x0010a920: and $v1, $v1, $v0
    v1 = v1 & a0;                                               // 0x0010a924: and $v1, $v1, $a0
    if (v1 != 0) goto label_0x10a954;                           // 0x0010a928: bnez $v1, 0x10a954
    a2 = s0 + 8;                                                // 0x0010a930: addiu $a2, $s0, 8
    v1 = ~(0 | v0);                                             // 0x0010a938: nor $v1, $zero, $v0
    v0 = v0 & v1;                                               // 0x0010a940: and $v0, $v0, $v1
    v0 = v0 & t0;                                               // 0x0010a944: and $v0, $v0, $t0
    /* beqzl $v0, 0x10a934 */                                   // 0x0010a948: beqzl $v0, 0x10a934
    a2 = a2 + 8;                                                // 0x0010a94c: addiu $a2, $a2, 8
label_0x10a954:
    v0 = g_80800000;  // Global at 0x80800000                   // 0x0010a954: lb $v0, 0($a0)
    /* nop */                                                   // 0x0010a958: nop 
    /* nop */                                                   // 0x0010a95c: nop 
    /* nop */                                                   // 0x0010a960: nop 
    /* nop */                                                   // 0x0010a964: nop 
    /* bnezl $v0, 0x10a954 */                                   // 0x0010a968: bnezl $v0, 0x10a954
    a0 = a0 + 1;                                                // 0x0010a96c: addiu $a0, $a0, 1
    func_0010ae00();  // 0x10ac68                                // 0x0010a970: jal 0x10ac68
    /* nop */                                                   // 0x0010a974: nop 
    /* FPU: aver_u.h $w0, $w0, $w31 */                          // 0x0010a97c: aver_u.h $w0, $w0, $w31
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0010a980: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0010a984: jr $ra
    sp = sp + 0x20;                                             // 0x0010a988: addiu $sp, $sp, 0x20
}