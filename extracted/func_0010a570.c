void func_0010a570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_30, local_4, local_44, local_54;
    uint32_t local_c;
    
    sp = sp + -0xc0;                                            // 0x0010a570: addiu $sp, $sp, -0xc0
    v1 = 4;                                                     // 0x0010a578: addiu $v1, $zero, 4
    local_c = v1;                                               // 0x0010a590: sh $v1, 0xc($sp)
    *(float*)((sp) + 0x70) = FPU_F12;  // Store float           // 0x0010a5a4: swc1 $f12, 0x70($sp)
    *(float*)((sp) + 0x74) = FPU_F13;  // Store float           // 0x0010a5a8: swc1 $f13, 0x74($sp)
    *(float*)((sp) + 0x78) = FPU_F14;  // Store float           // 0x0010a5ac: swc1 $f14, 0x78($sp)
    *(float*)((sp) + 0x7c) = FPU_F15;  // Store float           // 0x0010a5b0: swc1 $f15, 0x7c($sp)
    *(float*)((sp) + 0x80) = FPU_F16;  // Store float           // 0x0010a5b4: swc1 $f16, 0x80($sp)
    *(float*)((sp) + 0x84) = FPU_F17;  // Store float           // 0x0010a5b8: swc1 $f17, 0x84($sp)
    *(float*)((sp) + 0x88) = FPU_F18;  // Store float           // 0x0010a5bc: swc1 $f18, 0x88($sp)
    *(float*)((sp) + 0x8c) = FPU_F19;  // Store float           // 0x0010a5c0: swc1 $f19, 0x8c($sp)
    local_10 = v0;                                              // 0x0010a5c4: sw $v0, 0x10($sp)
    func_0010af38();  // 0x10ae00                                // 0x0010a5c8: jal 0x10ae00
    local_0 = v0;                                               // 0x0010a5cc: sw $v0, 0($sp)
    a0 = 0x1f << 16;                                            // 0x0010a5d0: lui $a0, 0x1f
    v1 = 0x11 << 16;                                            // 0x0010a5d4: lui $v1, 0x11
    a3 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010a5d8: lw $a3, -0x210($a0)
    v1 = v1 + -0x5a98;                                          // 0x0010a5e0: addiu $v1, $v1, -0x5a98
    a2 = sp + 0x90;                                             // 0x0010a5e8: addiu $a2, $sp, 0x90
    local_14 = v0;                                              // 0x0010a5ec: sw $v0, 0x14($sp)
    local_20 = v1;                                              // 0x0010a5f0: sw $v1, 0x20($sp)
    local_54 = a3;                                              // 0x0010a5f4: sw $a3, 0x54($sp)
    local_4 = v0;                                               // 0x0010a5f8: sw $v0, 4($sp)
    local_30 = 0;                                               // 0x0010a5fc: sw $zero, 0x30($sp)
    func_0010f428();  // 0x10e798                                // 0x0010a600: jal 0x10e798
    local_44 = 0;                                               // 0x0010a604: sw $zero, 0x44($sp)
    return;                                                     // 0x0010a610: jr $ra
    sp = sp + 0xc0;                                             // 0x0010a614: addiu $sp, $sp, 0xc0
}