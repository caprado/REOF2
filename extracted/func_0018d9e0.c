void func_0018d9e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x18d9f4;                                        // 0x0018d9e0: b 0x18d9f4
label_0x18d9e8:
    *(uint8_t*)(a0) = a1;                                       // 0x0018d9e8: sb $a1, 0($a0)
    a3 = a3 + 1;                                                // 0x0018d9ec: addiu $a3, $a3, 1
    a0 = a0 + 1;                                                // 0x0018d9f0: addiu $a0, $a0, 1
label_0x18d9f4:
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x0018d9f4: slt $v1, $a3, $a2
    /* nop */                                                   // 0x0018d9f8: nop 
    if (v1 != 0) goto label_0x18d9e8;                           // 0x0018d9fc: bnez $v1, 0x18d9e8
    /* nop */                                                   // 0x0018da00: nop 
    return;                                                     // 0x0018da04: jr $ra
    /* nop */                                                   // 0x0018da08: nop 
}