void func_00145478() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00145478: addiu $sp, $sp, -0x40
    v0 = *(int32_t*)((s0) + 0x830);                             // 0x00145490: lw $v0, 0x830($s0)
    if (v0 != 0) goto label_0x1454ac;                           // 0x00145494: bnez $v0, 0x1454ac
    v0 = *(int32_t*)((s0) + 0x854);                             // 0x0014549c: lw $v0, 0x854($s0)
    v0 = (v0 < s1) ? 1 : 0;                                     // 0x001454a0: slt $v0, $v0, $s1
    /* beqzl $v0, 0x145574 */                                   // 0x001454a4: beqzl $v0, 0x145574
    v1 = *(int32_t*)((s0) + 0x850);                             // 0x001454a8: lw $v1, 0x850($s0)
label_0x1454ac:
    v0 = 0x1000 << 16;                                          // 0x001454ac: lui $v0, 0x1000
    a0 = 0x8000 << 16;                                          // 0x001454b0: lui $a0, 0x8000
    v0 = v0 | 0x2010;                                           // 0x001454b4: ori $v0, $v0, 0x2010
    a0 = a0 | 0x4000;                                           // 0x001454b8: ori $a0, $a0, 0x4000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001454bc: lw $v1, 0($v0)
    v0 = 0x8000 << 16;                                          // 0x001454c0: lui $v0, 0x8000
    v1 = v1 & a0;                                               // 0x001454c4: and $v1, $v1, $a0
    if (v1 != v0) goto label_0x145534;                          // 0x001454c8: bne $v1, $v0, 0x145534
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x001454d0: lw $v0, 0x10a0($s0)
    if (v0 != 0) goto label_0x145538;                           // 0x001454d4: bnez $v0, 0x145538
    s2 = 0x21 << 16;                                            // 0x001454d8: lui $s2, 0x21
    /* nop */                                                   // 0x001454dc: nop 
label_0x1454e0:
    v0 = (v0 < 0x1389) ? 1 : 0;                                 // 0x001454e4: slti $v0, $v0, 0x1389
    if (v0 != 0) goto label_0x1454fc;                           // 0x001454e8: bnez $v0, 0x1454fc
    a2 = a2 + 1;                                                // 0x001454ec: addiu $a2, $a2, 1
    func_00147d70();  // 0x147ca0                                // 0x001454f0: jal 0x147ca0
    a0 = *(int32_t*)((s0) + 0x870);                             // 0x001454f4: lw $a0, 0x870($s0)
label_0x1454fc:
    v1 = 0x1000 << 16;                                          // 0x001454fc: lui $v1, 0x1000
    a0 = 0x8000 << 16;                                          // 0x00145500: lui $a0, 0x8000
    v1 = v1 | 0x2010;                                           // 0x00145504: ori $v1, $v1, 0x2010
    a0 = a0 | 0x4000;                                           // 0x00145508: ori $a0, $a0, 0x4000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0014550c: lw $v0, 0($v1)
    a1 = 0x8000 << 16;                                          // 0x00145510: lui $a1, 0x8000
    v0 = v0 & a0;                                               // 0x00145514: and $v0, $v0, $a0
    if (v0 != a1) goto label_0x14553c;                          // 0x00145518: bne $v0, $a1, 0x14553c
    v0 = 0x1000 << 16;                                          // 0x0014551c: lui $v0, 0x1000
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00145520: lw $v0, 0x10a0($s0)
    if (v0 == 0) goto label_0x1454e0;                           // 0x00145524: beqz $v0, 0x1454e0
    v0 = 0x1000 << 16;                                          // 0x00145528: lui $v0, 0x1000
    goto label_0x145540;                                        // 0x0014552c: b 0x145540
    v1 = 0x4000 << 16;                                          // 0x00145530: lui $v1, 0x4000
label_0x145534:
    s2 = 0x21 << 16;                                            // 0x00145534: lui $s2, 0x21
label_0x145538:
    v0 = 0x1000 << 16;                                          // 0x00145538: lui $v0, 0x1000
label_0x14553c:
    v1 = 0x4000 << 16;                                          // 0x0014553c: lui $v1, 0x4000
label_0x145540:
    v0 = v0 | 0x2000;                                           // 0x00145540: ori $v0, $v0, 0x2000
    a1 = s2 + 0xcf8;                                            // 0x00145544: addiu $a1, $s2, 0xcf8
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00145548: sw $v1, 0($v0)
    v0 = g_00210d08;  // Global at 0x00210d08                   // 0x00145550: lw $v0, 0x10($a1)
    func_00145208();  // 0x145080                                // 0x00145554: jal 0x145080
    *(uint32_t*)((s0) + 0x830) = v0;                            // 0x00145558: sw $v0, 0x830($s0)
    v1 = 0x20;                                                  // 0x00145564: addiu $v1, $zero, 0x20
    *(uint32_t*)((s0) + 0x850) = v0;                            // 0x00145568: sw $v0, 0x850($s0)
    *(uint32_t*)((s0) + 0x854) = v1;                            // 0x0014556c: sw $v1, 0x854($s0)
    v1 = *(int32_t*)((s0) + 0x850);                             // 0x00145570: lw $v1, 0x850($s0)
    v0 = -s1;                                                   // 0x00145574: negu $v0, $s1
    v0 = (unsigned)v1 >> v0;                                    // 0x00145580: srlv $v0, $v1, $v0
    return;                                                     // 0x0014558c: jr $ra
    sp = sp + 0x40;                                             // 0x00145590: addiu $sp, $sp, 0x40
}