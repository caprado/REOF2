void func_00113940() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00113940: addiu $sp, $sp, -0x20
    func_00113940();  // 0x1138c8                                // 0x00113950: jal 0x1138c8
    a0 = 1;                                                     // 0x00113954: addiu $a0, $zero, 1
    v0 = 0x1000 << 16;                                          // 0x00113958: lui $v0, 0x1000
    a2 = 0x1000 << 16;                                          // 0x0011395c: lui $a2, 0x1000
    v0 = v0 | 0xb410;                                           // 0x00113960: ori $v0, $v0, 0xb410
    a2 = a2 | 0xb430;                                           // 0x00113964: ori $a2, $a2, 0xb430
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113968: lw $v1, 0($v0)
    a0 = 0x1000 << 16;                                          // 0x0011396c: lui $a0, 0x1000
    a0 = a0 | 0xb420;                                           // 0x00113970: ori $a0, $a0, 0xb420
    a1 = 0x1000 << 16;                                          // 0x00113974: lui $a1, 0x1000
    *(uint32_t*)(s0) = v1;                                      // 0x00113978: sw $v1, 0($s0)
    a1 = a1 | 0xb400;                                           // 0x0011397c: ori $a1, $a1, 0xb400
    a3 = 0x1000 << 16;                                          // 0x00113980: lui $a3, 0x1000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113984: lw $v1, 0($a2)
    a3 = a3 | 0x2010;                                           // 0x00113988: ori $a3, $a3, 0x2010
    *(uint32_t*)((s0) + 4) = v1;                                // 0x0011398c: sw $v1, 4($s0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113990: lw $v0, 0($a0)
    *(uint32_t*)((s0) + 8) = v0;                                // 0x00113994: sw $v0, 8($s0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113998: lw $v1, 0($a1)
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x0011399c: sw $v1, 0xc($s0)
label_0x1139a0:
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001139a0: lw $v0, 0($a3)
    v0 = v0 & 0xf0;                                             // 0x001139a4: andi $v0, $v0, 0xf0
    /* nop */                                                   // 0x001139a8: nop 
    /* nop */                                                   // 0x001139ac: nop 
    /* nop */                                                   // 0x001139b0: nop 
    if (v0 != 0) goto label_0x1139a0;                           // 0x001139b4: bnez $v0, 0x1139a0
    /* nop */                                                   // 0x001139b8: nop 
    func_001138c8();  // 0x113850                                // 0x001139bc: jal 0x113850
    v0 = 0x1000 << 16;                                          // 0x001139c4: lui $v0, 0x1000
    a3 = 0x1000 << 16;                                          // 0x001139c8: lui $a3, 0x1000
    v0 = v0 | 0xb010;                                           // 0x001139cc: ori $v0, $v0, 0xb010
    a3 = a3 | 0xb020;                                           // 0x001139d0: ori $a3, $a3, 0xb020
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001139d4: lw $v1, 0($v0)
    a1 = 0x1000 << 16;                                          // 0x001139d8: lui $a1, 0x1000
    a1 = a1 | 0xb000;                                           // 0x001139dc: ori $a1, $a1, 0xb000
    a2 = 0x1000 << 16;                                          // 0x001139e0: lui $a2, 0x1000
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001139e4: sw $v1, 0x10($s0)
    a2 = a2 | 0x2020;                                           // 0x001139e8: ori $a2, $a2, 0x2020
    a0 = 0x1000 << 16;                                          // 0x001139ec: lui $a0, 0x1000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001139f4: lw $v1, 0($a3)
    a0 = a0 | 0x2010;                                           // 0x001139f8: ori $a0, $a0, 0x2010
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x001139fc: sw $v1, 0x14($s0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113a00: lw $v0, 0($a1)
    *(uint32_t*)((s0) + 0x18) = v0;                             // 0x00113a04: sw $v0, 0x18($s0)
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113a08: lw $v1, 0($a2)
    *(uint32_t*)((s0) + 0x1c) = v1;                             // 0x00113a0c: sw $v1, 0x1c($s0)
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113a10: lw $v0, 0($a0)
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x00113a14: sw $v0, 0x20($s0)
    return;                                                     // 0x00113a1c: jr $ra
    sp = sp + 0x20;                                             // 0x00113a20: addiu $sp, $sp, 0x20
}