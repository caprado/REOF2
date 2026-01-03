void func_0017a340() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017a340: addiu $sp, $sp, -0x10
    func_0017a398();  // 17a398                                // 0x0017a34c: jal 0x17a398
    /* nop */                                                   // 0x0017a350: nop 
    if (s0 == 0) goto label_0x17a388;                           // 0x0017a358: beqz $s0, 0x17a388
    func_0017a3e8();  // 17a3e8                                // 0x0017a360: jal 0x17a3e8
    /* nop */                                                   // 0x0017a364: nop 
    v1 = 0x21 << 16;                                            // 0x0017a368: lui $v1, 0x21
    v1 = v1 + 0x57f0;                                           // 0x0017a36c: addiu $v1, $v1, 0x57f0
    a1 = 1;                                                     // 0x0017a370: addiu $a1, $zero, 1
    a0 = g_002157f0;  // Global at 0x002157f0                   // 0x0017a374: lw $a0, 0($v1)
    a0 = a0 + 1;                                                // 0x0017a37c: addiu $a0, $a0, 1
    g_002157f0 = a0;  // Global at 0x002157f0                   // 0x0017a380: sw $a0, 0($v1)
    *(uint32_t*)(s0) = a1;                                      // 0x0017a384: sw $a1, 0($s0)
label_0x17a388:
    return;                                                     // 0x0017a390: jr $ra
    sp = sp + 0x10;                                             // 0x0017a394: addiu $sp, $sp, 0x10
}