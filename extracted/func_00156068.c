void func_00156068() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00156068: addiu $sp, $sp, -0x20
    func_00158088();  // 158088                                // 0x0015607c: jal 0x158088
    a1 = 0xff02 << 16;                                          // 0x00156084: lui $a1, 0xff02
    if (v0 == 0) goto label_0x1560a8;                           // 0x00156088: beqz $v0, 0x1560a8
    a1 = a1 | 0x302;                                            // 0x00156094: ori $a1, $a1, 0x302
    return func_00157f08();  // Tail call                        // 0x001560a0: j 0x157eb8
    sp = sp + 0x20;                                             // 0x001560a4: addiu $sp, $sp, 0x20
label_0x1560a8:
    *(uint32_t*)((s0) + 0x10) = s1;                             // 0x001560a8: sw $s1, 0x10($s0)
    return;                                                     // 0x001560b8: jr $ra
    sp = sp + 0x20;                                             // 0x001560bc: addiu $sp, $sp, 0x20
}