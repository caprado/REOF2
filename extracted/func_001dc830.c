void func_001dc830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x001dc830: addiu $sp, $sp, -0x50
    v0 = 0x22 << 16;                                            // 0x001dc834: lui $v0, 0x22
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc848: lw $a0, -0x308($v0)
    v0 = -1;                                                    // 0x001dc850: addiu $v0, $zero, -1
    if (a0 == v0) goto label_0x1dc914;                          // 0x001dc854: beq $a0, $v0, 0x1dc914
    v1 = 0x33 << 16;                                            // 0x001dc85c: lui $v1, 0x33
    v0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dc860: lw $v0, -0x140($v1)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001dc864: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1dc878;                           // 0x001dc868: bnez $v0, 0x1dc878
    s2 = v1 + -0x140;                                           // 0x001dc86c: addiu $s2, $v1, -0x140
    goto label_0x1dc914;                                        // 0x001dc870: b 0x1dc914
    v0 = -0xb;                                                  // 0x001dc874: addiu $v0, $zero, -0xb
label_0x1dc878:
    v0 = ((unsigned)a2 < (unsigned)3) ? 1 : 0;                  // 0x001dc878: sltiu $v0, $a2, 3
    if (v0 != 0) goto label_0x1dc88c;                           // 0x001dc87c: bnez $v0, 0x1dc88c
    v0 = 0x38;                                                  // 0x001dc880: addiu $v0, $zero, 0x38
    goto label_0x1dc914;                                        // 0x001dc884: b 0x1dc914
    v0 = -0xc;                                                  // 0x001dc888: addiu $v0, $zero, -0xc
label_0x1dc88c:
    a1 = g_0032fec4;  // Global at 0x0032fec4                   // 0x001dc88c: lw $a1, 4($s2)
    /* multiply: s1 * v0 -> hi:lo */                            // 0x001dc890: mult $ac2, $s1, $v0
    v1 = 0x33 << 16;                                            // 0x001dc894: lui $v1, 0x33
    s0 = v1 + -0x40;                                            // 0x001dc898: addiu $s0, $v1, -0x40
    v0 = v0 + a1;                                               // 0x001dc89c: addu $v0, $v0, $a1
    g_00220000 = a2;  // Global at 0x00220000                   // 0x001dc8a0: sw $a2, 0($v0)
    g_0032ffc0 = s1;  // Global at 0x0032ffc0                   // 0x001dc8a4: sb $s1, -0x40($v1)
    PollSema();  // 0x114320                                    // 0x001dc8a8: jal 0x114320
    g_0032ffc1 = a2;  // Global at 0x0032ffc1                   // 0x001dc8ac: sb $a2, 1($s0)
    a0 = 0x33 << 16;                                            // 0x001dc8b0: lui $a0, 0x33
    t1 = 0x33 << 16;                                            // 0x001dc8b4: lui $t1, 0x33
    t3 = 0x1e << 16;                                            // 0x001dc8b8: lui $t3, 0x1e
    a0 = a0 + -0xa0;                                            // 0x001dc8bc: addiu $a0, $a0, -0xa0
    t1 = t1;                                                    // 0x001dc8c4: addiu $t1, $t1, 0
    t3 = t3 + -0x3548;                                          // 0x001dc8c8: addiu $t3, $t3, -0x3548
    local_0 = 0;                                                // 0x001dc8cc: sw $zero, 0($sp)
    a1 = 5;                                                     // 0x001dc8d0: addiu $a1, $zero, 5
    a2 = 1;                                                     // 0x001dc8d4: addiu $a2, $zero, 1
    t0 = 0x10;                                                  // 0x001dc8d8: addiu $t0, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x001dc8dc: jal 0x1176a8
    t2 = 0x10;                                                  // 0x001dc8e0: addiu $t2, $zero, 0x10
    if (v0 == 0) goto label_0x1dc900;                           // 0x001dc8e4: beqz $v0, 0x1dc900
    a0 = 0x25 << 16;                                            // 0x001dc8e8: lui $a0, 0x25
    func_00116508();  // 116508                                // 0x001dc8f0: jal 0x116508
    a0 = &str_00248320;  // "Arrangement error!\n"              // 0x001dc8f4: addiu $a0, $a0, -0x7ce0
    goto label_0x1dc914;                                        // 0x001dc8f8: b 0x1dc914
    v0 = -2;                                                    // 0x001dc8fc: addiu $v0, $zero, -2
label_0x1dc900:
    v0 = 5;                                                     // 0x001dc900: addiu $v0, $zero, 5
    g_0032ff54 = s1;  // Global at 0x0032ff54                   // 0x001dc904: sw $s1, 0x94($s2)
    g_0032ff50 = v0;  // Global at 0x0032ff50                   // 0x001dc908: sw $v0, 0x90($s2)
    g_0032ff58 = 0;  // Global at 0x0032ff58                    // 0x001dc90c: sw $zero, 0x98($s2)
label_0x1dc914:
    return;                                                     // 0x001dc924: jr $ra
    sp = sp + 0x50;                                             // 0x001dc928: addiu $sp, $sp, 0x50
}