void func_001679a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x001679a0: sll $v0, $a1, 3
    v0 = v0 - a1;                                               // 0x001679a4: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001679a8: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x001679ac: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001679b0: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x001679b4: addu $a0, $a0, $v0
    return;                                                     // 0x001679b8: jr $ra
    *(uint32_t*)((a0) + 0x114c) = a2;                           // 0x001679bc: sw $a2, 0x114c($a0)
}