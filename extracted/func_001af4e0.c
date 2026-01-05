void func_001af4e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001af4e0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001af4e4: lui $at, 0x31
    v1 = g_003137da;  // Global at 0x003137da                   // 0x001af4ec: lbu $v1, 0x37da($at)
    if (v1 == 0) goto label_0x1af554;                           // 0x001af4f0: beqz $v1, 0x1af554
    /* nop */                                                   // 0x001af4f4: nop 
    func_001afb40();  // 1afb40                                // 0x001af4f8: jal 0x1afb40
    /* nop */                                                   // 0x001af4fc: nop 
    v1 = 3;                                                     // 0x001af500: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af554;                          // 0x001af504: beq $v0, $v1, 0x1af554
    v1 = 2;                                                     // 0x001af508: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af554;                          // 0x001af50c: beq $v0, $v1, 0x1af554
    /* nop */                                                   // 0x001af510: nop 
    v1 = 1;                                                     // 0x001af514: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af54c;                          // 0x001af518: beq $v0, $v1, 0x1af54c
    /* nop */                                                   // 0x001af51c: nop 
    if (v0 == 0) goto label_0x1af530;                           // 0x001af520: beqz $v0, 0x1af530
    at = 0x49 << 16;                                            // 0x001af524: lui $at, 0x49
    goto label_0x1af558;                                        // 0x001af528: b 0x1af558
label_0x1af530:
    v1 = g_00491364;  // Global at 0x00491364                   // 0x001af530: lbu $v1, 0x1364($at)
    if (v1 != 0) goto label_0x1af554;                           // 0x001af534: bnez $v1, 0x1af554
    /* nop */                                                   // 0x001af538: nop 
    func_007d2200();  // 0x7d2200                               // 0x001af53c: jal 0x7d2200
    /* nop */                                                   // 0x001af540: nop 
    goto label_0x1af554;                                        // 0x001af544: b 0x1af554
    /* nop */                                                   // 0x001af548: nop 
label_0x1af54c:
    func_007d3db0();  // 0x7d3db0                               // 0x001af54c: jal 0x7d3db0
    /* nop */                                                   // 0x001af550: nop 
label_0x1af554:
label_0x1af558:
    return;                                                     // 0x001af558: jr $ra
    sp = sp + 0x10;                                             // 0x001af55c: addiu $sp, $sp, 0x10
}