void func_0014ffb4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0014ffb4: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((v0) + 0x3e1c);                            // 0x0014ffb8: lw $v0, 0x3e1c($v0)
    if (v0 == 0) goto label_0x14ffcc;                           // 0x0014ffbc: beqz $v0, 0x14ffcc
    /* call function at address in v0 */                        // 0x0014ffc4: jalr $v0
    /* nop */                                                   // 0x0014ffc8: nop 
label_0x14ffcc:
    return;                                                     // 0x0014ffd0: jr $ra
    sp = sp + 0x10;                                             // 0x0014ffd4: addiu $sp, $sp, 0x10
}