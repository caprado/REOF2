void func_0017f0e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = 0x21 << 16;                                            // 0x0017f0e8: lui $t0, 0x21
    t0 = t0 + 0x5fa0;                                           // 0x0017f0ec: addiu $t0, $t0, 0x5fa0
    VPU_VF5 = *(vec128_t*)((t0) + 0);  // Load 128-bit vector   // 0x0017f0f0: ldc2 $5, 0($t0)
    if (a3 != 0) goto label_0x17f150;                           // 0x0017f140: bnez $a3, 0x17f150
    goto label_0x17f154;                                        // 0x0017f148: b 0x17f154
label_0x17f150:
label_0x17f154:
    return;                                                     // 0x0017f154: jr $ra
    /* nop */                                                   // 0x0017f158: nop 
}