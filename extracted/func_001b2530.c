void func_001b2530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int16_t*)((gp) + -0x6368);                           // 0x001b2530: lh $v1, -0x6368($gp)
    at = (v1 < 0x100) ? 1 : 0;                                  // 0x001b2534: slti $at, $v1, 0x100
    if (at == 0) goto label_0x1b2554;                           // 0x001b2538: beqz $at, 0x1b2554
    /* nop */                                                   // 0x001b253c: nop 
    a0 = *(int32_t*)((gp) + -0x6370);                           // 0x001b2540: lw $a0, -0x6370($gp)
    v1 = v1 + 1;                                                // 0x001b2544: addiu $v1, $v1, 1
    *(uint16_t*)((gp) + -0x6368) = v1;                          // 0x001b2548: sh $v1, -0x6368($gp)
    v1 = a0 + -2;                                               // 0x001b254c: addiu $v1, $a0, -2
    *(uint32_t*)((gp) + -0x6370) = v1;                          // 0x001b2550: sw $v1, -0x6370($gp)
label_0x1b2554:
    return;                                                     // 0x001b2554: jr $ra
    /* nop */                                                   // 0x001b2558: nop 
}