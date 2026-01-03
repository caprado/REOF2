void func_00108ed8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x00108ed8: addiu $sp, $sp, -0x70
    t4 = 0x1f << 16;                                            // 0x00108edc: lui $t4, 0x1f
    a2 = sp + 0x38;                                             // 0x00108ef0: addiu $a2, $sp, 0x38
    *(float*)((sp) + 0x18) = FPU_F12;  // Store float           // 0x00108f08: swc1 $f12, 0x18($sp)
    *(float*)((sp) + 0x1c) = FPU_F13;  // Store float           // 0x00108f0c: swc1 $f13, 0x1c($sp)
    *(float*)((sp) + 0x20) = FPU_F14;  // Store float           // 0x00108f10: swc1 $f14, 0x20($sp)
    *(float*)((sp) + 0x24) = FPU_F15;  // Store float           // 0x00108f14: swc1 $f15, 0x24($sp)
    *(float*)((sp) + 0x28) = FPU_F16;  // Store float           // 0x00108f18: swc1 $f16, 0x28($sp)
    *(float*)((sp) + 0x2c) = FPU_F17;  // Store float           // 0x00108f1c: swc1 $f17, 0x2c($sp)
    *(float*)((sp) + 0x30) = FPU_F18;  // Store float           // 0x00108f20: swc1 $f18, 0x30($sp)
    *(float*)((sp) + 0x34) = FPU_F19;  // Store float           // 0x00108f24: swc1 $f19, 0x34($sp)
    v0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00108f28: lw $v0, -0x210($t4)
    v1 = *(int32_t*)((v0) + 8);                                 // 0x00108f2c: lw $v1, 8($v0)
    *(uint32_t*)((v1) + 0x54) = v0;                             // 0x00108f30: sw $v0, 0x54($v1)
    func_0010ce10();  // 10ce10                                // 0x00108f34: jal 0x10ce10
    a0 = *(int32_t*)((v0) + 8);                                 // 0x00108f38: lw $a0, 8($v0)
    return;                                                     // 0x00108f40: jr $ra
    sp = sp + 0x70;                                             // 0x00108f44: addiu $sp, $sp, 0x70
}