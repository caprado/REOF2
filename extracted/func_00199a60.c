void func_00199a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x28 << 16;                                            // 0x00199a60: lui $at, 0x28
    v1 = 0x4300 << 16;                                          // 0x00199a64: lui $v1, 0x4300
    FPU_F0 = *(float*)((at) + 0x4824);  // Load float           // 0x00199a68: lwc1 $f0, 0x4824($at)
    *(float*)(a0) = FPU_F0;  // Store float                     // 0x00199a6c: swc1 $f0, 0($a0)
    at = 0x28 << 16;                                            // 0x00199a70: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4828);  // Load float           // 0x00199a74: lwc1 $f0, 0x4828($at)
    *(float*)((a0) + 4) = FPU_F0;  // Store float               // 0x00199a78: swc1 $f0, 4($a0)
    at = 0x28 << 16;                                            // 0x00199a7c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x482c);  // Load float           // 0x00199a80: lwc1 $f0, 0x482c($at)
    *(float*)((a0) + 8) = FPU_F0;  // Store float               // 0x00199a84: swc1 $f0, 8($a0)
    at = 0x28 << 16;                                            // 0x00199a88: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4830);  // Load float           // 0x00199a8c: lwc1 $f0, 0x4830($at)
    *(float*)((a0) + 0xc) = FPU_F0;  // Store float             // 0x00199a90: swc1 $f0, 0xc($a0)
    at = 0x28 << 16;                                            // 0x00199a94: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4844);  // Load float           // 0x00199a98: lwc1 $f0, 0x4844($at)
    /* FPU: mul.s $f0, $f0, $f12 */                             // 0x00199a9c: mul.s $f0, $f0, $f12
    at = 0x28 << 16;                                            // 0x00199aa0: lui $at, 0x28
    *(float*)(a1) = FPU_F0;  // Store float                     // 0x00199aa4: swc1 $f0, 0($a1)
    FPU_F0 = *(float*)((at) + 0x4848);  // Load float           // 0x00199aa8: lwc1 $f0, 0x4848($at)
    /* FPU: mul.s $f0, $f0, $f12 */                             // 0x00199aac: mul.s $f0, $f0, $f12
    at = 0x28 << 16;                                            // 0x00199ab0: lui $at, 0x28
    *(float*)((a1) + 4) = FPU_F0;  // Store float               // 0x00199ab4: swc1 $f0, 4($a1)
    FPU_F0 = *(float*)((at) + 0x484c);  // Load float           // 0x00199ab8: lwc1 $f0, 0x484c($at)
    /* FPU: mul.s $f0, $f0, $f12 */                             // 0x00199abc: mul.s $f0, $f0, $f12
    *(float*)((a1) + 8) = FPU_F0;  // Store float               // 0x00199ac0: swc1 $f0, 8($a1)
    *(uint32_t*)((a1) + 0xc) = v1;                              // 0x00199ac4: sw $v1, 0xc($a1)
    FPU_F0 = *(float*)(a1);  // Load float                      // 0x00199ac8: lwc1 $f0, 0($a1)
    /* FPU: c.ole.s $f0, $f12 */                                // 0x00199acc: c.ole.s $f0, $f12
    /* bc1t 0x199adc */                                         // 0x00199ad0: bc1t 0x199adc
    /* nop */                                                   // 0x00199ad4: nop 
    *(float*)(a1) = FPU_F12;  // Store float                    // 0x00199ad8: swc1 $f12, 0($a1)
    FPU_F0 = *(float*)((a1) + 4);  // Load float                // 0x00199adc: lwc1 $f0, 4($a1)
    /* FPU: c.ole.s $f0, $f12 */                                // 0x00199ae0: c.ole.s $f0, $f12
    /* bc1t 0x199af0 */                                         // 0x00199ae4: bc1t 0x199af0
    /* nop */                                                   // 0x00199ae8: nop 
    *(float*)((a1) + 4) = FPU_F12;  // Store float              // 0x00199aec: swc1 $f12, 4($a1)
    FPU_F0 = *(float*)((a1) + 8);  // Load float                // 0x00199af0: lwc1 $f0, 8($a1)
    /* FPU: c.ole.s $f0, $f12 */                                // 0x00199af4: c.ole.s $f0, $f12
    /* bc1t 0x199b04 */                                         // 0x00199af8: bc1t 0x199b04
    /* nop */                                                   // 0x00199afc: nop 
    *(float*)((a1) + 8) = FPU_F12;  // Store float              // 0x00199b00: swc1 $f12, 8($a1)
    return;                                                     // 0x00199b04: jr $ra
    /* nop */                                                   // 0x00199b08: nop 
}