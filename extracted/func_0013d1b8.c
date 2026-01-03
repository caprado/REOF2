void func_0013d1b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x0013d1b8: addiu $sp, $sp, -0x70
    s0 = 0x20 << 16;                                            // 0x0013d1c0: lui $s0, 0x20
    s0 = s0 + 0x45f0;                                           // 0x0013d1c4: addiu $s0, $s0, 0x45f0
    a2 = sp + 0x38;                                             // 0x0013d1d0: addiu $a2, $sp, 0x38
    *(float*)((sp) + 0x18) = FPU_F12;  // Store float           // 0x0013d1f4: swc1 $f12, 0x18($sp)
    *(float*)((sp) + 0x1c) = FPU_F13;  // Store float           // 0x0013d1f8: swc1 $f13, 0x1c($sp)
    *(float*)((sp) + 0x20) = FPU_F14;  // Store float           // 0x0013d1fc: swc1 $f14, 0x20($sp)
    *(float*)((sp) + 0x24) = FPU_F15;  // Store float           // 0x0013d200: swc1 $f15, 0x24($sp)
    *(float*)((sp) + 0x28) = FPU_F16;  // Store float           // 0x0013d204: swc1 $f16, 0x28($sp)
    *(float*)((sp) + 0x2c) = FPU_F17;  // Store float           // 0x0013d208: swc1 $f17, 0x2c($sp)
    *(float*)((sp) + 0x30) = FPU_F18;  // Store float           // 0x0013d20c: swc1 $f18, 0x30($sp)
    func_0010f528();  // 10f528                                // 0x0013d210: jal 0x10f528
    *(float*)((sp) + 0x34) = FPU_F19;  // Store float           // 0x0013d214: swc1 $f19, 0x34($sp)
    v1 = 0x20 << 16;                                            // 0x0013d218: lui $v1, 0x20
    v1 = g_002045e8;  // Global at 0x002045e8                   // 0x0013d21c: lw $v1, 0x45e8($v1)
    if (v1 == 0) goto label_0x13d234;                           // 0x0013d220: beqz $v1, 0x13d234
    v0 = 0x20 << 16;                                            // 0x0013d228: lui $v0, 0x20
    /* call function at address in v1 */                        // 0x0013d22c: jalr $v1
    a0 = g_002045ec;  // Global at 0x002045ec                   // 0x0013d230: lw $a0, 0x45ec($v0)
label_0x13d234:
    return;                                                     // 0x0013d23c: jr $ra
    sp = sp + 0x70;                                             // 0x0013d240: addiu $sp, $sp, 0x70
}