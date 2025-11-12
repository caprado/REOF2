void func_001cfd50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)((a0) + 8) = a1;                                // 0x001cfd50: sw $a1, 8($a0)
    goto label_0x1cfd60;                                        // 0x001cfd54: j 0x1cfd60
    *(uint32_t*)((a0) + 0x10) = a2;                             // 0x001cfd58: sw $a2, 0x10($a0)
    /* nop */                                                   // 0x001cfd5c: nop 
label_0x1cfd60:
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x001cfd60: sw $zero, 0xc($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001cfd64: sw $zero, 4($a0)
    return;                                                     // 0x001cfd68: jr $ra
    *(uint8_t*)(a0) = 0;                                        // 0x001cfd6c: sb $zero, 0($a0)
}