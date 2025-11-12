void func_001b4750() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b4750: addiu $sp, $sp, -0x20
    a0 = *(int32_t*)((gp) + -0x63a8);                           // 0x001b475c: lw $a0, -0x63a8($gp)
    if (a0 != 0) goto label_0x1b4784;                           // 0x001b4760: bnez $a0, 0x1b4784
    /* nop */                                                   // 0x001b4764: nop 
    a0 = 0x28 << 16;                                            // 0x001b4768: lui $a0, 0x28
    thunk_func_001a0a20();  // 0x18dab0                          // 0x001b476c: jal 0x18dab0
    a1 = 1;                                                     // 0x001b4770: addiu $a1, $zero, 1
    *(uint32_t*)((gp) + -0x63a8) = v0;                          // 0x001b4774: sw $v0, -0x63a8($gp)
    a0 = *(int32_t*)((gp) + -0x63a8);                           // 0x001b4778: lw $a0, -0x63a8($gp)
    if (a0 == 0) goto label_0x1b47e0;                           // 0x001b477c: beqz $a0, 0x1b47e0
    /* nop */                                                   // 0x001b4780: nop 
label_0x1b4784:
    func_0018db10();  // 0x18db00                                // 0x001b4784: jal 0x18db00
    /* nop */                                                   // 0x001b4788: nop 
    if (s0 != 0) goto label_0x1b47a8;                           // 0x001b4790: bnez $s0, 0x1b47a8
    at = 0x22 << 16;                                            // 0x001b4794: lui $at, 0x22
    func_001b4750();  // 0x1b4710                                // 0x001b4798: jal 0x1b4710
    /* nop */                                                   // 0x001b479c: nop 
    goto label_0x1b47e4;                                        // 0x001b47a0: b 0x1b47e4
label_0x1b47a8:
    a0 = g_0021c4fc;  // Global at 0x0021c4fc                   // 0x001b47ac: lw $a0, -0x3b04($at)
    a2 = 1;                                                     // 0x001b47b0: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001b47b4: jal 0x1d3390
    v0 = 1;                                                     // 0x001b47bc: addiu $v0, $zero, 1
    at = 0x31 << 16;                                            // 0x001b47c0: lui $at, 0x31
    g_003137cb = v0;  // Global at 0x003137cb                   // 0x001b47c4: sb $v0, 0x37cb($at)
    at = 0x31 << 16;                                            // 0x001b47cc: lui $at, 0x31
    a0 = 7;                                                     // 0x001b47d0: addiu $a0, $zero, 7
    a3 = g_00313804;  // Global at 0x00313804                   // 0x001b47d4: lhu $a3, 0x3804($at)
    func_001b4d00();  // 0x1b4a80                                // 0x001b47d8: jal 0x1b4a80
    a2 = 0x600;                                                 // 0x001b47dc: addiu $a2, $zero, 0x600
label_0x1b47e0:
label_0x1b47e4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b47e4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b47e8: jr $ra
    sp = sp + 0x20;                                             // 0x001b47ec: addiu $sp, $sp, 0x20
}