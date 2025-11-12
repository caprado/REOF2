void func_0014ff04() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0014ff04: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((v1) + 0x3e0c);                            // 0x0014ff08: lw $v1, 0x3e0c($v1)
    if (v1 == 0) goto label_0x14ff20;                           // 0x0014ff10: beqz $v1, 0x14ff20
    /* call function at address in v1 */                        // 0x0014ff18: jalr $v1
    /* nop */                                                   // 0x0014ff1c: nop 
label_0x14ff20:
    return;                                                     // 0x0014ff24: jr $ra
    sp = sp + 0x10;                                             // 0x0014ff28: addiu $sp, $sp, 0x10
}