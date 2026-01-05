void func_00189310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x80;                                            // 0x00189310: addiu $sp, $sp, -0x80
    v1 = g_00281270;  // Global at 0x00281270                   // 0x0018933c: lw $v1, 0($s0)
    v0 = (v1 < 0x1081) ? 1 : 0;                                 // 0x00189340: slti $v0, $v1, 0x1081
    if (v0 != 0) goto label_0x189364;                           // 0x00189344: bnez $v0, 0x189364
    a0 = 0x23 << 16;                                            // 0x0018934c: lui $a0, 0x23
    func_001896c8();  // 1896c8                                // 0x00189354: jal 0x1896c8
    a0 = &str_0022a1f0;  // "dbcman : SendData2 BUSY\n"         // 0x00189358: addiu $a0, $a0, -0x5e10
    goto label_0x189448;                                        // 0x0018935c: b 0x189448
label_0x189364:
    s5 = 0x28 << 16;                                            // 0x00189364: lui $s5, 0x28
    s3 = 0x28 << 16;                                            // 0x00189368: lui $s3, 0x28
    PollSema();  // 0x114320                                    // 0x0018936c: jal 0x114320
    a0 = g_00284800;  // Global at 0x00284800                   // 0x00189370: lw $a0, 0x4800($s5)
    g_00281540 = s2;  // Global at 0x00281540                   // 0x00189374: sw $s2, 0x1540($s3)
    a0 = s3 + 0x1540;                                           // 0x00189378: addiu $a0, $s3, 0x1540
    g_00281544 = s1;  // Global at 0x00281544                   // 0x0018937c: sw $s1, 4($a0)
    v0 = g_00281270;  // Global at 0x00281270                   // 0x00189380: lw $v0, 0($s0)
    g_00281548 = v0;  // Global at 0x00281548                   // 0x00189384: sw $v0, 8($a0)
    v1 = g_00281270;  // Global at 0x00281270                   // 0x00189388: lw $v1, 0($s0)
    if (v1 <= 0) goto label_0x1893c8;                           // 0x0018938c: blez $v1, 0x1893c8
    a2 = a0 + 0xc;                                              // 0x00189394: addiu $a2, $a0, 0xc
    a3 = 0x28 << 16;                                            // 0x00189398: lui $a3, 0x28
    v0 = s4 + a1;                                               // 0x0018939c: addu $v0, $s4, $a1
label_0x1893a0:
    a0 = a2 + a1;                                               // 0x001893a0: addu $a0, $a2, $a1
    v1 = *(uint8_t*)(v0);                                       // 0x001893a4: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x001893a8: addiu $a1, $a1, 1
    g_00281540 = v1;  // Global at 0x00281540                   // 0x001893ac: sb $v1, 0($a0)
    v0 = g_00281270;  // Global at 0x00281270                   // 0x001893b0: lw $v0, 0($s0)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x001893b4: slt $v0, $a1, $v0
    if (v0 != 0) goto label_0x1893a0;                           // 0x001893b8: bnez $v0, 0x1893a0
    v0 = s4 + a1;                                               // 0x001893bc: addu $v0, $s4, $a1
    goto label_0x1893d0;                                        // 0x001893c0: b 0x1893d0
    s0 = a3 + 0x1270;                                           // 0x001893c4: addiu $s0, $a3, 0x1270
label_0x1893c8:
    a3 = 0x28 << 16;                                            // 0x001893c8: lui $a3, 0x28
    s0 = a3 + 0x1270;                                           // 0x001893cc: addiu $s0, $a3, 0x1270
label_0x1893d0:
    func_001178a0();  // 1178a0                                // 0x001893d0: jal 0x1178a0
    v1 = 1;                                                     // 0x001893d8: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1893f0;                          // 0x001893dc: bne $v0, $v1, 0x1893f0
    a3 = s3 + 0x1540;                                           // 0x001893e0: addiu $a3, $s3, 0x1540
    a0 = 0x23 << 16;                                            // 0x001893e4: lui $a0, 0x23
    goto label_0x189424;                                        // 0x001893e8: b 0x189424
    a0 = &str_0022a220;  // "sceDbcSendData2: rpc error\n"      // 0x001893ec: addiu $a0, $a0, -0x5de0
label_0x1893f0:
    a1 = 0x8000 << 16;                                          // 0x001893f0: lui $a1, 0x8000
    local_0 = 0;                                                // 0x001893f8: sw $zero, 0($sp)
    a1 = a1 | 0x131b;                                           // 0x001893fc: ori $a1, $a1, 0x131b
    a2 = 1;                                                     // 0x00189400: addiu $a2, $zero, 1
    t0 = 0x1090;                                                // 0x00189404: addiu $t0, $zero, 0x1090
    t2 = 0x1090;                                                // 0x0018940c: addiu $t2, $zero, 0x1090
    func_001176a8();  // 1176a8                                // 0x00189410: jal 0x1176a8
    if (v0 >= 0) goto label_0x18943c;                           // 0x00189418: bgez $v0, 0x18943c
    a0 = 0x23 << 16;                                            // 0x0018941c: lui $a0, 0x23
    a0 = &str_0022a240;  // "libdbc: SendData3 data length too long\n" // 0x00189420: addiu $a0, $a0, -0x5dc0
label_0x189424:
    func_001896c8();  // 1896c8                                // 0x00189424: jal 0x1896c8
    /* nop */                                                   // 0x00189428: nop 
    iSignalSema();  // 0x114300                                 // 0x0018942c: jal 0x114300
    a0 = g_00284800;  // Global at 0x00284800                   // 0x00189430: lw $a0, 0x4800($s5)
    goto label_0x189448;                                        // 0x00189434: b 0x189448
label_0x18943c:
    iSignalSema();  // 0x114300                                 // 0x0018943c: jal 0x114300
    a0 = g_00284800;  // Global at 0x00284800                   // 0x00189440: lw $a0, 0x4800($s5)
    v0 = 1;                                                     // 0x00189444: addiu $v0, $zero, 1
label_0x189448:
    return;                                                     // 0x00189464: jr $ra
    sp = sp + 0x80;                                             // 0x00189468: addiu $sp, $sp, 0x80
}