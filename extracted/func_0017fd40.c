void func_0017fd40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0017fd40: addiu $sp, $sp, -0x60
    func_0011d378();  // 0x11d320                                // 0x0017fd6c: jal 0x11d320
    VPU_VF8 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017fd74: ldc2 $8, 0($s1)
    VPU_VF4 = *(vec128_t*)((s2) + 0);  // Load 128-bit vector   // 0x0017fd78: ldc2 $4, 0($s2)
    VPU_VF5 = *(vec128_t*)((s2) + 0x10);  // Load 128-bit vector // 0x0017fd7c: ldc2 $5, 0x10($s2)
    VPU_VF6 = *(vec128_t*)((s2) + 0x20);  // Load 128-bit vector // 0x0017fd80: ldc2 $6, 0x20($s2)
    VPU_VF7 = *(vec128_t*)((s2) + 0x30);  // Load 128-bit vector // 0x0017fd84: ldc2 $7, 0x30($s2)
    VPU_VF9 = *(vec128_t*)((s4) + 0);  // Load 128-bit vector   // 0x0017fd88: ldc2 $9, 0($s4)
    VPU_VF10 = *(vec128_t*)((s3) + 0);  // Load 128-bit vector  // 0x0017fd8c: ldc2 $10, 0($s3)
    VPU_VF11 = *(vec128_t*)((s4) + 0);  // Load 128-bit vector  // 0x0017fd90: ldc2 $11, 0($s4)
    VPU_VF12 = *(vec128_t*)((s3) + 0);  // Load 128-bit vector  // 0x0017fd94: ldc2 $12, 0($s3)
label_0x17fd98:
    s1 = s1 + 0x10;                                             // 0x0017fdd0: addi $s1, $s1, 0x10
    VPU_VF8 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017fdd4: ldc2 $8, 0($s1)
    s0 = s0 + -1;                                               // 0x0017fdd8: addi $s0, $s0, -1
    v1 = v1 & 0xc0;                                             // 0x0017fde0: andi $v1, $v1, 0xc0
    if (v1 == 0) goto label_0x17fdf8;                           // 0x0017fde4: beqz $v1, 0x17fdf8
    /* nop */                                                   // 0x0017fde8: nop 
    if (0 != s0) goto label_0x17fd98;                           // 0x0017fdec: bne $zero, $s0, 0x17fd98
    /* nop */                                                   // 0x0017fdf0: nop 
    v1 = 1;                                                     // 0x0017fdf4: addi $v1, $zero, 1
label_0x17fdf8:
    if (v0 == 0) goto label_0x17fe08;                           // 0x0017fdf8: beqz $v0, 0x17fe08
    func_0011d390();  // 0x11d378                                // 0x0017fe00: jal 0x11d378
    /* nop */                                                   // 0x0017fe04: nop 
label_0x17fe08:
    return;                                                     // 0x0017fe24: jr $ra
    sp = sp + 0x60;                                             // 0x0017fe28: addiu $sp, $sp, 0x60
}