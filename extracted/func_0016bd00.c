void func_0016bd00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0016bd00: addiu $sp, $sp, -0x30
    func_00169af0();  // 169af0                                // 0x0016bd2c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x0016bd34: lui $a1, 0xff00
    if (v0 == 0) goto label_0x16bd70;                           // 0x0016bd48: beqz $v0, 0x16bd70
    a1 = a1 | 0x184;                                            // 0x0016bd4c: ori $a1, $a1, 0x184
    return func_00169940();  // Tail call                        // 0x0016bd68: j 0x1698d0
    sp = sp + 0x30;                                             // 0x0016bd6c: addiu $sp, $sp, 0x30
label_0x16bd70:
    v0 = *(int32_t*)((s3) + 0x1b30);                            // 0x0016bd70: lw $v0, 0x1b30($s3)
    func_00159178();  // 159178                                // 0x0016bd78: jal 0x159178
    a0 = *(int32_t*)(v0);                                       // 0x0016bd7c: lw $a0, 0($v0)
    return;                                                     // 0x0016bd9c: jr $ra
    sp = sp + 0x30;                                             // 0x0016bda0: addiu $sp, $sp, 0x30
}