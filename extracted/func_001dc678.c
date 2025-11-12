void func_001dc678() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x001dc678: addiu $sp, $sp, -0x60
    v0 = 0x22 << 16;                                            // 0x001dc67c: lui $v0, 0x22
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc68c: lw $a0, -0x308($v0)
    v0 = -1;                                                    // 0x001dc698: addiu $v0, $zero, -1
    if (a0 == v0) goto label_0x1dc738;                          // 0x001dc6a0: beq $a0, $v0, 0x1dc738
    v1 = 0x33 << 16;                                            // 0x001dc6a8: lui $v1, 0x33
    v0 = g_0032fec0;  // Global at 0x0032fec0                   // 0x001dc6ac: lw $v0, -0x140($v1)
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x001dc6b0: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x1dc6c4;                           // 0x001dc6b4: bnez $v0, 0x1dc6c4
    s2 = v1 + -0x140;                                           // 0x001dc6b8: addiu $s2, $v1, -0x140
    goto label_0x1dc738;                                        // 0x001dc6bc: b 0x1dc738
    v0 = -0xb;                                                  // 0x001dc6c0: addiu $v0, $zero, -0xb
label_0x1dc6c4:
    s0 = 0x33 << 16;                                            // 0x001dc6c4: lui $s0, 0x33
    g_0032ffc0 = s1;  // Global at 0x0032ffc0                   // 0x001dc6c8: sb $s1, -0x40($s0)
    PollSema();  // 0x114320                                    // 0x001dc6cc: jal 0x114320
    s0 = s0 + -0x40;                                            // 0x001dc6d0: addiu $s0, $s0, -0x40
    a0 = 0x33 << 16;                                            // 0x001dc6d4: lui $a0, 0x33
    t1 = 0x33 << 16;                                            // 0x001dc6d8: lui $t1, 0x33
    t3 = 0x1e << 16;                                            // 0x001dc6dc: lui $t3, 0x1e
    a0 = a0 + -0xa0;                                            // 0x001dc6e0: addiu $a0, $a0, -0xa0
    t1 = t1;                                                    // 0x001dc6e8: addiu $t1, $t1, 0
    t3 = t3 + -0x3548;                                          // 0x001dc6ec: addiu $t3, $t3, -0x3548
    local_0 = 0;                                                // 0x001dc6f0: sw $zero, 0($sp)
    a1 = 3;                                                     // 0x001dc6f4: addiu $a1, $zero, 3
    a2 = 1;                                                     // 0x001dc6f8: addiu $a2, $zero, 1
    t0 = 0x10;                                                  // 0x001dc6fc: addiu $t0, $zero, 0x10
    func_001178a0();  // 0x1176a8                                // 0x001dc700: jal 0x1176a8
    t2 = 0x10;                                                  // 0x001dc704: addiu $t2, $zero, 0x10
    if (v0 == 0) goto label_0x1dc724;                           // 0x001dc708: beqz $v0, 0x1dc724
    a0 = 0x25 << 16;                                            // 0x001dc70c: lui $a0, 0x25
    func_00116598();  // 0x116508                                // 0x001dc714: jal 0x116508
    a0 = &str_002482c0;  // "sceUsbKbSetLEDStatus: sceSifCallRpc -> %d\n" // 0x001dc718: addiu $a0, $a0, -0x7d40
    goto label_0x1dc738;                                        // 0x001dc71c: b 0x1dc738
    v0 = -2;                                                    // 0x001dc720: addiu $v0, $zero, -2
label_0x1dc724:
    v0 = 3;                                                     // 0x001dc724: addiu $v0, $zero, 3
    g_0032ff58 = s3;  // Global at 0x0032ff58                   // 0x001dc728: sw $s3, 0x98($s2)
    g_0032ff50 = v0;  // Global at 0x0032ff50                   // 0x001dc72c: sw $v0, 0x90($s2)
    g_0032ff54 = s1;  // Global at 0x0032ff54                   // 0x001dc730: sw $s1, 0x94($s2)
label_0x1dc738:
    return;                                                     // 0x001dc74c: jr $ra
    sp = sp + 0x60;                                             // 0x001dc750: addiu $sp, $sp, 0x60
}