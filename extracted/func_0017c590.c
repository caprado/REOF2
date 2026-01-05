void func_0017c590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x0017c590: addiu $sp, $sp, -0x10
    a2 = *(int32_t*)((a0) + 0x3c);                              // 0x0017c598: lw $a2, 0x3c($a0)
    a1 = *(int32_t*)((a1) + 0x4c);                              // 0x0017c59c: lw $a1, 0x4c($a1)
    a0 = *(int32_t*)((a0) + 0x30);                              // 0x0017c5a0: lw $a0, 0x30($a0)
    return func_0017a478();  // Tail call                        // 0x0017c5a8: j 0x17a438
    sp = sp + 0x10;                                             // 0x0017c5ac: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017c5b0: addiu $sp, $sp, -0x10
    a2 = *(int32_t*)((a0) + 0x3c);                              // 0x0017c5b8: lw $a2, 0x3c($a0)
    a1 = *(int32_t*)((a1) + 0x4c);                              // 0x0017c5bc: lw $a1, 0x4c($a1)
    a0 = *(int32_t*)((a0) + 0x30);                              // 0x0017c5c0: lw $a0, 0x30($a0)
    return func_0017a490();  // Tail call                        // 0x0017c5c8: j 0x17a478
    sp = sp + 0x10;                                             // 0x0017c5cc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017c5d0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x3c);                              // 0x0017c5d8: lw $a0, 0x3c($a0)
    return func_0014fb50();  // Tail call                       // 0x0017c5e0: j 0x14fb50
    sp = sp + 0x10;                                             // 0x0017c5e4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017c5e8: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x3c);                              // 0x0017c5f0: lw $a0, 0x3c($a0)
    return func_0014fb48();  // Tail call                       // 0x0017c5f8: j 0x14fb48
    sp = sp + 0x10;                                             // 0x0017c5fc: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0017c600: addiu $sp, $sp, -0x20
    func_0017e028();  // 17e028                                // 0x0017c618: jal 0x17e028
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0017c61c: lw $a0, 0x24($s0)
    a2 = 0x23 << 16;                                            // 0x0017c620: lui $a2, 0x23
    v1 = 1;                                                     // 0x0017c624: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17c650;                          // 0x0017c630: beq $v0, $v1, 0x17c650
    a2 = &str_00229b48;  // "E202281: SFX_MakeTblZ32 : zclip is not set." // 0x0017c634: addiu $a2, $a2, -0x64b8
    return func_0017cec8();  // Tail call                        // 0x0017c644: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017c648: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017c64c: nop 
label_0x17c650:
    return func_0017c4a0();  // Tail call                        // 0x0017c660: j 0x17c480
    sp = sp + 0x20;                                             // 0x0017c664: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x0017c668: addiu $sp, $sp, -0x20
    func_0017e028();  // 17e028                                // 0x0017c680: jal 0x17e028
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0017c684: lw $a0, 0x24($s0)
    a2 = 0x23 << 16;                                            // 0x0017c688: lui $a2, 0x23
    v1 = 1;                                                     // 0x0017c68c: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17c6b8;                          // 0x0017c698: beq $v0, $v1, 0x17c6b8
    a2 = &str_00229b78;  // "E301281: SFX_CnvFrmRgb888 : frmfmt is not support." // 0x0017c69c: addiu $a2, $a2, -0x6488
    return func_0017cec8();  // Tail call                        // 0x0017c6ac: j 0x17ce88
    sp = sp + 0x20;                                             // 0x0017c6b0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017c6b4: nop 
label_0x17c6b8:
    return func_0017c4c0();  // Tail call                        // 0x0017c6c8: j 0x17c4a0
    sp = sp + 0x20;                                             // 0x0017c6cc: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0017c6d0: addiu $sp, $sp, -0x10
    return func_0017c888();  // Tail call                        // 0x0017c6dc: j 0x17c7d0
    sp = sp + 0x10;                                             // 0x0017c6e0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017c6e4: nop 
    sp = sp + -0x40;                                            // 0x0017c6e8: addiu $sp, $sp, -0x40
    a2 = sp + 4;                                                // 0x0017c710: addiu $a2, $sp, 4
    func_0017cf28();  // 0x17cf28                               // 0x0017c718: jal 0x17cf28
    s2 = *(int32_t*)((s0) + 0x48);                              // 0x0017c71c: lw $s2, 0x48($s0)
    a1 = local_0;                                               // 0x0017c720: lw $a1, 0($sp)
    s1 = (unsigned)s2 >> 0x1f;                                  // 0x0017c72c: srl $s1, $s2, 0x1f
    a1 = a1 << 1;                                               // 0x0017c730: sll $a1, $a1, 1
    func_0017cf18();  // 17cf18                                // 0x0017c734: jal 0x17cf18
    s1 = s2 + s1;                                               // 0x0017c738: addu $s1, $s2, $s1
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017c73c: lw $v0, 0x48($s0)
    s1 = s1 >> 1;                                               // 0x0017c740: sra $s1, $s1, 1
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017c748: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0017c750: addu $v0, $v0, $v1
    v0 = v0 >> 1;                                               // 0x0017c754: sra $v0, $v0, 1
    func_0017d1d8();  // 0x17d1d8                               // 0x0017c758: jal 0x17d1d8
    *(uint32_t*)((s0) + 0x48) = v0;                             // 0x0017c75c: sw $v0, 0x48($s0)
    func_0017c7d0();  // 17c7d0                                // 0x0017c768: jal 0x17c7d0
    a1 = local_0;                                               // 0x0017c774: lw $a1, 0($sp)
    func_0017cf18();  // 17cf18                                // 0x0017c77c: jal 0x17cf18
    a1 = a1 << 1;                                               // 0x0017c780: sll $a1, $a1, 1
    func_0017d1d8();  // 0x17d1d8                               // 0x0017c788: jal 0x17d1d8
    func_0017d150();  // 0x17d150                               // 0x0017c794: jal 0x17d150
    a2 = local_0;                                               // 0x0017c7a0: lw $a2, 0($sp)
    func_0017c7d0();  // 17c7d0                                // 0x0017c7a8: jal 0x17c7d0
    a2 = s4 + a2;                                               // 0x0017c7ac: addu $a2, $s4, $a2
    return;                                                     // 0x0017c7c8: jr $ra
    sp = sp + 0x40;                                             // 0x0017c7cc: addiu $sp, $sp, 0x40
}