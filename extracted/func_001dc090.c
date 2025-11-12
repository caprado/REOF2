void func_001dc090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001dc090: addiu $sp, $sp, -0x20
    v0 = *(int8_t*)((gp) + -0x6220);                            // 0x001dc098: lb $v0, -0x6220($gp)
    if (v0 != 0) goto label_0x1dc0ac;                           // 0x001dc09c: bnez $v0, 0x1dc0ac
    a0 = 0x33 << 16;                                            // 0x001dc0a0: lui $a0, 0x33
    goto label_0x1dc1ac;                                        // 0x001dc0a4: b 0x1dc1ac
label_0x1dc0ac:
    a0 = a0 + -0x200;                                           // 0x001dc0b0: addiu $a0, $a0, -0x200
    func_00107d30();  // 0x107c70                                // 0x001dc0b4: jal 0x107c70
    a2 = 0x88;                                                  // 0x001dc0b8: addiu $a2, $zero, 0x88
    v0 = *(int16_t*)((gp) + -0x6228);                           // 0x001dc0bc: lh $v0, -0x6228($gp)
    if (v0 != 0) goto label_0x1dc0f0;                           // 0x001dc0c0: bnez $v0, 0x1dc0f0
    v1 = *(int8_t*)((gp) + -0x6224);                            // 0x001dc0c8: lb $v1, -0x6224($gp)
    v0 = 0x22 << 16;                                            // 0x001dc0cc: lui $v0, 0x22
    v0 = v0 + -0x340;                                           // 0x001dc0d0: addiu $v0, $v0, -0x340
    v1 = v1 << 2;                                               // 0x001dc0d4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001dc0d8: addu $v0, $v0, $v1
    v0 = g_0021fcc0;  // Global at 0x0021fcc0                   // 0x001dc0dc: lw $v0, 0($v0)
    /* call function at address in v0 */                        // 0x001dc0e0: jalr $v0
    a0 = gp + -0x6224;                                          // 0x001dc0e4: addiu $a0, $gp, -0x6224
    goto label_0x1dc1ac;                                        // 0x001dc0e8: b 0x1dc1ac
label_0x1dc0f0:
    func_001dc230();  // 0x1dc1c0                                // 0x001dc0f0: jal 0x1dc1c0
    /* nop */                                                   // 0x001dc0f4: nop 
    v1 = -1;                                                    // 0x001dc0f8: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x1dc10c;                          // 0x001dc0fc: bne $v0, $v1, 0x1dc10c
    a1 = 0x33 << 16;                                            // 0x001dc100: lui $a1, 0x33
    goto label_0x1dc1ac;                                        // 0x001dc104: b 0x1dc1ac
label_0x1dc10c:
    func_001dc678();  // 0x1dc598                                // 0x001dc110: jal 0x1dc598
    a1 = a1 + -0x320;                                           // 0x001dc114: addiu $a1, $a1, -0x320
    a0 = 0x33 << 16;                                            // 0x001dc118: lui $a0, 0x33
    a1 = 0x33 << 16;                                            // 0x001dc11c: lui $a1, 0x33
    a0 = a0 + -0x200;                                           // 0x001dc120: addiu $a0, $a0, -0x200
    a1 = a1 + -0x320;                                           // 0x001dc124: addiu $a1, $a1, -0x320
    func_00107b68();  // 0x107ab8                                // 0x001dc128: jal 0x107ab8
    a2 = 0x88;                                                  // 0x001dc12c: addiu $a2, $zero, 0x88
    func_001dcac8();  // 0x1dca18                                // 0x001dc134: jal 0x1dca18
    a1 = sp + 0x1c;                                             // 0x001dc138: addiu $a1, $sp, 0x1c
    at = 0x33 << 16;                                            // 0x001dc13c: lui $at, 0x33
    v0 = g_0032fce8;  // Global at 0x0032fce8                   // 0x001dc140: lw $v0, -0x318($at)
    if (v0 != 0) goto label_0x1dc154;                           // 0x001dc144: bnez $v0, 0x1dc154
    at = 0x33 << 16;                                            // 0x001dc148: lui $at, 0x33
    goto label_0x1dc1ac;                                        // 0x001dc14c: b 0x1dc1ac
label_0x1dc154:
    v0 = gp + -0x6218;                                          // 0x001dc154: addiu $v0, $gp, -0x6218
    v1 = g_0032fce4;  // Global at 0x0032fce4                   // 0x001dc158: lw $v1, -0x31c($at)
    a2 = 6;                                                     // 0x001dc15c: addiu $a2, $zero, 6
    at = 0x33 << 16;                                            // 0x001dc160: lui $at, 0x33
    g_0032fcd8 = v0;  // Global at 0x0032fcd8                   // 0x001dc164: sw $v0, -0x328($at)
    at = 0x33 << 16;                                            // 0x001dc168: lui $at, 0x33
    v0 = g_0032fce0;  // Global at 0x0032fce0                   // 0x001dc16c: lw $v0, -0x320($at)
    at = 0x33 << 16;                                            // 0x001dc170: lui $at, 0x33
    g_0032fcd0 = v1;  // Global at 0x0032fcd0                   // 0x001dc174: sb $v1, -0x330($at)
    at = 0x33 << 16;                                            // 0x001dc178: lui $at, 0x33
    g_0032fcd1 = v0;  // Global at 0x0032fcd1                   // 0x001dc17c: sb $v0, -0x32f($at)
    a1 = 0x33 << 16;                                            // 0x001dc180: lui $a1, 0x33
    v0 = 0x33 << 16;                                            // 0x001dc184: lui $v0, 0x33
    a1 = a1 + -0x320;                                           // 0x001dc188: addiu $a1, $a1, -0x320
    v0 = v0 + -0x330;                                           // 0x001dc18c: addiu $v0, $v0, -0x330
label_0x1dc190:
    a0 = a2 << 1;                                               // 0x001dc190: sll $a0, $a2, 1
    v1 = v0 + a2;                                               // 0x001dc194: addu $v1, $v0, $a2
    a0 = a1 + a0;                                               // 0x001dc198: addu $a0, $a1, $a0
    a2 = a2 + -1;                                               // 0x001dc19c: addiu $a2, $a2, -1
    a0 = g_0032fe0c;  // Global at 0x0032fe0c                   // 0x001dc1a0: lhu $a0, 0xc($a0)
    if (a2 >= 0) goto label_0x1dc190;                           // 0x001dc1a4: bgez $a2, 0x1dc190
    *(uint8_t*)((v1) + 2) = a0;                                 // 0x001dc1a8: sb $a0, 2($v1)
label_0x1dc1ac:
    return;                                                     // 0x001dc1b0: jr $ra
    sp = sp + 0x20;                                             // 0x001dc1b4: addiu $sp, $sp, 0x20
}