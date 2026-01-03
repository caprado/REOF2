void func_001633e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001633e0: addiu $sp, $sp, -0x10
    return func_00141498();  // Tail call                        // 0x001633ec: j 0x141480
    sp = sp + 0x10;                                             // 0x001633f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001633f4: nop 
    sp = sp + -0x10;                                            // 0x001633f8: addiu $sp, $sp, -0x10
    return func_00141ee0();  // Tail call                        // 0x00163404: j 0x141e50
    sp = sp + 0x10;                                             // 0x00163408: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016340c: nop 
    sp = sp + -0x80;                                            // 0x00163410: addiu $sp, $sp, -0x80
    s0 = 0x26 << 16;                                            // 0x00163418: lui $s0, 0x26
    s0 = s0 + 0x1dc0;                                           // 0x0016341c: addiu $s0, $s0, 0x1dc0
    a2 = 0x100;                                                 // 0x00163430: addiu $a2, $zero, 0x100
    *(float*)((sp) + 0x28) = FPU_F12;  // Store float           // 0x00163454: swc1 $f12, 0x28($sp)
    *(float*)((sp) + 0x2c) = FPU_F13;  // Store float           // 0x00163458: swc1 $f13, 0x2c($sp)
    *(float*)((sp) + 0x30) = FPU_F14;  // Store float           // 0x0016345c: swc1 $f14, 0x30($sp)
    *(float*)((sp) + 0x34) = FPU_F15;  // Store float           // 0x00163460: swc1 $f15, 0x34($sp)
    *(float*)((sp) + 0x38) = FPU_F16;  // Store float           // 0x00163464: swc1 $f16, 0x38($sp)
    *(float*)((sp) + 0x3c) = FPU_F17;  // Store float           // 0x00163468: swc1 $f17, 0x3c($sp)
    *(float*)((sp) + 0x40) = FPU_F18;  // Store float           // 0x0016346c: swc1 $f18, 0x40($sp)
    func_00107c70();  // 107c70                                // 0x00163470: jal 0x107c70
    *(float*)((sp) + 0x44) = FPU_F19;  // Store float           // 0x00163474: swc1 $f19, 0x44($sp)
    a2 = sp + 0x48;                                             // 0x00163478: addiu $a2, $sp, 0x48
    func_0010f528();  // 10f528                                // 0x00163480: jal 0x10f528
    func_001634d8();  // 1634d8                                // 0x00163488: jal 0x1634d8
    return;                                                     // 0x0016349c: jr $ra
    sp = sp + 0x80;                                             // 0x001634a0: addiu $sp, $sp, 0x80
}