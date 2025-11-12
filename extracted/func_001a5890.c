void func_001a5890() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001a5890: addiu $sp, $sp, -0x50
    func_001a6250();  // 0x1a6210                                // 0x001a5898: jal 0x1a6210
    if (v0 != 0) goto label_0x1a58b0;                           // 0x001a58a0: bnez $v0, 0x1a58b0
    /* nop */                                                   // 0x001a58a4: nop 
    goto label_0x1a5a50;                                        // 0x001a58a8: b 0x1a5a50
label_0x1a58b0:
    func_001a5c40();  // 0x1a5be0                                // 0x001a58b0: jal 0x1a5be0
    /* nop */                                                   // 0x001a58b4: nop 
    v0 = 0xff;                                                  // 0x001a58b8: addiu $v0, $zero, 0xff
    at = 0x2a << 16;                                            // 0x001a58bc: lui $at, 0x2a
    g_002a0ec0 = v0;  // Global at 0x002a0ec0                   // 0x001a58c0: sb $v0, 0xec0($at)
    a3 = 0x2a << 16;                                            // 0x001a58c4: lui $a3, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a58c8: lui $v0, 0x2a
    v1 = 0 | 0xffff;                                            // 0x001a58cc: ori $v1, $zero, 0xffff
    at = 0x2a << 16;                                            // 0x001a58d0: lui $at, 0x2a
    v0 = v0 + 0xec0;                                            // 0x001a58d4: addiu $v0, $v0, 0xec0
    g_002a0ec2 = v1;  // Global at 0x002a0ec2                   // 0x001a58d8: sh $v1, 0xec2($at)
    a2 = 0x2a << 16;                                            // 0x001a58dc: lui $a2, 0x2a
    /* FPU: andi.b $w0, $w0, 0x45 */                            // 0x001a58e0: andi.b $w0, $w0, 0x45
    v1 = 0x2a << 16;                                            // 0x001a58e4: lui $v1, 0x2a
    /* FPU: add_a.w $w0, $w0, $w4 */                            // 0x001a58e8: add_a.w $w0, $w0, $w4
    t0 = sp + 0x20;                                             // 0x001a58ec: addiu $t0, $sp, 0x20
    a3 = a3 + 0xee0;                                            // 0x001a58f0: addiu $a3, $a3, 0xee0
    a2 = a2 + 0xf20;                                            // 0x001a58f4: addiu $a2, $a2, 0xf20
    v1 = v1 + 0xd40;                                            // 0x001a58f8: addiu $v1, $v1, 0xd40
    v0 = -1;                                                    // 0x001a5900: addiu $v0, $zero, -1
    /* FPU: addu.qb $zero, $t0, $a0 */                          // 0x001a5904: addu.qb $zero, $t0, $a0
    /* FPU: ori.b $w0, $w0, 5 */                                // 0x001a5908: ori.b $w0, $w0, 5
    /* FPU: adds_s.b $w0, $w0, $w4 */                           // 0x001a590c: adds_s.b $w0, $w0, $w4
    /* FPU: addu.qb $zero, $a3, $a0 */                          // 0x001a5914: addu.qb $zero, $a3, $a0
    g_002a0f20 = 0;  // Global at 0x002a0f20                    // 0x001a5918: sb $zero, 0($a2)
    g_002a0f21 = 0;  // Global at 0x002a0f21                    // 0x001a591c: sb $zero, 1($a2)
    g_002a0f22 = 0;  // Global at 0x002a0f22                    // 0x001a5920: sb $zero, 2($a2)
    g_002a0f23 = 0;  // Global at 0x002a0f23                    // 0x001a5924: sb $zero, 3($a2)
    g_002a0f25 = 0;  // Global at 0x002a0f25                    // 0x001a5928: sb $zero, 5($a2)
    g_002a0f28 = v1;  // Global at 0x002a0f28                   // 0x001a592c: sw $v1, 8($a2)
    v1 = *(int32_t*)((gp) + -0x7d68);                           // 0x001a5930: lw $v1, -0x7d68($gp)
    if (v1 != v0) goto label_0x1a594c;                          // 0x001a5934: bne $v1, $v0, 0x1a594c
    func_001a62d0();  // 0x1a6250                                // 0x001a593c: jal 0x1a6250
    goto label_0x1a5a14;                                        // 0x001a5944: b 0x1a5a14
label_0x1a594c:
    if (v1 != 0) goto label_0x1a59c4;                           // 0x001a594c: bnez $v1, 0x1a59c4
    goto label_0x1a5984;                                        // 0x001a5954: b 0x1a5984
label_0x1a595c:
    a0 = *(int32_t*)((gp) + -0x7d68);                           // 0x001a595c: lw $a0, -0x7d68($gp)
    v1 = s0 << 1;                                               // 0x001a5960: sll $v1, $s0, 1
    v0 = 0x2a << 16;                                            // 0x001a5964: lui $v0, 0x2a
    v1 = v1 + s0;                                               // 0x001a5968: addu $v1, $v1, $s0
    v0 = v0 + 0xf20;                                            // 0x001a596c: addiu $v0, $v0, 0xf20
    v1 = v1 << 3;                                               // 0x001a5970: sll $v1, $v1, 3
    func_001a62d0();  // 0x1a6250                                // 0x001a5978: jal 0x1a6250
    a2 = v0 + v1;                                               // 0x001a597c: addu $a2, $v0, $v1
    s0 = s0 + 1;                                                // 0x001a5980: addiu $s0, $s0, 1
