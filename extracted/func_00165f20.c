void func_00165f20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00165f20: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00165f34: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00165f3c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x165f60;                           // 0x00165f40: beqz $v0, 0x165f60
    a1 = a1 | 0x1a3;                                            // 0x00165f4c: ori $a1, $a1, 0x1a3
    return func_00169940();  // Tail call                        // 0x00165f58: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00165f5c: addiu $sp, $sp, 0x20
label_0x165f60:
    func_001752f8();  // 0x1752e8                                // 0x00165f64: jal 0x1752e8
    a1 = 6;                                                     // 0x00165f68: addiu $a1, $zero, 6
    if (v0 == 0) goto label_0x165f88;                           // 0x00165f70: beqz $v0, 0x165f88
    v0 = *(int32_t*)((s0) + 0x1c84);                            // 0x00165f78: lw $v0, 0x1c84($s0)
    v1 = *(int32_t*)((v0) + 0xc);                               // 0x00165f7c: lw $v1, 0xc($v0)
    /* call function at address in v1 */                        // 0x00165f80: jalr $v1
    /* nop */                                                   // 0x00165f84: nop 
label_0x165f88:
    return;                                                     // 0x00165f94: jr $ra
    sp = sp + 0x20;                                             // 0x00165f98: addiu $sp, $sp, 0x20
}