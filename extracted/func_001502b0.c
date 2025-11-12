void func_001502b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001502b0: addiu $sp, $sp, -0x20
    func_00155b20();  // 0x155af8                                // 0x001502c4: jal 0x155af8
    a1 = 0xff03 << 16;                                          // 0x001502cc: lui $a1, 0xff03
    if (v0 == 0) goto label_0x1502f0;                           // 0x001502d0: beqz $v0, 0x1502f0
    a1 = a1 | 0x204;                                            // 0x001502dc: ori $a1, $a1, 0x204
    return func_00150380();  // Tail call                        // 0x001502e8: j 0x150330
    sp = sp + 0x20;                                             // 0x001502ec: addiu $sp, $sp, 0x20
label_0x1502f0:
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00150300: lw $a0, 0x14($s0)
    *(uint32_t*)((s1) + 0x10) = a0;                             // 0x00150314: sw $a0, 0x10($s1)
    return;                                                     // 0x00150324: jr $ra
    sp = sp + 0x20;                                             // 0x00150328: addiu $sp, $sp, 0x20
}