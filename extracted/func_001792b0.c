void func_001792b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001792b0: addiu $sp, $sp, -0x20
    func_00178f58();  // 178f58                                // 0x001792c4: jal 0x178f58
    s1 = *(int32_t*)((a0) + 4);                                 // 0x001792c8: lw $s1, 4($a0)
    if (v0 == 0) goto label_0x179308;                           // 0x001792d4: beqz $v0, 0x179308
    a2 = 0xd;                                                   // 0x001792d8: addiu $a2, $zero, 0xd
    func_00107c70();  // 107c70                                // 0x001792dc: jal 0x107c70
    /* nop */                                                   // 0x001792e0: nop 
    v0 = 1;                                                     // 0x001792e4: addiu $v0, $zero, 1
    /* lwl $a0, 0x57($s1) */                                    // 0x001792f0: lwl $a0, 0x57($s1)
    /* lwr $a0, 0x54($s1) */                                    // 0x001792f4: lwr $a0, 0x54($s1)
    /* swl $a0, 0xb($s0) */                                     // 0x00179300: swl $a0, 0xb($s0)
    /* swr $a0, 8($s0) */                                       // 0x00179304: swr $a0, 8($s0)
label_0x179308:
    return;                                                     // 0x00179314: jr $ra
    sp = sp + 0x20;                                             // 0x00179318: addiu $sp, $sp, 0x20
}