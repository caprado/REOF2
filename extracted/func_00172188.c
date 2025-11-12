void func_00172188() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00172188: addiu $sp, $sp, -0x20
    v0 = 0x21 << 16;                                            // 0x0017218c: lui $v0, 0x21
    s0 = v0 + 0x578c;                                           // 0x00172198: addiu $s0, $v0, 0x578c
    v0 = g_0021578c;  // Global at 0x0021578c                   // 0x001721a4: lw $v0, 0($s0)
    s0 = s0 + 4;                                                // 0x001721a8: addiu $s0, $s0, 4
    if (v0 == 0) goto label_0x1721c4;                           // 0x001721ac: beqz $v0, 0x1721c4
    func_00172188();  // 0x172160                                // 0x001721b4: jal 0x172160
    /* nop */                                                   // 0x001721b8: nop 
    /* beqzl $v0, 0x1721dc */                                   // 0x001721bc: beqzl $v0, 0x1721dc
label_0x1721c4:
    s1 = s1 + 1;                                                // 0x001721c4: addiu $s1, $s1, 1
    v0 = (s1 < 8) ? 1 : 0;                                      // 0x001721c8: slti $v0, $s1, 8
    /* bnezl $v0, 0x1721a8 */                                   // 0x001721cc: bnezl $v0, 0x1721a8
    v0 = g_00215790;  // Global at 0x00215790                   // 0x001721d0: lw $v0, 0($s0)
    v0 = 1;                                                     // 0x001721d4: addiu $v0, $zero, 1
    return;                                                     // 0x001721e4: jr $ra
    sp = sp + 0x20;                                             // 0x001721e8: addiu $sp, $sp, 0x20
}