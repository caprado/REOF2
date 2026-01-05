void func_00165ea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00165ea8: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00165ebc: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00165ec4: lui $a1, 0xff00
    if (v0 == 0) goto label_0x165ee8;                           // 0x00165ec8: beqz $v0, 0x165ee8
    func_001698d0();  // 1698d0                                // 0x00165ed4: jal 0x1698d0
    a1 = a1 | 0x1a2;                                            // 0x00165ed8: ori $a1, $a1, 0x1a2
    goto label_0x165f0c;                                        // 0x00165edc: b 0x165f0c
    /* nop */                                                   // 0x00165ee4: nop 
label_0x165ee8:
    func_001752e8();  // 1752e8                                // 0x00165ee8: jal 0x1752e8
    a1 = 6;                                                     // 0x00165eec: addiu $a1, $zero, 6
    if (v0 == 0) goto label_0x165f0c;                           // 0x00165ef4: beqz $v0, 0x165f0c
    v1 = *(int32_t*)((s0) + 0x1c84);                            // 0x00165efc: lw $v1, 0x1c84($s0)
    v0 = *(int32_t*)((v1) + 8);                                 // 0x00165f00: lw $v0, 8($v1)
    /* call function at address in v0 */                        // 0x00165f04: jalr $v0
    /* nop */                                                   // 0x00165f08: nop 
label_0x165f0c:
    return;                                                     // 0x00165f18: jr $ra
    sp = sp + 0x20;                                             // 0x00165f1c: addiu $sp, $sp, 0x20
}