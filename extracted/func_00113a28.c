void func_00113a28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00113a28: addiu $sp, $sp, -0x50
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x00113a44: lw $v0, 0x1c($s0)
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00113a48: lw $a0, 8($s0)
    v1 = (unsigned)v0 >> 8;                                     // 0x00113a4c: srl $v1, $v0, 8
    s3 = v0 & 0x7f;                                             // 0x00113a50: andi $s3, $v0, 0x7f
    v0 = (unsigned)v0 >> 0x10;                                  // 0x00113a54: srl $v0, $v0, 0x10
    v1 = v1 & 0xf;                                              // 0x00113a58: andi $v1, $v1, 0xf
    v0 = v0 & 3;                                                // 0x00113a5c: andi $v0, $v0, 3
    a1 = *(int32_t*)(s0);                                       // 0x00113a60: lw $a1, 0($s0)
    v0 = v0 + v1;                                               // 0x00113a64: addu $v0, $v0, $v1
    a2 = *(int32_t*)((s0) + 0x10);                              // 0x00113a68: lw $a2, 0x10($s0)
    s2 = a0 + v0;                                               // 0x00113a6c: addu $s2, $a0, $v0
    v0 = v0 << 4;                                               // 0x00113a70: sll $v0, $v0, 4
    if (a2 == 0) goto label_0x113aac;                           // 0x00113a74: beqz $a2, 0x113aac
    s1 = a1 - v0;                                               // 0x00113a78: subu $s1, $a1, $v0
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00113a7c: lw $v0, 0x14($s0)
    if (v0 == 0) goto label_0x113aac;                           // 0x00113a80: beqz $v0, 0x113aac
    v0 = 0x1000 << 16;                                          // 0x00113a84: lui $v0, 0x1000
    a0 = 0x1000 << 16;                                          // 0x00113a88: lui $a0, 0x1000
    v0 = v0 | 0xb010;                                           // 0x00113a8c: ori $v0, $v0, 0xb010
    a0 = a0 | 0xb020;                                           // 0x00113a90: ori $a0, $a0, 0xb020
    g_10000000 = a2;  // Global at 0x10000000                   // 0x00113a94: sw $a2, 0($v0)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00113a98: lw $v1, 0x14($s0)
    g_10000000 = v1;  // Global at 0x10000000                   // 0x00113a9c: sw $v1, 0($a0)
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x00113aa0: lw $a0, 0x18($s0)
    func_001138c8();  // 0x113850                                // 0x00113aa4: jal 0x113850
    a0 = a0 | 0x100;                                            // 0x00113aa8: ori $a0, $a0, 0x100
label_0x113aac:
    v1 = 0x1000 << 16;                                          // 0x00113aac: lui $v1, 0x1000
    v1 = v1 | 0x2010;                                           // 0x00113ab0: ori $v1, $v1, 0x2010
    /* nop */                                                   // 0x00113ab4: nop 
label_0x113ab8:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113ab8: lw $v0, 0($v1)
    /* nop */                                                   // 0x00113abc: nop 
    /* nop */                                                   // 0x00113ac0: nop 
    /* nop */                                                   // 0x00113ac4: nop 
    /* nop */                                                   // 0x00113ac8: nop 
    if (v0 < 0) goto label_0x113ab8;                            // 0x00113acc: bltz $v0, 0x113ab8
    /* nop */                                                   // 0x00113ad0: nop 
    v0 = 0x1000 << 16;                                          // 0x00113ad4: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x00113ad8: lui $v1, 0x1000
    v0 = v0 | 0x2000;                                           // 0x00113adc: ori $v0, $v0, 0x2000
    v1 = v1 | 0x2010;                                           // 0x00113ae0: ori $v1, $v1, 0x2010
    g_10000000 = s3;  // Global at 0x10000000                   // 0x00113ae4: sw $s3, 0($v0)
label_0x113ae8:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113ae8: lw $v0, 0($v1)
    /* nop */                                                   // 0x00113aec: nop 
    /* nop */                                                   // 0x00113af0: nop 
    /* nop */                                                   // 0x00113af4: nop 
    /* nop */                                                   // 0x00113af8: nop 
    if (v0 < 0) goto label_0x113ae8;                            // 0x00113afc: bltz $v0, 0x113ae8
    /* nop */                                                   // 0x00113b00: nop 
    if (s1 == 0) goto label_0x113b60;                           // 0x00113b04: beqz $s1, 0x113b60
    if (s2 == 0) goto label_0x113b64;                           // 0x00113b0c: beqz $s2, 0x113b64
    v0 = 0x1000 << 16;                                          // 0x00113b14: lui $v0, 0x1000
    a0 = 0x1000 << 16;                                          // 0x00113b18: lui $a0, 0x1000
    v0 = v0 | 0xb410;                                           // 0x00113b1c: ori $v0, $v0, 0xb410
    a0 = a0 | 0xb430;                                           // 0x00113b20: ori $a0, $a0, 0xb430
    g_10000000 = s1;  // Global at 0x10000000                   // 0x00113b24: sw $s1, 0($v0)
    v1 = 0x1000 << 16;                                          // 0x00113b28: lui $v1, 0x1000
    v1 = v1 | 0xb420;                                           // 0x00113b2c: ori $v1, $v1, 0xb420
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00113b34: lw $v0, 4($s0)
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00113b3c: sw $v0, 0($a0)
    g_10000000 = s2;  // Global at 0x10000000                   // 0x00113b40: sw $s2, 0($v1)
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x00113b48: lw $a0, 0xc($s0)
    a0 = a0 | 0x100;                                            // 0x00113b54: ori $a0, $a0, 0x100
    return func_00113940();  // Tail call                        // 0x00113b58: j 0x1138c8
    sp = sp + 0x50;                                             // 0x00113b5c: addiu $sp, $sp, 0x50
label_0x113b60:
label_0x113b64:
    return;                                                     // 0x00113b70: jr $ra
    sp = sp + 0x50;                                             // 0x00113b74: addiu $sp, $sp, 0x50
}