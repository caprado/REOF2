void func_001af5c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001af5c0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001af5c4: lui $at, 0x31
    v1 = g_003137da;  // Global at 0x003137da                   // 0x001af5cc: lbu $v1, 0x37da($at)
    if (v1 == 0) goto label_0x1af634;                           // 0x001af5d0: beqz $v1, 0x1af634
    /* nop */                                                   // 0x001af5d4: nop 
    func_001afb40();  // 1afb40                                // 0x001af5d8: jal 0x1afb40
    /* nop */                                                   // 0x001af5dc: nop 
    v1 = 3;                                                     // 0x001af5e0: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af634;                          // 0x001af5e4: beq $v0, $v1, 0x1af634
    v1 = 2;                                                     // 0x001af5e8: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af634;                          // 0x001af5ec: beq $v0, $v1, 0x1af634
    /* nop */                                                   // 0x001af5f0: nop 
    v1 = 1;                                                     // 0x001af5f4: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af62c;                          // 0x001af5f8: beq $v0, $v1, 0x1af62c
    /* nop */                                                   // 0x001af5fc: nop 
    if (v0 == 0) goto label_0x1af610;                           // 0x001af600: beqz $v0, 0x1af610
    at = 0x49 << 16;                                            // 0x001af604: lui $at, 0x49
    goto label_0x1af638;                                        // 0x001af608: b 0x1af638
label_0x1af610:
    v1 = g_00491364;  // Global at 0x00491364                   // 0x001af610: lbu $v1, 0x1364($at)
    if (v1 != 0) goto label_0x1af634;                           // 0x001af614: bnez $v1, 0x1af634
    /* nop */                                                   // 0x001af618: nop 
    func_007d2820();  // 0x7d2820                               // 0x001af61c: jal 0x7d2820
    /* nop */                                                   // 0x001af620: nop 
    goto label_0x1af634;                                        // 0x001af624: b 0x1af634
    /* nop */                                                   // 0x001af628: nop 
label_0x1af62c:
    func_007d4860();  // 0x7d4860                               // 0x001af62c: jal 0x7d4860
    /* nop */                                                   // 0x001af630: nop 
label_0x1af634:
label_0x1af638:
    return;                                                     // 0x001af638: jr $ra
    sp = sp + 0x10;                                             // 0x001af63c: addiu $sp, $sp, 0x10
}