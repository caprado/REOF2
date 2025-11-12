void func_001cfc90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cfc90: addiu $sp, $sp, -0x20
    v0 = *(uint8_t*)((gp) + -0x62c4);                           // 0x001cfc9c: lbu $v0, -0x62c4($gp)
    if (v0 != 0) goto label_0x1cfcd0;                           // 0x001cfca0: bnez $v0, 0x1cfcd0
    at = 0x1000 << 16;                                          // 0x001cfca4: lui $at, 0x1000
    at = 0x1000 << 16;                                          // 0x001cfca8: lui $at, 0x1000
    v1 = 0x83;                                                  // 0x001cfcac: addiu $v1, $zero, 0x83
    g_10000810 = 0;  // Global at 0x10000810                    // 0x001cfcb0: sw $zero, 0x810($at)
    v0 = 1;                                                     // 0x001cfcb4: addiu $v0, $zero, 1
    at = 0x1000 << 16;                                          // 0x001cfcb8: lui $at, 0x1000
    g_10000800 = 0;  // Global at 0x10000800                    // 0x001cfcbc: sw $zero, 0x800($at)
    at = 0x1000 << 16;                                          // 0x001cfcc0: lui $at, 0x1000
    g_10000810 = v1;  // Global at 0x10000810                   // 0x001cfcc4: sw $v1, 0x810($at)
    *(uint8_t*)((gp) + -0x62c4) = v0;                           // 0x001cfcc8: sb $v0, -0x62c4($gp)
    at = 0x1000 << 16;                                          // 0x001cfccc: lui $at, 0x1000
label_0x1cfcd0:
    v0 = *(int32_t*)((gp) + -0x62c0);                           // 0x001cfcd0: lw $v0, -0x62c0($gp)
    v1 = g_10000800;  // Global at 0x10000800                   // 0x001cfcd4: lw $v1, 0x800($at)
    v0 = v1 - v0;                                               // 0x001cfcd8: subu $v0, $v1, $v0
    if (v0 <= 0) goto label_0x1cfd38;                           // 0x001cfcdc: blez $v0, 0x1cfd38
    *(uint32_t*)((gp) + -0x62c0) = v1;                          // 0x001cfce0: sw $v1, -0x62c0($gp)
    /* move to FPU: $v0, $f0 */                                 // 0x001cfce4: mtc1 $v0, $f0
    func_001115a0();  // 0x111560                                // 0x001cfce8: jal 0x111560
    /* FPU: cvt.s.w $f12, $f0 */                                // 0x001cfcec: cvt.s.w $f12, $f0
    v1 = 0x4030 << 16;                                          // 0x001cfcf0: lui $v1, 0x4030
    func_00111e20();  // 0x111ce0                                // 0x001cfcf8: jal 0x111ce0
    func_00112048();  // 0x111f90                                // 0x001cfd04: jal 0x111f90
    a0 = 0x3e8;                                                 // 0x001cfd08: addiu $a0, $zero, 0x3e8
    func_00111e20();  // 0x111ce0                                // 0x001cfd10: jal 0x111ce0
    func_00111ce0();  // 0x111a58                                // 0x001cfd1c: jal 0x111a58
    func_00112170();  // 0x112118                                // 0x001cfd24: jal 0x112118
    FPU_F1 = *(float*)((gp) + -0x62bc);  // Load float          // 0x001cfd2c: lwc1 $f1, -0x62bc($gp)
    /* FPU: add.s $f0, $f1, $f0 */                              // 0x001cfd30: add.s $f0, $f1, $f0
    *(float*)((gp) + -0x62bc) = FPU_F0;  // Store float         // 0x001cfd34: swc1 $f0, -0x62bc($gp)
label_0x1cfd38:
    FPU_F0 = *(float*)((gp) + -0x62bc);  // Load float          // 0x001cfd3c: lwc1 $f0, -0x62bc($gp)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cfd40: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cfd44: jr $ra
    sp = sp + 0x20;                                             // 0x001cfd48: addiu $sp, $sp, 0x20
}