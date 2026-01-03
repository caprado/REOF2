void func_001891e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x80;                                            // 0x001891e0: addiu $sp, $sp, -0x80
    s5 = 0x28 << 16;                                            // 0x001891ec: lui $s5, 0x28
    a0 = g_00284800;  // Global at 0x00284800                   // 0x00189208: lw $a0, 0x4800($s5)
    PollSema();  // 0x114320                                    // 0x00189214: jal 0x114320
    a3 = 0x28 << 16;                                            // 0x0018921c: lui $a3, 0x28
    g_002812c0 = s1;  // Global at 0x002812c0                   // 0x00189220: sw $s1, 0x12c0($a3)
    s2 = a3 + 0x12c0;                                           // 0x00189224: addiu $s2, $a3, 0x12c0
    g_002812c4 = s0;  // Global at 0x002812c4                   // 0x00189228: sw $s0, 4($s2)
    v0 = *(int32_t*)(s3);                                       // 0x0018922c: lw $v0, 0($s3)
    g_002812c8 = v0;  // Global at 0x002812c8                   // 0x00189230: sw $v0, 8($s2)
    v1 = *(int32_t*)(s3);                                       // 0x00189234: lw $v1, 0($s3)
    if (v1 <= 0) goto label_0x189278;                           // 0x00189238: blez $v1, 0x189278
    a2 = s2 + 0xc;                                              // 0x00189240: addiu $a2, $s2, 0xc
    t0 = 0x28 << 16;                                            // 0x00189244: lui $t0, 0x28
    v0 = s4 + a1;                                               // 0x00189248: addu $v0, $s4, $a1
    /* nop */                                                   // 0x0018924c: nop 
label_0x189250:
    a0 = a2 + a1;                                               // 0x00189250: addu $a0, $a2, $a1
    v1 = *(uint8_t*)(v0);                                       // 0x00189254: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x00189258: addiu $a1, $a1, 1
    str_0022a1d0 = v1;  // Global at 0x0022a1d0                 // 0x0018925c: sb $v1, 0($a0)
    v0 = *(int32_t*)(s3);                                       // 0x00189260: lw $v0, 0($s3)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x00189264: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x189250;                           // 0x00189268: bnez $v0, 0x189250
    v0 = s4 + a1;                                               // 0x0018926c: addu $v0, $s4, $a1
    goto label_0x189280;                                        // 0x00189270: b 0x189280
    a3 = a3 + 0x12c0;                                           // 0x00189274: addiu $a3, $a3, 0x12c0
label_0x189278:
    t0 = 0x28 << 16;                                            // 0x00189278: lui $t0, 0x28
    a3 = a3 + 0x12c0;                                           // 0x0018927c: addiu $a3, $a3, 0x12c0
label_0x189280:
    a1 = 0x8000 << 16;                                          // 0x00189280: lui $a1, 0x8000
    a0 = t0 + 0x1248;                                           // 0x00189284: addiu $a0, $t0, 0x1248
    local_0 = 0;                                                // 0x00189288: sw $zero, 0($sp)
    a1 = a1 | 0x1319;                                           // 0x0018928c: ori $a1, $a1, 0x1319
    t0 = 0x280;                                                 // 0x00189294: addiu $t0, $zero, 0x280
    t2 = 0x280;                                                 // 0x0018929c: addiu $t2, $zero, 0x280
    func_001176a8();  // 1176a8                                // 0x001892a0: jal 0x1176a8
    if (v0 >= 0) goto label_0x1892cc;                           // 0x001892a8: bgezl $v0, 0x1892cc
    v0 = g_002814cc;  // Global at 0x002814cc                   // 0x001892ac: lw $v0, 0x20c($s2)
    a0 = 0x23 << 16;                                            // 0x001892b0: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x001892b4: jal 0x1896c8
    a0 = &str_0022a1d0;  // "libdbc: SendData2 data length too long [%d]\n" // 0x001892b8: addiu $a0, $a0, -0x5e30
    iSignalSema();  // 0x114300                                 // 0x001892bc: jal 0x114300
    a0 = g_00284800;  // Global at 0x00284800                   // 0x001892c0: lw $a0, 0x4800($s5)
    goto label_0x1892e8;                                        // 0x001892c4: b 0x1892e8
label_0x1892cc:
    if (v0 < 0) goto label_0x1892dc;                            // 0x001892cc: bltz $v0, 0x1892dc
    /* nop */                                                   // 0x001892d0: nop 
    v0 = g_002812c8;  // Global at 0x002812c8                   // 0x001892d4: lw $v0, 8($s2)
    *(uint32_t*)(s3) = v0;                                      // 0x001892d8: sw $v0, 0($s3)
label_0x1892dc:
    iSignalSema();  // 0x114300                                 // 0x001892dc: jal 0x114300
    a0 = g_00284800;  // Global at 0x00284800                   // 0x001892e0: lw $a0, 0x4800($s5)
    v0 = g_002814cc;  // Global at 0x002814cc                   // 0x001892e4: lw $v0, 0x20c($s2)
label_0x1892e8:
    return;                                                     // 0x00189304: jr $ra
    sp = sp + 0x80;                                             // 0x00189308: addiu $sp, $sp, 0x80
}