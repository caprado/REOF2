void func_00107908() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00107908: addiu $sp, $sp, -0x10
    if (a2 == 0) goto label_0x107934;                           // 0x00107914: beqz $a2, 0x107934
    if (a1 != 0) v1 = a1;                                       // 0x00107918: movn $v1, $a1, $a1
    if (a3 == 0) goto label_0x107934;                           // 0x0010791c: beqz $a3, 0x107934
    v0 = -1;                                                    // 0x00107920: addiu $v0, $zero, -1
    v0 = *(uint8_t*)(a2);                                       // 0x00107924: lbu $v0, 0($a2)
    *(uint32_t*)(v1) = v0;                                      // 0x00107928: sw $v0, 0($v1)
    v0 = *(uint8_t*)(a2);                                       // 0x0010792c: lbu $v0, 0($a2)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x00107930: sltu $v0, $zero, $v0
label_0x107934:
    return;                                                     // 0x00107934: jr $ra
    sp = sp + 0x10;                                             // 0x00107938: addiu $sp, $sp, 0x10
}