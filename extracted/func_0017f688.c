void func_0017f688() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0017f688: addiu $sp, $sp, -0x50
    func_0017ee98();  // 17ee98                                // 0x0017f6ac: jal 0x17ee98
    func_0017ee98();  // 17ee98                                // 0x0017f6b8: jal 0x17ee98
    a0 = s0 + 0x10;                                             // 0x0017f6bc: addiu $a0, $s0, 0x10
    func_0017ee98();  // 17ee98                                // 0x0017f6c4: jal 0x17ee98
    a0 = s0 + 0x20;                                             // 0x0017f6c8: addiu $a0, $s0, 0x20
    a0 = s0 + 0x30;                                             // 0x0017f6cc: addiu $a0, $s0, 0x30
    return func_0017eee8();  // Tail call                        // 0x0017f6e8: j 0x17ee98
    sp = sp + 0x50;                                             // 0x0017f6ec: addiu $sp, $sp, 0x50
    sp = sp + -0xa0;                                            // 0x0017f6f0: addiu $sp, $sp, -0xa0
    /* FPU: neg.s $f0, $f17 */                                  // 0x0017f6f4: neg.s $f0, $f17
    *(float*)((sp) + 0x60) = FPU_F20;  // Store float           // 0x0017f6f8: swc1 $f20, 0x60($sp)
    /* FPU: neg.s $f20, $f18 */                                 // 0x0017f6fc: neg.s $f20, $f18
    FPU_F1 = *(float*)((sp) + 0xa0);  // Load float             // 0x0017f700: lwc1 $f1, 0xa0($sp)
    *(float*)((sp) + 0x68) = FPU_F21;  // Store float           // 0x0017f704: swc1 $f21, 0x68($sp)
    /* FPU: add.s $f0, $f0, $f18 */                             // 0x0017f708: add.s $f0, $f0, $f18
    /* FPU: mul.s $f21, $f1, $f19 */                            // 0x0017f70c: mul.s $f21, $f1, $f19
    /* FPU: mul.s $f20, $f20, $f19 */                           // 0x0017f714: mul.s $f20, $f20, $f19
    /* FPU: mul.s $f17, $f17, $f1 */                            // 0x0017f71c: mul.s $f17, $f17, $f1
    *(float*)((sp) + 0x90) = FPU_F26;  // Store float           // 0x0017f720: swc1 $f26, 0x90($sp)
    /* FPU: neg.s $f19, $f19 */                                 // 0x0017f724: neg.s $f19, $f19
    *(float*)((sp) + 0x88) = FPU_F25;  // Store float           // 0x0017f728: swc1 $f25, 0x88($sp)
    /* FPU: mul.s $f21, $f21, $f0 */                            // 0x0017f72c: mul.s $f21, $f21, $f0
    *(float*)((sp) + 0x80) = FPU_F24;  // Store float           // 0x0017f730: swc1 $f24, 0x80($sp)
    /* FPU: add.s $f20, $f20, $f17 */                           // 0x0017f734: add.s $f20, $f20, $f17
    *(float*)((sp) + 0x78) = FPU_F23;  // Store float           // 0x0017f738: swc1 $f23, 0x78($sp)
    /* FPU: add.s $f19, $f19, $f1 */                            // 0x0017f73c: add.s $f19, $f19, $f1
    *(float*)((sp) + 0x70) = FPU_F22;  // Store float           // 0x0017f740: swc1 $f22, 0x70($sp)
    /* FPU: mov.s $f22, $f12 */                                 // 0x0017f744: mov.s $f22, $f12
    /* FPU: mov.s $f24, $f13 */                                 // 0x0017f748: mov.s $f24, $f13
    /* FPU: mov.s $f23, $f14 */                                 // 0x0017f74c: mov.s $f23, $f14
    /* FPU: mov.s $f26, $f15 */                                 // 0x0017f750: mov.s $f26, $f15
    /* nop */                                                   // 0x0017f754: nop 
    /* nop */                                                   // 0x0017f758: nop 
    /* FPU: div.s $f21, $f21, $f19 */                           // 0x0017f75c: div.s $f21, $f21, $f19
    /* nop */                                                   // 0x0017f760: nop 
    /* nop */                                                   // 0x0017f764: nop 
    /* FPU: div.s $f20, $f20, $f19 */                           // 0x0017f768: div.s $f20, $f20, $f19
    func_0017f090();  // 17f090                                // 0x0017f770: jal 0x17f090
    /* FPU: mov.s $f25, $f16 */                                 // 0x0017f774: mov.s $f25, $f16
    at = 0x3f80 << 16;                                          // 0x0017f778: lui $at, 0x3f80
    /* move to FPU: $at, $f0 */                                 // 0x0017f77c: mtc1 $at, $f0
    *(float*)((s0) + 0x14) = FPU_F22;  // Store float           // 0x0017f784: swc1 $f22, 0x14($s0)
    *(float*)(s0) = FPU_F22;  // Store float                    // 0x0017f788: swc1 $f22, 0($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x0017f78c: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x0017f790: sw $zero, 0x3c($s0)
    *(float*)((s0) + 0x2c) = FPU_F0;  // Store float            // 0x0017f794: swc1 $f0, 0x2c($s0)
    func_0017f090();  // 17f090                                // 0x0017f798: jal 0x17f090
    *(float*)((s0) + 0x38) = FPU_F0;  // Store float            // 0x0017f79c: swc1 $f0, 0x38($s0)
    *(float*)(sp) = FPU_F24;  // Store float                    // 0x0017f7a4: swc1 $f24, 0($sp)
    *(float*)((sp) + 0x14) = FPU_F23;  // Store float           // 0x0017f7a8: swc1 $f23, 0x14($sp)
    *(float*)((sp) + 0x28) = FPU_F21;  // Store float           // 0x0017f7b0: swc1 $f21, 0x28($sp)
    *(float*)((sp) + 0x30) = FPU_F26;  // Store float           // 0x0017f7b8: swc1 $f26, 0x30($sp)
    *(float*)((sp) + 0x34) = FPU_F25;  // Store float           // 0x0017f7bc: swc1 $f25, 0x34($sp)
    func_0017e7e8();  // 17e7e8                                // 0x0017f7c0: jal 0x17e7e8
    *(float*)((sp) + 0x38) = FPU_F20;  // Store float           // 0x0017f7c4: swc1 $f20, 0x38($sp)
    FPU_F26 = *(float*)((sp) + 0x90);  // Load float            // 0x0017f7d0: lwc1 $f26, 0x90($sp)
    FPU_F25 = *(float*)((sp) + 0x88);  // Load float            // 0x0017f7d4: lwc1 $f25, 0x88($sp)
    FPU_F24 = *(float*)((sp) + 0x80);  // Load float            // 0x0017f7d8: lwc1 $f24, 0x80($sp)
    FPU_F23 = *(float*)((sp) + 0x78);  // Load float            // 0x0017f7dc: lwc1 $f23, 0x78($sp)
    FPU_F22 = *(float*)((sp) + 0x70);  // Load float            // 0x0017f7e0: lwc1 $f22, 0x70($sp)
    FPU_F21 = *(float*)((sp) + 0x68);  // Load float            // 0x0017f7e4: lwc1 $f21, 0x68($sp)
    FPU_F20 = *(float*)((sp) + 0x60);  // Load float            // 0x0017f7e8: lwc1 $f20, 0x60($sp)
    return;                                                     // 0x0017f7ec: jr $ra
    sp = sp + 0xa0;                                             // 0x0017f7f0: addiu $sp, $sp, 0xa0
}