void func_00103188() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1000 << 16;                                          // 0x00103188: lui $v0, 0x1000
    v1 = 0x1000 << 16;                                          // 0x0010318c: lui $v1, 0x1000
    v0 = v0 | 0xe000;                                           // 0x00103190: ori $v0, $v0, 0xe000
    v1 = v1 | 0xe020;                                           // 0x00103194: ori $v1, $v1, 0xe020
    t2 = g_10000000;  // Global at 0x10000000                   // 0x00103198: lw $t2, 0($v0)
    a1 = 0x1000 << 16;                                          // 0x0010319c: lui $a1, 0x1000
    a2 = g_10000000;  // Global at 0x10000000                   // 0x001031a0: lw $a2, 0($v1)
    a1 = a1 | 0xe030;                                           // 0x001031a8: ori $a1, $a1, 0xe030
    v1 = 0x1000 << 16;                                          // 0x001031ac: lui $v1, 0x1000
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001031b0: lw $a1, 0($a1)
    v1 = v1 | 0xe050;                                           // 0x001031b4: ori $v1, $v1, 0xe050
    v0 = 0x1000 << 16;                                          // 0x001031b8: lui $v0, 0x1000
    a0 = *(uint8_t*)(t1);                                       // 0x001031bc: lbu $a0, 0($t1)
    a2 = g_10000000;  // Global at 0x10000000                   // 0x001031c0: lw $a2, 0($v1)
    v0 = v0 | 0xe040;                                           // 0x001031c4: ori $v0, $v0, 0xe040
    t0 = g_10000000;  // Global at 0x10000000                   // 0x001031c8: lw $t0, 0($v0)
    a0 = ((unsigned)a0 < (unsigned)0xa) ? 1 : 0;                // 0x001031cc: sltiu $a0, $a0, 0xa
    /* bnezl $a0, 0x1031e0 */                                   // 0x001031d0: bnezl $a0, 0x1031e0
    v0 = *(uint8_t*)((t1) + 1);                                 // 0x001031d4: lbu $v0, 1($t1)
    return;                                                     // 0x001031d8: jr $ra
    v0 = -1;                                                    // 0x001031dc: addiu $v0, $zero, -1
}