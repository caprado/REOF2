void func_001178a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)(a0);                                       // 0x001178a0: lw $a1, 0($a0)
    if (a1 == 0) goto label_0x1178cc;                           // 0x001178a4: beqz $a1, 0x1178cc
    /* nop */                                                   // 0x001178a8: nop 
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001178ac: lw $v1, 4($a0)
    v0 = *(int32_t*)((a1) + 0x18);                              // 0x001178b0: lw $v0, 0x18($a1)
    if (v1 != v0) goto label_0x1178cc;                          // 0x001178b4: bne $v1, $v0, 0x1178cc
    /* nop */                                                   // 0x001178b8: nop 
    v0 = *(int32_t*)((a1) + 0x10);                              // 0x001178bc: lw $v0, 0x10($a1)
    v0 = v0 & 1;                                                // 0x001178c0: andi $v0, $v0, 1
    if (v0 != 0) return;  // Branch to 0x1178d4                 // 0x001178c4: bnez $v0, 0x1178d4
    /* nop */                                                   // 0x001178c8: nop 
label_0x1178cc:
    return;                                                     // 0x001178cc: jr $ra
}