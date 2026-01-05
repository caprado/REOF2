void func_00138950() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00138950: addiu $sp, $sp, -0x20
    func_0013ef18();  // 13ef18                                // 0x0013896c: jal 0x13ef18
    v0 = 2;                                                     // 0x00138974: addiu $v0, $zero, 2
    if (s0 == v0) goto label_0x138998;                          // 0x00138978: beq $s0, $v0, 0x138998
    v1 = ((unsigned)s0 < (unsigned)2) ? 1 : 0;                  // 0x0013897c: sltiu $v1, $s0, 2
    if (v1 != 0) goto label_0x1389fc;                           // 0x00138980: bnez $v1, 0x1389fc
    v0 = 3;                                                     // 0x00138984: addiu $v0, $zero, 3
    if (s0 == v0) goto label_0x1389b8;                          // 0x00138988: beq $s0, $v0, 0x1389b8
    v0 = s0 + -0x400;                                           // 0x0013898c: addiu $v0, $s0, -0x400
    goto label_0x1389c8;                                        // 0x00138990: b 0x1389c8
    v1 = v0 << 2;                                               // 0x00138994: sll $v1, $v0, 2
label_0x138998:
    a0 = *(int32_t*)(s1);                                       // 0x00138998: lw $a0, 0($s1)
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0013899c: lw $a1, 4($s1)
    a2 = *(int32_t*)((s1) + 8);                                 // 0x001389a0: lw $a2, 8($s1)
    func_00138c38();  // 138c38                                // 0x001389a4: jal 0x138c38
    a3 = *(int32_t*)((s1) + 0xc);                               // 0x001389a8: lw $a3, 0xc($s1)
    goto label_0x1389fc;                                        // 0x001389ac: b 0x1389fc
    *(uint32_t*)(s1) = v0;                                      // 0x001389b0: sw $v0, 0($s1)
    /* nop */                                                   // 0x001389b4: nop 
label_0x1389b8:
    func_00138dd0();  // 138dd0                                // 0x001389b8: jal 0x138dd0
    a0 = *(int32_t*)(s1);                                       // 0x001389bc: lw $a0, 0($s1)
    goto label_0x1389fc;                                        // 0x001389c0: b 0x1389fc
    /* nop */                                                   // 0x001389c4: nop 
label_0x1389c8:
    v0 = ((unsigned)v0 < (unsigned)0x40) ? 1 : 0;               // 0x001389c8: sltiu $v0, $v0, 0x40
    if (v0 == 0) goto label_0x1389fc;                           // 0x001389cc: beqz $v0, 0x1389fc
    /* nop */                                                   // 0x001389d0: nop 
    v0 = 0x20 << 16;                                            // 0x001389d4: lui $v0, 0x20
    v0 = v0 + v1;                                               // 0x001389d8: addu $v0, $v0, $v1
    v0 = g_00202fe0;  // Global at 0x00202fe0                   // 0x001389dc: lw $v0, 0x2fe0($v0)
    if (v0 == 0) goto label_0x1389fc;                           // 0x001389e0: beqz $v0, 0x1389fc
    a2 = (unsigned)s2 >> 2;                                     // 0x001389e4: srl $a2, $s2, 2
    a0 = 0x20 << 16;                                            // 0x001389e8: lui $a0, 0x20
    a0 = a0 + v1;                                               // 0x001389ec: addu $a0, $a0, $v1
    a0 = g_002030e0;  // Global at 0x002030e0                   // 0x001389f0: lw $a0, 0x30e0($a0)
    /* call function at address in v0 */                        // 0x001389f4: jalr $v0
label_0x1389fc:
    func_0013ef30();  // 13ef30                                // 0x001389fc: jal 0x13ef30
    /* nop */                                                   // 0x00138a00: nop 
    return;                                                     // 0x00138a18: jr $ra
    sp = sp + 0x20;                                             // 0x00138a1c: addiu $sp, $sp, 0x20
}