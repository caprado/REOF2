void func_0017e7e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017e7e8: addiu $sp, $sp, -0x40
    func_0011d320();  // 11d320                                // 0x0017e804: jal 0x11d320
    VPU_VF4 = *(vec128_t*)((s1) + 0);  // Load 128-bit vector   // 0x0017e80c: ldc2 $4, 0($s1)
    VPU_VF5 = *(vec128_t*)((s1) + 0x10);  // Load 128-bit vector // 0x0017e810: ldc2 $5, 0x10($s1)
    VPU_VF6 = *(vec128_t*)((s1) + 0x20);  // Load 128-bit vector // 0x0017e814: ldc2 $6, 0x20($s1)
    VPU_VF7 = *(vec128_t*)((s1) + 0x30);  // Load 128-bit vector // 0x0017e818: ldc2 $7, 0x30($s1)
    a3 = 4;                                                     // 0x0017e81c: addiu $a3, $zero, 4
label_0x17e820:
    VPU_VF8 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017e820: ldc2 $8, 0($s0)
    *(vec128_t*)((s2) + 0) = VPU_VF9;  // Store 128-bit vector  // 0x0017e834: sdc2 $9, 0($s2)
    a3 = a3 + -1;                                               // 0x0017e838: addi $a3, $a3, -1
    s0 = s0 + 0x10;                                             // 0x0017e83c: addi $s0, $s0, 0x10
    if (0 != a3) goto label_0x17e820;                           // 0x0017e840: bne $zero, $a3, 0x17e820
    s2 = s2 + 0x10;                                             // 0x0017e844: addi $s2, $s2, 0x10
    if (v0 == 0) goto label_0x17e864;                           // 0x0017e848: beqz $v0, 0x17e864
    return func_0011d390();  // Tail call                        // 0x0017e85c: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017e860: addiu $sp, $sp, 0x40
label_0x17e864:
    return;                                                     // 0x0017e870: jr $ra
    sp = sp + 0x40;                                             // 0x0017e874: addiu $sp, $sp, 0x40
}