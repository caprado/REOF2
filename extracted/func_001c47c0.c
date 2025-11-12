void func_001c47c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x20);                              // 0x001c47c0: lw $v1, 0x20($a0)
    v0 = 3;                                                     // 0x001c47c4: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x1c47d8;                          // 0x001c47c8: beq $v1, $v0, 0x1c47d8
    at = 0x49 << 16;                                            // 0x001c47cc: lui $at, 0x49
    goto label_0x1c47f0;                                        // 0x001c47d0: b 0x1c47f0
    v0 = *(uint16_t*)((a0) + 0xa);                              // 0x001c47d4: lhu $v0, 0xa($a0)
label_0x1c47d8:
    v0 = g_00491360;  // Global at 0x00491360                   // 0x001c47d8: lw $v0, 0x1360($at)
    v0 = v0 & 0x20;                                             // 0x001c47dc: andi $v0, $v0, 0x20
    if (v0 == 0) goto label_0x1c4808;                           // 0x001c47e0: beqz $v0, 0x1c4808
    goto label_0x1c4808;                                        // 0x001c47e8: b 0x1c4808
    v0 = 1;                                                     // 0x001c47ec: addiu $v0, $zero, 1
label_0x1c47f0:
    v0 = v0 & 0x20;                                             // 0x001c47f0: andi $v0, $v0, 0x20
    if (v0 == 0) goto label_0x1c4804;                           // 0x001c47f4: beqz $v0, 0x1c4804
    /* nop */                                                   // 0x001c47f8: nop 
    goto label_0x1c4808;                                        // 0x001c47fc: b 0x1c4808
    v0 = 1;                                                     // 0x001c4800: addiu $v0, $zero, 1
label_0x1c4804:
label_0x1c4808:
    return;                                                     // 0x001c4808: jr $ra
    /* nop */                                                   // 0x001c480c: nop 
}