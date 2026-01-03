void func_00176ce8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00176ce8: addiu $sp, $sp, -0x30
    func_00169af0();  // 169af0                                // 0x00176d10: jal 0x169af0
    *(uint32_t*)(s1) = 0;                                       // 0x00176d14: sw $zero, 0($s1)
    a1 = 0xff00 << 16;                                          // 0x00176d1c: lui $a1, 0xff00
    a2 = s0 + 0x9a0;                                            // 0x00176d20: addiu $a2, $s0, 0x9a0
    if (v0 == 0) goto label_0x176d48;                           // 0x00176d24: beqz $v0, 0x176d48
    a1 = a1 | 0x126;                                            // 0x00176d28: ori $a1, $a1, 0x126
    return func_00169940();  // Tail call                        // 0x00176d40: j 0x1698d0
    sp = sp + 0x30;                                             // 0x00176d44: addiu $sp, $sp, 0x30
label_0x176d48:
    v1 = *(int32_t*)((a2) + 0x38);                              // 0x00176d48: lw $v1, 0x38($a2)
    /* bnezl $v1, 0x176d60 */                                   // 0x00176d4c: bnezl $v1, 0x176d60
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x00176d50: lw $a0, 0x4c($s0)
    v1 = 1;                                                     // 0x00176d54: addiu $v1, $zero, 1
    goto label_0x176d90;                                        // 0x00176d58: b 0x176d90
    *(uint32_t*)(s1) = v1;                                      // 0x00176d5c: sw $v1, 0($s1)
    v1 = 4;                                                     // 0x00176d60: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x176d78;                          // 0x00176d64: beql $a0, $v1, 0x176d78
    t0 = *(int32_t*)((a2) + 0xb4);                              // 0x00176d68: lw $t0, 0xb4($a2)
    goto label_0x176d90;                                        // 0x00176d6c: b 0x176d90
    *(uint32_t*)(s1) = 0;                                       // 0x00176d70: sw $zero, 0($s1)
    /* nop */                                                   // 0x00176d74: nop 
label_0x176d78:
    func_00176db0();  // 176db0                                // 0x00176d84: jal 0x176db0
label_0x176d90:
    return;                                                     // 0x00176da4: jr $ra
    sp = sp + 0x30;                                             // 0x00176da8: addiu $sp, $sp, 0x30
}