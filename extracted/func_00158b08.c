void func_00158b08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00158b08: addiu $sp, $sp, -0x20
    func_0015b470();  // 15b470                                // 0x00158b24: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x00158b2c: lui $a1, 0xff03
    s0 = s0 + 0x224;                                            // 0x00158b30: addiu $s0, $s0, 0x224
    if (v0 == 0) goto label_0x158b58;                           // 0x00158b38: beqz $v0, 0x158b58
    a1 = a1 | 0x203;                                            // 0x00158b3c: ori $a1, $a1, 0x203
    return func_00158c48();  // Tail call                        // 0x00158b50: j 0x158bf8
    sp = sp + 0x20;                                             // 0x00158b54: addiu $sp, $sp, 0x20
label_0x158b58:
    *(uint32_t*)((s0) + 4) = s1;                                // 0x00158b58: sw $s1, 4($s0)
    *(uint32_t*)(s0) = s2;                                      // 0x00158b5c: sw $s2, 0($s0)
    return;                                                     // 0x00158b70: jr $ra
    sp = sp + 0x20;                                             // 0x00158b74: addiu $sp, $sp, 0x20
}