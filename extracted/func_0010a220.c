void func_0010a220() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7fff << 16;                                          // 0x0010a230: lui $v1, 0x7fff
    a2 = 0x7ff0 << 16;                                          // 0x0010a234: lui $a2, 0x7ff0
    a1 = -a0;                                                   // 0x0010a238: negu $a1, $a0
    v1 = v1 | 0xffff;                                           // 0x0010a23c: ori $v1, $v1, 0xffff
    a0 = a0 | a1;                                               // 0x0010a240: or $a0, $a0, $a1
    v0 = v0 & v1;                                               // 0x0010a244: and $v0, $v0, $v1
    a0 = (unsigned)a0 >> 0x1f;                                  // 0x0010a248: srl $a0, $a0, 0x1f
    v0 = v0 | a0;                                               // 0x0010a24c: or $v0, $v0, $a0
    v0 = a2 - v0;                                               // 0x0010a250: subu $v0, $a2, $v0
    return;                                                     // 0x0010a254: jr $ra
    v0 = (unsigned)v0 >> 0x1f;                                  // 0x0010a258: srl $v0, $v0, 0x1f
}