void func_00155aa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x00155aa0: lui $v0, 0x25
    v0 = v0 + 0x6390;                                           // 0x00155aa4: addiu $v0, $v0, 0x6390
    a2 = g_002563d0;  // Global at 0x002563d0                   // 0x00155aa8: lw $a2, 0x40($v0)
    if (a2 <= 0) goto label_0x155aec;                           // 0x00155aac: blez $a2, 0x155aec
    v1 = g_002563d4;  // Global at 0x002563d4                   // 0x00155ab0: lw $v1, 0x44($v0)
    v0 = a0 << 2;                                               // 0x00155ab4: sll $v0, $a0, 2
    a3 = 2;                                                     // 0x00155ab8: addiu $a3, $zero, 2
    v0 = v1 + v0;                                               // 0x00155abc: addu $v0, $v1, $v0
    a0 = v0 + 0x18;                                             // 0x00155ac0: addiu $a0, $v0, 0x18
    /* nop */                                                   // 0x00155ac4: nop 
label_0x155ac8:
    v0 = *(int32_t*)(v1);                                       // 0x00155ac8: lw $v0, 0($v1)
    if (v0 != a3) goto label_0x155ad8;                          // 0x00155acc: bne $v0, $a3, 0x155ad8
    v1 = v1 + 0x6a0;                                            // 0x00155ad0: addiu $v1, $v1, 0x6a0
    g_002563a8 = a1;  // Global at 0x002563a8                   // 0x00155ad4: sw $a1, 0($a0)
label_0x155ad8:
    a2 = a2 + -1;                                               // 0x00155ad8: addiu $a2, $a2, -1
    /* nop */                                                   // 0x00155adc: nop 
    /* nop */                                                   // 0x00155ae0: nop 
    if (a2 != 0) goto label_0x155ac8;                           // 0x00155ae4: bnez $a2, 0x155ac8
    a0 = a0 + 0x6a0;                                            // 0x00155ae8: addiu $a0, $a0, 0x6a0
label_0x155aec:
    return;                                                     // 0x00155aec: jr $ra
    /* nop */                                                   // 0x00155af0: nop 
}