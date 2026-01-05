void func_0011c798() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x40;                                            // 0x0011c798: addiu $sp, $sp, -0x40
    func_0011f490();  // 11f490                                // 0x0011c7b4: jal 0x11f490
    a0 = 1;                                                     // 0x0011c7bc: addiu $a0, $zero, 1
    func_0011f490();  // 11f490                                // 0x0011c7c0: jal 0x11f490
    GetOsdConfigParam2();  // 0x1145b0                          // 0x0011c7c8: jal 0x1145b0
    /* nop */                                                   // 0x0011c7cc: nop 
    a0 = 0x8000 << 16;                                          // 0x0011c7d0: lui $a0, 0x8000
    Deci2Call();  // 0x1146f0                                   // 0x0011c7d4: jal 0x1146f0
    /* nop */                                                   // 0x0011c7d8: nop 
    t2 = 0x25 << 16;                                            // 0x0011c7dc: lui $t2, 0x25
    v1 = t2 + -0x240;                                           // 0x0011c7e4: addiu $v1, $t2, -0x240
    g_0024fdd4 = s0;  // Global at 0x0024fdd4                   // 0x0011c7e8: sw $s0, 0x14($v1)
    v0 = *(int8_t*)(s1);                                        // 0x0011c7ec: lb $v0, 0($s1)
    if (v0 == 0) goto label_0x11c820;                           // 0x0011c7f0: beqz $v0, 0x11c820
    a0 = *(uint8_t*)(v0);                                       // 0x0011c7fc: lbu $a0, 0($v0)
    v1 = t2 + -0x240;                                           // 0x0011c800: addiu $v1, $t2, -0x240
    v1 = v1 + t1;                                               // 0x0011c804: addu $v1, $v1, $t1
    t1 = t1 + 1;                                                // 0x0011c808: addiu $t1, $t1, 1
    g_0024fdd8 = a0;  // Global at 0x0024fdd8                   // 0x0011c80c: sb $a0, 0x18($v1)
    v0 = s1 + t1;                                               // 0x0011c810: addu $v0, $s1, $t1
    v1 = *(int8_t*)(v0);                                        // 0x0011c814: lb $v1, 0($v0)
    /* bnezl $v1, 0x11c800 */                                   // 0x0011c818: bnezl $v1, 0x11c800
    a0 = *(uint8_t*)(v0);                                       // 0x0011c81c: lbu $a0, 0($v0)
label_0x11c820:
    a2 = t2 + -0x240;                                           // 0x0011c820: addiu $a2, $t2, -0x240
    v1 = 0x8000 << 16;                                          // 0x0011c824: lui $v1, 0x8000
    g_0024fdc4 = 0;  // Global at 0x0024fdc4                    // 0x0011c828: sw $zero, 4($a2)
    a0 = -1;                                                    // 0x0011c82c: addiu $a0, $zero, -1
    a0 = a0 | 0xff;                                             // 0x0011c834: ori $a0, $a0, 0xff
    v1 = v1 | 3;                                                // 0x0011c838: ori $v1, $v1, 3
    a1 = 0x68;                                                  // 0x0011c83c: addiu $a1, $zero, 0x68
    a3 = 0x68;                                                  // 0x0011c844: addiu $a3, $zero, 0x68
    g_0024fdd0 = t1;  // Global at 0x0024fdd0                   // 0x0011c848: sw $t1, 0x10($a2)
    t0 = 0x44;                                                  // 0x0011c84c: addiu $t0, $zero, 0x44
    g_0024fdc8 = v1;  // Global at 0x0024fdc8                   // 0x0011c850: sw $v1, 8($a2)
    v0 = v0 & a0;                                               // 0x0011c854: and $v0, $v0, $a0
    g_0024fdc0 = a1;  // Global at 0x0024fdc0                   // 0x0011c860: sb $a1, -0x240($t2)
    a1 = 0x68;                                                  // 0x0011c864: addiu $a1, $zero, 0x68
    local_4 = t3;                                               // 0x0011c868: sw $t3, 4($sp)
    local_8 = a3;                                               // 0x0011c86c: sw $a3, 8($sp)
    local_c = t0;                                               // 0x0011c870: sw $t0, 0xc($sp)
    func_00116c90();  // 116c90                                // 0x0011c874: jal 0x116c90
    local_0 = a2;                                               // 0x0011c878: sw $a2, 0($sp)
    a0 = 4;                                                     // 0x0011c87c: addiu $a0, $zero, 4
    sceSifGetReg();  // 0x1146e0                                // 0x0011c880: jal 0x1146e0
    a1 = 4 << 16;                                               // 0x0011c884: lui $a1, 4
    isceSifSetDma();  // 0x1146a0                               // 0x0011c88c: jal 0x1146a0
    a1 = 1;                                                     // 0x0011c890: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x11c8d4;                           // 0x0011c894: beqz $v0, 0x11c8d4
    a0 = 4;                                                     // 0x0011c898: addiu $a0, $zero, 4
    sceSifGetReg();  // 0x1146e0                                // 0x0011c89c: jal 0x1146e0
    a1 = 1 << 16;                                               // 0x0011c8a0: lui $a1, 1
    a0 = 4;                                                     // 0x0011c8a4: addiu $a0, $zero, 4
    sceSifGetReg();  // 0x1146e0                                // 0x0011c8a8: jal 0x1146e0
    a1 = 2 << 16;                                               // 0x0011c8ac: lui $a1, 2
    a0 = 0x8000 << 16;                                          // 0x0011c8b0: lui $a0, 0x8000
    sceSifGetReg();  // 0x1146e0                                // 0x0011c8b8: jal 0x1146e0
    a0 = a0 | 2;                                                // 0x0011c8bc: ori $a0, $a0, 2
    a0 = 0x8000 << 16;                                          // 0x0011c8c0: lui $a0, 0x8000
    sceSifGetReg();  // 0x1146e0                                // 0x0011c8c4: jal 0x1146e0
    goto label_0x11c8d8;                                        // 0x0011c8cc: b 0x11c8d8
    v0 = 1;                                                     // 0x0011c8d0: addiu $v0, $zero, 1
label_0x11c8d4:
label_0x11c8d8:
    return;                                                     // 0x0011c8e4: jr $ra
    sp = sp + 0x40;                                             // 0x0011c8e8: addiu $sp, $sp, 0x40
}