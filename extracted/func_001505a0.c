void func_001505a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001505a0: addiu $sp, $sp, -0x20
    s0 = a0 + 0x128;                                            // 0x001505a8: addiu $s0, $a0, 0x128
    func_00155af8();  // 155af8                                // 0x001505b4: jal 0x155af8
    a1 = 0xff03 << 16;                                          // 0x001505bc: lui $a1, 0xff03
    if (v0 == 0) goto label_0x1505e0;                           // 0x001505c0: beqz $v0, 0x1505e0
    a1 = a1 | 0x20d;                                            // 0x001505cc: ori $a1, $a1, 0x20d
    return func_00150380();  // Tail call                        // 0x001505d8: j 0x150330
    sp = sp + 0x20;                                             // 0x001505dc: addiu $sp, $sp, 0x20
label_0x1505e0:
    v0 = *(int32_t*)((s0) + 0x2f8);                             // 0x001505e0: lw $v0, 0x2f8($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x001505e8: sw $v0, 0($s1)
    return;                                                     // 0x001505f4: jr $ra
    sp = sp + 0x20;                                             // 0x001505f8: addiu $sp, $sp, 0x20
}