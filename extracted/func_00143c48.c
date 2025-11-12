void func_00143c48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 0x1000 << 16;                                          // 0x00143c48: lui $a1, 0x1000
    v1 = 0xff7f << 16;                                          // 0x00143c4c: lui $v1, 0xff7f
    a1 = a1 | 0x2010;                                           // 0x00143c50: ori $a1, $a1, 0x2010
    v1 = v1 | 0xffff;                                           // 0x00143c54: ori $v1, $v1, 0xffff
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00143c58: lw $v0, 0($a1)
    a0 = a0 << 0x17;                                            // 0x00143c5c: sll $a0, $a0, 0x17
    v0 = v0 & v1;                                               // 0x00143c60: and $v0, $v0, $v1
    v0 = v0 | a0;                                               // 0x00143c64: or $v0, $v0, $a0
    return;                                                     // 0x00143c68: jr $ra
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00143c6c: sw $v0, 0($a1)
}