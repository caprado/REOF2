void func_00122168() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00122168: addiu $sp, $sp, -0x10
    /* FPU: mov.s $f0, $f12 */                                  // 0x0012216c: mov.s $f0, $f12
    *(float*)(sp) = FPU_F0;  // Store float                     // 0x00122170: swc1 $f0, 0($sp)
    v0 = 0x7fff << 16;                                          // 0x00122174: lui $v0, 0x7fff
    v1 = local_0;                                               // 0x00122178: lw $v1, 0($sp)
    v0 = v0 | 0xffff;                                           // 0x0012217c: ori $v0, $v0, 0xffff
    v1 = v1 & v0;                                               // 0x00122180: and $v1, $v1, $v0
    /* move to FPU: $v1, $f0 */                                 // 0x00122184: mtc1 $v1, $f0
    return;                                                     // 0x00122188: jr $ra
    sp = sp + 0x10;                                             // 0x0012218c: addiu $sp, $sp, 0x10
}