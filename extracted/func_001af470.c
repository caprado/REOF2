void func_001af470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001af470: addiu $sp, $sp, -0x10
    func_001afb40();  // 1afb40                                // 0x001af478: jal 0x1afb40
    /* nop */                                                   // 0x001af47c: nop 
    v1 = 3;                                                     // 0x001af480: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af4c8;                          // 0x001af484: beq $v0, $v1, 0x1af4c8
    v1 = 2;                                                     // 0x001af488: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af4c8;                          // 0x001af48c: beq $v0, $v1, 0x1af4c8
    /* nop */                                                   // 0x001af490: nop 
    v1 = 1;                                                     // 0x001af494: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af4c0;                          // 0x001af498: beq $v0, $v1, 0x1af4c0
    /* nop */                                                   // 0x001af49c: nop 
    if (v0 == 0) goto label_0x1af4b0;                           // 0x001af4a0: beqz $v0, 0x1af4b0
    /* nop */                                                   // 0x001af4a4: nop 
    goto label_0x1af4cc;                                        // 0x001af4a8: b 0x1af4cc
label_0x1af4b0:
    func_007d2aa0();  // 0x7d2aa0                               // 0x001af4b0: jal 0x7d2aa0
    /* nop */                                                   // 0x001af4b4: nop 
    goto label_0x1af4c8;                                        // 0x001af4b8: b 0x1af4c8
    /* nop */                                                   // 0x001af4bc: nop 
label_0x1af4c0:
    func_007d4ac0();  // 0x7d4ac0                               // 0x001af4c0: jal 0x7d4ac0
    /* nop */                                                   // 0x001af4c4: nop 
label_0x1af4c8:
label_0x1af4cc:
    return;                                                     // 0x001af4cc: jr $ra
    sp = sp + 0x10;                                             // 0x001af4d0: addiu $sp, $sp, 0x10
}