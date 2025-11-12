void func_00111418() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)(a0);                                       // 0x00111418: lw $v0, 0($a0)
    a1 = *(int32_t*)((a0) + 0xc);                               // 0x00111420: lw $a1, 0xc($a0)
    v0 = v0 ^ 2;                                                // 0x00111424: xori $v0, $v0, 2
    if (v0 == 0) goto label_0x11146c;                           // 0x00111428: beqz $v0, 0x11146c
    t0 = *(int32_t*)((a0) + 4);                                 // 0x0011142c: lw $t0, 4($a0)
    if (a1 == 0) goto label_0x111480;                           // 0x00111430: beqz $a1, 0x111480
    v0 = 0x7f << 16;                                            // 0x00111434: lui $v0, 0x7f
    a0 = *(int32_t*)((a0) + 8);                                 // 0x00111438: lw $a0, 8($a0)
    v0 = (a0 < -0x7e) ? 1 : 0;                                  // 0x0011143c: slti $v0, $a0, -0x7e
    /* bnezl $v0, 0x11147c */                                   // 0x00111440: bnezl $v0, 0x11147c
    v0 = (a0 < 0x81) ? 1 : 0;                                   // 0x00111448: slti $v0, $a0, 0x81
    /* beqzl $v0, 0x11146c */                                   // 0x0011144c: beqzl $v0, 0x11146c
    a3 = 0xff;                                                  // 0x00111450: addiu $a3, $zero, 0xff
    v0 = 0x80;                                                  // 0x00111454: addiu $v0, $zero, 0x80
    if (a0 != v0) goto label_0x111478;                          // 0x00111458: bne $a0, $v0, 0x111478
    a3 = a0 + 0x7f;                                             // 0x0011145c: addiu $a3, $a0, 0x7f
    if (a1 >= 0) goto label_0x11147c;                           // 0x00111460: bgezl $a1, 0x11147c
    a1 = (unsigned)a1 >> 7;                                     // 0x00111464: srl $a1, $a1, 7
    a3 = 0xff;                                                  // 0x00111468: addiu $a3, $zero, 0xff
label_0x11146c:
    goto label_0x11147c;                                        // 0x0011146c: b 0x11147c
    /* nop */                                                   // 0x00111474: nop 
label_0x111478:
    a1 = (unsigned)a1 >> 7;                                     // 0x00111478: srl $a1, $a1, 7
label_0x11147c:
    v0 = 0x7f << 16;                                            // 0x0011147c: lui $v0, 0x7f
label_0x111480:
    v1 = 0xff80 << 16;                                          // 0x00111480: lui $v1, 0xff80
    v0 = v0 | 0xffff;                                           // 0x00111484: ori $v0, $v0, 0xffff
    a2 = a2 & v1;                                               // 0x00111488: and $a2, $a2, $v1
    v0 = a1 & v0;                                               // 0x0011148c: and $v0, $a1, $v0
    v1 = 0x807f << 16;                                          // 0x00111490: lui $v1, 0x807f
    a2 = a2 | v0;                                               // 0x00111494: or $a2, $a2, $v0
    v0 = 0x7fff << 16;                                          // 0x00111498: lui $v0, 0x7fff
    v1 = v1 | 0xffff;                                           // 0x0011149c: ori $v1, $v1, 0xffff
    a0 = a3 & 0xff;                                             // 0x001114a0: andi $a0, $a3, 0xff
    a2 = a2 & v1;                                               // 0x001114a4: and $a2, $a2, $v1
    v1 = t0 << 0x1f;                                            // 0x001114a8: sll $v1, $t0, 0x1f
    a0 = a0 << 0x17;                                            // 0x001114ac: sll $a0, $a0, 0x17
    v0 = v0 | 0xffff;                                           // 0x001114b0: ori $v0, $v0, 0xffff
    a2 = a2 | a0;                                               // 0x001114b4: or $a2, $a2, $a0
    a2 = a2 & v0;                                               // 0x001114b8: and $a2, $a2, $v0
    a2 = a2 | v1;                                               // 0x001114bc: or $a2, $a2, $v1
    /* move to FPU: $a2, $f0 */                                 // 0x001114c0: mtc1 $a2, $f0
    return;                                                     // 0x001114c4: jr $ra
    /* nop */                                                   // 0x001114c8: nop 
}