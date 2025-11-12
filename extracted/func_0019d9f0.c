void func_0019d9f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int16_t*)((a0) + 0x1c);                              // 0x0019d9f0: lh $v1, 0x1c($a0)
    a1 = 1;                                                     // 0x0019d9f4: addiu $a1, $zero, 1
    if (v1 != a1) goto label_0x19da08;                          // 0x0019d9f8: bne $v1, $a1, 0x19da08
    /* nop */                                                   // 0x0019d9fc: nop 
    goto label_0x19da3c;                                        // 0x0019da00: b 0x19da3c
    v0 = 2;                                                     // 0x0019da04: addiu $v0, $zero, 2
label_0x19da08:
    a0 = *(int32_t*)((a0) + 0x20);                              // 0x0019da08: lw $a0, 0x20($a0)
    v1 = 2;                                                     // 0x0019da0c: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x19da38;                          // 0x0019da10: beq $a0, $v1, 0x19da38
    /* nop */                                                   // 0x0019da14: nop 
    if (a0 == a1) goto label_0x19da30;                          // 0x0019da18: beq $a0, $a1, 0x19da30
    /* nop */                                                   // 0x0019da1c: nop 
    if (a0 == 0) goto label_0x19da30;                           // 0x0019da20: beqz $a0, 0x19da30
    /* nop */                                                   // 0x0019da24: nop 
    goto label_0x19da3c;                                        // 0x0019da28: b 0x19da3c
    /* nop */                                                   // 0x0019da2c: nop 
label_0x19da30:
    goto label_0x19da3c;                                        // 0x0019da30: b 0x19da3c
    v0 = 4;                                                     // 0x0019da34: addiu $v0, $zero, 4
label_0x19da38:
    v0 = 4;                                                     // 0x0019da38: addiu $v0, $zero, 4
label_0x19da3c:
    return;                                                     // 0x0019da3c: jr $ra
    /* nop */                                                   // 0x0019da40: nop 
}