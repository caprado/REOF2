void func_00155888() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x00155888: lui $v0, 0x25
    v0 = v0 + 0x6390;                                           // 0x00155890: addiu $v0, $v0, 0x6390
    a1 = g_002563d0;  // Global at 0x002563d0                   // 0x00155894: lw $a1, 0x40($v0)
    if (a1 <= 0) goto label_0x1558cc;                           // 0x00155898: blez $a1, 0x1558cc
    a0 = g_002563d4;  // Global at 0x002563d4                   // 0x0015589c: lw $a0, 0x44($v0)
    a3 = 1;                                                     // 0x001558a0: addiu $a3, $zero, 1
    v1 = *(int32_t*)(a0);                                       // 0x001558a4: lw $v1, 0($a0)
    if (v1 == a3) goto label_0x1558d0;                          // 0x001558ac: beq $v1, $a3, 0x1558d0
    a0 = a0 + 0x6a0;                                            // 0x001558b0: addiu $a0, $a0, 0x6a0
    a2 = a2 + 1;                                                // 0x001558b4: addiu $a2, $a2, 1
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x001558b8: slt $v0, $a2, $a1
    /* nop */                                                   // 0x001558bc: nop 
    /* nop */                                                   // 0x001558c0: nop 
    /* bnezl $v0, 0x1558a8 */                                   // 0x001558c4: bnezl $v0, 0x1558a8
    v1 = *(int32_t*)(a0);                                       // 0x001558c8: lw $v1, 0($a0)
label_0x1558cc:
label_0x1558d0:
    return;                                                     // 0x001558d0: jr $ra
    /* nop */                                                   // 0x001558d4: nop 
}