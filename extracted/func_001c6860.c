void func_001c6860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x31 << 16;                                            // 0x001c6860: lui $a1, 0x31
    a2 = 0x10;                                                  // 0x001c6864: addiu $a2, $zero, 0x10
    return func_00107b68();  // Tail call                        // 0x001c6868: j 0x107ab8
    a1 = a1 + 0x35a0;                                           // 0x001c686c: addiu $a1, $a1, 0x35a0
    sp = sp + -0x20;                                            // 0x001c6870: addiu $sp, $sp, -0x20
    a0 = 2;                                                     // 0x001c6874: addiu $a0, $zero, 2
    s0 = 0x31 << 16;                                            // 0x001c6884: lui $s0, 0x31
    func_001a9030();  // 0x1a8fc0                                // 0x001c6888: jal 0x1a8fc0
    s0 = s0 + 0x64d0;                                           // 0x001c688c: addiu $s0, $s0, 0x64d0
    if (v0 == 0) goto label_0x1c6924;                           // 0x001c6890: beqz $v0, 0x1c6924
    at = 0x31 << 16;                                            // 0x001c6894: lui $at, 0x31
    func_0034e4b0();  // 0x34e4b0                               // 0x001c6898: jal 0x34e4b0
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001c689c: lhu $a0, 0x37ba($at)
    func_001c1ec0();  // 0x1c1ec0                               // 0x001c68a0: jal 0x1c1ec0
    func_0010ae00();  // 0x10ac68                                // 0x001c68ac: jal 0x10ac68
    func_006bb4c0();  // 0x6bb4c0                               // 0x001c68b4: jal 0x6bb4c0
    a0 = s0 + 0x80;                                             // 0x001c68b8: addiu $a0, $s0, 0x80
    at = 0x48 << 16;                                            // 0x001c68bc: lui $at, 0x48
    v1 = 0x48 << 16;                                            // 0x001c68c0: lui $v1, 0x48
    v0 = g_0047c8f8;  // Global at 0x0047c8f8                   // 0x001c68c4: lhu $v0, -0x3708($at)
    if (v0 != 0) goto label_0x1c68ec;                           // 0x001c68c8: bnez $v0, 0x1c68ec
    v1 = v1 + -0x42d0;                                          // 0x001c68cc: addiu $v1, $v1, -0x42d0
    func_001c1850();  // 0x1c17d0                                // 0x001c68d0: jal 0x1c17d0
    a0 = g_0047c8e0;  // Global at 0x0047c8e0                   // 0x001c68d4: lbu $a0, 0xbb0($v1)
    a0 = s0 + 0x100;                                            // 0x001c68d8: addiu $a0, $s0, 0x100
    func_0010ae00();  // 0x10ac68                                // 0x001c68dc: jal 0x10ac68
    goto label_0x1c6928;                                        // 0x001c68e4: b 0x1c6928
label_0x1c68ec:
    v0 = g_0047c8f8;  // Global at 0x0047c8f8                   // 0x001c68ec: lhu $v0, 0xbc8($v1)
    func_006babd0();  // 0x6babd0                               // 0x001c68f0: jal 0x6babd0
    a0 = v0 + -1;                                               // 0x001c68f4: addiu $a0, $v0, -1
    if (a0 < 0) goto label_0x1c6920;                            // 0x001c68fc: bltz $a0, 0x1c6920
    /* nop */                                                   // 0x001c6900: nop 
    func_001c1800();  // 0x1c1800                               // 0x001c6904: jal 0x1c1800
    /* nop */                                                   // 0x001c6908: nop 
    a0 = s0 + 0x100;                                            // 0x001c690c: addiu $a0, $s0, 0x100
    func_0010ae00();  // 0x10ac68                                // 0x001c6910: jal 0x10ac68
    goto label_0x1c6924;                                        // 0x001c6918: b 0x1c6924
    /* nop */                                                   // 0x001c691c: nop 
label_0x1c6920:
    g_003165d0 = 0;  // Global at 0x003165d0                    // 0x001c6920: sb $zero, 0x100($s0)
label_0x1c6924:
label_0x1c6928:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6928: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c692c: jr $ra
    sp = sp + 0x20;                                             // 0x001c6930: addiu $sp, $sp, 0x20
}