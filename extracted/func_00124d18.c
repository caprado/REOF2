void func_00124d18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00124d18: addiu $sp, $sp, -0x10
    func_0010af38();  // 0x10ae00                                // 0x00124d24: jal 0x10ae00
    a2 = 0x1f << 16;                                            // 0x00124d34: lui $a2, 0x1f
    a3 = 0x1f << 16;                                            // 0x00124d38: lui $a3, 0x1f
    t0 = 0x1f << 16;                                            // 0x00124d3c: lui $t0, 0x1f
    a2 = a2 + 0x1f4c;                                           // 0x00124d48: addiu $a2, $a2, 0x1f4c
    a3 = a3 + 0x1f4e;                                           // 0x00124d4c: addiu $a3, $a3, 0x1f4e
    t0 = t0 + 0x1f50;                                           // 0x00124d50: addiu $t0, $t0, 0x1f50
    return func_001243d0();  // Tail call                        // 0x00124d54: j 0x124218
    sp = sp + 0x10;                                             // 0x00124d58: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00124d5c: nop 
    a1 = a1 & 0xff;                                             // 0x00124d60: andi $a1, $a1, 0xff
    sp = sp + -0x30;                                            // 0x00124d64: addiu $sp, $sp, -0x30
    a1 = ((unsigned)a1 < (unsigned)4) ? 1 : 0;                  // 0x00124d68: sltiu $a1, $a1, 4
    if (a1 != 0) goto label_0x124e38;                           // 0x00124d8c: bnez $a1, 0x124e38
    a2 = a2 & 0xff;                                             // 0x00124d90: andi $a2, $a2, 0xff
    v0 = ((unsigned)a2 < (unsigned)0x10) ? 1 : 0;               // 0x00124d94: sltiu $v0, $a2, 0x10
    /* bnezl $v0, 0x124dd8 */                                   // 0x00124d98: bnezl $v0, 0x124dd8
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x00124d9c: sltiu $v0, $a2, 8
    a1 = 0x22 << 16;                                            // 0x00124da0: lui $a1, 0x22
    a1 = a1 + 0x2430;                                           // 0x00124da8: addiu $a1, $a1, 0x2430
    func_0010a570();  // 0x10a4d8                                // 0x00124dac: jal 0x10a4d8
    a1 = 8;                                                     // 0x00124db4: addiu $a1, $zero, 8
    func_001243d0();  // 0x124218                                // 0x00124dc4: jal 0x124218
    goto label_0x124e48;                                        // 0x00124dcc: b 0x124e48
    /* nop */                                                   // 0x00124dd4: nop 
    /* bnezl $v0, 0x124e3c */                                   // 0x00124dd8: bnezl $v0, 0x124e3c
    *(uint16_t*)(s0) = 0;                                       // 0x00124ddc: sh $zero, 0($s0)
    v0 = *(int32_t*)((t3) + 0x9c);                              // 0x00124de0: lw $v0, 0x9c($t3)
    /* bnezl $v0, 0x124e20 */                                   // 0x00124de4: bnezl $v0, 0x124e20
    v0 = *(uint16_t*)((t3) + 0x9c);                             // 0x00124de8: lhu $v0, 0x9c($t3)
    v0 = *(int16_t*)((t3) + 0xa0);                              // 0x00124dec: lh $v0, 0xa0($t3)
    /* bnezl $v0, 0x124e20 */                                   // 0x00124df0: bnezl $v0, 0x124e20
    v0 = *(uint16_t*)((t3) + 0x9c);                             // 0x00124df4: lhu $v0, 0x9c($t3)
    v0 = 0x1f << 16;                                            // 0x00124df8: lui $v0, 0x1f
    a0 = 0x1f << 16;                                            // 0x00124dfc: lui $a0, 0x1f
    v1 = g_001f1f4c;  // Global at 0x001f1f4c                   // 0x00124e00: lhu $v1, 0x1f4c($v0)
    a1 = 0x1f << 16;                                            // 0x00124e04: lui $a1, 0x1f
    *(uint16_t*)((t3) + 0x9c) = v1;                             // 0x00124e08: sh $v1, 0x9c($t3)
    v0 = g_001f1f4e;  // Global at 0x001f1f4e                   // 0x00124e0c: lhu $v0, 0x1f4e($a0)
    *(uint16_t*)((t3) + 0x9e) = v0;                             // 0x00124e10: sh $v0, 0x9e($t3)
    v1 = g_001f1f50;  // Global at 0x001f1f50                   // 0x00124e14: lhu $v1, 0x1f50($a1)
    *(uint16_t*)((t3) + 0xa0) = v1;                             // 0x00124e18: sh $v1, 0xa0($t3)
    v0 = *(uint16_t*)((t3) + 0x9c);                             // 0x00124e1c: lhu $v0, 0x9c($t3)
    *(uint16_t*)(s0) = v0;                                      // 0x00124e20: sh $v0, 0($s0)
    v1 = *(uint16_t*)((t3) + 0x9e);                             // 0x00124e24: lhu $v1, 0x9e($t3)
    *(uint16_t*)(s1) = v1;                                      // 0x00124e28: sh $v1, 0($s1)
    v0 = *(uint16_t*)((t3) + 0xa0);                             // 0x00124e2c: lhu $v0, 0xa0($t3)
    goto label_0x124e44;                                        // 0x00124e30: b 0x124e44
    *(uint16_t*)(s2) = v0;                                      // 0x00124e34: sh $v0, 0($s2)
label_0x124e38:
    *(uint16_t*)(s0) = 0;                                       // 0x00124e38: sh $zero, 0($s0)
    *(uint16_t*)(s1) = 0;                                       // 0x00124e3c: sh $zero, 0($s1)
    *(uint16_t*)(s2) = 0;                                       // 0x00124e40: sh $zero, 0($s2)
label_0x124e44:
label_0x124e48:
    return;                                                     // 0x00124e58: jr $ra
    sp = sp + 0x30;                                             // 0x00124e5c: addiu $sp, $sp, 0x30
}