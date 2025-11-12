void func_00191e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move to FPU: $zero, $f0 */                               // 0x00191e50: mtc1 $zero, $f0
    /* nop */                                                   // 0x00191e54: nop 
    /* FPU: c.olt.s $f12, $f0 */                                // 0x00191e58: c.olt.s $f12, $f0
    /* bc1f 0x191e6c */                                         // 0x00191e5c: bc1f 0x191e6c
    /* FPU: mov.s $f0, $f12 */                                  // 0x00191e60: mov.s $f0, $f12
    /* FPU: neg.s $f12, $f12 */                                 // 0x00191e64: neg.s $f12, $f12
    /* FPU: mov.s $f0, $f12 */                                  // 0x00191e68: mov.s $f0, $f12
    return;                                                     // 0x00191e6c: jr $ra
    /* nop */                                                   // 0x00191e70: nop 
}