void func_001a1740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 == 0) goto label_0x1a17cc;                           // 0x001a1740: beqz $a0, 0x1a17cc
    a2 = 1;                                                     // 0x001a1744: addiu $a2, $zero, 1
    if (v0 >= 0) goto label_0x1a1768;                           // 0x001a1750: bgez $v0, 0x1a1768
    v0 = -v0;                                                   // 0x001a1758: negu $v0, $v0
    a2 = -1;                                                    // 0x001a175c: addiu $a2, $zero, -1
label_0x1a1768:
    at = (v0 < v1) ? 1 : 0;                                     // 0x001a1774: slt $at, $v0, $v1
    if (at == 0) goto label_0x1a1784;                           // 0x001a1778: beqz $at, 0x1a1784
    /* nop */                                                   // 0x001a177c: nop 
label_0x1a1784:
    if (a0 == 0) goto label_0x1a17c4;                           // 0x001a1784: beqz $a0, 0x1a17c4
    /* multiply: a0 * a2 -> hi:lo */                            // 0x001a1788: mult $ac2, $a0, $a2
    v0 = v1 + -1;                                               // 0x001a178c: addiu $v0, $v1, -1
    v0 = v1 - v0;                                               // 0x001a1798: subu $v0, $v1, $v0
    /* move to FPU: $v0, $f0 */                                 // 0x001a179c: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a17a0: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a17a4: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f12, $f0 */                             // 0x001a17a8: mul.s $f0, $f12, $f0
    /* FPU: cvt.w.s $f0, $f0 */                                 // 0x001a17ac: cvt.w.s $f0, $f0
    /* move from FPU: $v0, $f0 */                               // 0x001a17b0: mfc1 $v0, $f0
    /* nop */                                                   // 0x001a17b4: nop 
    /* multiply: a0 * a2 -> hi:lo */                            // 0x001a17c0: mult $ac2, $a0, $a2
label_0x1a17c4:
label_0x1a17cc:
    return;                                                     // 0x001a17cc: jr $ra
}