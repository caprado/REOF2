void func_0012e210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a1 << 1;                                               // 0x0012e210: sll $a1, $a1, 1
    if (a0 == 0) goto label_0x12e224;                           // 0x0012e218: beqz $a0, 0x12e224
    a1 = a1 + a0;                                               // 0x0012e21c: addu $a1, $a1, $a0
    v0 = *(int16_t*)((a1) + 0x18);                              // 0x0012e220: lh $v0, 0x18($a1)
label_0x12e224:
    return;                                                     // 0x0012e224: jr $ra
    /* nop */                                                   // 0x0012e228: nop 
}