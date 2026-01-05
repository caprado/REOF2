void func_001dc758() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x001dc758: addiu $sp, $sp, -0x50
    v0 = 0x22 << 16;                                            // 0x001dc75c: lui $v0, 0x22
    a1 = a1 & 0xff;                                             // 0x001dc764: andi $a1, $a1, 0xff
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc770: lw $a0, -0x308($v0)
    v0 = -1;                                                    // 0x001dc778: addiu $v0, $zero, -1
    if (a0 == v0) goto label_0x1dc818;                          // 0x001dc77c: beq $a0, $v0, 0x1dc818
    v1 = 0x33 << 16;                                            // 0x001dc784: lui $v1, 0x33
    v0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dc788: lw $v0, -0x140($v1)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001dc78c: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1dc7a0;                           // 0x001dc790: bnez $v0, 0x1dc7a0
    s2 = v1 + -0x140;                                           // 0x001dc794: addiu $s2, $v1, -0x140
    goto label_0x1dc818;                                        // 0x001dc798: b 0x1dc818
    v0 = -0xb;                                                  // 0x001dc79c: addiu $v0, $zero, -0xb
label_0x1dc7a0:
    v0 = 0x33 << 16;                                            // 0x001dc7a0: lui $v0, 0x33
    s0 = v0 + -0x40;                                            // 0x001dc7a4: addiu $s0, $v0, -0x40
    g_0032ffc0 = s1;  // Global at 0x0032ffc0                   // 0x001dc7a8: sb $s1, -0x40($v0)
    PollSema();  // 0x114320                                    // 0x001dc7ac: jal 0x114320
    g_0032ffc1 = a1;  // Global at 0x0032ffc1                   // 0x001dc7b0: sb $a1, 1($s0)
    a0 = 0x33 << 16;                                            // 0x001dc7b4: lui $a0, 0x33
    t1 = 0x33 << 16;                                            // 0x001dc7b8: lui $t1, 0x33
    t3 = 0x1e << 16;                                            // 0x001dc7bc: lui $t3, 0x1e
    a0 = a0 + -0xa0;                                            // 0x001dc7c0: addiu $a0, $a0, -0xa0
    t1 = t1;                                                    // 0x001dc7c8: addiu $t1, $t1, 0
    t3 = t3 + -0x3548;                                          // 0x001dc7cc: addiu $t3, $t3, -0x3548
    local_0 = 0;                                                // 0x001dc7d0: sw $zero, 0($sp)
    a1 = 4;                                                     // 0x001dc7d4: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x001dc7d8: addiu $a2, $zero, 1
    t0 = 0x10;                                                  // 0x001dc7dc: addiu $t0, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x001dc7e0: jal 0x1176a8
    t2 = 0x10;                                                  // 0x001dc7e4: addiu $t2, $zero, 0x10
    if (v0 == 0) goto label_0x1dc804;                           // 0x001dc7e8: beqz $v0, 0x1dc804
    a0 = 0x25 << 16;                                            // 0x001dc7ec: lui $a0, 0x25
    func_00116508();  // 116508                                // 0x001dc7f4: jal 0x116508
    a0 = &str_002482f0;  // "sceUsbKbSetLEDMode: sceSifCallRpc -> %d\n" // 0x001dc7f8: addiu $a0, $a0, -0x7d10
    goto label_0x1dc818;                                        // 0x001dc7fc: b 0x1dc818
    v0 = -2;                                                    // 0x001dc800: addiu $v0, $zero, -2
label_0x1dc804:
    v0 = 4;                                                     // 0x001dc804: addiu $v0, $zero, 4
    g_0032ff54 = s1;  // Global at 0x0032ff54                   // 0x001dc808: sw $s1, 0x94($s2)
    g_0032ff50 = v0;  // Global at 0x0032ff50                   // 0x001dc80c: sw $v0, 0x90($s2)
    g_0032ff58 = 0;  // Global at 0x0032ff58                    // 0x001dc810: sw $zero, 0x98($s2)
label_0x1dc818:
    return;                                                     // 0x001dc828: jr $ra
    sp = sp + 0x50;                                             // 0x001dc82c: addiu $sp, $sp, 0x50
}