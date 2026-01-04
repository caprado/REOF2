/** @category: graphics/memory @status: complete @author: caprado */
void func_0019f130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0019f130: addiu $sp, $sp, -0x10
    a0 = 0x29 << 16;                                            // 0x0019f134: lui $a0, 0x29
    a0 = a0 + -0x90;                                            // 0x0019f13c: addiu $a0, $a0, -0x90
    func_0018d9e0();  // 18d9e0                                // 0x0019f144: jal 0x18d9e0
    a2 = 0x470;                                                 // 0x0019f148: addiu $a2, $zero, 0x470
    func_0019e780();  // 19e780                                // 0x0019f14c: jal 0x19e780
    /* nop */                                                   // 0x0019f150: nop 
    v0 = 0x160 << 16;                                           // 0x0019f154: lui $v0, 0x160
    func_00106ee8();  // 106ee8                                // 0x0019f158: jal 0x106ee8
    a0 = v0 | 0x3f;                                             // 0x0019f15c: ori $a0, $v0, 0x3f
    v1 = v0 + 0x3f;                                             // 0x0019f160: addiu $v1, $v0, 0x3f
    v0 = -0x40;                                                 // 0x0019f164: addiu $v0, $zero, -0x40
    a1 = v1 & v0;                                               // 0x0019f168: and $a1, $v1, $v0
    if (a1 != 0) goto label_0x19f17c;                           // 0x0019f16c: bnez $a1, 0x19f17c
    a0 = 0x29 << 16;                                            // 0x0019f170: lui $a0, 0x29
    goto label_0x19f21c;                                        // 0x0019f174: b 0x19f21c
label_0x19f17c:
    a2 = 0x160 << 16;                                           // 0x0019f17c: lui $a2, 0x160
    a0 = a0 + 0x3e0;                                            // 0x0019f180: addiu $a0, $a0, 0x3e0
    func_00189860();  // 189860                                // 0x0019f184: jal 0x189860
    a3 = 0x40;                                                  // 0x0019f188: addiu $a3, $zero, 0x40
    v0 = 0xe0 << 16;                                            // 0x0019f18c: lui $v0, 0xe0
    at = 0x29 << 16;                                            // 0x0019f190: lui $at, 0x29
    g_0029036c = v0;  // Global at 0x0029036c                   // 0x0019f194: sw $v0, 0x36c($at)
    at = 0x29 << 16;                                            // 0x0019f198: lui $at, 0x29
    func_0018da90();  // 18da90                                // 0x0019f19c: jal 0x18da90
    a0 = g_0029036c;  // Global at 0x0029036c                   // 0x0019f1a0: lw $a0, 0x36c($at)
    at = 0x29 << 16;                                            // 0x0019f1a4: lui $at, 0x29
    g_00290368 = v0;  // Global at 0x00290368                   // 0x0019f1ac: sw $v0, 0x368($at)
    at = 0x29 << 16;                                            // 0x0019f1b0: lui $at, 0x29
    a1 = g_0029036c;  // Global at 0x0029036c                   // 0x0019f1b4: lw $a1, 0x36c($at)
    func_001a09b0();  // 1a09b0                                // 0x0019f1b8: jal 0x1a09b0
    a2 = 0x40;                                                  // 0x0019f1bc: addiu $a2, $zero, 0x40
    v0 = 0x19 << 16;                                            // 0x0019f1c0: lui $v0, 0x19
    at = 0x29 << 16;                                            // 0x0019f1c4: lui $at, 0x29
    v0 = v0 + -0x25c0;                                          // 0x0019f1c8: addiu $v0, $v0, -0x25c0
    g_00290360 = 0;  // Global at 0x00290360                    // 0x0019f1cc: sw $zero, 0x360($at)
    *(uint32_t*)((gp) + -0x6414) = v0;                          // 0x0019f1d0: sw $v0, -0x6414($gp)
    at = 0x29 << 16;                                            // 0x0019f1d4: lui $at, 0x29
    v0 = 0x10 << 16;                                            // 0x0019f1d8: lui $v0, 0x10
    *(uint32_t*)((gp) + -0x6444) = 0;                           // 0x0019f1dc: sw $zero, -0x6444($gp)
    v0 = v0 + 0x6f40;                                           // 0x0019f1e0: addiu $v0, $v0, 0x6f40
    *(uint32_t*)((gp) + -0x6484) = 0;                           // 0x0019f1e4: sw $zero, -0x6484($gp)
    *(uint32_t*)((gp) + -0x6418) = v0;                          // 0x0019f1e8: sw $v0, -0x6418($gp)
    v0 = 0x64;                                                  // 0x0019f1ec: addiu $v0, $zero, 0x64
    *(uint32_t*)((gp) + -0x64c4) = 0;                           // 0x0019f1f0: sw $zero, -0x64c4($gp)
    *(uint32_t*)((gp) + -0x6454) = v0;                          // 0x0019f1f4: sw $v0, -0x6454($gp)
    v0 = -1;                                                    // 0x0019f1f8: addiu $v0, $zero, -1
    *(uint32_t*)((gp) + -0x64d4) = 0;                           // 0x0019f1fc: sw $zero, -0x64d4($gp)
    g_0029035c = v0;  // Global at 0x0029035c                   // 0x0019f200: sw $v0, 0x35c($at)
    v0 = 0x202;                                                 // 0x0019f204: addiu $v0, $zero, 0x202
    *(uint32_t*)((gp) + -0x6458) = v0;                          // 0x0019f208: sw $v0, -0x6458($gp)
    v0 = 0x138 << 16;                                           // 0x0019f20c: lui $v0, 0x138
    v0 = v0 | 0xb032;                                           // 0x0019f210: ori $v0, $v0, 0xb032
    *(uint32_t*)((gp) + -0x645c) = v0;                          // 0x0019f214: sw $v0, -0x645c($gp)
    v0 = 1;                                                     // 0x0019f218: addiu $v0, $zero, 1
label_0x19f21c:
    return;                                                     // 0x0019f220: jr $ra
    sp = sp + 0x10;                                             // 0x0019f224: addiu $sp, $sp, 0x10
}