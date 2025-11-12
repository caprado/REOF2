void func_0015afa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x25 << 16;                                            // 0x0015afa0: lui $v0, 0x25
    v0 = v0 + 0x63f0;                                           // 0x0015afa4: addiu $v0, $v0, 0x63f0
    a0 = g_00256444;  // Global at 0x00256444                   // 0x0015afa8: lw $a0, 0x54($v0)
    if (a0 <= 0) goto label_0x15afdc;                           // 0x0015afac: blez $a0, 0x15afdc
    v1 = g_00256448;  // Global at 0x00256448                   // 0x0015afb0: lw $v1, 0x58($v0)
    a0 = 1;                                                     // 0x0015afb8: addiu $a0, $zero, 1
    /* nop */                                                   // 0x0015afbc: nop 
label_0x15afc0:
    v0 = v0 + -1;                                               // 0x0015afc0: addiu $v0, $v0, -1
    *(uint32_t*)((v1) + 0x188) = a0;                            // 0x0015afc4: sw $a0, 0x188($v1)
    /* nop */                                                   // 0x0015afc8: nop 
    /* nop */                                                   // 0x0015afcc: nop 
    /* nop */                                                   // 0x0015afd0: nop 
    if (v0 != 0) goto label_0x15afc0;                           // 0x0015afd4: bnez $v0, 0x15afc0
    v1 = v1 + 0x3e0;                                            // 0x0015afd8: addiu $v1, $v1, 0x3e0
label_0x15afdc:
    return;                                                     // 0x0015afdc: jr $ra
    /* nop */                                                   // 0x0015afe0: nop 
}