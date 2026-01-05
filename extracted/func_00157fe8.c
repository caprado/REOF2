void func_00157fe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00157fe8: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x158028;                           // 0x00157ffc: bnez $s0, 0x158028
    v0 = 0x21 << 16;                                            // 0x00158004: lui $v0, 0x21
    v1 = g_00213e70;  // Global at 0x00213e70                   // 0x00158008: lw $v1, 0x3e70($v0)
    a0 = *(int32_t*)((v1) + 8);                                 // 0x00158014: lw $a0, 8($v1)
    goto label_0x158070;                                        // 0x00158020: b 0x158070
    *(uint32_t*)((s1) + 8) = a0;                                // 0x00158024: sw $a0, 8($s1)
label_0x158028:
    func_00158088();  // 158088                                // 0x00158028: jal 0x158088
    /* nop */                                                   // 0x0015802c: nop 
    a1 = 0xff02 << 16;                                          // 0x00158030: lui $a1, 0xff02
    if (v0 == 0) goto label_0x158058;                           // 0x00158034: beqz $v0, 0x158058
    a1 = a1 | 0x102;                                            // 0x00158040: ori $a1, $a1, 0x102
    return func_00157f08();  // Tail call                        // 0x0015804c: j 0x157eb8
    sp = sp + 0x20;                                             // 0x00158050: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00158054: nop 
label_0x158058:
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x00158060: lw $v1, 0xc($s0)
    *(uint32_t*)((s1) + 8) = v1;                                // 0x0015806c: sw $v1, 8($s1)
label_0x158070:
    return;                                                     // 0x00158080: jr $ra
    sp = sp + 0x20;                                             // 0x00158084: addiu $sp, $sp, 0x20
}