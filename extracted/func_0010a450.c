void func_0010a450() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_54, local_8, local_c;
    
    sp = sp + -0xc0;                                            // 0x0010a450: addiu $sp, $sp, -0xc0
    v0 = 0x7fff << 16;                                          // 0x0010a454: lui $v0, 0x7fff
    local_54 = a0;                                              // 0x0010a460: sw $a0, 0x54($sp)
    v0 = v0 | 0xffff;                                           // 0x0010a468: ori $v0, $v0, 0xffff
    t4 = 0x208;                                                 // 0x0010a46c: addiu $t4, $zero, 0x208
    a2 = sp + 0x98;                                             // 0x0010a470: addiu $a2, $sp, 0x98
    local_10 = v1;                                              // 0x0010a478: sw $v1, 0x10($sp)
    local_0 = v1;                                               // 0x0010a47c: sw $v1, 0($sp)
    *(float*)((sp) + 0x78) = FPU_F12;  // Store float           // 0x0010a494: swc1 $f12, 0x78($sp)
    *(float*)((sp) + 0x7c) = FPU_F13;  // Store float           // 0x0010a498: swc1 $f13, 0x7c($sp)
    *(float*)((sp) + 0x80) = FPU_F14;  // Store float           // 0x0010a49c: swc1 $f14, 0x80($sp)
    *(float*)((sp) + 0x84) = FPU_F15;  // Store float           // 0x0010a4a0: swc1 $f15, 0x84($sp)
    *(float*)((sp) + 0x88) = FPU_F16;  // Store float           // 0x0010a4a4: swc1 $f16, 0x88($sp)
    *(float*)((sp) + 0x8c) = FPU_F17;  // Store float           // 0x0010a4a8: swc1 $f17, 0x8c($sp)
    *(float*)((sp) + 0x90) = FPU_F18;  // Store float           // 0x0010a4ac: swc1 $f18, 0x90($sp)
    *(float*)((sp) + 0x94) = FPU_F19;  // Store float           // 0x0010a4b0: swc1 $f19, 0x94($sp)
    local_c = t4;                                               // 0x0010a4b4: sh $t4, 0xc($sp)
    local_14 = v0;                                              // 0x0010a4b8: sw $v0, 0x14($sp)
    func_0010ce10();  // 10ce10                                // 0x0010a4bc: jal 0x10ce10
    local_8 = v0;                                               // 0x0010a4c0: sw $v0, 8($sp)
    v1 = local_0;                                               // 0x0010a4c4: lw $v1, 0($sp)
    *(uint8_t*)(v1) = 0;                                        // 0x0010a4cc: sb $zero, 0($v1)
    return;                                                     // 0x0010a4d0: jr $ra
    sp = sp + 0xc0;                                             // 0x0010a4d4: addiu $sp, $sp, 0xc0
}