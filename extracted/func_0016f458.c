void func_0016f458() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016f458: addiu $sp, $sp, -0x20
    a1 = 5;                                                     // 0x0016f45c: addiu $a1, $zero, 5
    func_001752e8();  // 1752e8                                // 0x0016f474: jal 0x1752e8
    s2 = s1 + 0x1f00;                                           // 0x0016f478: addiu $s2, $s1, 0x1f00
    if (v0 == 0) goto label_0x16f5d8;                           // 0x0016f480: beqz $v0, 0x16f5d8
    func_0016f5f0();  // 16f5f0                                // 0x0016f488: jal 0x16f5f0
    *(uint32_t*)((s1) + 0x1b30) = s2;                           // 0x0016f48c: sw $s2, 0x1b30($s1)
    if (v0 != 0) goto label_0x16f5d8;                           // 0x0016f490: bnez $v0, 0x16f5d8
    func_001712b0();  // 1712b0                                // 0x0016f498: jal 0x1712b0
    /* nop */                                                   // 0x0016f49c: nop 
    func_0015b160();  // 15b160                                // 0x0016f4a0: jal 0x15b160
    /* nop */                                                   // 0x0016f4a4: nop 
    a1 = 0x17 << 16;                                            // 0x0016f4ac: lui $a1, 0x17
    a1 = a1 + -0x648;                                           // 0x0016f4b0: addiu $a1, $a1, -0x648
    if (s0 != 0) goto label_0x16f4e8;                           // 0x0016f4b8: bnez $s0, 0x16f4e8
    a1 = 0xff00 << 16;                                          // 0x0016f4c8: lui $a1, 0xff00
    a1 = a1 | 0xf0a;                                            // 0x0016f4d4: ori $a1, $a1, 0xf0a
    return func_00169940();  // Tail call                        // 0x0016f4dc: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016f4e0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016f4e4: nop 
label_0x16f4e8:
    func_00158b08();  // 158b08                                // 0x0016f4e8: jal 0x158b08
    /* nop */                                                   // 0x0016f4ec: nop 
    if (v0 == 0) goto label_0x16f528;                           // 0x0016f4f0: beqz $v0, 0x16f528
    func_0016fb68();  // 16fb68                                // 0x0016f4f8: jal 0x16fb68
    a1 = 0xff00 << 16;                                          // 0x0016f504: lui $a1, 0xff00
    a1 = a1 | 0xf0b;                                            // 0x0016f510: ori $a1, $a1, 0xf0b
    return func_00169940();  // Tail call                        // 0x0016f51c: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016f520: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016f524: nop 
label_0x16f528:
    func_001752e8();  // 1752e8                                // 0x0016f528: jal 0x1752e8
    func_0015b368();  // 15b368                                // 0x0016f538: jal 0x15b368
    a1 = 1;                                                     // 0x0016f53c: addiu $a1, $zero, 1
    func_001752e8();  // 1752e8                                // 0x0016f544: jal 0x1752e8
    a1 = 1;                                                     // 0x0016f548: addiu $a1, $zero, 1
    a1 = 2;                                                     // 0x0016f550: addiu $a1, $zero, 2
    func_0015b368();  // 15b368                                // 0x0016f554: jal 0x15b368
    a1 = 3;                                                     // 0x0016f560: addiu $a1, $zero, 3
    func_0015b368();  // 15b368                                // 0x0016f564: jal 0x15b368
    a1 = 4;                                                     // 0x0016f570: addiu $a1, $zero, 4
    func_0015b368();  // 15b368                                // 0x0016f574: jal 0x15b368
    a1 = 5;                                                     // 0x0016f580: addiu $a1, $zero, 5
    func_0015b368();  // 15b368                                // 0x0016f584: jal 0x15b368
    a2 = *(int32_t*)((s1) + 0x38);                              // 0x0016f590: lw $a2, 0x38($s1)
    func_0015b368();  // 15b368                                // 0x0016f594: jal 0x15b368
    a1 = 6;                                                     // 0x0016f598: addiu $a1, $zero, 6
    a2 = 0x7fff << 16;                                          // 0x0016f5a0: lui $a2, 0x7fff
    a1 = 7;                                                     // 0x0016f5a4: addiu $a1, $zero, 7
    func_0015b368();  // 15b368                                // 0x0016f5a8: jal 0x15b368
    a2 = a2 | 0xffff;                                           // 0x0016f5ac: ori $a2, $a2, 0xffff
    a1 = 8;                                                     // 0x0016f5b4: addiu $a1, $zero, 8
    func_0015b368();  // 15b368                                // 0x0016f5b8: jal 0x15b368
    a1 = 9;                                                     // 0x0016f5c4: addiu $a1, $zero, 9
    func_0015b368();  // 15b368                                // 0x0016f5c8: jal 0x15b368
    *(uint32_t*)(s2) = s0;                                      // 0x0016f5d0: sw $s0, 0($s2)
label_0x16f5d8:
    return;                                                     // 0x0016f5e8: jr $ra
    sp = sp + 0x20;                                             // 0x0016f5ec: addiu $sp, $sp, 0x20
}