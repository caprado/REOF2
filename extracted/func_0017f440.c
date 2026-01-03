void func_0017f440() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017f440: addiu $sp, $sp, -0x30
    func_0017f160();  // 17f160                                // 0x0017f458: jal 0x17f160
    FPU_F12 = *(float*)((s1) + 8);  // Load float               // 0x0017f45c: lwc1 $f12, 8($s1)
    FPU_F12 = *(float*)((s1) + 4);  // Load float               // 0x0017f460: lwc1 $f12, 4($s1)
    func_0017f348();  // 17f348                                // 0x0017f468: jal 0x17f348
    FPU_F12 = *(float*)(s1);  // Load float                     // 0x0017f474: lwc1 $f12, 0($s1)
    return func_0017f348();  // Tail call                        // 0x0017f488: j 0x17f250
    sp = sp + 0x30;                                             // 0x0017f48c: addiu $sp, $sp, 0x30
    sp = sp + -0x40;                                            // 0x0017f490: addiu $sp, $sp, -0x40
    *(float*)((sp) + 0x38) = FPU_F21;  // Store float           // 0x0017f4a0: swc1 $f21, 0x38($sp)
    *(float*)((sp) + 0x30) = FPU_F20;  // Store float           // 0x0017f4a8: swc1 $f20, 0x30($sp)
    /* FPU: mov.s $f21, $f12 */                                 // 0x0017f4ac: mov.s $f21, $f12
    func_0011d320();  // 11d320                                // 0x0017f4b4: jal 0x11d320
    /* FPU: mov.s $f20, $f13 */                                 // 0x0017f4b8: mov.s $f20, $f13
    /* move from FPU: $t0, $f21 */                              // 0x0017f4bc: mfc1 $t0, $f21
    /* move from FPU: $t1, $f20 */                              // 0x0017f4c0: mfc1 $t1, $f20
    VPU_VF6 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017f4c4: ldc2 $6, 0($s0)
    *(vec128_t*)((s1) + 0) = VPU_VF6;  // Store 128-bit vector  // 0x0017f4d8: sdc2 $6, 0($s1)
    if (v0 == 0) goto label_0x17f4fc;                           // 0x0017f4dc: beqz $v0, 0x17f4fc
    FPU_F21 = *(float*)((sp) + 0x38);  // Load float            // 0x0017f4ec: lwc1 $f21, 0x38($sp)
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017f4f0: lwc1 $f20, 0x30($sp)
    return func_0011d390();  // Tail call                        // 0x0017f4f4: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017f4f8: addiu $sp, $sp, 0x40
label_0x17f4fc:
    FPU_F21 = *(float*)((sp) + 0x38);  // Load float            // 0x0017f504: lwc1 $f21, 0x38($sp)
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017f508: lwc1 $f20, 0x30($sp)
    return;                                                     // 0x0017f50c: jr $ra
    sp = sp + 0x40;                                             // 0x0017f510: addiu $sp, $sp, 0x40
}