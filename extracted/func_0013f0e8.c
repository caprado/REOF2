void func_0013f0e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013f0e8: addiu $sp, $sp, -0x10
    if (s0 == 0) goto label_0x13f10c;                           // 0x0013f0f4: beqz $s0, 0x13f10c
    func_00107d30();  // 0x107c70                                // 0x0013f100: jal 0x107c70
    a2 = 0x24;                                                  // 0x0013f104: addiu $a2, $zero, 0x24
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0013f108: sw $zero, 4($s0)
label_0x13f10c:
    return;                                                     // 0x0013f114: jr $ra
    sp = sp + 0x10;                                             // 0x0013f118: addiu $sp, $sp, 0x10
}