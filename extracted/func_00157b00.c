void func_00157b00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00157b00: addiu $sp, $sp, -0x20
    s0 = s0 << 5;                                               // 0x00157b0c: sll $s0, $s0, 5
    func_00158088();  // 158088                                // 0x00157b24: jal 0x158088
    s0 = s0 + 0x40;                                             // 0x00157b28: addiu $s0, $s0, 0x40
    a1 = 0xff02 << 16;                                          // 0x00157b2c: lui $a1, 0xff02
    s1 = s1 + s0;                                               // 0x00157b30: addu $s1, $s1, $s0
    if (v0 == 0) goto label_0x157b58;                           // 0x00157b38: beqz $v0, 0x157b58
    a1 = a1 | 0x202;                                            // 0x00157b3c: ori $a1, $a1, 0x202
    return func_00157f08();  // Tail call                        // 0x00157b50: j 0x157eb8
    sp = sp + 0x20;                                             // 0x00157b54: addiu $sp, $sp, 0x20
label_0x157b58:
    return;                                                     // 0x00157ba8: jr $ra
    sp = sp + 0x20;                                             // 0x00157bac: addiu $sp, $sp, 0x20
}