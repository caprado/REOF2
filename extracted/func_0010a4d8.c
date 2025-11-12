void func_0010a4d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_54, local_8, local_c;
    
    v0 = 0x1f << 16;                                            // 0x0010a4d8: lui $v0, 0x1f
    sp = sp + -0xc0;                                            // 0x0010a4dc: addiu $sp, $sp, -0xc0
    t5 = g_001efdf0;  // Global at 0x001efdf0                   // 0x0010a4e0: lw $t5, -0x210($v0)
    v0 = 0x208;                                                 // 0x0010a4e4: addiu $v0, $zero, 0x208
    v1 = 0x7fff << 16;                                          // 0x0010a4e8: lui $v1, 0x7fff
    v1 = v1 | 0xffff;                                           // 0x0010a4f0: ori $v1, $v1, 0xffff
    a2 = sp + 0x90;                                             // 0x0010a4fc: addiu $a2, $sp, 0x90
    local_14 = v1;                                              // 0x0010a504: sw $v1, 0x14($sp)
    local_8 = v1;                                               // 0x0010a508: sw $v1, 8($sp)
    *(float*)((sp) + 0x70) = FPU_F12;  // Store float           // 0x0010a520: swc1 $f12, 0x70($sp)
    *(float*)((sp) + 0x74) = FPU_F13;  // Store float           // 0x0010a524: swc1 $f13, 0x74($sp)
    *(float*)((sp) + 0x78) = FPU_F14;  // Store float           // 0x0010a528: swc1 $f14, 0x78($sp)
    *(float*)((sp) + 0x7c) = FPU_F15;  // Store float           // 0x0010a52c: swc1 $f15, 0x7c($sp)
    *(float*)((sp) + 0x80) = FPU_F16;  // Store float           // 0x0010a530: swc1 $f16, 0x80($sp)
    *(float*)((sp) + 0x84) = FPU_F17;  // Store float           // 0x0010a534: swc1 $f17, 0x84($sp)
    *(float*)((sp) + 0x88) = FPU_F18;  // Store float           // 0x0010a538: swc1 $f18, 0x88($sp)
    *(float*)((sp) + 0x8c) = FPU_F19;  // Store float           // 0x0010a53c: swc1 $f19, 0x8c($sp)
    local_c = v0;                                               // 0x0010a540: sh $v0, 0xc($sp)
    local_10 = t4;                                              // 0x0010a544: sw $t4, 0x10($sp)
    local_54 = t5;                                              // 0x0010a548: sw $t5, 0x54($sp)
    func_0010ce88();  // 0x10ce10                                // 0x0010a54c: jal 0x10ce10
    local_0 = t4;                                               // 0x0010a550: sw $t4, 0($sp)
    v1 = local_0;                                               // 0x0010a554: lw $v1, 0($sp)
    g_7fff0000 = 0;  // Global at 0x7fff0000                    // 0x0010a55c: sb $zero, 0($v1)
    return;                                                     // 0x0010a560: jr $ra
    sp = sp + 0xc0;                                             // 0x0010a564: addiu $sp, $sp, 0xc0
}