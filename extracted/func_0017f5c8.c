void func_0017f5c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0017f5c8: addiu $sp, $sp, -0x60
    *(float*)((sp) + 0x50) = FPU_F20;  // Store float           // 0x0017f5cc: swc1 $f20, 0x50($sp)
    at = 0xbf80 << 16;                                          // 0x0017f5d0: lui $at, 0xbf80
    /* move to FPU: $at, $f20 */                                // 0x0017f5d4: mtc1 $at, $f20
    /* FPU: mov.s $f12, $f20 */                                 // 0x0017f5f0: mov.s $f12, $f20
    func_0017edb0();  // 17edb0                                // 0x0017f5f8: jal 0x17edb0
    func_0017e958();  // 17e958                                // 0x0017f604: jal 0x17e958
    /* FPU: mov.s $f12, $f20 */                                 // 0x0017f610: mov.s $f12, $f20
    func_0017edb0();  // 17edb0                                // 0x0017f614: jal 0x17edb0
    a0 = s0 + 0x10;                                             // 0x0017f61c: addiu $a0, $s0, 0x10
    func_0017e958();  // 17e958                                // 0x0017f620: jal 0x17e958
    /* FPU: mov.s $f12, $f20 */                                 // 0x0017f62c: mov.s $f12, $f20
    func_0017edb0();  // 17edb0                                // 0x0017f630: jal 0x17edb0
    a0 = s0 + 0x20;                                             // 0x0017f638: addiu $a0, $s0, 0x20
    func_0017e958();  // 17e958                                // 0x0017f63c: jal 0x17e958
    /* move to FPU: $zero, $f0 */                               // 0x0017f644: mtc1 $zero, $f0
    at = 0x3f80 << 16;                                          // 0x0017f64c: lui $at, 0x3f80
    /* move to FPU: $at, $f1 */                                 // 0x0017f650: mtc1 $at, $f1
    *(float*)((s0) + 0x30) = FPU_F0;  // Store float            // 0x0017f658: swc1 $f0, 0x30($s0)
    *(float*)((s0) + 0x3c) = FPU_F1;  // Store float            // 0x0017f65c: swc1 $f1, 0x3c($s0)
    *(float*)((s0) + 0x38) = FPU_F0;  // Store float            // 0x0017f660: swc1 $f0, 0x38($s0)
    func_0017e9d8();  // 17e9d8                                // 0x0017f664: jal 0x17e9d8
    *(float*)((s0) + 0x34) = FPU_F0;  // Store float            // 0x0017f668: swc1 $f0, 0x34($s0)
    FPU_F20 = *(float*)((sp) + 0x50);  // Load float            // 0x0017f67c: lwc1 $f20, 0x50($sp)
    return;                                                     // 0x0017f680: jr $ra
    sp = sp + 0x60;                                             // 0x0017f684: addiu $sp, $sp, 0x60
}