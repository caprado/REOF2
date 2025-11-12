void func_00167960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x00167960: sll $v0, $a1, 3
    v0 = v0 - a1;                                               // 0x00167964: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167968: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x0016796c: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167970: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x00167974: addu $a0, $a0, $v0
    return;                                                     // 0x00167978: jr $ra
    *(uint32_t*)((a0) + 0x1148) = a2;                           // 0x0016797c: sw $a2, 0x1148($a0)
}