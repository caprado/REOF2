void func_00108e78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x00108e78: addiu $sp, $sp, -0x60
    a3 = sp + 0x30;                                             // 0x00108e8c: addiu $a3, $sp, 0x30
    *(float*)((sp) + 0x10) = FPU_F12;  // Store float           // 0x00108ea0: swc1 $f12, 0x10($sp)
    *(float*)((sp) + 0x14) = FPU_F13;  // Store float           // 0x00108ea4: swc1 $f13, 0x14($sp)
    *(float*)((sp) + 0x18) = FPU_F14;  // Store float           // 0x00108ea8: swc1 $f14, 0x18($sp)
    *(float*)((sp) + 0x1c) = FPU_F15;  // Store float           // 0x00108eac: swc1 $f15, 0x1c($sp)
    *(float*)((sp) + 0x20) = FPU_F16;  // Store float           // 0x00108eb0: swc1 $f16, 0x20($sp)
    *(float*)((sp) + 0x24) = FPU_F17;  // Store float           // 0x00108eb4: swc1 $f17, 0x24($sp)
    *(float*)((sp) + 0x28) = FPU_F18;  // Store float           // 0x00108eb8: swc1 $f18, 0x28($sp)
    *(float*)((sp) + 0x2c) = FPU_F19;  // Store float           // 0x00108ebc: swc1 $f19, 0x2c($sp)
    func_0010e4f8();  // 0x10ce88                                // 0x00108ec0: jal 0x10ce88
    a1 = *(int32_t*)((a0) + 8);                                 // 0x00108ec4: lw $a1, 8($a0)
    return;                                                     // 0x00108ecc: jr $ra
    sp = sp + 0x60;                                             // 0x00108ed0: addiu $sp, $sp, 0x60
}