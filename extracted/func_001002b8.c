void func_001002b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001002b8: addiu $sp, $sp, -0x20
    a1 = 0xb;                                                   // 0x001002bc: addiu $a1, $zero, 0xb
    s0 = 0x1f << 16;                                            // 0x001002c8: lui $s0, 0x1f
    v1 = g_001f0000;  // Global at 0x001f0000                   // 0x001002cc: lw $v1, 0($a0)
    a0 = 0x1f << 16;                                            // 0x001002d0: lui $a0, 0x1f
    g_001edf58 = v1;  // Global at 0x001edf58                   // 0x001002d4: sw $v1, -0x20a8($s0)
    v0 = g_001edf58;  // Global at 0x001edf58                   // 0x001002d8: lw $v0, -0x20a8($s0)
    g_001edf5c = v0;  // Global at 0x001edf5c                   // 0x001002dc: sw $v0, -0x20a4($a0)
    v1 = g_001edf58;  // Global at 0x001edf58                   // 0x001002e0: lw $v1, -0x20a8($s0)
    if (v1 != a1) goto label_0x100300;                          // 0x001002e4: bne $v1, $a1, 0x100300
    v0 = 0x1f << 16;                                            // 0x001002e8: lui $v0, 0x1f
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x001002ec: sw $zero, -0x20a8($s0)
    v0 = 0x1f << 16;                                            // 0x001002f0: lui $v0, 0x1f
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x001002f4: sw $zero, -0x20cc($v0)
    goto label_0x10034c;                                        // 0x001002f8: b 0x10034c
label_0x100300:
    a0 = g_001edf28;  // Global at 0x001edf28                   // 0x00100300: lw $a0, -0x20d8($v0)
    WaitSema();  // 0x114310                                    // 0x00100304: jal 0x114310
    /* nop */                                                   // 0x00100308: nop 
    v1 = 0x1f << 16;                                            // 0x0010030c: lui $v1, 0x1f
    v0 = g_001edf14;  // Global at 0x001edf14                   // 0x00100310: lw $v0, -0x20ec($v1)
    if (v0 == 0) goto label_0x10033c;                           // 0x00100314: beqz $v0, 0x10033c
    v0 = 0x25 << 16;                                            // 0x00100318: lui $v0, 0x25
    v1 = g_0024b700;  // Global at 0x0024b700                   // 0x0010031c: lw $v1, -0x4900($v0)
    if (v1 == 0) goto label_0x10033c;                           // 0x00100320: beqz $v1, 0x10033c
    v0 = 0x1f << 16;                                            // 0x00100324: lui $v0, 0x1f
    a0 = g_001edf20;  // Global at 0x001edf20                   // 0x00100328: lw $a0, -0x20e0($v0)
    WaitSema();  // 0x114310                                    // 0x0010032c: jal 0x114310
    /* nop */                                                   // 0x00100330: nop 
    goto label_0x100344;                                        // 0x00100334: b 0x100344
    /* nop */                                                   // 0x00100338: nop 
label_0x10033c:
    v0 = 0x1f << 16;                                            // 0x0010033c: lui $v0, 0x1f
    g_001edf34 = 0;  // Global at 0x001edf34                    // 0x00100340: sw $zero, -0x20cc($v0)
label_0x100344:
    g_001edf58 = 0;  // Global at 0x001edf58                    // 0x00100344: sw $zero, -0x20a8($s0)
label_0x10034c:
    return;                                                     // 0x00100350: jr $ra
    sp = sp + 0x20;                                             // 0x00100354: addiu $sp, $sp, 0x20
}