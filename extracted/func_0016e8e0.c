void func_0016e8e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a0 + 0xd54;                                            // 0x0016e8e0: addiu $a1, $a0, 0xd54
    v1 = *(int32_t*)((a0) + 0xdc4);                             // 0x0016e8e4: lw $v1, 0xdc4($a0)
    v0 = *(int32_t*)((a1) + 0x20);                              // 0x0016e8e8: lw $v0, 0x20($a1)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0016e8ec: slt $v0, $v0, $v1
    if (v0 == 0) goto label_0x16e948;                           // 0x0016e8f0: beqz $v0, 0x16e948
    a0 = a0 + 0xd7c;                                            // 0x0016e8f4: addiu $a0, $a0, 0xd7c
label_0x16e948:
    return;                                                     // 0x0016e948: jr $ra
    /* nop */                                                   // 0x0016e94c: nop 
}