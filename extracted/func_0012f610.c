void func_0012f610() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012f610: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x12f668;                           // 0x0012f61c: beqz $s0, 0x12f668
    func_001261a0();  // 1261a0                                // 0x0012f624: jal 0x1261a0
    /* nop */                                                   // 0x0012f628: nop 
    v0 = *(int32_t*)((s0) + 0x80);                              // 0x0012f62c: lw $v0, 0x80($s0)
    if (v0 == 0) goto label_0x12f640;                           // 0x0012f630: beqz $v0, 0x12f640
    func_0012dfe0();  // 12dfe0                                // 0x0012f638: jal 0x12dfe0
    /* nop */                                                   // 0x0012f63c: nop 
label_0x12f640:
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x0012f640: lw $a0, 0x84($s0)
    /* beqzl $a0, 0x12f658 */                                   // 0x0012f644: beqzl $a0, 0x12f658
    *(uint32_t*)(s0) = 0;                                       // 0x0012f648: sw $zero, 0($s0)
    func_0012dfe0();  // 12dfe0                                // 0x0012f64c: jal 0x12dfe0
    /* nop */                                                   // 0x0012f650: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x0012f654: sw $zero, 0($s0)
    return func_001261d0();  // Tail call                        // 0x0012f660: j 0x1261b8
    sp = sp + 0x10;                                             // 0x0012f664: addiu $sp, $sp, 0x10
label_0x12f668:
    return;                                                     // 0x0012f670: jr $ra
    sp = sp + 0x10;                                             // 0x0012f674: addiu $sp, $sp, 0x10
}