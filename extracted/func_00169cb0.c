void func_00169cb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00169cb0: addiu $sp, $sp, -0x30
    func_00169af0();  // 169af0                                // 0x00169cdc: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00169ce4: lui $a1, 0xff00
    v1 = s1 + -0xbc;                                            // 0x00169ce8: addiu $v1, $s1, -0xbc
    a1 = a1 | 0x171;                                            // 0x00169cf0: ori $a1, $a1, 0x171
    if (v0 == 0) goto label_0x169d20;                           // 0x00169cf4: beqz $v0, 0x169d20
    v1 = ((unsigned)v1 < (unsigned)0x44) ? 1 : 0;               // 0x00169cf8: sltiu $v1, $v1, 0x44
    return func_00169940();  // Tail call                        // 0x00169d14: j 0x1698d0
    sp = sp + 0x30;                                             // 0x00169d18: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x00169d1c: nop 
label_0x169d20:
    /* beqzl $v1, 0x169d44 */                                   // 0x00169d20: beqzl $v1, 0x169d44
    a0 = *(int32_t*)((s0) + 0x1aec);                            // 0x00169d28: lw $a0, 0x1aec($s0)
    v1 = s1 << 2;                                               // 0x00169d2c: sll $v1, $s1, 2
    v1 = v1 + a0;                                               // 0x00169d30: addu $v1, $v1, $a0
    *(uint32_t*)((a0) + 0x144) = s3;                            // 0x00169d34: sw $s3, 0x144($a0)
    *(uint32_t*)((v1) + -0x2bc) = s2;                           // 0x00169d38: sw $s2, -0x2bc($v1)
    *(uint32_t*)((a0) + 0x148) = s4;                            // 0x00169d3c: sw $s4, 0x148($a0)
    return;                                                     // 0x00169d58: jr $ra
    sp = sp + 0x30;                                             // 0x00169d5c: addiu $sp, $sp, 0x30
}