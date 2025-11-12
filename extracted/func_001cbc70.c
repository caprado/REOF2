void func_001cbc70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x1ac);                             // 0x001cbc70: lw $v1, 0x1ac($a0)
    if (v1 != 0) goto label_0x1cbc84;                           // 0x001cbc74: bnez $v1, 0x1cbc84
    /* nop */                                                   // 0x001cbc78: nop 
    v1 = *(int32_t*)((a0) + 0x1a8);                             // 0x001cbc7c: lw $v1, 0x1a8($a0)
    *(uint32_t*)((a0) + 0x1ac) = v1;                            // 0x001cbc80: sw $v1, 0x1ac($a0)
label_0x1cbc84:
    v1 = *(int32_t*)((a0) + 0x1b8);                             // 0x001cbc84: lw $v1, 0x1b8($a0)
    return;                                                     // 0x001cbc88: jr $ra
    *(uint32_t*)((a0) + 0x1bc) = v1;                            // 0x001cbc8c: sw $v1, 0x1bc($a0)
}