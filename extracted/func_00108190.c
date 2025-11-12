void func_00108190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)(a0);                                       // 0x00108190: lw $a1, 0($a0)
    v0 = a1 & 7;                                                // 0x00108194: andi $v0, $a1, 7
    if (v0 == 0) return;  // Branch to 0x1081d0                 // 0x00108198: beqz $v0, 0x1081d0
    v1 = a1 & 1;                                                // 0x0010819c: andi $v1, $a1, 1
    if (v1 != 0) return;  // Branch to 0x108244                 // 0x001081a0: bnez $v1, 0x108244
    v0 = a1 & 2;                                                // 0x001081a8: andi $v0, $a1, 2
    if (v0 == 0) return;  // Branch to 0x1081c0                 // 0x001081ac: beqz $v0, 0x1081c0
    v1 = (unsigned)a1 >> 1;                                     // 0x001081b0: srl $v1, $a1, 1
    v0 = 1;                                                     // 0x001081b4: addiu $v0, $zero, 1
    return;                                                     // 0x001081b8: jr $ra
    *(uint32_t*)(a0) = v1;                                      // 0x001081bc: sw $v1, 0($a0)
}