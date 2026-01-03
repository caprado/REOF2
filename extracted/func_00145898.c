void func_00145898() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00145898: addiu $sp, $sp, -0x20
    a1 = 5;                                                     // 0x0014589c: addiu $a1, $zero, 5
    func_001456a8();  // 1456a8                                // 0x001458a8: jal 0x1456a8
    *(uint32_t*)((s0) + 0x1cc) = v0;                            // 0x001458b0: sw $v0, 0x1cc($s0)
    func_001456a8();  // 1456a8                                // 0x001458b8: jal 0x1456a8
    a1 = 1;                                                     // 0x001458bc: addiu $a1, $zero, 1
    if (v0 == 0) goto label_0x1458ec;                           // 0x001458c0: beqz $v0, 0x1458ec
    func_001456a8();  // 1456a8                                // 0x001458cc: jal 0x1456a8
    a1 = 1;                                                     // 0x001458d0: addiu $a1, $zero, 1
    func_00145598();  // 145598                                // 0x001458d8: jal 0x145598
    a1 = 7;                                                     // 0x001458dc: addiu $a1, $zero, 7
    func_00145e00();  // 145e00                                // 0x001458e0: jal 0x145e00
label_0x1458ec:
    return;                                                     // 0x001458f4: jr $ra
    sp = sp + 0x20;                                             // 0x001458f8: addiu $sp, $sp, 0x20
}