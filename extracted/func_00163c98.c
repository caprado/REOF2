void func_00163c98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163c98: addiu $sp, $sp, -0x10
    func_0015e348();  // 0x15e338                                // 0x00163ca0: jal 0x15e338
    /* nop */                                                   // 0x00163ca4: nop 
    v1 = *(int32_t*)((v0) + 0x40);                              // 0x00163ca8: lw $v1, 0x40($v0)
    if (v1 == 0) goto label_0x163cbc;                           // 0x00163cac: beqz $v1, 0x163cbc
    a0 = *(int32_t*)((v0) + 0x44);                              // 0x00163cb0: lw $a0, 0x44($v0)
    /* call function at address in v1 */                        // 0x00163cb4: jalr $v1
    /* nop */                                                   // 0x00163cb8: nop 
label_0x163cbc:
    return;                                                     // 0x00163cc0: jr $ra
    sp = sp + 0x10;                                             // 0x00163cc4: addiu $sp, $sp, 0x10
}