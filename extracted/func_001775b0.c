void func_001775b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001775b0: addiu $sp, $sp, -0x20
    a2 = 2;                                                     // 0x001775b4: addiu $a2, $zero, 2
    func_00177808();  // 0x1777d0                                // 0x001775cc: jal 0x1777d0
    a1 = 1;                                                     // 0x001775d0: addiu $a1, $zero, 1
    a1 = 2;                                                     // 0x001775d8: addiu $a1, $zero, 2
    func_00177730();  // 0x177710                                // 0x001775dc: jal 0x177710
    a2 = 3;                                                     // 0x001775e0: addiu $a2, $zero, 3
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x001775e8: lw $v0, 0x10($s0)
    a1 = 3;                                                     // 0x001775ec: addiu $a1, $zero, 3
    if (v0 == 0) goto label_0x177630;                           // 0x001775f0: beqz $v0, 0x177630
    a2 = 4;                                                     // 0x001775f4: addiu $a2, $zero, 4
    func_00177808();  // 0x1777d0                                // 0x001775f8: jal 0x1777d0
    /* nop */                                                   // 0x001775fc: nop 
    a1 = 4;                                                     // 0x00177604: addiu $a1, $zero, 4
    func_00177730();  // 0x177710                                // 0x00177608: jal 0x177710
    a2 = 5;                                                     // 0x0017760c: addiu $a2, $zero, 5
    a1 = 5;                                                     // 0x00177618: addiu $a1, $zero, 5
    a2 = 6;                                                     // 0x00177620: addiu $a2, $zero, 6
    return func_00177808();  // Tail call                        // 0x00177628: j 0x1777d0
    sp = sp + 0x20;                                             // 0x0017762c: addiu $sp, $sp, 0x20
label_0x177630:
    a1 = 3;                                                     // 0x00177638: addiu $a1, $zero, 3
    a2 = 6;                                                     // 0x00177640: addiu $a2, $zero, 6
    return func_00177808();  // Tail call                        // 0x00177644: j 0x1777d0
    sp = sp + 0x20;                                             // 0x00177648: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017764c: nop 
    sp = sp + -0x20;                                            // 0x00177650: addiu $sp, $sp, -0x20
    a2 = 3;                                                     // 0x00177654: addiu $a2, $zero, 3
    func_00177808();  // 0x1777d0                                // 0x0017766c: jal 0x1777d0
    a1 = 2;                                                     // 0x00177670: addiu $a1, $zero, 2
    a1 = 3;                                                     // 0x00177678: addiu $a1, $zero, 3
    func_00177730();  // 0x177710                                // 0x0017767c: jal 0x177710
    a2 = 4;                                                     // 0x00177680: addiu $a2, $zero, 4
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00177688: lw $v0, 0x14($s0)
    a1 = 4;                                                     // 0x0017768c: addiu $a1, $zero, 4
    if (v0 == 0) goto label_0x1776d0;                           // 0x00177690: beqz $v0, 0x1776d0
    a2 = 5;                                                     // 0x00177694: addiu $a2, $zero, 5
    func_00177808();  // 0x1777d0                                // 0x00177698: jal 0x1777d0
    /* nop */                                                   // 0x0017769c: nop 
    a1 = 5;                                                     // 0x001776a4: addiu $a1, $zero, 5
    func_00177730();  // 0x177710                                // 0x001776a8: jal 0x177710
    a2 = 6;                                                     // 0x001776ac: addiu $a2, $zero, 6
    a1 = 6;                                                     // 0x001776b8: addiu $a1, $zero, 6
    a2 = 7;                                                     // 0x001776c0: addiu $a2, $zero, 7
    return func_00177808();  // Tail call                        // 0x001776c8: j 0x1777d0
    sp = sp + 0x20;                                             // 0x001776cc: addiu $sp, $sp, 0x20
label_0x1776d0:
    a1 = 4;                                                     // 0x001776d8: addiu $a1, $zero, 4
    a2 = 7;                                                     // 0x001776e0: addiu $a2, $zero, 7
    return func_00177808();  // Tail call                        // 0x001776e4: j 0x1777d0
    sp = sp + 0x20;                                             // 0x001776e8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001776ec: nop 
    sp = sp + -0x10;                                            // 0x001776f0: addiu $sp, $sp, -0x10
    a1 = 7;                                                     // 0x001776f4: addiu $a1, $zero, 7
    a2 = 8;                                                     // 0x001776fc: addiu $a2, $zero, 8
    return func_00177808();  // Tail call                        // 0x00177704: j 0x1777d0
    sp = sp + 0x10;                                             // 0x00177708: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017770c: nop 
    sp = sp + -0x10;                                            // 0x00177710: addiu $sp, $sp, -0x10
    goto label_0x177790;                                        // 0x00177724: j 0x177790
    sp = sp + 0x10;                                             // 0x00177728: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017772c: nop 
    sp = sp + -0x10;                                            // 0x00177730: addiu $sp, $sp, -0x10
    goto label_0x177790;                                        // 0x00177744: j 0x177790
    sp = sp + 0x10;                                             // 0x00177748: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017774c: nop 
    sp = sp + -0x10;                                            // 0x00177750: addiu $sp, $sp, -0x10
    a2 = 1;                                                     // 0x0017775c: addiu $a2, $zero, 1
    goto label_0x177790;                                        // 0x00177764: j 0x177790
    sp = sp + 0x10;                                             // 0x00177768: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017776c: nop 
    sp = sp + -0x10;                                            // 0x00177770: addiu $sp, $sp, -0x10
    a2 = 2;                                                     // 0x0017777c: addiu $a2, $zero, 2
    goto label_0x177790;                                        // 0x00177784: j 0x177790
    sp = sp + 0x10;                                             // 0x00177788: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017778c: nop 
label_0x177790:
    v0 = a3 << 3;                                               // 0x00177790: sll $v0, $a3, 3
    v1 = a1 << 4;                                               // 0x00177794: sll $v1, $a1, 4
    v0 = v0 - a3;                                               // 0x00177798: subu $v0, $v0, $a3
    v1 = v1 + a1;                                               // 0x0017779c: addu $v1, $v1, $a1
    v0 = v0 << 2;                                               // 0x001777a0: sll $v0, $v0, 2
    v1 = v1 << 2;                                               // 0x001777a4: sll $v1, $v1, 2
    v0 = v0 + a3;                                               // 0x001777a8: addu $v0, $v0, $a3
    v1 = a0 + v1;                                               // 0x001777ac: addu $v1, $a0, $v1
    a2 = a2 << 2;                                               // 0x001777b0: sll $a2, $a2, 2
    v0 = v0 << 2;                                               // 0x001777b4: sll $v0, $v0, 2
    a2 = a2 + v1;                                               // 0x001777b8: addu $a2, $a2, $v1
    a0 = a0 + v0;                                               // 0x001777bc: addu $a0, $a0, $v0
    *(uint32_t*)((a2) + 0x1ab4) = a3;                           // 0x001777c0: sw $a3, 0x1ab4($a2)
    return;                                                     // 0x001777c4: jr $ra
    *(uint32_t*)((a0) + 0x118c) = a1;                           // 0x001777c8: sw $a1, 0x118c($a0)
}