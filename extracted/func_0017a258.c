void func_0017a258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017a258: addiu $sp, $sp, -0x10
    func_0017a298();  // 17a298                                // 0x0017a264: jal 0x17a298
    v1 = 0xe0;                                                  // 0x0017a26c: addiu $v1, $zero, 0xe0
    if (v0 != v1) goto label_0x17a288;                          // 0x0017a270: bne $v0, $v1, 0x17a288
    v1 = *(uint8_t*)((s0) + 0x20);                              // 0x0017a278: lbu $v1, 0x20($s0)
    v0 = ((unsigned)0 < (unsigned)v1) ? 1 : 0;                  // 0x0017a27c: sltu $v0, $zero, $v1
    v1 = ((unsigned)v1 < (unsigned)2) ? 1 : 0;                  // 0x0017a280: sltiu $v1, $v1, 2
    if (v1 == 0) v0 = 0;                                        // 0x0017a284: movz $v0, $zero, $v1
label_0x17a288:
    return;                                                     // 0x0017a290: jr $ra
    sp = sp + 0x10;                                             // 0x0017a294: addiu $sp, $sp, 0x10
}