label_0x1a5984:
    v0 = *(int32_t*)((gp) + -0x6410);                           // 0x001a5984: lw $v0, -0x6410($gp)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001a5988: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1a595c;                           // 0x001a598c: bnez $v0, 0x1a595c
    /* nop */                                                   // 0x001a5990: nop 
    if (s0 > 0) goto label_0x1a5a10;                            // 0x001a5994: bgtz $s0, 0x1a5a10
    v1 = s0 << 1;                                               // 0x001a5998: sll $v1, $s0, 1
    v0 = 0x2a << 16;                                            // 0x001a599c: lui $v0, 0x2a
    v1 = v1 + s0;                                               // 0x001a59a0: addu $v1, $v1, $s0
    v0 = v0 + 0xf20;                                            // 0x001a59a4: addiu $v0, $v0, 0xf20
    v1 = v1 << 3;                                               // 0x001a59a8: sll $v1, $v1, 3
    a0 = 1;                                                     // 0x001a59ac: addiu $a0, $zero, 1
    func_001a62d0();  // 0x1a6250                                // 0x001a59b4: jal 0x1a6250
    a2 = v0 + v1;                                               // 0x001a59b8: addu $a2, $v0, $v1
    goto label_0x1a5a10;                                        // 0x001a59bc: b 0x1a5a10
    /* nop */                                                   // 0x001a59c0: nop 
label_0x1a59c4:
    func_001a62d0();  // 0x1a6250                                // 0x001a59c4: jal 0x1a6250
    goto label_0x1a5a00;                                        // 0x001a59cc: b 0x1a5a00
label_0x1a59d4:
    a0 = *(int32_t*)((gp) + -0x7d68);                           // 0x001a59d4: lw $a0, -0x7d68($gp)
    a1 = s0 + 1;                                                // 0x001a59d8: addiu $a1, $s0, 1
    v1 = a1 << 1;                                               // 0x001a59dc: sll $v1, $a1, 1
    v0 = 0x2a << 16;                                            // 0x001a59e0: lui $v0, 0x2a
    v1 = v1 + a1;                                               // 0x001a59e4: addu $v1, $v1, $a1
    v0 = v0 + 0xf20;                                            // 0x001a59e8: addiu $v0, $v0, 0xf20
    v1 = v1 << 3;                                               // 0x001a59ec: sll $v1, $v1, 3
    func_001a62d0();  // 0x1a6250                                // 0x001a59f4: jal 0x1a6250
    a2 = v0 + v1;                                               // 0x001a59f8: addu $a2, $v0, $v1
    s0 = s0 + 1;                                                // 0x001a59fc: addiu $s0, $s0, 1
label_0x1a5a00:
    v0 = *(int32_t*)((gp) + -0x6410);                           // 0x001a5a00: lw $v0, -0x6410($gp)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001a5a04: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1a59d4;                           // 0x001a5a08: bnez $v0, 0x1a59d4
    /* nop */                                                   // 0x001a5a0c: nop 
label_0x1a5a10:
label_0x1a5a14:
    a0 = sp + 0x48;                                             // 0x001a5a14: addiu $a0, $sp, 0x48
    a2 = 0x2a << 16;                                            // 0x001a5a18: lui $a2, 0x2a
    a1 = 0x2a << 16;                                            // 0x001a5a1c: lui $a1, 0x2a
    a2 = a2 + 0xf20;                                            // 0x001a5a20: addiu $a2, $a2, 0xf20
    a1 = a1 + 0xf40;                                            // 0x001a5a24: addiu $a1, $a1, 0xf40
    v0 = 1;                                                     // 0x001a5a28: addiu $v0, $zero, 1
    v1 = g_002a0f22;  // Global at 0x002a0f22                   // 0x001a5a38: lbu $v1, 2($a2)
    g_002a0f44 = v1;  // Global at 0x002a0f44                   // 0x001a5a3c: sb $v1, 4($a1)
    v1 = g_002a0f23;  // Global at 0x002a0f23                   // 0x001a5a40: lbu $v1, 3($a2)
    g_002a0f45 = v1;  // Global at 0x002a0f45                   // 0x001a5a44: sb $v1, 5($a1)
    *(uint8_t*)((gp) + -0x640c) = 0;                            // 0x001a5a48: sb $zero, -0x640c($gp)
    *(uint8_t*)((gp) + -0x6408) = 0;                            // 0x001a5a4c: sb $zero, -0x6408($gp)
label_0x1a5a50:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a5a54: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a5a58: jr $ra
    sp = sp + 0x50;                                             // 0x001a5a5c: addiu $sp, $sp, 0x50
}