void func_00176aa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0x920);                             // 0x00176aa8: lw $v0, 0x920($a0)
    if (v0 != 0) return;  // Branch to 0x176ac8                 // 0x00176aac: bnez $v0, 0x176ac8
    v1 = v0 << 2;                                               // 0x00176ab0: sll $v1, $v0, 2
    v0 = 0x7512;                                                // 0x00176ab4: addiu $v0, $zero, 0x7512
    *(uint32_t*)(a1) = 0;                                       // 0x00176ab8: sw $zero, 0($a1)
    return;                                                     // 0x00176abc: jr $ra
    *(uint32_t*)(a2) = v0;                                      // 0x00176ac0: sw $v0, 0($a2)
}