void func_0015bad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x4000;                                                // 0x0015bad0: addiu $v0, $zero, 0x4000
    *(uint32_t*)(a1) = v0;                                      // 0x0015bad4: sw $v0, 0($a1)
    v1 = 0x700;                                                 // 0x0015bad8: addiu $v1, $zero, 0x700
    *(uint32_t*)(a2) = v1;                                      // 0x0015badc: sw $v1, 0($a2)
    v0 = *(int32_t*)(a1);                                       // 0x0015bae0: lw $v0, 0($a1)
    return;                                                     // 0x0015bae4: jr $ra
    v0 = v0 + v1;                                               // 0x0015bae8: addu $v0, $v0, $v1
}