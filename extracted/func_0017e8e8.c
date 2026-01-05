void func_0017e8e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017e8e8: addiu $sp, $sp, -0x40
    *(float*)((sp) + 0x30) = FPU_F20;  // Store float           // 0x0017e8f8: swc1 $f20, 0x30($sp)
    func_0011d320();  // 11d320                                // 0x0017e900: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017e90c: ldc2 $4, 0($s1)
    VPU_VF5 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017e910: ldc2 $5, 0($s0)
    /* move to FPU: $v0, $f20 */                                // 0x0017e924: mtc1 $v0, $f20
    if (v1 == 0) goto label_0x17e93c;                           // 0x0017e928: beqz $v1, 0x17e93c
    /* FPU: mov.s $f0, $f20 */                                  // 0x0017e92c: mov.s $f0, $f20
    func_0011d378();  // 11d378                                // 0x0017e930: jal 0x11d378
    /* nop */                                                   // 0x0017e934: nop 
    /* FPU: mov.s $f0, $f20 */                                  // 0x0017e938: mov.s $f0, $f20
label_0x17e93c:
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017e948: lwc1 $f20, 0x30($sp)
    return;                                                     // 0x0017e94c: jr $ra
    sp = sp + 0x40;                                             // 0x0017e950: addiu $sp, $sp, 0x40
}