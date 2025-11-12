void func_0017f160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0017f160: addiu $sp, $sp, -0x40
    *(float*)((sp) + 0x30) = FPU_F20;  // Store float           // 0x0017f170: swc1 $f20, 0x30($sp)
    func_0011d378();  // 0x11d320                                // 0x0017f17c: jal 0x11d320
    /* FPU: mov.s $f20, $f12 */                                 // 0x0017f180: mov.s $f20, $f12
    /* move to FPU: $zero, $f0 */                               // 0x0017f184: mtc1 $zero, $f0
    /* FPU: c.olt.s $f20, $f0 */                                // 0x0017f188: c.olt.s $f20, $f0
    at = 0x3fc9 << 16;                                          // 0x0017f18c: lui $at, 0x3fc9
    at = at | 0xfdb;                                            // 0x0017f190: ori $at, $at, 0xfdb
    /* move to FPU: $at, $f0 */                                 // 0x0017f194: mtc1 $at, $f0
    /* bc1f 0x17f1ac */                                         // 0x0017f198: bc1f 0x17f1ac
    /* nop */                                                   // 0x0017f19c: nop 
    /* FPU: add.s $f20, $f0, $f20 */                            // 0x0017f1a0: add.s $f20, $f0, $f20
    goto label_0x17f1b4;                                        // 0x0017f1a4: j 0x17f1b4
    a3 = 1;                                                     // 0x0017f1a8: addiu $a3, $zero, 1
    /* FPU: sub.s $f20, $f0, $f20 */                            // 0x0017f1ac: sub.s $f20, $f0, $f20
label_0x17f1b4:
    /* move from FPU: $t0, $f20 */                              // 0x0017f1b4: mfc1 $t0, $f20
    func_0017f160();  // 0x17f0e8                                // 0x0017f1c0: jal 0x17f0e8
    /* nop */                                                   // 0x0017f1c4: nop 
    a3 = 4;                                                     // 0x0017f1f4: addiu $a3, $zero, 4
label_0x17f1f8:
    VPU_VF4 = *(vec128_t*)((s0) + 0);  // Load 128-bit vector   // 0x0017f1f8: ldc2 $4, 0($s0)
    *(vec128_t*)((s1) + 0) = VPU_VF5;  // Store 128-bit vector  // 0x0017f20c: sdc2 $5, 0($s1)
    a3 = a3 + -1;                                               // 0x0017f210: addi $a3, $a3, -1
    s0 = s0 + 0x10;                                             // 0x0017f214: addi $s0, $s0, 0x10
    if (0 != a3) goto label_0x17f1f8;                           // 0x0017f218: bne $zero, $a3, 0x17f1f8
    s1 = s1 + 0x10;                                             // 0x0017f21c: addi $s1, $s1, 0x10
    if (v0 == 0) goto label_0x17f23c;                           // 0x0017f220: beqz $v0, 0x17f23c
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017f230: lwc1 $f20, 0x30($sp)
    return func_0011d390();  // Tail call                        // 0x0017f234: j 0x11d378
    sp = sp + 0x40;                                             // 0x0017f238: addiu $sp, $sp, 0x40
label_0x17f23c:
    FPU_F20 = *(float*)((sp) + 0x30);  // Load float            // 0x0017f244: lwc1 $f20, 0x30($sp)
    return;                                                     // 0x0017f248: jr $ra
    sp = sp + 0x40;                                             // 0x0017f24c: addiu $sp, $sp, 0x40
}