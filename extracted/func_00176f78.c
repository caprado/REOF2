void func_00176f78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    FPU_F1 = *(float*)((a3) + 0xa58);  // Load float            // 0x00176f7c: lwc1 $f1, 0xa58($a3)
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00176f80: cvt.s.w $f1, $f1
    /* FPU: add.s $f0, $f13, $f1 */                             // 0x00176f84: add.s $f0, $f13, $f1
    /* FPU: c.olt.s $f0, $f12 */                                // 0x00176f88: c.olt.s $f0, $f12
    /* bc1f 0x176fa0 */                                         // 0x00176f8c: bc1f 0x176fa0
    a2 = a3 + 0xcc0;                                            // 0x00176f90: addiu $a2, $a3, 0xcc0
    return;                                                     // 0x00176f94: jr $ra
    *(uint32_t*)(a1) = 0;                                       // 0x00176f98: sw $zero, 0($a1)
}