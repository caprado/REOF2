void func_0013b450() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013b450: addiu $sp, $sp, -0x20
    if (s1 == 0) goto label_0x13b4e8;                           // 0x0013b460: beqz $s1, 0x13b4e8
    v0 = *(uint8_t*)((s1) + 2);                                 // 0x0013b468: lbu $v0, 2($s1)
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0013b46c: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x13b484 */                                   // 0x0013b470: bnezl $v0, 0x13b484
    v0 = *(int8_t*)((s1) + 1);                                  // 0x0013b474: lb $v0, 1($s1)
    func_0013b760();  // 13b760                                // 0x0013b478: jal 0x13b760
    /* nop */                                                   // 0x0013b47c: nop 
    v0 = *(int8_t*)((s1) + 1);                                  // 0x0013b480: lb $v0, 1($s1)
    /* bnezl $v0, 0x13b4d0 */                                   // 0x0013b484: bnezl $v0, 0x13b4d0
    *(uint8_t*)(s1) = 0;                                        // 0x0013b488: sb $zero, 0($s1)
    func_00137ec8();  // 137ec8                                // 0x0013b48c: jal 0x137ec8
    a0 = 0x5000;                                                // 0x0013b490: addiu $a0, $zero, 0x5000
    func_00138240();  // 138240                                // 0x0013b494: jal 0x138240
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x0013b498: lw $a0, 0x18($s1)
    a0 = 0x5001;                                                // 0x0013b49c: addiu $a0, $zero, 0x5001
    func_00137ec8();  // 137ec8                                // 0x0013b4a0: jal 0x137ec8
    if (s0 >= 0) goto label_0x13b4d0;                           // 0x0013b4a8: bgezl $s0, 0x13b4d0
    *(uint8_t*)(s1) = 0;                                        // 0x0013b4ac: sb $zero, 0($s1)
    v0 = 0x20 << 16;                                            // 0x0013b4b0: lui $v0, 0x20
    v1 = g_002044a4;  // Global at 0x002044a4                   // 0x0013b4b4: lw $v1, 0x44a4($v0)
    /* bnezl $v1, 0x13b4d0 */                                   // 0x0013b4b8: bnezl $v1, 0x13b4d0
    *(uint8_t*)(s1) = 0;                                        // 0x0013b4bc: sb $zero, 0($s1)
    a0 = 0x22 << 16;                                            // 0x0013b4c0: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x0013b4c4: jal 0x116508
    a0 = &str_00225918;  // "E0092712:handl is null."           // 0x0013b4c8: addiu $a0, $a0, 0x5918
    *(uint8_t*)(s1) = 0;                                        // 0x0013b4cc: sb $zero, 0($s1)
label_0x13b4d0:
    return func_0013b450();  // Tail call                        // 0x0013b4e0: j 0x13b2a8
    sp = sp + 0x20;                                             // 0x0013b4e4: addiu $sp, $sp, 0x20
label_0x13b4e8:
    return;                                                     // 0x0013b4f4: jr $ra
    sp = sp + 0x20;                                             // 0x0013b4f8: addiu $sp, $sp, 0x20
}