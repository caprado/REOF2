void func_00120b58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move from FPU: $v1, $f12 */                              // 0x00120b58: mfc1 $v1, $f12
    v0 = 0x7fff << 16;                                          // 0x00120b60: lui $v0, 0x7fff
    v1 = 0x7f << 16;                                            // 0x00120b64: lui $v1, 0x7f
    v0 = v0 | 0xffff;                                           // 0x00120b68: ori $v0, $v0, 0xffff
    v1 = v1 | 0xffff;                                           // 0x00120b6c: ori $v1, $v1, 0xffff
    v0 = a1 & v0;                                               // 0x00120b70: and $v0, $a1, $v0
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x00120b74: sltu $v0, $v1, $v0
    if (v0 == 0) goto label_0x120b98;                           // 0x00120b78: beqz $v0, 0x120b98
    /* FPU: mov.s $f0, $f12 */                                  // 0x00120b7c: mov.s $f0, $f12
    if (a1 >= 0) return;  // Branch to 0x120ba0                 // 0x00120b80: bgez $a1, 0x120ba0
    a3 = a1 >> 0x17;                                            // 0x00120b84: sra $a3, $a1, 0x17
    /* FPU: sub.s $f0, $f12, $f12 */                            // 0x00120b88: sub.s $f0, $f12, $f12
    /* nop */                                                   // 0x00120b8c: nop 
    /* nop */                                                   // 0x00120b90: nop 
    /* FPU: div.s $f0, $f0, $f0 */                              // 0x00120b94: div.s $f0, $f0, $f0
label_0x120b98:
    return;                                                     // 0x00120b98: jr $ra
    /* nop */                                                   // 0x00120b9c: nop 
}