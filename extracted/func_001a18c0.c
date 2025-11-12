void func_001a18c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001a18c0: lw $v1, 8($a0)
    *(uint32_t*)((a0) + 0xc) = v1;                              // 0x001a18c4: sw $v1, 0xc($a0)
    *(uint32_t*)((a0) + 8) = a1;                                // 0x001a18c8: sw $a1, 8($a0)
    a1 = *(int32_t*)((a0) + 8);                                 // 0x001a18cc: lw $a1, 8($a0)
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x001a18d0: lw $v1, 0xc($a0)
    v1 = v1 ^ a1;                                               // 0x001a18d4: xor $v1, $v1, $a1
    v1 = a1 & v1;                                               // 0x001a18d8: and $v1, $a1, $v1
    *(uint32_t*)((a0) + 0x10) = v1;                             // 0x001a18dc: sw $v1, 0x10($a0)
    a1 = *(int32_t*)((a0) + 0xc);                               // 0x001a18e0: lw $a1, 0xc($a0)
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001a18e4: lw $v1, 8($a0)
    v1 = a1 ^ v1;                                               // 0x001a18e8: xor $v1, $a1, $v1
    v1 = a1 & v1;                                               // 0x001a18ec: and $v1, $a1, $v1
    *(uint32_t*)((a0) + 0x14) = v1;                             // 0x001a18f0: sw $v1, 0x14($a0)
    a1 = *(int32_t*)((a0) + 0x10);                              // 0x001a18f4: lw $a1, 0x10($a0)
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x001a18f8: lw $v1, 0x14($a0)
    v1 = a1 | v1;                                               // 0x001a18fc: or $v1, $a1, $v1
    return;                                                     // 0x001a1900: jr $ra
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x001a1904: sw $v1, 0x18($a0)
}