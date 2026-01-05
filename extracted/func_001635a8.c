void func_001635a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001635a8: addiu $sp, $sp, -0x30
    v0 = 1;                                                     // 0x001635ac: addiu $v0, $zero, 1
    s2 = *(int32_t*)((s1) + 0x118);                             // 0x001635c8: lw $s2, 0x118($s1)
    if (s2 != v0) goto label_0x1635fc;                          // 0x001635cc: bne $s2, $v0, 0x1635fc
    s3 = *(int32_t*)((s1) + 0x40);                              // 0x001635d0: lw $s3, 0x40($s1)
    func_001633c0();  // 1633c0                                // 0x001635d4: jal 0x1633c0
    /* nop */                                                   // 0x001635d8: nop 
    func_001637f0();  // 1637f0                                // 0x001635e0: jal 0x1637f0
    if (v0 != s2) goto label_0x1635f4;                          // 0x001635e8: bne $v0, $s2, 0x1635f4
    *(uint32_t*)((s1) + 0x118) = 0;                             // 0x001635f0: sw $zero, 0x118($s1)
label_0x1635f4:
    func_001633e0();  // 1633e0                                // 0x001635f4: jal 0x1633e0
    /* nop */                                                   // 0x001635f8: nop 
label_0x1635fc:
    func_00163648();  // 163648                                // 0x001635fc: jal 0x163648
    func_00174fb8();  // 174fb8                                // 0x00163604: jal 0x174fb8
    v0 = 4;                                                     // 0x00163610: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x163624;                          // 0x00163614: beq $v1, $v0, 0x163624
    a0 = 6;                                                     // 0x00163618: addiu $a0, $zero, 6
    if (v1 != a0) goto label_0x163630;                          // 0x0016361c: bne $v1, $a0, 0x163630
label_0x163624:
    v0 = 2;                                                     // 0x00163624: addiu $v0, $zero, 2
    *(uint32_t*)((s1) + 8) = v0;                                // 0x00163628: sw $v0, 8($s1)
label_0x163630:
    return;                                                     // 0x00163640: jr $ra
    sp = sp + 0x30;                                             // 0x00163644: addiu $sp, $sp, 0x30
}