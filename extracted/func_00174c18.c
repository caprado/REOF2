void func_00174c18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174c18: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00174c2c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174c34: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174c58;                           // 0x00174c38: beqz $v0, 0x174c58
    a1 = a1 | 0x159;                                            // 0x00174c44: ori $a1, $a1, 0x159
    return func_00169940();  // Tail call                        // 0x00174c50: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00174c54: addiu $sp, $sp, 0x20
label_0x174c58:
    v1 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00174c58: lw $v1, 0x2ab0($s0)
    /* beqzl $v1, 0x174c78 */                                   // 0x00174c5c: beqzl $v1, 0x174c78
    *(uint32_t*)((v1) + 0xdb0) = s1;                            // 0x00174c64: sw $s1, 0xdb0($v1)
    func_00174f18();  // 174f18                                // 0x00174c68: jal 0x174f18
    return;                                                     // 0x00174c80: jr $ra
    sp = sp + 0x20;                                             // 0x00174c84: addiu $sp, $sp, 0x20
}