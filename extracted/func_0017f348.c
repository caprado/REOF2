void func_0017f348() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017f348: addiu $sp, $sp, -0x40
    *(float*)((sp) + 0x30) = FPU_F20;  // Store float           // 0x0017f358: swc1 $f20, 0x30($sp)
    func_0011d378();  // 0x11d320                                // 0x0017f364: jal 0x11d320
    /* FPU: mov.s $f20, $f12 */                                 // 0x0017f368: mov.s $f20, $f12
    /* move to FPU: $zero, $f0 */                               // 0x0017f36c: mtc1 $zero, $f0
    /* FPU: c.olt.s $f20, $f0 */                                // 0x0017f370: c.olt.s $f20, $f0
    at = 0x3fc9 << 16;                                          // 0x0017f374: lui $at, 0x3fc9
    at = at | 0xfdb;                                            // 0x0017f378: ori $at, $at, 0xfdb
    /* move to FPU: $at, $f0 */                                 // 0x0017f37c: mtc1 $at, $f0
    /* bc1f 0x17f394 */                                         // 0x0017f380: bc1f 0x17f394
    /* nop */                                                   // 0x0017f384: nop 
    /* FPU: add.s $f20, $f0, $f20 */                            // 0x0017f388: add.s $f20, $f0, $f20
    goto label_0x17f39c;                                        // 0x0017f38c: j 0x17f39c
    a3 = 1;                                                     // 0x0017f390: addiu $a3, $zero, 1
    /* FPU: sub.s $f20, $f0, $f20 */                            // 0x0017f394: sub.s $f20, $f0, $f20
label_0x17f39c:
    /* move from FPU: $t0, $f20 */                              // 0x0017f39c: mfc1 $t0, $f20
    func_0017f160();  // 0x17f0e8                                // 0x0017f3a8: jal 0x17f0e8
    /* nop */                                                   // 0x0017f3ac: nop 
    a3 = 4;                                                     // 0x0017f3e0: addiu $a3, $zero, 4
label_0x17f3e4:
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017f3e4: ldc2 $4, 0($s0)
    *(vec128_t*)((s1) + 0) = VPU_VF5;  // Store 128-bit vector  // 0x0017f3f8: sdc2 $5, 0($s1)
    a3 = a3 + -1;                                               // 0x0017f3fc: addi $a3, $a3, -1
    s0 = s0 + 0x10;                                             // 0x0017f400: addi $s0, $s0, 0x10
    if (0 != a3) goto label_0x17f3e4;                           // 0x0017f404: bne $zero, $a3, 0x17f3e4
    s1 = s1 + 0x10;                                             // 0x0017f408: addi $s1, $s1, 0x10
    if (v0 == 0) goto label_0x17f428;                           // 0x0017f40c: beqz $v0, 0x17f428
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017f41c: lwc1 $f20, 0x30($sp)
    return func_0011d390();  // Tail call                        // 0x0017f420: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017f424: addiu $sp, $sp, 0x40
label_0x17f428:
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017f430: lwc1 $f20, 0x30($sp)
    return;                                                     // 0x0017f434: jr $ra
    sp = sp + 0x40;                                             // 0x0017f438: addiu $sp, $sp, 0x40
}