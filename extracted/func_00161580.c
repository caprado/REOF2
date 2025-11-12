void func_00161580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x20);                              // 0x00161580: lw $v1, 0x20($a0)
    if (v1 == 0) goto label_0x16159c;                           // 0x00161584: beqz $v1, 0x16159c
    a0 = 1;                                                     // 0x00161588: addiu $a0, $zero, 1
    v0 = 0x101;                                                 // 0x0016158c: addiu $v0, $zero, 0x101
    if (v1 != v0) goto label_0x16159c;                          // 0x00161590: bne $v1, $v0, 0x16159c
    a0 = 1;                                                     // 0x00161598: addiu $a0, $zero, 1
label_0x16159c:
    return;                                                     // 0x0016159c: jr $ra
}