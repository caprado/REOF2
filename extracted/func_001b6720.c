void func_001b6720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 + -1;                                               // 0x001b6720: addiu $v0, $a1, -1
    v0 = 0x1000 << 16;                                          // 0x001b6728: lui $v0, 0x1000
    a1 = v0 | 3;                                                // 0x001b6730: ori $a1, $v0, 3
    *(uint32_t*)(a0) = a1;                                      // 0x001b6738: sw $a1, 0($a0)
    v0 = 0x5100 << 16;                                          // 0x001b673c: lui $v0, 0x5100
    a1 = v0 | 3;                                                // 0x001b6740: ori $a1, $v0, 3
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001b6744: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x001b6748: sw $zero, 8($a0)
    v0 = 2;                                                     // 0x001b674c: addiu $v0, $zero, 2
    v0 = v0 | v1;                                               // 0x001b6750: or $v0, $v0, $v1
    *(uint32_t*)((a0) + 0xc) = a1;                              // 0x001b6754: sw $a1, 0xc($a0)
    v0 = 0xe;                                                   // 0x001b675c: addiu $v0, $zero, 0xe
    v0 = 0x44;                                                  // 0x001b6764: addiu $v0, $zero, 0x44
    v0 = 0x42;                                                  // 0x001b676c: addiu $v0, $zero, 0x42
    v1 = v0 | 0xa;                                              // 0x001b6778: ori $v1, $v0, 0xa
    v0 = v1 | v0;                                               // 0x001b6780: or $v0, $v1, $v0
    v1 = 8;                                                     // 0x001b6788: addiu $v1, $zero, 8
    v0 = a0 + 0x40;                                             // 0x001b678c: addiu $v0, $a0, 0x40
    return;                                                     // 0x001b6790: jr $ra
}