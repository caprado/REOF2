void func_001b6860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    v1 = t0 & 7;                                                // 0x001b6860: andi $v1, $t0, 7
    t4 = 8;                                                     // 0x001b6864: addiu $t4, $zero, 8
    v0 = 1;                                                     // 0x001b6868: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1b6878;                          // 0x001b686c: bne $v1, $v0, 0x1b6878
    v0 = 2;                                                     // 0x001b6870: addiu $v0, $zero, 2
    t4 = 6;                                                     // 0x001b6874: addiu $t4, $zero, 6
label_0x1b6878:
    if (v1 != v0) goto label_0x1b6884;                          // 0x001b6878: bne $v1, $v0, 0x1b6884
    /* nop */                                                   // 0x001b687c: nop 
    t4 = 4;                                                     // 0x001b6880: addiu $t4, $zero, 4
label_0x1b6884:
    v0 = 3;                                                     // 0x001b6884: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x1b6894;                          // 0x001b6888: bne $v1, $v0, 0x1b6894
    v0 = 4;                                                     // 0x001b688c: addiu $v0, $zero, 4
    t4 = 2;                                                     // 0x001b6890: addiu $t4, $zero, 2
label_0x1b6894:
    if (v1 != v0) goto label_0x1b68a0;                          // 0x001b6894: bne $v1, $v0, 0x1b68a0
    /* nop */                                                   // 0x001b6898: nop 
    t4 = 1;                                                     // 0x001b689c: addiu $t4, $zero, 1
label_0x1b68a0:
    v0 = local_0;                                               // 0x001b68a0: lw $v0, 0($sp)
    /* multiply: t3 * v0 -> hi:lo */                            // 0x001b68a4: mult $ac2, $t3, $v0
    /* multiply: t4 * v0 -> hi:lo */                            // 0x001b68a8: mult $ac3, $t4, $v0
    v0 = (unsigned)v1 >> 5;                                     // 0x001b68ac: srl $v0, $v1, 5
    v1 = v1 & 0x1f;                                             // 0x001b68b0: andi $v1, $v1, 0x1f
    if (v1 == 0) goto label_0x1b68c0;                           // 0x001b68b4: beqz $v1, 0x1b68c0
    /* nop */                                                   // 0x001b68b8: nop 
    v0 = v0 + 1;                                                // 0x001b68bc: addiu $v0, $v0, 1
label_0x1b68c0:
    a3 = a2 | v1;                                               // 0x001b68d8: or $a3, $a2, $v1
    t3 = 0x51;                                                  // 0x001b68e4: addiu $t3, $zero, 0x51
    t0 = a2 | a3;                                               // 0x001b68f8: or $t0, $a2, $a3
    t1 = 0x1000 << 16;                                          // 0x001b6900: lui $t1, 0x1000
    t2 = 0xe;                                                   // 0x001b6910: addiu $t2, $zero, 0xe
    a3 = a2 | v1;                                               // 0x001b6918: or $a3, $a2, $v1
    v1 = t1 | 7;                                                // 0x001b691c: ori $v1, $t1, 7
    *(uint32_t*)(a0) = v1;                                      // 0x001b6920: sw $v1, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001b6928: sw $zero, 4($a0)
    v1 = 0x5100 << 16;                                          // 0x001b692c: lui $v1, 0x5100
    a2 = v1 | 7;                                                // 0x001b6930: ori $a2, $v1, 7
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x001b6934: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = a2;                              // 0x001b6938: sw $a2, 0xc($a0)
    v1 = v0 | v1;                                               // 0x001b693c: or $v1, $v0, $v1
    a2 = 5;                                                     // 0x001b6940: addiu $a2, $zero, 5
    a2 = a2 | t1;                                               // 0x001b6944: or $a2, $a2, $t1
    t1 = 0x3f;                                                  // 0x001b694c: addiu $t1, $zero, 0x3f
    a2 = 0x50;                                                  // 0x001b6954: addiu $a2, $zero, 0x50
    t2 = 0x52;                                                  // 0x001b695c: addiu $t2, $zero, 0x52
    t1 = 0x53;                                                  // 0x001b6968: addiu $t1, $zero, 0x53
    a2 = 0x800 << 16;                                           // 0x001b6978: lui $a2, 0x800
    a2 = 0 | 0x8000;                                            // 0x001b6988: ori $a2, $zero, 0x8000
    a2 = a2 | a3;                                               // 0x001b6990: or $a2, $a2, $a3
    a3 = t0 | a2;                                               // 0x001b6994: or $a3, $t0, $a2
    a2 = 0x3000 << 16;                                          // 0x001b6998: lui $a2, 0x3000
    a2 = v0 | a2;                                               // 0x001b699c: or $a2, $v0, $a2
    v0 = a0 + 0x90;                                             // 0x001b69a0: addiu $v0, $a0, 0x90
    t0 = t4 | t0;                                               // 0x001b69a8: or $t0, $t4, $t0
    *(uint32_t*)((a0) + 0x80) = a2;                             // 0x001b69c4: sw $a2, 0x80($a0)
    *(uint32_t*)((a0) + 0x84) = a1;                             // 0x001b69c8: sw $a1, 0x84($a0)
    *(uint32_t*)((a0) + 0x88) = 0;                              // 0x001b69cc: sw $zero, 0x88($a0)
    return;                                                     // 0x001b69d0: jr $ra
    *(uint32_t*)((a0) + 0x8c) = v1;                             // 0x001b69d4: sw $v1, 0x8c($a0)
}