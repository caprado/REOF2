void func_001af560() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001af560: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001af564: lui $at, 0x31
    v1 = g_003137da;  // Global at 0x003137da                   // 0x001af56c: lbu $v1, 0x37da($at)
    if (v1 == 0) goto label_0x1af5b4;                           // 0x001af570: beqz $v1, 0x1af5b4
    /* nop */                                                   // 0x001af574: nop 
    func_001afb40();  // 1afb40                                // 0x001af578: jal 0x1afb40
    /* nop */                                                   // 0x001af57c: nop 
    v1 = 3;                                                     // 0x001af580: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af5b4;                          // 0x001af584: beq $v0, $v1, 0x1af5b4
    v1 = 2;                                                     // 0x001af588: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af5b4;                          // 0x001af58c: beq $v0, $v1, 0x1af5b4
    /* nop */                                                   // 0x001af590: nop 
    if (v0 == 0) goto label_0x1af5b4;                           // 0x001af594: beqz $v0, 0x1af5b4
    v1 = 1;                                                     // 0x001af598: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af5ac;                          // 0x001af59c: beq $v0, $v1, 0x1af5ac
    /* nop */                                                   // 0x001af5a0: nop 
    goto label_0x1af5b8;                                        // 0x001af5a4: b 0x1af5b8
label_0x1af5ac:
    func_007d41d0();  // 0x7d41d0                               // 0x001af5ac: jal 0x7d41d0
    /* nop */                                                   // 0x001af5b0: nop 
label_0x1af5b4:
label_0x1af5b8:
    return;                                                     // 0x001af5b8: jr $ra
    sp = sp + 0x10;                                             // 0x001af5bc: addiu $sp, $sp, 0x10
}