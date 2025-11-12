void func_0018c6b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 0x10;                                            // 0x0018c6b0: sll $v0, $a1, 0x10
    v1 = a2 | 0x8000;                                           // 0x0018c6b4: ori $v1, $a2, 0x8000
    v1 = v1 | v0;                                               // 0x0018c6b8: or $v1, $v1, $v0
    *(uint32_t*)(a0) = 0;                                       // 0x0018c6bc: sw $zero, 0($a0)
    v0 = 0x6c00 << 16;                                          // 0x0018c6c0: lui $v0, 0x6c00
    a1 = 0x100 << 16;                                           // 0x0018c6c4: lui $a1, 0x100
    v1 = v1 | v0;                                               // 0x0018c6c8: or $v1, $v1, $v0
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x0018c6cc: sw $zero, 4($a0)
    v0 = a1 | 0x404;                                            // 0x0018c6d0: ori $v0, $a1, 0x404
    *(uint32_t*)((a0) + 8) = v0;                                // 0x0018c6d4: sw $v0, 8($a0)
    v0 = a0 + 0x10;                                             // 0x0018c6d8: addiu $v0, $a0, 0x10
    return;                                                     // 0x0018c6dc: jr $ra
    *(uint32_t*)((a0) + 0xc) = v1;                              // 0x0018c6e0: sw $v1, 0xc($a0)
}