void func_00105740() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00105740: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x00105744: lui $v0, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00105754: lw $a0, -0x210($v0)
    return func_00105740();  // Tail call                        // 0x0010575c: j 0x105660
    sp = sp + 0x10;                                             // 0x00105760: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00105764: nop 
    sp = sp + -0x60;                                            // 0x00105768: addiu $sp, $sp, -0x60
    a2 = sp + 0x30;                                             // 0x00105770: addiu $a2, $sp, 0x30
    *(float*)((sp) + 0x10) = FPU_F12;  // Store float           // 0x0010578c: swc1 $f12, 0x10($sp)
    *(float*)((sp) + 0x14) = FPU_F13;  // Store float           // 0x00105790: swc1 $f13, 0x14($sp)
    *(float*)((sp) + 0x18) = FPU_F14;  // Store float           // 0x00105794: swc1 $f14, 0x18($sp)
    *(float*)((sp) + 0x1c) = FPU_F15;  // Store float           // 0x00105798: swc1 $f15, 0x1c($sp)
    *(float*)((sp) + 0x20) = FPU_F16;  // Store float           // 0x0010579c: swc1 $f16, 0x20($sp)
    *(float*)((sp) + 0x24) = FPU_F17;  // Store float           // 0x001057a0: swc1 $f17, 0x24($sp)
    *(float*)((sp) + 0x28) = FPU_F18;  // Store float           // 0x001057a4: swc1 $f18, 0x28($sp)
    func_0010ce88();  // 0x10ce10                                // 0x001057a8: jal 0x10ce10
    *(float*)((sp) + 0x2c) = FPU_F19;  // Store float           // 0x001057ac: swc1 $f19, 0x2c($sp)
    return;                                                     // 0x001057b4: jr $ra
    sp = sp + 0x60;                                             // 0x001057b8: addiu $sp, $sp, 0x60
}