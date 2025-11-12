void func_0013acb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x0013acb8: lui $v0, 0x20
    a0 = v0 + 0x40f0;                                           // 0x0013acc0: addiu $a0, $v0, 0x40f0
    a3 = 1;                                                     // 0x0013acc4: addiu $a3, $zero, 1
    a2 = 2;                                                     // 0x0013acc8: addiu $a2, $zero, 2
    /* nop */                                                   // 0x0013accc: nop 
label_0x13acd0:
    v0 = g_002040f0;  // Global at 0x002040f0                   // 0x0013acd0: lb $v0, 0($a0)
    if (v0 != a3) goto label_0x13acec;                          // 0x0013acd4: bnel $v0, $a3, 0x13acec
    a1 = a1 + 1;                                                // 0x0013acd8: addiu $a1, $a1, 1
    v1 = g_002040f2;  // Global at 0x002040f2                   // 0x0013acdc: lb $v1, 2($a0)
    if (v1 == a2) goto label_0x13ad00;                          // 0x0013ace0: beq $v1, $a2, 0x13ad00
    v0 = 1;                                                     // 0x0013ace4: addiu $v0, $zero, 1
    a1 = a1 + 1;                                                // 0x0013ace8: addiu $a1, $a1, 1
label_0x13acec:
    v0 = (a1 < 0xd) ? 1 : 0;                                    // 0x0013acec: slti $v0, $a1, 0xd
    /* nop */                                                   // 0x0013acf0: nop 
    if (v0 != 0) goto label_0x13acd0;                           // 0x0013acf4: bnez $v0, 0x13acd0
    a0 = a0 + 0x30;                                             // 0x0013acf8: addiu $a0, $a0, 0x30
label_0x13ad00:
    return;                                                     // 0x0013ad00: jr $ra
    /* nop */                                                   // 0x0013ad04: nop 
}