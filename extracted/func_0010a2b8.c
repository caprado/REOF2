void func_0010a2b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x10;                                            // 0x0010a2b8: addiu $sp, $sp, -0x10
    /* FPU: mov.s $f0, $f12 */                                  // 0x0010a2bc: mov.s $f0, $f12
    *(float*)(sp) = FPU_F0;  // Store float                     // 0x0010a2c0: swc1 $f0, 0($sp)
    *(float*)((sp) + 4) = FPU_F13;  // Store float              // 0x0010a2c4: swc1 $f13, 4($sp)
    v0 = 0x7fff << 16;                                          // 0x0010a2c8: lui $v0, 0x7fff
    v1 = 0x8000 << 16;                                          // 0x0010a2cc: lui $v1, 0x8000
    a0 = local_4;                                               // 0x0010a2d0: lw $a0, 4($sp)
    v0 = v0 | 0xffff;                                           // 0x0010a2d4: ori $v0, $v0, 0xffff
    v1 = a0 & v1;                                               // 0x0010a2d8: and $v1, $a0, $v1
    a0 = local_0;                                               // 0x0010a2dc: lw $a0, 0($sp)
    v0 = a0 & v0;                                               // 0x0010a2e0: and $v0, $a0, $v0
    v0 = v0 | v1;                                               // 0x0010a2e4: or $v0, $v0, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x0010a2e8: mtc1 $v0, $f0
    return;                                                     // 0x0010a2ec: jr $ra
    sp = sp + 0x10;                                             // 0x0010a2f0: addiu $sp, $sp, 0x10
}