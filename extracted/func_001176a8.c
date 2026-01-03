void func_001176a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8, local_c0;
    
    sp = sp + -0xc0;                                            // 0x001176a8: addiu $sp, $sp, -0xc0
    a0 = 0x25 << 16;                                            // 0x001176bc: lui $a0, 0x25
    func_00116f08();  // 116f08                                // 0x001176f8: jal 0x116f08
    a0 = a0 + -0x1ec0;                                          // 0x001176fc: addiu $a0, $a0, -0x1ec0
    if (s0 == 0) goto label_0x11786c;                           // 0x00117704: beqz $s0, 0x11786c
    v0 = -1;                                                    // 0x00117708: addiu $v0, $zero, -1
    v0 = local_c0;                                              // 0x0011770c: lw $v0, 0xc0($sp)
    v1 = *(int32_t*)((s0) + 0x18);                              // 0x00117710: lw $v1, 0x18($s0)
    *(uint32_t*)((s1) + 0x20) = v0;                             // 0x00117714: sw $v0, 0x20($s1)
    *(uint32_t*)((s1) + 4) = v1;                                // 0x00117718: sw $v1, 4($s1)
    *(uint32_t*)(s1) = s0;                                      // 0x0011771c: sw $s0, 0($s1)
    *(uint32_t*)((s1) + 0x1c) = s7;                             // 0x00117720: sw $s7, 0x1c($s1)
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x00117728: sw $v0, 0x18($s1)
    v1 = fp & 2;                                                // 0x0011772c: andi $v1, $fp, 2
    *(uint32_t*)((s0) + 0x20) = s6;                             // 0x00117730: sw $s6, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = s2;                             // 0x00117734: sw $s2, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = s4;                             // 0x00117738: sw $s4, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = s3;                             // 0x0011773c: sw $s3, 0x2c($s0)
    *(uint32_t*)((s0) + 0x14) = s0;                             // 0x00117740: sw $s0, 0x14($s0)
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x00117744: lw $v0, 0x24($s1)
    *(uint32_t*)((s0) + 0x1c) = s1;                             // 0x00117748: sw $s1, 0x1c($s0)
    if (v1 != 0) goto label_0x117794;                           // 0x0011774c: bnez $v1, 0x117794
    *(uint32_t*)((s0) + 0x34) = v0;                             // 0x00117750: sw $v0, 0x34($s0)
    if (s5 != s4) goto label_0x117774;                          // 0x00117754: bne $s5, $s4, 0x117774
    v0 = (s2 < s3) ? 1 : 0;                                     // 0x00117758: slt $v0, $s2, $s3
    func_00116c90();  // 116c90                                // 0x00117764: jal 0x116c90
    if (v0 == 0) a1 = s2;                                       // 0x00117768: movz $a1, $s2, $v0
    goto label_0x117798;                                        // 0x0011776c: b 0x117798
    v0 = fp & 1;                                                // 0x00117770: andi $v0, $fp, 1
label_0x117774:
    if (s2 <= 0) goto label_0x117784;                           // 0x00117774: blez $s2, 0x117784
    func_00116c90();  // 116c90                                // 0x0011777c: jal 0x116c90
label_0x117784:
    if (s3 <= 0) goto label_0x117794;                           // 0x00117784: blez $s3, 0x117794
    func_00116c90();  // 116c90                                // 0x0011778c: jal 0x116c90
label_0x117794:
    v0 = fp & 1;                                                // 0x00117794: andi $v0, $fp, 1
label_0x117798:
    /* beqzl $v0, 0x1177ec */                                   // 0x00117798: beqzl $v0, 0x1177ec
    s3 = 1;                                                     // 0x0011779c: addiu $s3, $zero, 1
    if (s7 != 0) goto label_0x1177b0;                           // 0x001177a0: bnez $s7, 0x1177b0
    v0 = 1;                                                     // 0x001177a4: addiu $v0, $zero, 1
    goto label_0x1177b4;                                        // 0x001177a8: b 0x1177b4
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001177ac: sw $zero, 0x30($s0)
label_0x1177b0:
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x001177b0: sw $v0, 0x30($s0)
label_0x1177b4:
    v0 = -1;                                                    // 0x001177b4: addiu $v0, $zero, -1
    a0 = 0x8000 << 16;                                          // 0x001177b8: lui $a0, 0x8000
    t0 = *(int32_t*)((s1) + 0x14);                              // 0x001177bc: lw $t0, 0x14($s1)
    *(uint32_t*)((s1) + 8) = v0;                                // 0x001177c4: sw $v0, 8($s1)
    a0 = a0 | 0xa;                                              // 0x001177cc: ori $a0, $a0, 0xa
    func_00116ac8();  // 116ac8                                // 0x001177d4: jal 0x116ac8
    a2 = 0x40;                                                  // 0x001177d8: addiu $a2, $zero, 0x40
    if (v0 != 0) goto label_0x11786c;                           // 0x001177dc: bnez $v0, 0x11786c
    goto label_0x117848;                                        // 0x001177e4: b 0x117848
    /* nop */                                                   // 0x001177e8: nop 
    local_8 = 0;                                                // 0x001177ec: sw $zero, 8($sp)
    local_4 = s3;                                               // 0x001177f0: sw $s3, 4($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001177f4: jal 0x1142e0
    if (v0 >= 0) goto label_0x117814;                           // 0x001177fc: bgez $v0, 0x117814
    *(uint32_t*)((s1) + 8) = v0;                                // 0x00117800: sw $v0, 8($s1)
    func_00116fb0();  // 116fb0                                // 0x00117804: jal 0x116fb0
    goto label_0x11786c;                                        // 0x0011780c: b 0x11786c
    v0 = -3;                                                    // 0x00117810: addiu $v0, $zero, -3
label_0x117814:
    *(uint32_t*)((s0) + 0x30) = s3;                             // 0x00117814: sw $s3, 0x30($s0)
    a0 = 0x8000 << 16;                                          // 0x00117818: lui $a0, 0x8000
    t0 = *(int32_t*)((s1) + 0x14);                              // 0x00117824: lw $t0, 0x14($s1)
    a0 = a0 | 0xa;                                              // 0x00117828: ori $a0, $a0, 0xa
    func_00116ac8();  // 116ac8                                // 0x00117830: jal 0x116ac8
    a2 = 0x40;                                                  // 0x00117834: addiu $a2, $zero, 0x40
    if (v0 != 0) goto label_0x117858;                           // 0x00117838: bnez $v0, 0x117858
    /* nop */                                                   // 0x0011783c: nop 
    SignalSema();  // 0x1142f0                                  // 0x00117840: jal 0x1142f0
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00117844: lw $a0, 8($s1)
label_0x117848:
    func_00116fb0();  // 116fb0                                // 0x00117848: jal 0x116fb0
    goto label_0x11786c;                                        // 0x00117850: b 0x11786c
    v0 = -2;                                                    // 0x00117854: addiu $v0, $zero, -2
label_0x117858:
    PollSema();  // 0x114320                                    // 0x00117858: jal 0x114320
    a0 = *(int32_t*)((s1) + 8);                                 // 0x0011785c: lw $a0, 8($s1)
    SignalSema();  // 0x1142f0                                  // 0x00117860: jal 0x1142f0
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00117864: lw $a0, 8($s1)
label_0x11786c:
    return;                                                     // 0x00117894: jr $ra
    sp = sp + 0xc0;                                             // 0x00117898: addiu $sp, $sp, 0xc0
}