void func_001404a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a2) + 4);                                 // 0x001404b0: lw $v0, 4($a2)
    *(uint32_t*)((a3) + 4) = v0;                                // 0x001404b4: sw $v0, 4($a3)
    v1 = *(int32_t*)((a2) + 4);                                 // 0x001404b8: lw $v1, 4($a2)
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x001404bc: slt $v0, $a1, $v1
    /* beqzl $v0, 0x1404d4 */                                   // 0x001404c0: beqzl $v0, 0x1404d4
    v0 = *(int32_t*)((a3) + 4);                                 // 0x001404c4: lw $v0, 4($a3)
    *(uint32_t*)((a2) + 4) = a1;                                // 0x001404c8: sw $a1, 4($a2)
    v0 = *(int32_t*)((a3) + 4);                                 // 0x001404d0: lw $v0, 4($a3)
    v0 = v0 - v1;                                               // 0x001404d4: subu $v0, $v0, $v1
    if (v0 != 0) return;  // Branch to 0x1404e8                 // 0x001404d8: bnez $v0, 0x1404e8
    *(uint32_t*)((a3) + 4) = v0;                                // 0x001404dc: sw $v0, 4($a3)
    return;                                                     // 0x001404e0: jr $ra
    *(uint32_t*)(a3) = 0;                                       // 0x001404e4: sw $zero, 0($a3)
}