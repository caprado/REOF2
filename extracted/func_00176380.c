void func_00176380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00176380: addiu $sp, $sp, -0x10
    func_00169b10();  // 0x169af0                                // 0x0017638c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00176394: lui $a1, 0xff00
    a2 = s0 + 0xcc0;                                            // 0x00176398: addiu $a2, $s0, 0xcc0
    if (v0 == 0) goto label_0x1763b8;                           // 0x001763a0: beqz $v0, 0x1763b8
    a1 = a1 | 0x122;                                            // 0x001763a4: ori $a1, $a1, 0x122
    return func_00169940();  // Tail call                        // 0x001763b0: j 0x1698d0
    sp = sp + 0x10;                                             // 0x001763b4: addiu $sp, $sp, 0x10
label_0x1763b8:
    v1 = *(int32_t*)((a2) + 0x260);                             // 0x001763b8: lw $v1, 0x260($a2)
    a0 = 1;                                                     // 0x001763bc: addiu $a0, $zero, 1
    v1 = v1 + 1;                                                // 0x001763c4: addiu $v1, $v1, 1
    *(uint32_t*)((a2) + 0x260) = v1;                            // 0x001763c8: sw $v1, 0x260($a2)
    *(uint32_t*)((s0) + 0x44) = a0;                             // 0x001763cc: sw $a0, 0x44($s0)
    return;                                                     // 0x001763d4: jr $ra
    sp = sp + 0x10;                                             // 0x001763d8: addiu $sp, $sp, 0x10
}