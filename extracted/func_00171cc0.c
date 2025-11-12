void func_00171cc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x1b30);                            // 0x00171cc0: lw $v1, 0x1b30($a0)
    v1 = v1 + 0x9d8;                                            // 0x00171cc4: addiu $v1, $v1, 0x9d8
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x00171cc8: lw $v0, 0xc($v1)
    v0 = v0 + -1;                                               // 0x00171ccc: addiu $v0, $v0, -1
    return;                                                     // 0x00171cd0: jr $ra
    *(uint32_t*)((v1) + 0xc) = v0;                              // 0x00171cd4: sw $v0, 0xc($v1)
}