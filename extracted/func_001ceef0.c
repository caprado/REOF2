void func_001ceef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ceef0: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001ceef8: lw $v1, -0x6260($gp)
    if (v1 != 0) goto label_0x1cef20;                           // 0x001ceefc: bnez $v1, 0x1cef20
    a0 = 0x33 << 16;                                            // 0x001cef00: lui $a0, 0x33
    a1 = 0xff;                                                  // 0x001cef04: addiu $a1, $zero, 0xff
    a0 = a0 + -0x2b50;                                          // 0x001cef08: addiu $a0, $a0, -0x2b50
    func_00107c70();  // 107c70                                // 0x001cef0c: jal 0x107c70
    a2 = 0x20;                                                  // 0x001cef10: addiu $a2, $zero, 0x20
    v1 = -1;                                                    // 0x001cef14: addiu $v1, $zero, -1
    *(uint32_t*)((gp) + -0x6264) = v1;                          // 0x001cef18: sw $v1, -0x6264($gp)
    *(uint32_t*)((gp) + -0x6268) = v1;                          // 0x001cef1c: sw $v1, -0x6268($gp)
label_0x1cef20:
    return;                                                     // 0x001cef24: jr $ra
    sp = sp + 0x10;                                             // 0x001cef28: addiu $sp, $sp, 0x10
}