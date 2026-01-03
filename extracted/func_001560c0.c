void func_001560c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x001560c0: addiu $sp, $sp, -0x40
    *(uint32_t*)(s3) = 0;                                       // 0x001560f0: sw $zero, 0($s3)
    func_00158088();  // 158088                                // 0x001560f4: jal 0x158088
    *(uint32_t*)(s2) = 0;                                       // 0x001560f8: sw $zero, 0($s2)
    if (v0 == 0) goto label_0x156118;                           // 0x001560fc: beqz $v0, 0x156118
    a1 = 0xff02 << 16;                                          // 0x00156104: lui $a1, 0xff02
    func_00157eb8();  // 157eb8                                // 0x00156108: jal 0x157eb8
    a1 = a1 | 0x301;                                            // 0x0015610c: ori $a1, $a1, 0x301
    goto label_0x1561ec;                                        // 0x00156110: b 0x1561ec
label_0x156118:
    v0 = (s0 < 4) ? 1 : 0;                                      // 0x00156118: slti $v0, $s0, 4
    /* bnezl $v0, 0x15616c */                                   // 0x0015611c: bnezl $v0, 0x15616c
    v0 = *(int32_t*)(s2);                                       // 0x00156120: lw $v0, 0($s2)
    func_00156208();  // 156208                                // 0x00156134: jal 0x156208
    t0 = sp + 4;                                                // 0x00156138: addiu $t0, $sp, 4
    a1 = *(int32_t*)(s2);                                       // 0x0015613c: lw $a1, 0($s2)
    v1 = local_0;                                               // 0x00156140: lw $v1, 0($sp)
    a2 = local_4;                                               // 0x00156144: lw $a2, 4($sp)
    a0 = *(int32_t*)(s3);                                       // 0x00156148: lw $a0, 0($s3)
    s1 = s1 + v1;                                               // 0x0015614c: addu $s1, $s1, $v1
    a1 = a1 | a2;                                               // 0x00156150: or $a1, $a1, $a2
    s0 = s0 - v1;                                               // 0x00156154: subu $s0, $s0, $v1
    a0 = a0 + v1;                                               // 0x00156158: addu $a0, $a0, $v1
    *(uint32_t*)(s2) = a1;                                      // 0x0015615c: sw $a1, 0($s2)
    if (v0 != 0) goto label_0x156118;                           // 0x00156160: bnez $v0, 0x156118
    *(uint32_t*)(s3) = a0;                                      // 0x00156164: sw $a0, 0($s3)
    v0 = *(int32_t*)(s2);                                       // 0x00156168: lw $v0, 0($s2)
    v1 = 2 << 16;                                               // 0x0015616c: lui $v1, 2
    v0 = v0 & v1;                                               // 0x00156170: and $v0, $v0, $v1
    if (v0 == 0) goto label_0x1561e4;                           // 0x00156174: beqz $v0, 0x1561e4
    a1 = s4 + 0x20;                                             // 0x00156178: addiu $a1, $s4, 0x20
    v0 = g_ff020008;  // Global at 0xff020008                   // 0x0015617c: lw $v0, 8($a1)
    if (v0 != 0) goto label_0x156198;                           // 0x00156180: bnez $v0, 0x156198
    v1 = g_ff02000c;  // Global at 0xff02000c                   // 0x00156188: lw $v1, 0xc($a1)
    v0 = 2;                                                     // 0x0015618c: addiu $v0, $zero, 2
    a0 = 1;                                                     // 0x00156190: addiu $a0, $zero, 1
    if (v1 == 0) a0 = v0;                                       // 0x00156194: movz $a0, $v0, $v1
label_0x156198:
    v0 = a0 << 5;                                               // 0x00156198: sll $v0, $a0, 5
    v0 = v0 + 0x40;                                             // 0x0015619c: addiu $v0, $v0, 0x40
    v0 = s4 + v0;                                               // 0x001561a0: addu $v0, $s4, $v0
label_0x1561e4:
label_0x1561ec:
    return;                                                     // 0x00156200: jr $ra
    sp = sp + 0x40;                                             // 0x00156204: addiu $sp, $sp, 0x40
}