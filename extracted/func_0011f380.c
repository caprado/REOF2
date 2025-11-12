void func_0011f380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0011f380: addiu $sp, $sp, -0x50
    if (s0 >= 0) goto label_0x11f3c4;                           // 0x0011f3a0: bgez $s0, 0x11f3c4
    v0 = 0x7fff << 16;                                          // 0x0011f3a8: lui $v0, 0x7fff
    v1 = 0x25 << 16;                                            // 0x0011f3ac: lui $v1, 0x25
    v0 = v0 | 0xffff;                                           // 0x0011f3b0: ori $v0, $v0, 0xffff
    s1 = v1 + 0x3488;                                           // 0x0011f3b4: addiu $s1, $v1, 0x3488
    s0 = s0 & v0;                                               // 0x0011f3b8: and $s0, $s0, $v0
    goto label_0x11f3d4;                                        // 0x0011f3bc: b 0x11f3d4
    v0 = 0x20;                                                  // 0x0011f3c0: addiu $v0, $zero, 0x20
label_0x11f3c4:
    v0 = 0x1f << 16;                                            // 0x0011f3c4: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0011f3c8: lui $v1, 0x1f
    s1 = g_001f1a08;  // Global at 0x001f1a08                   // 0x0011f3cc: lw $s1, 0x1a08($v0)
    v0 = g_001f1a0c;  // Global at 0x001f1a0c                   // 0x0011f3d0: lw $v0, 0x1a0c($v1)
label_0x11f3d4:
    v0 = ((unsigned)s0 < (unsigned)v0) ? 1 : 0;                 // 0x0011f3d4: sltu $v0, $s0, $v0
    if (v0 != 0) goto label_0x11f3ec;                           // 0x0011f3d8: bnez $v0, 0x11f3ec
    /* nop */                                                   // 0x0011f3dc: nop 
    v0 = 0x8000 << 16;                                          // 0x0011f3e0: lui $v0, 0x8000
    goto label_0x11f41c;                                        // 0x0011f3e4: b 0x11f41c
    v0 = v0 | 0x69;                                             // 0x0011f3e8: ori $v0, $v0, 0x69
label_0x11f3ec:
    func_0011d378();  // 0x11d320                                // 0x0011f3ec: jal 0x11d320
    /* nop */                                                   // 0x0011f3f0: nop 
    v1 = s0 << 4;                                               // 0x0011f3f4: sll $v1, $s0, 4
    v1 = v1 + s1;                                               // 0x0011f3f8: addu $v1, $v1, $s1
    g_001f0000 = s2;  // Global at 0x001f0000                   // 0x0011f3fc: sw $s2, 0($v1)
    g_001f0004 = s3;  // Global at 0x001f0004                   // 0x0011f400: sw $s3, 4($v1)
    if (v0 == 0) goto label_0x11f418;                           // 0x0011f408: beqz $v0, 0x11f418
    g_001f0008 = a0;  // Global at 0x001f0008                   // 0x0011f40c: sw $a0, 8($v1)
    func_0011d390();  // 0x11d378                                // 0x0011f410: jal 0x11d378
    /* nop */                                                   // 0x0011f414: nop 
label_0x11f418:
label_0x11f41c:
    return;                                                     // 0x0011f430: jr $ra
    sp = sp + 0x50;                                             // 0x0011f434: addiu $sp, $sp, 0x50
}