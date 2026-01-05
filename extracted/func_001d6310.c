void func_001d6310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d6310: addiu $sp, $sp, -0x10
    if (t5 != 0) goto label_0x1d6328;                           // 0x001d6318: bnez $t5, 0x1d6328
    goto label_0x1d638c;                                        // 0x001d6320: b 0x1d638c
label_0x1d6328:
    t4 = 0x33 << 16;                                            // 0x001d6328: lui $t4, 0x33
    goto label_0x1d6380;                                        // 0x001d6330: b 0x1d6380
    t4 = t4 + -0x1530;                                          // 0x001d6334: addiu $t4, $t4, -0x1530
label_0x1d6338:
    v0 = g_0032ead0;  // Global at 0x0032ead0                   // 0x001d6338: lbu $v0, 0($t4)
    if (v0 == 0) goto label_0x1d6378;                           // 0x001d633c: beqz $v0, 0x1d6378
    /* nop */                                                   // 0x001d6340: nop 
    v0 = g_0032ead3;  // Global at 0x0032ead3                   // 0x001d6344: lbu $v0, 3($t4)
    v0 = v0 & 4;                                                // 0x001d6348: andi $v0, $v0, 4
    if (v0 == 0) goto label_0x1d6378;                           // 0x001d634c: beqz $v0, 0x1d6378
    /* nop */                                                   // 0x001d6350: nop 
    a0 = g_0032ead4;  // Global at 0x0032ead4                   // 0x001d6354: lw $a0, 4($t4)
    if (a0 == 0) goto label_0x1d6378;                           // 0x001d6358: beqz $a0, 0x1d6378
    func_001d6250();  // 1d6250                                // 0x001d6360: jal 0x1d6250
    /* nop */                                                   // 0x001d6364: nop 
    if (v0 == 0) goto label_0x1d6378;                           // 0x001d6368: beqz $v0, 0x1d6378
    /* nop */                                                   // 0x001d636c: nop 
    goto label_0x1d638c;                                        // 0x001d6370: b 0x1d638c
    v0 = 1;                                                     // 0x001d6374: addiu $v0, $zero, 1
label_0x1d6378:
    t3 = t3 + 1;                                                // 0x001d6378: addiu $t3, $t3, 1
    t4 = t4 + 0xc;                                              // 0x001d637c: addiu $t4, $t4, 0xc
label_0x1d6380:
    v0 = (t3 < 0x10) ? 1 : 0;                                   // 0x001d6380: slti $v0, $t3, 0x10
    if (v0 != 0) goto label_0x1d6338;                           // 0x001d6384: bnez $v0, 0x1d6338
label_0x1d638c:
    return;                                                     // 0x001d6390: jr $ra
    sp = sp + 0x10;                                             // 0x001d6394: addiu $sp, $sp, 0x10
}