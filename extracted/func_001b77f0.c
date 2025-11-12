void func_001b77f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b77f0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b77f8: addu.qb $zero, $sp, $s1
    s0 = 0x30 << 16;                                            // 0x001b7804: lui $s0, 0x30
    s0 = s0 + 0x7d90;                                           // 0x001b7808: addiu $s0, $s0, 0x7d90
label_0x1b780c:
    at = (s1 < 0xc) ? 1 : 0;                                    // 0x001b780c: slti $at, $s1, 0xc
    if (at == 0) goto label_0x1b7868;                           // 0x001b7810: beqz $at, 0x1b7868
    /* nop */                                                   // 0x001b7814: nop 
    v1 = g_00307d90;  // Global at 0x00307d90                   // 0x001b7818: lh $v1, 0($s0)
    v0 = 0x10;                                                  // 0x001b781c: addiu $v0, $zero, 0x10
    if (v1 == v0) goto label_0x1b7844;                          // 0x001b7820: beq $v1, $v0, 0x1b7844
    v0 = 1;                                                     // 0x001b7824: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1b7844;                          // 0x001b7828: beq $v1, $v0, 0x1b7844
    /* nop */                                                   // 0x001b782c: nop 
    v0 = 8;                                                     // 0x001b7830: addiu $v0, $zero, 8
    if (v1 == v0) goto label_0x1b7844;                          // 0x001b7834: beq $v1, $v0, 0x1b7844
    /* nop */                                                   // 0x001b7838: nop 
    goto label_0x1b785c;                                        // 0x001b783c: b 0x1b785c
label_0x1b7844:
    v0 = g_00307da4;  // Global at 0x00307da4                   // 0x001b7844: lw $v0, 0x14($s0)
    if (v0 == 0) goto label_0x1b7858;                           // 0x001b7848: beqz $v0, 0x1b7858
    /* nop */                                                   // 0x001b784c: nop 
    /* call function at address in v0 */                        // 0x001b7850: jalr $v0
    /* nop */                                                   // 0x001b7854: nop 
label_0x1b7858:
label_0x1b785c:
    func_00107d30();  // 0x107c70                                // 0x001b7860: jal 0x107c70
    a2 = 0x20;                                                  // 0x001b7864: addiu $a2, $zero, 0x20
label_0x1b7868:
    s1 = s1 + 1;                                                // 0x001b7868: addiu $s1, $s1, 1
    v1 = (s1 < 0x10) ? 1 : 0;                                   // 0x001b786c: slti $v1, $s1, 0x10
    if (v1 != 0) goto label_0x1b780c;                           // 0x001b7870: bnez $v1, 0x1b780c
    s0 = s0 + 0x20;                                             // 0x001b7874: addiu $s0, $s0, 0x20
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b787c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b7880: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b7884: jr $ra
    sp = sp + 0x30;                                             // 0x001b7888: addiu $sp, $sp, 0x30
}