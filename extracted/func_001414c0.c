void func_001414c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001414c0: addiu $sp, $sp, -0x80
    s0 = 0x21 << 16;                                            // 0x001414c8: lui $s0, 0x21
    s0 = s0 + 0xc38;                                            // 0x001414cc: addiu $s0, $s0, 0xc38
    a2 = 0x80;                                                  // 0x001414e0: addiu $a2, $zero, 0x80
    *(float*)((sp) + 0x28) = FPU_F12;  // Store float           // 0x00141504: swc1 $f12, 0x28($sp)
    *(float*)((sp) + 0x2c) = FPU_F13;  // Store float           // 0x00141508: swc1 $f13, 0x2c($sp)
    *(float*)((sp) + 0x30) = FPU_F14;  // Store float           // 0x0014150c: swc1 $f14, 0x30($sp)
    *(float*)((sp) + 0x34) = FPU_F15;  // Store float           // 0x00141510: swc1 $f15, 0x34($sp)
    *(float*)((sp) + 0x38) = FPU_F16;  // Store float           // 0x00141514: swc1 $f16, 0x38($sp)
    *(float*)((sp) + 0x3c) = FPU_F17;  // Store float           // 0x00141518: swc1 $f17, 0x3c($sp)
    *(float*)((sp) + 0x40) = FPU_F18;  // Store float           // 0x0014151c: swc1 $f18, 0x40($sp)
    func_00107d30();  // 0x107c70                                // 0x00141520: jal 0x107c70
    *(float*)((sp) + 0x44) = FPU_F19;  // Store float           // 0x00141524: swc1 $f19, 0x44($sp)
    a2 = sp + 0x48;                                             // 0x00141528: addiu $a2, $sp, 0x48
    func_0010f580();  // 0x10f528                                // 0x00141530: jal 0x10f528
    v0 = 0x25 << 16;                                            // 0x00141538: lui $v0, 0x25
    v0 = v0 + 0x6170;                                           // 0x0014153c: addiu $v0, $v0, 0x6170
    v1 = g_00256170;  // Global at 0x00256170                   // 0x00141540: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x141554;                           // 0x00141544: beqz $v1, 0x141554
    /* call function at address in v1 */                        // 0x0014154c: jalr $v1
    a0 = g_00256174;  // Global at 0x00256174                   // 0x00141550: lw $a0, 4($v0)
label_0x141554:
    return;                                                     // 0x00141560: jr $ra
    sp = sp + 0x80;                                             // 0x00141564: addiu $sp, $sp, 0x80
}