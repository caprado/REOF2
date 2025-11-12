void func_00191fd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* move from FPU: $t0, $f12 */                              // 0x00191fd0: mfc1 $t0, $f12
    /* nop */                                                   // 0x00191fd4: nop 
    /* move to FPU: $t0, $f0 */                                 // 0x00191fec: mtc1 $t0, $f0
    return;                                                     // 0x00191ff0: jr $ra
    /* nop */                                                   // 0x00191ff4: nop 
}