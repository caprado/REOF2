void func_00147c28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00147c28: addiu $sp, $sp, -0x20
    if (a0 == 0) goto label_0x147c88;                           // 0x00147c34: beqz $a0, 0x147c88
    a2 = *(int32_t*)((a0) + 0x40);                              // 0x00147c3c: lw $a2, 0x40($a0)
    if (a2 == 0) goto label_0x147c88;                           // 0x00147c40: beqz $a2, 0x147c88
    t0 = 0xc;                                                   // 0x00147c44: addiu $t0, $zero, 0xc
    v1 = *(int32_t*)(a1);                                       // 0x00147c48: lw $v1, 0($a1)
    /* multiply: v1 * t0 -> hi:lo */                            // 0x00147c4c: mult $ac3, $v1, $t0
    v0 = a2 + v1;                                               // 0x00147c50: addu $v0, $a2, $v1
    a3 = *(int32_t*)((v0) + 0xc);                               // 0x00147c54: lw $a3, 0xc($v0)
    if (a3 == 0) goto label_0x147c8c;                           // 0x00147c58: beqz $a3, 0x147c8c
    v1 = *(int32_t*)((v0) + 0x14);                              // 0x00147c60: lw $v1, 0x14($v0)
    v0 = *(int32_t*)(a1);                                       // 0x00147c6c: lw $v0, 0($a1)
    /* multiply: v0 * t0 -> hi:lo */                            // 0x00147c70: mult $ac3, $v0, $t0
    v0 = v1 + a2;                                               // 0x00147c74: addu $v0, $v1, $a2
    /* call function at address in a3 */                        // 0x00147c78: jalr $a3
    a2 = *(int32_t*)((v0) + 0x10);                              // 0x00147c7c: lw $a2, 0x10($v0)
label_0x147c88:
label_0x147c8c:
    return;                                                     // 0x00147c94: jr $ra
    sp = sp + 0x20;                                             // 0x00147c98: addiu $sp, $sp, 0x20
}