void func_00177130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t1 = (a1 < a3) ? 1 : 0;                                     // 0x0017713c: slt $t1, $a1, $a3
    v1 = *(int32_t*)((a0) + 0x18);                              // 0x00177140: lw $v1, 0x18($a0)
    v0 = (t0 < a1) ? 1 : 0;                                     // 0x00177144: slt $v0, $t0, $a1
    if (v0 != 0) t0 = a1;                                       // 0x00177148: movn $t0, $a1, $v0
    if (t1 != 0) a3 = a1;                                       // 0x00177150: movn $a3, $a1, $t1
    v1 = v1 + 1;                                                // 0x00177154: addiu $v1, $v1, 1
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x00177158: sw $v1, 0x18($a0)
    return;                                                     // 0x00177164: jr $ra
}