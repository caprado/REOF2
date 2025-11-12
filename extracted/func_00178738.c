void func_00178738() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00178738: addiu $sp, $sp, -0x20
    a1 = 8;                                                     // 0x0017873c: addiu $a1, $zero, 8
    func_00177950();  // 0x177938                                // 0x00178750: jal 0x177938
    s1 = 1;                                                     // 0x00178754: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x1787a0;                          // 0x00178758: beq $v0, $s1, 0x1787a0
    func_001679e0();  // 0x1679c0                                // 0x00178760: jal 0x1679c0
    a1 = *(int32_t*)((s0) + 0x1cd0);                            // 0x00178764: lw $a1, 0x1cd0($s0)
    if (v0 != s1) goto label_0x1787a0;                          // 0x00178768: bne $v0, $s1, 0x1787a0
    func_001787c0();  // 0x1787b8                                // 0x00178770: jal 0x1787b8
    /* nop */                                                   // 0x00178774: nop 
    if (v0 == 0) goto label_0x1787a0;                           // 0x00178778: beqz $v0, 0x1787a0
    a1 = 8;                                                     // 0x00178788: addiu $a1, $zero, 8
    a2 = 1;                                                     // 0x00178790: addiu $a2, $zero, 1
    return func_00177920();  // Tail call                       // 0x00178794: j 0x177920
    sp = sp + 0x20;                                             // 0x00178798: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017879c: nop 
label_0x1787a0:
    return;                                                     // 0x001787ac: jr $ra
    sp = sp + 0x20;                                             // 0x001787b0: addiu $sp, $sp, 0x20
}