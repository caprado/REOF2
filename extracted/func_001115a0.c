void func_001115a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)(a0);                                       // 0x001115a0: lw $v1, 0($a0)
    v0 = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x001115ac: sltiu $v0, $v1, 2
    if (v0 == 0) goto label_0x1115d0;                           // 0x001115b0: beqz $v0, 0x1115d0
    t0 = *(int32_t*)((a0) + 4);                                 // 0x001115b4: lw $t0, 4($a0)
    v0 = 0 | 0x8000;                                            // 0x001115b8: ori $v0, $zero, 0x8000
    a3 = 0x7ff;                                                 // 0x001115c0: addiu $a3, $zero, 0x7ff
    goto label_0x11161c;                                        // 0x001115c4: b 0x11161c
    a1 = a1 | v0;                                               // 0x001115c8: or $a1, $a1, $v0
    /* nop */                                                   // 0x001115cc: nop 
label_0x1115d0:
    v0 = v1 ^ 4;                                                // 0x001115d0: xori $v0, $v1, 4
    /* beqzl $v0, 0x111610 */                                   // 0x001115d4: beqzl $v0, 0x111610
    a3 = 0x7ff;                                                 // 0x001115d8: addiu $a3, $zero, 0x7ff
    v0 = v1 ^ 2;                                                // 0x001115dc: xori $v0, $v1, 2
    /* beqzl $v0, 0x11161c */                                   // 0x001115e0: beqzl $v0, 0x11161c
    if (a1 == 0) goto label_0x11161c;                           // 0x001115e8: beqz $a1, 0x11161c
    /* nop */                                                   // 0x001115ec: nop 
    a0 = *(int32_t*)((a0) + 8);                                 // 0x001115f0: lw $a0, 8($a0)
    v0 = (a0 < -0x3fe) ? 1 : 0;                                 // 0x001115f4: slti $v0, $a0, -0x3fe
    /* bnezl $v0, 0x11161c */                                   // 0x001115f8: bnezl $v0, 0x11161c
    v0 = (a0 < 0x400) ? 1 : 0;                                  // 0x00111600: slti $v0, $a0, 0x400
    /* bnezl $v0, 0x111618 */                                   // 0x00111604: bnezl $v0, 0x111618
    a3 = a0 + 0x3ff;                                            // 0x00111608: addiu $a3, $a0, 0x3ff
    a3 = 0x7ff;                                                 // 0x0011160c: addiu $a3, $zero, 0x7ff
    goto label_0x11161c;                                        // 0x00111610: b 0x11161c
label_0x11161c:
    v1 = 0 | 0xfff0;                                            // 0x0011161c: ori $v1, $zero, 0xfff0
    v0 = -1;                                                    // 0x00111624: addiu $v0, $zero, -1
    v0 = a1 & v0;                                               // 0x0011162c: and $v0, $a1, $v0
    a2 = a2 & v1;                                               // 0x00111630: and $a2, $a2, $v1
    a2 = a2 | v0;                                               // 0x00111634: or $a2, $a2, $v0
    v0 = 0x800f << 16;                                          // 0x00111638: lui $v0, 0x800f
    v0 = v0 | 0xffff;                                           // 0x0011163c: ori $v0, $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00111644: ori $v0, $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0011164c: ori $v0, $v0, 0xffff
    v1 = a3 & 0x7ff;                                            // 0x00111650: andi $v1, $a3, 0x7ff
    a2 = a2 & v0;                                               // 0x00111654: and $a2, $a2, $v0
    a0 = -1;                                                    // 0x0011165c: addiu $a0, $zero, -1
    a2 = a2 | v1;                                               // 0x00111664: or $a2, $a2, $v1
    a2 = a2 & a0;                                               // 0x0011166c: and $a2, $a2, $a0
    return;                                                     // 0x00111670: jr $ra
    v0 = a2 | v0;                                               // 0x00111674: or $v0, $a2, $v0
}