void func_00172598() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00172598: addiu $sp, $sp, -0x10
    func_001725c8();  // 1725c8                                // 0x001725a4: jal 0x1725c8
    func_00172670();  // 172670                                // 0x001725ac: jal 0x172670
    return func_00172788();  // Tail call                        // 0x001725c0: j 0x1726f8
    sp = sp + 0x10;                                             // 0x001725c4: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x001725c8: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x001725cc: addiu $v1, $zero, 1
    s0 = s1 + 0x9a0;                                            // 0x001725e0: addiu $s0, $s1, 0x9a0
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001725e4: lw $v0, 0x14($s0)
    if (v0 != v1) goto label_0x172618;                          // 0x001725e8: bnel $v0, $v1, 0x172618
    a2 = *(int32_t*)((s0) + 0x18);                              // 0x001725ec: lw $a2, 0x18($s0)
    func_00167208();  // 167208                                // 0x001725f0: jal 0x167208
    a1 = 1;                                                     // 0x001725f4: addiu $a1, $zero, 1
    /* bnezl $v0, 0x172618 */                                   // 0x001725f8: bnezl $v0, 0x172618
    a2 = *(int32_t*)((s0) + 0x18);                              // 0x001725fc: lw $a2, 0x18($s0)
    func_001671e8();  // 1671e8                                // 0x00172604: jal 0x1671e8
    a1 = 1;                                                     // 0x00172608: addiu $a1, $zero, 1
    /* beqzl $v0, 0x172614 */                                   // 0x0017260c: beqzl $v0, 0x172614
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00172610: sw $zero, 0x14($s0)
    a2 = *(int32_t*)((s0) + 0x18);                              // 0x00172614: lw $a2, 0x18($s0)
label_0x172618:
    v0 = 1;                                                     // 0x00172618: addiu $v0, $zero, 1
    if (a2 != v0) goto label_0x172658;                          // 0x0017261c: bnel $a2, $v0, 0x172658
    a1 = *(int32_t*)((s0) + 0x14);                              // 0x00172620: lw $a1, 0x14($s0)
    func_00167208();  // 167208                                // 0x00172628: jal 0x167208
    a1 = 2;                                                     // 0x0017262c: addiu $a1, $zero, 2
    /* bnezl $v0, 0x172654 */                                   // 0x00172630: bnezl $v0, 0x172654
    a2 = *(int32_t*)((s0) + 0x18);                              // 0x00172634: lw $a2, 0x18($s0)
    func_001671e8();  // 1671e8                                // 0x0017263c: jal 0x1671e8
    a1 = 2;                                                     // 0x00172640: addiu $a1, $zero, 2
    /* bnezl $v0, 0x172654 */                                   // 0x00172644: bnezl $v0, 0x172654
    a2 = *(int32_t*)((s0) + 0x18);                              // 0x00172648: lw $a2, 0x18($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x0017264c: sw $zero, 0x18($s0)
    a1 = *(int32_t*)((s0) + 0x14);                              // 0x00172654: lw $a1, 0x14($s0)
label_0x172658:
    return func_00174508();  // Tail call                       // 0x00172668: j 0x174508
    sp = sp + 0x20;                                             // 0x0017266c: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00172670: addiu $sp, $sp, -0x20
    s0 = s1 + 0x9a0;                                            // 0x00172684: addiu $s0, $s1, 0x9a0
    v0 = *(int32_t*)((s0) + 0x18);                              // 0x00172688: lw $v0, 0x18($s0)
    /* bnezl $v0, 0x1726b4 */                                   // 0x0017268c: bnezl $v0, 0x1726b4
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00172690: lw $v0, 0x14($s0)
    v1 = *(int32_t*)((s0) + 0x3c);                              // 0x00172694: lw $v1, 0x3c($s0)
    v0 = 2;                                                     // 0x00172698: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1726b4;                          // 0x0017269c: bnel $v1, $v0, 0x1726b4
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001726a0: lw $v0, 0x14($s0)
    a1 = 0xf;                                                   // 0x001726a4: addiu $a1, $zero, 0xf
    func_00175120();  // 175120                                // 0x001726a8: jal 0x175120
    a2 = 1;                                                     // 0x001726ac: addiu $a2, $zero, 1
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x001726b0: lw $v0, 0x14($s0)
label_0x1726b4:
    /* bnezl $v0, 0x1726e8 */                                   // 0x001726b4: bnezl $v0, 0x1726e8
    v1 = *(int32_t*)((s0) + 0x3c);                              // 0x001726bc: lw $v1, 0x3c($s0)
    v0 = 1;                                                     // 0x001726c0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1726e8;                          // 0x001726c4: bne $v1, $v0, 0x1726e8
    a1 = 0xf;                                                   // 0x001726d4: addiu $a1, $zero, 0xf
    a2 = 2;                                                     // 0x001726dc: addiu $a2, $zero, 2
    return func_00175170();  // Tail call                        // 0x001726e0: j 0x175120
    sp = sp + 0x20;                                             // 0x001726e4: addiu $sp, $sp, 0x20
label_0x1726e8:
    return;                                                     // 0x001726f0: jr $ra
    sp = sp + 0x20;                                             // 0x001726f4: addiu $sp, $sp, 0x20
}