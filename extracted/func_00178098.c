void func_00178098() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)((a0) + 0x10);                              // 0x00178098: lw $a1, 0x10($a0)
    if (a1 <= 0) goto label_0x1780cc;                           // 0x0017809c: blez $a1, 0x1780cc
    a0 = a0 + 0x18;                                             // 0x001780a4: addiu $a0, $a0, 0x18
    /* nop */                                                   // 0x001780ac: nop 
label_0x1780b0:
    v0 = *(int32_t*)(a0);                                       // 0x001780b0: lw $v0, 0($a0)
    a0 = a0 + 4;                                                // 0x001780b4: addiu $a0, $a0, 4
    v1 = v1 + -1;                                               // 0x001780b8: addiu $v1, $v1, -1
    /* nop */                                                   // 0x001780bc: nop 
    /* nop */                                                   // 0x001780c0: nop 
    if (v1 != 0) goto label_0x1780b0;                           // 0x001780c4: bnez $v1, 0x1780b0
    a2 = a2 + v0;                                               // 0x001780c8: addu $a2, $a2, $v0
label_0x1780cc:
    /* divide: a2 / a1 -> hi:lo */                              // 0x001780cc: div $zero, $a2, $a1
    /* beqzl $a1, 0x1780d8 */                                   // 0x001780d0: beqzl $a1, 0x1780d8
    /* break (trap) */                                          // 0x001780d4: break 0, 7
    /* mflo $v0 */                                              // 0x001780d8
    return;                                                     // 0x001780dc: jr $ra
    /* nop */                                                   // 0x001780e0: nop 
}