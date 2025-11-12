void func_00134c60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x00134c60: lw $v0, 0xc($a0)
    if (v0 != 0) return;  // Branch to 0x134c88                 // 0x00134c64: bnez $v0, 0x134c88
    v1 = 1;                                                     // 0x00134c68: addiu $v1, $zero, 1
    *(uint32_t*)((a0) + 0x18) = a1;                             // 0x00134c6c: sw $a1, 0x18($a0)
    *(uint32_t*)((a0) + 0x1c) = a2;                             // 0x00134c70: sw $a2, 0x1c($a0)
    v0 = 1;                                                     // 0x00134c74: addiu $v0, $zero, 1
    *(uint32_t*)((a0) + 0x20) = a3;                             // 0x00134c78: sw $a3, 0x20($a0)
    *(uint32_t*)((a0) + 0x14) = v1;                             // 0x00134c7c: sw $v1, 0x14($a0)
    return;                                                     // 0x00134c80: jr $ra
    *(uint32_t*)((a0) + 0x24) = 0;                              // 0x00134c84: sw $zero, 0x24($a0)
}