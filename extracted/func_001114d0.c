void func_001114d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = g_007f0000;  // Global at 0x007f0000                   // 0x001114d0: lw $v1, 0($a0)
    a0 = 0x7f << 16;                                            // 0x001114d4: lui $a0, 0x7f
    a0 = a0 | 0xffff;                                           // 0x001114d8: ori $a0, $a0, 0xffff
    v0 = (unsigned)v1 >> 0x17;                                  // 0x001114e0: srl $v0, $v1, 0x17
    a1 = (unsigned)v1 >> 0x1f;                                  // 0x001114e4: srl $a1, $v1, 0x1f
    v0 = v0 & 0xff;                                             // 0x001114e8: andi $v0, $v0, 0xff
    v1 = v1 & a0;                                               // 0x001114ec: and $v1, $v1, $a0
    *(uint32_t*)((a2) + 4) = a1;                                // 0x001114f0: sw $a1, 4($a2)
    a1 = v0 + -0x7f;                                            // 0x001114f4: addiu $a1, $v0, -0x7f
    if (v0 != 0) return;  // Branch to 0x111510                 // 0x001114f8: bnez $v0, 0x111510
    a0 = v1 << 7;                                               // 0x001114fc: sll $a0, $v1, 7
    v0 = 2;                                                     // 0x00111500: addiu $v0, $zero, 2
    return;                                                     // 0x00111504: jr $ra
    *(uint32_t*)(a2) = v0;                                      // 0x00111508: sw $v0, 0($a2)
}