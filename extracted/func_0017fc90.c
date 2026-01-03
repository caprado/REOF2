void func_0017fc90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017fc90: addiu $sp, $sp, -0x40
    func_0011d320();  // 11d320                                // 0x0017fcac: jal 0x11d320
    v1 = 0x4580 << 16;                                          // 0x0017fcb8: lui $v1, 0x4580
    v1 = v1 | 0x4580;                                           // 0x0017fcc0: ori $v1, $v1, 0x4580
    VPU_VF6 = *(vec128_t*)((s2) + 0);  // Load 128-bit vector   // 0x0017fcc8: ldc2 $6, 0($s2)
    VPU_VF8 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017fccc: ldc2 $8, 0($s1)
    VPU_VF9 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017fcd0: ldc2 $9, 0($s0)
    v1 = v1 & 0xc0;                                             // 0x0017fd0c: andi $v1, $v1, 0xc0
    if (v0 == 0) goto label_0x17fd20;                           // 0x0017fd10: beqz $v0, 0x17fd20
    func_0011d378();  // 11d378                                // 0x0017fd18: jal 0x11d378
    /* nop */                                                   // 0x0017fd1c: nop 
label_0x17fd20:
    return;                                                     // 0x0017fd34: jr $ra
    sp = sp + 0x40;                                             // 0x0017fd38: addiu $sp, $sp, 0x40
}