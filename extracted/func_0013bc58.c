void func_0013bc58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 << 0x18;                                            // 0x0013bc58: sll $a0, $a0, 0x18
    v0 = 0x2f;                                                  // 0x0013bc5c: addiu $v0, $zero, 0x2f
    a0 = a0 >> 0x18;                                            // 0x0013bc60: sra $a0, $a0, 0x18
    v1 = a0 ^ 0x5c;                                             // 0x0013bc64: xori $v1, $a0, 0x5c
    return;                                                     // 0x0013bc68: jr $ra
    if (v1 != 0) v0 = a0;                                       // 0x0013bc6c: movn $v0, $a0, $v1
}