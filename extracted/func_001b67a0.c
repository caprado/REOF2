void func_001b67a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x29 << 16;                                            // 0x001b67a0: lui $at, 0x29
    v0 = a1 + -1;                                               // 0x001b67a4: addiu $v0, $a1, -1
    t3 = g_0028ffb0;  // Global at 0x0028ffb0                   // 0x001b67a8: lw $t3, -0x50($at)
    v0 = 0x1000 << 16;                                          // 0x001b67b0: lui $v0, 0x1000
    a2 = 0x5100 << 16;                                          // 0x001b67b4: lui $a2, 0x5100
    t1 = a2 | 4;                                                // 0x001b67b8: ori $t1, $a2, 4
    t2 = v0 | 4;                                                // 0x001b67bc: ori $t2, $v0, 4
    v0 = 3;                                                     // 0x001b67c8: addiu $v0, $zero, 3
    t0 = 0xe;                                                   // 0x001b67cc: addiu $t0, $zero, 0xe
    a1 = v0 | v1;                                               // 0x001b67d0: or $a1, $v0, $v1
    a3 = 0x44;                                                  // 0x001b67d4: addiu $a3, $zero, 0x44
    at = 0x29 << 16;                                            // 0x001b67d8: lui $at, 0x29
    v0 = (unsigned)t3 >> 5;                                     // 0x001b67dc: srl $v0, $t3, 5
    a2 = 0x42;                                                  // 0x001b67ec: addiu $a2, $zero, 0x42
    *(uint32_t*)(a0) = t2;                                      // 0x001b67f0: sw $t2, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001b67f8: sw $zero, 4($a0)
    v1 = v1 | v0;                                               // 0x001b67fc: or $v1, $v1, $v0
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x001b6800: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = t1;                              // 0x001b6808: sw $t1, 0xc($a0)
    a1 = v0 | 0xa;                                              // 0x001b6810: ori $a1, $v0, 0xa
    v0 = a1 | v0;                                               // 0x001b6820: or $v0, $a1, $v0
    a1 = 8;                                                     // 0x001b682c: addiu $a1, $zero, 8
    v0 = 1;                                                     // 0x001b6830: addiu $v0, $zero, 1
    v0 = v1 | v0;                                               // 0x001b683c: or $v0, $v1, $v0
    v1 = 0x4e;                                                  // 0x001b6844: addiu $v1, $zero, 0x4e
    v0 = a0 + 0x50;                                             // 0x001b6848: addiu $v0, $a0, 0x50
    return;                                                     // 0x001b684c: jr $ra
}