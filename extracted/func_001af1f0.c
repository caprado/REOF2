/** @category: memory/allocation @status: complete @author: caprado */
void func_001af1f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2b << 16;                                            // 0x001af1f0: lui $at, 0x2b
    a1 = 0x2b << 16;                                            // 0x001af1f4: lui $a1, 0x2b
    v1 = g_002aa8bc;  // Global at 0x002aa8bc                   // 0x001af1f8: lw $v1, -0x5744($at)
    a1 = a1 + -0x5750;                                          // 0x001af1fc: addiu $a1, $a1, -0x5750
    v1 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x001af200: sltu $v1, $v1, $a0
    if (v1 != 0) goto label_0x1af22c;                           // 0x001af204: bnez $v1, 0x1af22c
    v0 = g_002aa8b0;  // Global at 0x002aa8b0                   // 0x001af20c: lw $v0, 0($a1)
    v1 = g_002aa8b8;  // Global at 0x002aa8b8                   // 0x001af210: lw $v1, 8($a1)
    v0 = v0 + v1;                                               // 0x001af214: addu $v0, $v0, $v1
    v1 = v1 + a0;                                               // 0x001af218: addu $v1, $v1, $a0
    g_002aa8b8 = v1;  // Global at 0x002aa8b8                   // 0x001af21c: sw $v1, 8($a1)
    v1 = g_002aa8bc;  // Global at 0x002aa8bc                   // 0x001af220: lw $v1, 0xc($a1)
    v1 = v1 - a0;                                               // 0x001af224: subu $v1, $v1, $a0
    g_002aa8bc = v1;  // Global at 0x002aa8bc                   // 0x001af228: sw $v1, 0xc($a1)
label_0x1af22c:
    return;                                                     // 0x001af22c: jr $ra
    /* nop */                                                   // 0x001af230: nop 
}