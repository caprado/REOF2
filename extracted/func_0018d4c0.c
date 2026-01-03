void func_0018d4c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0018d4c0: addiu $sp, $sp, -0x10
    v0 = 0x29 << 16;                                            // 0x0018d4c4: lui $v0, 0x29
    at = 0x29 << 16;                                            // 0x0018d4cc: lui $at, 0x29
    v1 = g_00290374;  // Global at 0x00290374                   // 0x0018d4d0: lw $v1, 0x374($at)
    v0 = v0 + -0x350;                                           // 0x0018d4d4: addiu $v0, $v0, -0x350
    v1 = v1 ^ 1;                                                // 0x0018d4d8: xori $v1, $v1, 1
    v1 = v1 << 2;                                               // 0x0018d4dc: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x0018d4e0: addu $v0, $v0, $v1
    v1 = v0 + 0x14;                                             // 0x0018d4e4: addiu $v1, $v0, 0x14
label_0x18d4e8:
    v0 = g_0028fcc4;  // Global at 0x0028fcc4                   // 0x0018d4e8: lw $v0, 0($v1)
    /* nop */                                                   // 0x0018d4ec: nop 
    /* nop */                                                   // 0x0018d4f0: nop 
    /* nop */                                                   // 0x0018d4f4: nop 
    /* nop */                                                   // 0x0018d4f8: nop 
    if (v0 != 0) goto label_0x18d4e8;                           // 0x0018d4fc: bnez $v0, 0x18d4e8
    /* nop */                                                   // 0x0018d500: nop 
label_0x18d504:
    at = 0x29 << 16;                                            // 0x0018d504: lui $at, 0x29
    a1 = 1;                                                     // 0x0018d508: addiu $a1, $zero, 1
    a0 = g_00290338;  // Global at 0x00290338                   // 0x0018d50c: lw $a0, 0x338($at)
    func_00103650();  // 103650                                // 0x0018d510: jal 0x103650
    if (v0 != 0) goto label_0x18d504;                           // 0x0018d518: bnez $v0, 0x18d504
    /* nop */                                                   // 0x0018d51c: nop 
    v0 = 1;                                                     // 0x0018d524: addiu $v0, $zero, 1
    return;                                                     // 0x0018d528: jr $ra
    sp = sp + 0x10;                                             // 0x0018d52c: addiu $sp, $sp, 0x10
}