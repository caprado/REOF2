void func_00121bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x7fff << 16;                                          // 0x00121bb8: lui $v1, 0x7fff
    a1 = 0xffff << 16;                                          // 0x00121bbc: lui $a1, 0xffff
    v1 = v1 | 0xffff;                                           // 0x00121bc4: ori $v1, $v1, 0xffff
    a0 = a0 & a1;                                               // 0x00121bc8: and $a0, $a0, $a1
    v0 = v0 & v1;                                               // 0x00121bcc: and $v0, $v0, $v1
    a0 = a0 | v0;                                               // 0x00121bd4: or $a0, $a0, $v0
    return;                                                     // 0x00121bdc: jr $ra
    /* nop */                                                   // 0x00121be0: nop 
}