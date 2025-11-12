void func_0010a1d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x7fff << 16;                                          // 0x0010a1e4: lui $v0, 0x7fff
    a2 = 0x7ff0 << 16;                                          // 0x0010a1e8: lui $a2, 0x7ff0
    a1 = -v1;                                                   // 0x0010a1ec: negu $a1, $v1
    v0 = v0 | 0xffff;                                           // 0x0010a1f0: ori $v0, $v0, 0xffff
    v1 = v1 | a1;                                               // 0x0010a1f4: or $v1, $v1, $a1
    a0 = a0 & v0;                                               // 0x0010a1f8: and $a0, $a0, $v0
    v1 = (unsigned)v1 >> 0x1f;                                  // 0x0010a1fc: srl $v1, $v1, 0x1f
    v0 = 1;                                                     // 0x0010a200: addiu $v0, $zero, 1
    a0 = a0 | v1;                                               // 0x0010a204: or $a0, $a0, $v1
    a0 = a2 - a0;                                               // 0x0010a208: subu $a0, $a2, $a0
    v1 = -a0;                                                   // 0x0010a20c: negu $v1, $a0
    a0 = a0 | v1;                                               // 0x0010a210: or $a0, $a0, $v1
    a0 = (unsigned)a0 >> 0x1f;                                  // 0x0010a214: srl $a0, $a0, 0x1f
    return;                                                     // 0x0010a218: jr $ra
    v0 = v0 - a0;                                               // 0x0010a21c: subu $v0, $v0, $a0
}