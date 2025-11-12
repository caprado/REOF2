void func_0018c710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 7 << 16;                                               // 0x0018c710: lui $v0, 7
    /* divide: a0 / v0 -> hi:lo */                              // 0x0018c714: divu $zero, $a0, $v0
    /* nop */                                                   // 0x0018c718: nop 
    /* nop */                                                   // 0x0018c71c: nop 
    /* mflo $v1 */                                              // 0x0018c720
    /* divide: a0 / v0 -> hi:lo */                              // 0x0018c724: divu $zero, $a0, $v0
    /* nop */                                                   // 0x0018c728: nop 
    /* nop */                                                   // 0x0018c72c: nop 
    /* mfhi $v0 */                                              // 0x0018c730
    if (v0 == 0) goto label_0x18c744;                           // 0x0018c734: beqz $v0, 0x18c744
    v0 = v1 << 7;                                               // 0x0018c738: sll $v0, $v1, 7
    v1 = v1 + 1;                                                // 0x0018c73c: addiu $v1, $v1, 1
    v0 = v1 << 7;                                               // 0x0018c740: sll $v0, $v1, 7
label_0x18c744:
    return;                                                     // 0x0018c744: jr $ra
    /* nop */                                                   // 0x0018c748: nop 
}