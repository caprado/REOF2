void func_00163540() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00163540: addiu $sp, $sp, -0x20
    v0 = (s1 < 0xa) ? 1 : 0;                                    // 0x00163558: slti $v0, $s1, 0xa
    /* nop */                                                   // 0x0016355c: nop 
label_0x163560:
    if (v0 == 0) goto label_0x163594;                           // 0x00163560: beqz $v0, 0x163594
    s1 = s1 + 1;                                                // 0x00163564: addiu $s1, $s1, 1
    a1 = 1;                                                     // 0x00163568: addiu $a1, $zero, 1
    func_00164028();  // 0x163fe8                                // 0x0016356c: jal 0x163fe8
    func_0012bd80();  // 0x12bd00                                // 0x00163574: jal 0x12bd00
    /* nop */                                                   // 0x00163578: nop 
    func_00164028();  // 0x163fe8                                // 0x00163580: jal 0x163fe8
    v0 = *(int32_t*)((s0) + 0x60);                              // 0x00163588: lw $v0, 0x60($s0)
    if (v0 != 0) goto label_0x163560;                           // 0x0016358c: bnez $v0, 0x163560
    v0 = (s1 < 0xa) ? 1 : 0;                                    // 0x00163590: slti $v0, $s1, 0xa
label_0x163594:
    return;                                                     // 0x001635a0: jr $ra
    sp = sp + 0x20;                                             // 0x001635a4: addiu $sp, $sp, 0x20
}