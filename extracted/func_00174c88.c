void func_00174c88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174c88: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00174ca4: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00174cac: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174cd8;                           // 0x00174cb4: beqz $v0, 0x174cd8
    a1 = a1 | 0x15a;                                            // 0x00174cb8: ori $a1, $a1, 0x15a
    return func_00169940();  // Tail call                        // 0x00174ccc: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00174cd0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00174cd4: nop 
label_0x174cd8:
    v1 = *(int32_t*)((s0) + 0x2ab0);                            // 0x00174cd8: lw $v1, 0x2ab0($s0)
    if (v1 == 0) goto label_0x174cf4;                           // 0x00174cdc: beqz $v1, 0x174cf4
    *(uint32_t*)((v1) + 0xdb8) = s1;                            // 0x00174ce4: sw $s1, 0xdb8($v1)
    func_00174fa0();  // 0x174f18                                // 0x00174ce8: jal 0x174f18
    *(uint32_t*)((v1) + 0xdb4) = s2;                            // 0x00174cec: sw $s2, 0xdb4($v1)
label_0x174cf4:
    return;                                                     // 0x00174d04: jr $ra
    sp = sp + 0x20;                                             // 0x00174d08: addiu $sp, $sp, 0x20
}