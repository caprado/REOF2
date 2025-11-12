void func_001777d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x001777d0: sll $v0, $a1, 3
    v1 = a2 << 4;                                               // 0x001777d4: sll $v1, $a2, 4
    v0 = v0 - a1;                                               // 0x001777d8: subu $v0, $v0, $a1
    v1 = v1 + a2;                                               // 0x001777dc: addu $v1, $v1, $a2
    v0 = v0 << 2;                                               // 0x001777e0: sll $v0, $v0, 2
    v1 = v1 << 2;                                               // 0x001777e4: sll $v1, $v1, 2
    v0 = v0 + a1;                                               // 0x001777e8: addu $v0, $v0, $a1
    v1 = a0 + v1;                                               // 0x001777ec: addu $v1, $a0, $v1
    v0 = v0 << 2;                                               // 0x001777f0: sll $v0, $v0, 2
    *(uint32_t*)((v1) + 0x1ab0) = a1;                           // 0x001777f4: sw $a1, 0x1ab0($v1)
    a0 = a0 + v0;                                               // 0x001777f8: addu $a0, $a0, $v0
    return;                                                     // 0x001777fc: jr $ra
    *(uint32_t*)((a0) + 0x1190) = a2;                           // 0x00177800: sw $a2, 0x1190($a0)
}