void func_001a4dc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a4dc0: addiu $sp, $sp, -0x20
    func_001a4dc0();  // 0x1a4d90                                // 0x001a4dcc: jal 0x1a4d90
    /* move to FPU: $zero, $f1 */                               // 0x001a4dd4: mtc1 $zero, $f1
    /* nop */                                                   // 0x001a4dd8: nop 
    /* FPU: c.eq.s $f1, $f0 */                                  // 0x001a4ddc: c.eq.s $f1, $f0
    /* bc1f 0x1a4df8 */                                         // 0x001a4de0: bc1f 0x1a4df8
    /* nop */                                                   // 0x001a4de4: nop 
    *(float*)((s0) + 8) = FPU_F1;  // Store float               // 0x001a4de8: swc1 $f1, 8($s0)
    *(float*)((s0) + 4) = FPU_F1;  // Store float               // 0x001a4dec: swc1 $f1, 4($s0)
    goto label_0x1a4e20;                                        // 0x001a4df0: b 0x1a4e20
    *(float*)(s0) = FPU_F1;  // Store float                     // 0x001a4df4: swc1 $f1, 0($s0)
    FPU_F1 = *(float*)(s0);  // Load float                      // 0x001a4df8: lwc1 $f1, 0($s0)
    /* nop */                                                   // 0x001a4dfc: nop 
    /* FPU: div.s $f1, $f1, $f0 */                              // 0x001a4e00: div.s $f1, $f1, $f0
    *(float*)(s0) = FPU_F1;  // Store float                     // 0x001a4e04: swc1 $f1, 0($s0)
    FPU_F1 = *(float*)((s0) + 4);  // Load float                // 0x001a4e08: lwc1 $f1, 4($s0)
    /* FPU: div.s $f1, $f1, $f0 */                              // 0x001a4e0c: div.s $f1, $f1, $f0
    *(float*)((s0) + 4) = FPU_F1;  // Store float               // 0x001a4e10: swc1 $f1, 4($s0)
    FPU_F1 = *(float*)((s0) + 8);  // Load float                // 0x001a4e14: lwc1 $f1, 8($s0)
    /* FPU: div.s $f0, $f1, $f0 */                              // 0x001a4e18: div.s $f0, $f1, $f0
    *(float*)((s0) + 8) = FPU_F0;  // Store float               // 0x001a4e1c: swc1 $f0, 8($s0)
label_0x1a4e20:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a4e24: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a4e28: jr $ra
    sp = sp + 0x20;                                             // 0x001a4e2c: addiu $sp, $sp, 0x20
}