void func_0017fc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017fc10: addiu $sp, $sp, -0x20
    func_0011d378();  // 0x11d320                                // 0x0017fc1c: jal 0x11d320
    v1 = 0x4580 << 16;                                          // 0x0017fc28: lui $v1, 0x4580
    v1 = v1 | 0x4580;                                           // 0x0017fc30: ori $v1, $v1, 0x4580
    VPU_VF7 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017fc38: ldc2 $7, 0($s0)
    v1 = v1 & 0xc0;                                             // 0x0017fc64: andi $v1, $v1, 0xc0
    if (v0 == 0) goto label_0x17fc78;                           // 0x0017fc68: beqz $v0, 0x17fc78
    func_0011d390();  // 0x11d378                                // 0x0017fc70: jal 0x11d378
    /* nop */                                                   // 0x0017fc74: nop 
label_0x17fc78:
    return;                                                     // 0x0017fc84: jr $ra
    sp = sp + 0x20;                                             // 0x0017fc88: addiu $sp, $sp, 0x20
}