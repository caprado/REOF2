void func_0015aea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x25 << 16;                                            // 0x0015aea8: lui $v1, 0x25
    v0 = g_00256434;  // Global at 0x00256434                   // 0x0015aeac: lw $v0, 0x6434($v1)
    if (v0 == 0) goto label_0x15aec0;                           // 0x0015aeb0: beqz $v0, 0x15aec0
    /* nop */                                                   // 0x0015aeb4: nop 
    v0 = 0x200 << 16;                                           // 0x0015aeb8: lui $v0, 0x200
    a0 = a0 | v0;                                               // 0x0015aebc: or $a0, $a0, $v0
label_0x15aec0:
    return;                                                     // 0x0015aec0: jr $ra
}