void func_0015da78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015da78: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((a1) + 0x3c);                              // 0x0015da90: lw $v1, 0x3c($a1)
    v0 = ((unsigned)v1 < (unsigned)3) ? 1 : 0;                  // 0x0015da94: sltiu $v0, $v1, 3
    if (v0 == 0) goto label_0x15dab0;                           // 0x0015da98: beqz $v0, 0x15dab0
    /* bnezl $v1, 0x15dad8 */                                   // 0x0015daa0: bnezl $v1, 0x15dad8
    s1 = 2;                                                     // 0x0015daa4: addiu $s1, $zero, 2
    goto label_0x15dad0;                                        // 0x0015daa8: b 0x15dad0
    a0 = 0x22 << 16;                                            // 0x0015daac: lui $a0, 0x22
label_0x15dab0:
    v0 = 3;                                                     // 0x0015dab0: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x15dad0;                          // 0x0015dab4: bne $v1, $v0, 0x15dad0
    a0 = 0x22 << 16;                                            // 0x0015dab8: lui $a0, 0x22
    v0 = *(int32_t*)((a1) + 0x44);                              // 0x0015dabc: lw $v0, 0x44($a1)
    if (v0 != 0) goto label_0x15dad8;                           // 0x0015dac0: bnez $v0, 0x15dad8
    /* nop */                                                   // 0x0015dac4: nop 
    goto label_0x15dad8;                                        // 0x0015dac8: b 0x15dad8
    s1 = 2;                                                     // 0x0015dacc: addiu $s1, $zero, 2
label_0x15dad0:
    func_00163410();  // 163410                                // 0x0015dad0: jal 0x163410
    a0 = &str_00227548;  // "mwl_convPtypeToSFD : Invalid Ptype" // 0x0015dad4: addiu $a0, $a0, 0x7548
label_0x15dad8:
    func_0015e5f0();  // 15e5f0                                // 0x0015dad8: jal 0x15e5f0
    /* nop */                                                   // 0x0015dadc: nop 
    v0 = 1;                                                     // 0x0015dae4: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x15db08;                          // 0x0015dae8: bnel $s0, $v0, 0x15db08
    func_00161d80();  // 161d80                                // 0x0015daf0: jal 0x161d80
    v1 = 2;                                                     // 0x0015daf8: addiu $v1, $zero, 2
    v0 = v0 ^ s0;                                               // 0x0015dafc: xor $v0, $v0, $s0
    if (v0 == 0) s1 = v1;                                       // 0x0015db00: movz $s1, $v1, $v0
label_0x15db08:
    return;                                                     // 0x0015db18: jr $ra
    sp = sp + 0x20;                                             // 0x0015db1c: addiu $sp, $sp, 0x20
}