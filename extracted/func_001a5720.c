void func_001a5720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x1a5734;                                        // 0x001a5720: b 0x1a5734
label_0x1a5728:
    *(uint8_t*)(a0) = a1;                                       // 0x001a5728: sb $a1, 0($a0)
    a3 = a3 + 1;                                                // 0x001a572c: addiu $a3, $a3, 1
    a0 = a0 + 1;                                                // 0x001a5730: addiu $a0, $a0, 1
label_0x1a5734:
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x001a5734: slt $v1, $a3, $a2
    /* nop */                                                   // 0x001a5738: nop 
    if (v1 != 0) goto label_0x1a5728;                           // 0x001a573c: bnez $v1, 0x1a5728
    /* nop */                                                   // 0x001a5740: nop 
    return;                                                     // 0x001a5744: jr $ra
    /* nop */                                                   // 0x001a5748: nop 
}