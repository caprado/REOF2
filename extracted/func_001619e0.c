void func_001619e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001619e0: addiu $sp, $sp, -0x10
    func_00161570();  // 161570                                // 0x001619ec: jal 0x161570
    v1 = 1;                                                     // 0x001619f4: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x161a08;                          // 0x001619f8: bnel $v0, $v1, 0x161a08
    v1 = *(int32_t*)((s0) + 0xe8);                              // 0x001619fc: lw $v1, 0xe8($s0)
    goto label_0x161a30;                                        // 0x00161a00: b 0x161a30
label_0x161a08:
    if (v1 == 0) goto label_0x161a30;                           // 0x00161a08: beqz $v1, 0x161a30
    a0 = *(int32_t*)((s0) + 0x40);                              // 0x00161a10: lw $a0, 0x40($s0)
    a1 = 2;                                                     // 0x00161a14: addiu $a1, $zero, 2
    func_001785d0();  // 1785d0                                // 0x00161a1c: jal 0x1785d0
    v1 = -1;                                                    // 0x00161a24: addiu $v1, $zero, -1
    if (v0 == 0) v1 = 0;                                        // 0x00161a28: movz $v1, $zero, $v0
label_0x161a30:
    return;                                                     // 0x00161a38: jr $ra
    sp = sp + 0x10;                                             // 0x00161a3c: addiu $sp, $sp, 0x10
}