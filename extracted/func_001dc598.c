void func_001dc598() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x001dc598: addiu $sp, $sp, -0x60
    v0 = 0x22 << 16;                                            // 0x001dc59c: lui $v0, 0x22
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc5ac: lw $a0, -0x308($v0)
    v0 = -1;                                                    // 0x001dc5b8: addiu $v0, $zero, -1
    if (a0 == v0) goto label_0x1dc658;                          // 0x001dc5c0: beq $a0, $v0, 0x1dc658
    v1 = 0x33 << 16;                                            // 0x001dc5c8: lui $v1, 0x33
    v0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dc5cc: lw $v0, -0x140($v1)
    v0 = ((unsigned)s1 < (unsigned)v0) ? 1 : 0;                 // 0x001dc5d0: sltu $v0, $s1, $v0
    if (v0 != 0) goto label_0x1dc5e4;                           // 0x001dc5d4: bnez $v0, 0x1dc5e4
    s2 = v1 + -0x140;                                           // 0x001dc5d8: addiu $s2, $v1, -0x140
    goto label_0x1dc658;                                        // 0x001dc5dc: b 0x1dc658
    v0 = -0xb;                                                  // 0x001dc5e0: addiu $v0, $zero, -0xb
label_0x1dc5e4:
    s0 = 0x33 << 16;                                            // 0x001dc5e4: lui $s0, 0x33
    g_0032ffc0 = s1;  // Global at 0x0032ffc0                   // 0x001dc5e8: sb $s1, -0x40($s0)
    PollSema();  // 0x114320                                    // 0x001dc5ec: jal 0x114320
    s0 = s0 + -0x40;                                            // 0x001dc5f0: addiu $s0, $s0, -0x40
    a0 = 0x33 << 16;                                            // 0x001dc5f4: lui $a0, 0x33
    t1 = 0x33 << 16;                                            // 0x001dc5f8: lui $t1, 0x33
    t3 = 0x1e << 16;                                            // 0x001dc5fc: lui $t3, 0x1e
    a0 = a0 + -0xa0;                                            // 0x001dc600: addiu $a0, $a0, -0xa0
    t1 = t1;                                                    // 0x001dc608: addiu $t1, $t1, 0
    t3 = t3 + -0x3548;                                          // 0x001dc60c: addiu $t3, $t3, -0x3548
    local_0 = 0;                                                // 0x001dc610: sw $zero, 0($sp)
    a1 = 2;                                                     // 0x001dc614: addiu $a1, $zero, 2
    a2 = 1;                                                     // 0x001dc618: addiu $a2, $zero, 1
    t0 = 0x10;                                                  // 0x001dc61c: addiu $t0, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x001dc620: jal 0x1176a8
    t2 = 0x50;                                                  // 0x001dc624: addiu $t2, $zero, 0x50
    if (v0 == 0) goto label_0x1dc644;                           // 0x001dc628: beqz $v0, 0x1dc644
    a0 = 0x25 << 16;                                            // 0x001dc62c: lui $a0, 0x25
    func_00116508();  // 116508                                // 0x001dc634: jal 0x116508
    a0 = &str_00248298;  // "sceUsbKbGetLocation: sceSifCallRpc -> %d\n" // 0x001dc638: addiu $a0, $a0, -0x7d68
    goto label_0x1dc658;                                        // 0x001dc63c: b 0x1dc658
    v0 = -2;                                                    // 0x001dc640: addiu $v0, $zero, -2
label_0x1dc644:
    v0 = 2;                                                     // 0x001dc644: addiu $v0, $zero, 2
    g_0032ff58 = s3;  // Global at 0x0032ff58                   // 0x001dc648: sw $s3, 0x98($s2)
    g_0032ff50 = v0;  // Global at 0x0032ff50                   // 0x001dc64c: sw $v0, 0x90($s2)
    g_0032ff54 = s1;  // Global at 0x0032ff54                   // 0x001dc650: sw $s1, 0x94($s2)
label_0x1dc658:
    return;                                                     // 0x001dc66c: jr $ra
    sp = sp + 0x60;                                             // 0x001dc670: addiu $sp, $sp, 0x60
}