void func_0019e710() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a2 << 8;                                               // 0x0019e710: sll $v1, $a2, 8
    t1 = 0x21 << 16;                                            // 0x0019e714: lui $t1, 0x21
    a3 = v1 + -0x20;                                            // 0x0019e718: addiu $a3, $v1, -0x20
    t1 = t1 + 0x7590;                                           // 0x0019e71c: addiu $t1, $t1, 0x7590
label_0x19e724:
    t0 = g_00217590;  // Global at 0x00217590                   // 0x0019e724: lw $t0, 0($t1)
    t1 = t1 + 4;                                                // 0x0019e72c: addiu $t1, $t1, 4
label_0x19e730:
label_0x19e734:
    a2 = *(int32_t*)(t0);                                       // 0x0019e734: lw $a2, 0($t0)
    t3 = t3 + 1;                                                // 0x0019e738: addiu $t3, $t3, 1
    v1 = (t3 < 0x20) ? 1 : 0;                                   // 0x0019e73c: slti $v1, $t3, 0x20
    a2 = a0 + a2;                                               // 0x0019e740: addu $a2, $a0, $a2
    t0 = t0 + 4;                                                // 0x0019e744: addiu $t0, $t0, 4
    a2 = *(uint8_t*)(a2);                                       // 0x0019e748: lbu $a2, 0($a2)
    *(uint8_t*)(a1) = a2;                                       // 0x0019e74c: sb $a2, 0($a1)
    if (v1 != 0) goto label_0x19e734;                           // 0x0019e750: bnez $v1, 0x19e734
    a1 = a1 + 1;                                                // 0x0019e754: addiu $a1, $a1, 1
    t4 = t4 + 1;                                                // 0x0019e758: addiu $t4, $t4, 1
    v1 = (t4 < 2) ? 1 : 0;                                      // 0x0019e75c: slti $v1, $t4, 2
    if (v1 != 0) goto label_0x19e730;                           // 0x0019e760: bnez $v1, 0x19e730
    a1 = a1 + a3;                                               // 0x0019e764: addu $a1, $a1, $a3
    t2 = t2 + 1;                                                // 0x0019e768: addiu $t2, $t2, 1
    v1 = (t2 < 4) ? 1 : 0;                                      // 0x0019e76c: slti $v1, $t2, 4
    if (v1 != 0) goto label_0x19e724;                           // 0x0019e770: bnez $v1, 0x19e724
    a0 = a0 + 0x200;                                            // 0x0019e774: addiu $a0, $a0, 0x200
    return;                                                     // 0x0019e778: jr $ra
    /* nop */                                                   // 0x0019e77c: nop 
}