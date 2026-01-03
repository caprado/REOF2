void func_00102960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00102960: addiu $sp, $sp, -0x60
    v0 = 0x1000 << 16;                                          // 0x00102964: lui $v0, 0x1000
    v0 = v0 | 0x3840;                                           // 0x0010296c: ori $v0, $v0, 0x3840
    func_00102910();  // 102910                                // 0x00102988: jal 0x102910
    s4 = g_10000000;  // Global at 0x10000000                   // 0x0010298c: lw $s4, 0($v0)
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00102990: sltiu $v0, $v0, 2
    if (v0 != 0) goto label_0x1029a4;                           // 0x00102994: bnez $v0, 0x1029a4
    v0 = 0x1000 << 16;                                          // 0x00102998: lui $v0, 0x1000
    goto label_0x102ac0;                                        // 0x0010299c: b 0x102ac0
label_0x1029a4:
    v1 = 0x1000 << 16;                                          // 0x001029a4: lui $v1, 0x1000
    v0 = v0 | 0x3900;                                           // 0x001029a8: ori $v0, $v0, 0x3900
    v1 = v1 | 0x3910;                                           // 0x001029ac: ori $v1, $v1, 0x3910
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001029b0: lw $a1, 0($v0)
    a0 = 0x1000 << 16;                                          // 0x001029b4: lui $a0, 0x1000
    a0 = a0 | 0x3920;                                           // 0x001029b8: ori $a0, $a0, 0x3920
    a2 = 0x1000 << 16;                                          // 0x001029bc: lui $a2, 0x1000
    *(uint32_t*)(s3) = a1;                                      // 0x001029c0: sw $a1, 0($s3)
    a2 = a2 | 0x3930;                                           // 0x001029c4: ori $a2, $a2, 0x3930
    a1 = 0x1000 << 16;                                          // 0x001029c8: lui $a1, 0x1000
    t7 = 0x1000 << 16;                                          // 0x001029cc: lui $t7, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001029d0: lw $v0, 0($v1)
    a1 = a1 | 0x3940;                                           // 0x001029d4: ori $a1, $a1, 0x3940
    t7 = t7 | 0x3950;                                           // 0x001029d8: ori $t7, $t7, 0x3950
    s0 = 0x1000 << 16;                                          // 0x001029dc: lui $s0, 0x1000
    *(uint32_t*)((s3) + 4) = v0;                                // 0x001029e0: sw $v0, 4($s3)
    s0 = s0 | 0x3960;                                           // 0x001029e4: ori $s0, $s0, 0x3960
    t6 = 0x1000 << 16;                                          // 0x001029e8: lui $t6, 0x1000
    s1 = 0x1000 << 16;                                          // 0x001029ec: lui $s1, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001029f0: lw $v0, 0($a0)
    t6 = t6 | 0x3970;                                           // 0x001029f4: ori $t6, $t6, 0x3970
    s1 = s1 | 0x3870;                                           // 0x001029f8: ori $s1, $s1, 0x3870
    t4 = 0x1000 << 16;                                          // 0x001029fc: lui $t4, 0x1000
    *(uint32_t*)((s3) + 8) = v0;                                // 0x00102a00: sw $v0, 8($s3)
    t4 = t4 | 0x3880;                                           // 0x00102a04: ori $t4, $t4, 0x3880
    t3 = 0x1000 << 16;                                          // 0x00102a08: lui $t3, 0x1000
    t5 = 0x1000 << 16;                                          // 0x00102a0c: lui $t5, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00102a10: lw $v0, 0($a2)
    t3 = t3 | 0x3800;                                           // 0x00102a14: ori $t3, $t3, 0x3800
    t5 = t5 | 0x38d0;                                           // 0x00102a18: ori $t5, $t5, 0x38d0
    a2 = 0x1000 << 16;                                          // 0x00102a1c: lui $a2, 0x1000
    *(uint32_t*)((s3) + 0xc) = v0;                              // 0x00102a20: sw $v0, 0xc($s3)
    a2 = a2 | 0x3890;                                           // 0x00102a24: ori $a2, $a2, 0x3890
    a3 = 0x1000 << 16;                                          // 0x00102a28: lui $a3, 0x1000
    t1 = 0x1000 << 16;                                          // 0x00102a2c: lui $t1, 0x1000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00102a30: lw $v0, 0($a1)
    a3 = a3 | 0x3830;                                           // 0x00102a34: ori $a3, $a3, 0x3830
    t1 = t1 | 0x3860;                                           // 0x00102a38: ori $t1, $t1, 0x3860
    t0 = 0x1000 << 16;                                          // 0x00102a3c: lui $t0, 0x1000
    *(uint32_t*)((s3) + 0x10) = v0;                             // 0x00102a40: sw $v0, 0x10($s3)
    t0 = t0 | 0x3820;                                           // 0x00102a44: ori $t0, $t0, 0x3820
    s2 = (unsigned)s4 >> 8;                                     // 0x00102a48: srl $s2, $s4, 8
    t2 = 0x1000 << 16;                                          // 0x00102a4c: lui $t2, 0x1000
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102a50: lw $a0, 0($t7)
    t2 = t2 | 0x3850;                                           // 0x00102a54: ori $t2, $t2, 0x3850
    v0 = 1;                                                     // 0x00102a58: addiu $v0, $zero, 1
    *(uint32_t*)((s3) + 0x14) = a0;                             // 0x00102a5c: sw $a0, 0x14($s3)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102a60: lw $v1, 0($s0)
    *(uint32_t*)((s3) + 0x18) = v1;                             // 0x00102a64: sw $v1, 0x18($s3)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102a68: lw $a0, 0($t6)
    *(uint32_t*)((s3) + 0x1c) = a0;                             // 0x00102a6c: sw $a0, 0x1c($s3)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102a70: lw $v1, 0($s1)
    *(uint32_t*)((s3) + 0x20) = v1;                             // 0x00102a74: sw $v1, 0x20($s3)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102a78: lw $a0, 0($t4)
    *(uint32_t*)((s3) + 0x24) = a0;                             // 0x00102a7c: sw $a0, 0x24($s3)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102a80: lw $v1, 0($t3)
    *(uint32_t*)((s3) + 0x28) = v1;                             // 0x00102a84: sw $v1, 0x28($s3)
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00102a88: lw $a0, 0($t5)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102a8c: lw $v1, 0($a2)
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00102a90: lw $a1, 0($a3)
    a2 = g_10000000;  // Global at 0x10000000                   // 0x00102a94: lw $a2, 0($t1)
    a3 = g_10000000;  // Global at 0x10000000                   // 0x00102a98: lw $a3, 0($t0)
    *(uint16_t*)((s3) + 0x2e) = v1;                             // 0x00102a9c: sh $v1, 0x2e($s3)
    *(uint16_t*)((s3) + 0x2c) = a0;                             // 0x00102aa0: sh $a0, 0x2c($s3)
    *(uint16_t*)((s3) + 0x30) = a1;                             // 0x00102aa4: sh $a1, 0x30($s3)
    *(uint16_t*)((s3) + 0x32) = a2;                             // 0x00102aa8: sh $a2, 0x32($s3)
    *(uint8_t*)((s3) + 0x34) = a3;                              // 0x00102aac: sb $a3, 0x34($s3)
    *(uint8_t*)((s3) + 0x35) = s4;                              // 0x00102ab0: sb $s4, 0x35($s3)
    *(uint8_t*)((s3) + 0x36) = s2;                              // 0x00102ab4: sb $s2, 0x36($s3)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00102ab8: lw $v1, 0($t2)
    *(uint8_t*)((s3) + 0x37) = v1;                              // 0x00102abc: sb $v1, 0x37($s3)
label_0x102ac0:
    return;                                                     // 0x00102ad8: jr $ra
    sp = sp + 0x60;                                             // 0x00102adc: addiu $sp, $sp, 0x60
}