void func_00145818() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00145818: addiu $sp, $sp, -0x30
    func_00145080();  // 0x144f18                                // 0x00145828: jal 0x144f18
    v0 = 0x1000 << 16;                                          // 0x00145830: lui $v0, 0x1000
    v0 = v0 | 0x2020;                                           // 0x00145834: ori $v0, $v0, 0x2020
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00145838: lw $v1, 0($v0)
    v1 = v1 & 7;                                                // 0x0014583c: andi $v1, $v1, 7
    v1 = -v1;                                                   // 0x00145840: negu $v1, $v1
    a1 = v1 & 7;                                                // 0x00145844: andi $a1, $v1, 7
    if (a1 == 0) goto label_0x145868;                           // 0x00145848: beqz $a1, 0x145868
    s1 = 1;                                                     // 0x0014584c: addiu $s1, $zero, 1
    func_001456a8();  // 0x145598                                // 0x00145850: jal 0x145598
    goto label_0x145868;                                        // 0x00145858: b 0x145868
    s1 = 1;                                                     // 0x0014585c: addiu $s1, $zero, 1
label_0x145860:
    func_001456a8();  // 0x145598                                // 0x00145860: jal 0x145598
    a1 = 8;                                                     // 0x00145864: addiu $a1, $zero, 8
label_0x145868:
    func_00145598();  // 0x145478                                // 0x0014586c: jal 0x145478
    a1 = 0x18;                                                  // 0x00145870: addiu $a1, $zero, 0x18
    if (v0 == s1) goto label_0x145888;                          // 0x00145874: beq $v0, $s1, 0x145888
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x0014587c: lw $v0, 0x10a0($s0)
    if (v0 == 0) goto label_0x145860;                           // 0x00145880: beqz $v0, 0x145860
label_0x145888:
    return;                                                     // 0x00145890: jr $ra
    sp = sp + 0x30;                                             // 0x00145894: addiu $sp, $sp, 0x30
}