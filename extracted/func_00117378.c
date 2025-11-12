void func_00117378() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)((a1) + 0x28);                              // 0x00117378: lw $a1, 0x28($a1)
    if (a1 == 0) return;  // Branch to 0x1173bc                 // 0x0011737c: beqz $a1, 0x1173bc
    /* nop */                                                   // 0x00117380: nop 
    v1 = *(int32_t*)((a1) + 8);                                 // 0x00117384: lw $v1, 8($a1)
    /* beqzl $v1, 0x1173b4 */                                   // 0x00117388: beqzl $v1, 0x1173b4
    a1 = *(int32_t*)((a1) + 0x14);                              // 0x0011738c: lw $a1, 0x14($a1)
    v0 = *(int32_t*)(v1);                                       // 0x00117390: lw $v0, 0($v1)
    /* nop */                                                   // 0x00117394: nop 
    if (v0 != a0) return;  // Branch to 0x1173a8                // 0x00117398: bnel $v0, $a0, 0x1173a8
    v1 = *(int32_t*)((v1) + 0x38);                              // 0x0011739c: lw $v1, 0x38($v1)
    return;                                                     // 0x001173a0: jr $ra
}