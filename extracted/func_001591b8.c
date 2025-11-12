void func_001591b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 == 0) goto label_0x1591c8;                           // 0x001591b8: beqz $a1, 0x1591c8
    a0 = a0 + 0x3b8;                                            // 0x001591bc: addiu $a0, $a0, 0x3b8
    v0 = *(int32_t*)(a0);                                       // 0x001591c0: lw $v0, 0($a0)
    *(uint32_t*)(a1) = v0;                                      // 0x001591c4: sw $v0, 0($a1)
label_0x1591c8:
    if (a2 == 0) goto label_0x1591d8;                           // 0x001591c8: beqz $a2, 0x1591d8
    /* nop */                                                   // 0x001591cc: nop 
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001591d0: lw $v0, 8($a0)
    *(uint32_t*)(a2) = v0;                                      // 0x001591d4: sw $v0, 0($a2)
label_0x1591d8:
    return;                                                     // 0x001591d8: jr $ra
    /* nop */                                                   // 0x001591dc: nop 
}