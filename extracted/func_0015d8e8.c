void func_0015d8e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0015d8e8: addiu $sp, $sp, -0x30
    s3 = a0 + 0xbc;                                             // 0x0015d8f8: addiu $s3, $a0, 0xbc
    v0 = *(int32_t*)((a1) + 0x38);                              // 0x0015d90c: lw $v0, 0x38($a1)
    s4 = *(int32_t*)((a0) + 0xd4);                              // 0x0015d910: lw $s4, 0xd4($a0)
    s1 = *(int32_t*)((v0) + 4);                                 // 0x0015d914: lw $s1, 4($v0)
    func_0015e5f0();  // 15e5f0                                // 0x0015d918: jal 0x15e5f0
    s0 = *(int32_t*)(v0);                                       // 0x0015d91c: lw $s0, 0($v0)
    v1 = 1;                                                     // 0x0015d920: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x15d938;                          // 0x0015d924: bnel $v0, $v1, 0x15d938
    *(uint32_t*)((s2) + 0x44) = 0;                              // 0x0015d928: sw $zero, 0x44($s2)
    if (s4 != s3) goto label_0x15d940;                          // 0x0015d92c: bne $s4, $s3, 0x15d940
    /* nop */                                                   // 0x0015d930: nop 
    *(uint32_t*)((s2) + 0x44) = 0;                              // 0x0015d934: sw $zero, 0x44($s2)
label_0x15d938:
    goto label_0x15d960;                                        // 0x0015d938: b 0x15d960
    *(uint32_t*)((s2) + 0x40) = 0;                              // 0x0015d93c: sw $zero, 0x40($s2)
label_0x15d940:
    if (s0 == 0) goto label_0x15d958;                           // 0x0015d940: beqz $s0, 0x15d958
    v0 = (s1 < 5) ? 1 : 0;                                      // 0x0015d944: slti $v0, $s1, 5
    /* bnezl $v0, 0x15d95c */                                   // 0x0015d948: bnezl $v0, 0x15d95c
    *(uint32_t*)((s2) + 0x44) = s1;                             // 0x0015d94c: sw $s1, 0x44($s2)
    s0 = s0 + 4;                                                // 0x0015d950: addiu $s0, $s0, 4
    s1 = s1 + -4;                                               // 0x0015d954: addiu $s1, $s1, -4
label_0x15d958:
    *(uint32_t*)((s2) + 0x44) = s1;                             // 0x0015d958: sw $s1, 0x44($s2)
    *(uint32_t*)((s2) + 0x40) = s0;                             // 0x0015d95c: sw $s0, 0x40($s2)
label_0x15d960:
    return;                                                     // 0x0015d978: jr $ra
    sp = sp + 0x30;                                             // 0x0015d97c: addiu $sp, $sp, 0x30
}