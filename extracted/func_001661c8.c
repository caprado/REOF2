void func_001661c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001661c8: addiu $sp, $sp, -0x10
    a1 = 6;                                                     // 0x001661cc: addiu $a1, $zero, 6
    func_001752f8();  // 0x1752e8                                // 0x001661d8: jal 0x1752e8
    v1 = s0 + 0x2a5c;                                           // 0x001661e0: addiu $v1, $s0, 0x2a5c
    if (v0 == 0) goto label_0x1661f8;                           // 0x001661e4: beqz $v0, 0x1661f8
    func_00166218();  // 0x166208                                // 0x001661ec: jal 0x166208
    *(uint32_t*)((s0) + 0x1c84) = v1;                           // 0x001661f0: sw $v1, 0x1c84($s0)
label_0x1661f8:
    return;                                                     // 0x00166200: jr $ra
    sp = sp + 0x10;                                             // 0x00166204: addiu $sp, $sp, 0x10
}