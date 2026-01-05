void func_001919f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001919f0: addiu $sp, $sp, -0x40
    v0 = sp + 0x28;                                             // 0x001919f8: addiu $v0, $sp, 0x28
    a1 = sp + 0x38;                                             // 0x00191a00: addiu $a1, $sp, 0x38
    FPU_F2 = *(float*)(a0);  // Load float                      // 0x00191a04: lwc1 $f2, 0($a0)
    FPU_F1 = *(float*)((a0) + 4);  // Load float                // 0x00191a0c: lwc1 $f1, 4($a0)
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x00191a10: lwc1 $f0, 8($a0)
    *(float*)(v0) = FPU_F2;  // Store float                     // 0x00191a14: swc1 $f2, 0($v0)
    a0 = sp + 0x3c;                                             // 0x00191a18: addiu $a0, $sp, 0x3c
    *(float*)((v0) + 4) = FPU_F1;  // Store float               // 0x00191a1c: swc1 $f1, 4($v0)
    thunk_func_00191f60();  // 191f60                          // 0x00191a20: jal 0x191f60
    *(float*)((v0) + 8) = FPU_F0;  // Store float               // 0x00191a24: swc1 $f0, 8($v0)
    FPU_F2 = *(float*)((sp) + 0x38);  // Load float             // 0x00191a28: lwc1 $f2, 0x38($sp)
    FPU_F1 = *(float*)((sp) + 0x28);  // Load float             // 0x00191a2c: lwc1 $f1, 0x28($sp)
    FPU_F3 = *(float*)((sp) + 0x2c);  // Load float             // 0x00191a30: lwc1 $f3, 0x2c($sp)
    FPU_F0 = *(float*)((sp) + 0x3c);  // Load float             // 0x00191a34: lwc1 $f0, 0x3c($sp)
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x00191a40: swc1 $f0, 0($s0)
    FPU_F2 = *(float*)((sp) + 0x3c);  // Load float             // 0x00191a44: lwc1 $f2, 0x3c($sp)
    FPU_F1 = *(float*)((sp) + 0x28);  // Load float             // 0x00191a48: lwc1 $f1, 0x28($sp)
    FPU_F0 = *(float*)((sp) + 0x38);  // Load float             // 0x00191a4c: lwc1 $f0, 0x38($sp)
    *(float*)((s0) + 4) = FPU_F0;  // Store float               // 0x00191a58: swc1 $f0, 4($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00191a60: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00191a64: jr $ra
    sp = sp + 0x40;                                             // 0x00191a68: addiu $sp, $sp, 0x40
}