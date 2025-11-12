void func_001616b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001616b8: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xe8);                              // 0x001616c0: lw $v0, 0xe8($a0)
    if (v0 == 0) goto label_0x1616dc;                           // 0x001616c4: beqz $v0, 0x1616dc
    v0 = *(int32_t*)(v0);                                       // 0x001616cc: lw $v0, 0($v0)
    v1 = *(int32_t*)((v0) + 0x14);                              // 0x001616d0: lw $v1, 0x14($v0)
    /* call function at address in v1 */                        // 0x001616d4: jalr $v1
    /* nop */                                                   // 0x001616d8: nop 
label_0x1616dc:
    return;                                                     // 0x001616e0: jr $ra
    sp = sp + 0x10;                                             // 0x001616e4: addiu $sp, $sp, 0x10
}