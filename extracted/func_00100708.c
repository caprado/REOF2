void func_00100708() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00100708: addiu $sp, $sp, -0x40
    v0 = 0x1f << 16;                                            // 0x0010070c: lui $v0, 0x1f
    v1 = g_001edf40;  // Global at 0x001edf40                   // 0x0010071c: lw $v1, -0x20c0($v0)
    if (v1 >= 0) goto label_0x100738;                           // 0x00100728: bgez $v1, 0x100738
    func_001007e0();  // 1007e0                                // 0x00100730: jal 0x1007e0
    /* nop */                                                   // 0x00100734: nop 
label_0x100738:
    func_0011d320();  // 11d320                                // 0x00100738: jal 0x11d320
    /* nop */                                                   // 0x0010073c: nop 
    a1 = 0x25 << 16;                                            // 0x00100740: lui $a1, 0x25
    a0 = 0x25 << 16;                                            // 0x00100744: lui $a0, 0x25
    s1 = g_0024b708;  // Global at 0x0024b708                   // 0x00100748: lw $s1, -0x48f8($a1)
    v1 = 0x25 << 16;                                            // 0x0010074c: lui $v1, 0x25
    g_0024b710 = s0;  // Global at 0x0024b710                   // 0x00100750: sw $s0, -0x48f0($a0)
    g_0024b708 = s2;  // Global at 0x0024b708                   // 0x00100754: sw $s2, -0x48f8($a1)
    g_0024b70c = gp;  // Global at 0x0024b70c                   // 0x00100758: sw $gp, -0x48f4($v1)
    if (v0 == 0) goto label_0x100770;                           // 0x0010075c: beqz $v0, 0x100770
    func_0011d378();  // 11d378                                // 0x00100764: jal 0x11d378
    /* nop */                                                   // 0x00100768: nop 
label_0x100770:
    return;                                                     // 0x00100780: jr $ra
    sp = sp + 0x40;                                             // 0x00100784: addiu $sp, $sp, 0x40
}