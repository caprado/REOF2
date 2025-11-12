void func_00150708() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x3f;                                                  // 0x00150708: addiu $v0, $zero, 0x3f
    v0 = v0 + -0x20;                                            // 0x0015070c: addiu $v0, $v0, -0x20
label_0x150710:
    /* nop */                                                   // 0x00150710: nop 
    /* nop */                                                   // 0x00150714: nop 
    /* nop */                                                   // 0x00150718: nop 
    /* nop */                                                   // 0x0015071c: nop 
    /* nop */                                                   // 0x00150720: nop 
    if (v0 >= 0) goto label_0x150710;                           // 0x00150724: bgezl $v0, 0x150710
    v0 = v0 + -0x20;                                            // 0x00150728: addiu $v0, $v0, -0x20
    return;                                                     // 0x0015072c: jr $ra
    /* nop */                                                   // 0x00150730: nop 
}