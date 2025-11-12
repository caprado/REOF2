void func_001d34f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x33 << 16;                                            // 0x001d34f0: lui $v0, 0x33
    goto label_0x1d351c;                                        // 0x001d34f8: b 0x1d351c
    v0 = v0 + -0x1330;                                          // 0x001d34fc: addiu $v0, $v0, -0x1330
label_0x1d3500:
    v1 = g_0032ecd0;  // Global at 0x0032ecd0                   // 0x001d3500: lw $v1, 0($v0)
    if (v1 != 0) goto label_0x1d3514;                           // 0x001d3504: bnez $v1, 0x1d3514
    /* nop */                                                   // 0x001d3508: nop 
    goto label_0x1d352c;                                        // 0x001d350c: b 0x1d352c
    /* nop */                                                   // 0x001d3510: nop 
label_0x1d3514:
    a0 = a0 + 1;                                                // 0x001d3514: addiu $a0, $a0, 1
    v0 = v0 + 0x10;                                             // 0x001d3518: addiu $v0, $v0, 0x10
label_0x1d351c:
    v1 = (a0 < 0x100) ? 1 : 0;                                  // 0x001d351c: slti $v1, $a0, 0x100
    if (v1 != 0) goto label_0x1d3500;                           // 0x001d3520: bnez $v1, 0x1d3500
    /* nop */                                                   // 0x001d3524: nop 
label_0x1d352c:
    return;                                                     // 0x001d352c: jr $ra
    /* nop */                                                   // 0x001d3530: nop 
}