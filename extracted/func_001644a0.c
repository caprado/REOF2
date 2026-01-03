void func_001644a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001644a0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x1b74);                            // 0x001644a8: lw $v0, 0x1b74($a0)
    a0 = *(int32_t*)(v0);                                       // 0x001644b0: lw $a0, 0($v0)
    return func_001323b0();  // Tail call                        // 0x001644b4: j 0x1322f8
    sp = sp + 0x10;                                             // 0x001644b8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001644bc: nop 
    sp = sp + -0x10;                                            // 0x001644c0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x1b74);                            // 0x001644c8: lw $v0, 0x1b74($a0)
    a0 = *(int32_t*)(v0);                                       // 0x001644d0: lw $a0, 0($v0)
    return func_001323f0();  // Tail call                        // 0x001644d4: j 0x1323b0
    sp = sp + 0x10;                                             // 0x001644d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001644dc: nop 
    sp = sp + -0x10;                                            // 0x001644e0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x1b74);                            // 0x001644e8: lw $v0, 0x1b74($a0)
    a0 = *(int32_t*)(v0);                                       // 0x001644f0: lw $a0, 0($v0)
    return func_001324e0();  // Tail call                        // 0x001644f4: j 0x132478
    sp = sp + 0x10;                                             // 0x001644f8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001644fc: nop 
    sp = sp + -0x10;                                            // 0x00164500: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x1b74);                            // 0x00164508: lw $v0, 0x1b74($a0)
    a0 = *(int32_t*)(v0);                                       // 0x00164510: lw $a0, 0($v0)
    return func_00132510();  // Tail call                        // 0x00164514: j 0x1324e0
    sp = sp + 0x10;                                             // 0x00164518: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016451c: nop 
    sp = sp + -0x10;                                            // 0x00164520: addiu $sp, $sp, -0x10
    s0 = a0 + 0x1b6c;                                           // 0x00164528: addiu $s0, $a0, 0x1b6c
    func_00111f90();  // 111f90                                // 0x00164530: jal 0x111f90
    func_00122368();  // 122368                                // 0x0016453c: jal 0x122368
    /* nop */                                                   // 0x00164540: nop 
    func_00112118();  // 112118                                // 0x00164544: jal 0x112118
    at = 0x40dd << 16;                                          // 0x0016454c: lui $at, 0x40dd
    at = at | 0xc54;                                            // 0x00164550: ori $at, $at, 0xc54
    /* move to FPU: $at, $f2 */                                 // 0x00164554: mtc1 $at, $f2
    at = 0x44d8 << 16;                                          // 0x00164558: lui $at, 0x44d8
    at = at | 0x677d;                                           // 0x0016455c: ori $at, $at, 0x677d
    /* move to FPU: $at, $f3 */                                 // 0x00164560: mtc1 $at, $f3
    /* FPU: sub.s $f0, $f0, $f2 */                              // 0x00164564: sub.s $f0, $f0, $f2
    at = 0x3c23 << 16;                                          // 0x00164568: lui $at, 0x3c23
    at = at | 0xd70a;                                           // 0x0016456c: ori $at, $at, 0xd70a
    /* move to FPU: $at, $f1 */                                 // 0x00164570: mtc1 $at, $f1
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00164574: lw $v0, 8($s0)
    a0 = *(int32_t*)(v0);                                       // 0x0016457c: lw $a0, 0($v0)
    /* FPU: mul.s $f0, $f0, $f3 */                              // 0x00164580: mul.s $f0, $f0, $f3
    /* FPU: mul.s $f1, $f0, $f1 */                              // 0x00164588: mul.s $f1, $f0, $f1
    /* FPU: cvt.w.s $f2, $f0 */                                 // 0x0016458c: cvt.w.s $f2, $f0
    /* move from FPU: $v1, $f2 */                               // 0x00164590: mfc1 $v1, $f2
    /* FPU: cvt.w.s $f0, $f1 */                                 // 0x00164594: cvt.w.s $f0, $f1
    /* move from FPU: $v0, $f0 */                               // 0x00164598: mfc1 $v0, $f0
    a2 = v0 << 1;                                               // 0x0016459c: sll $a2, $v0, 1
    a2 = a2 + v0;                                               // 0x001645a4: addu $a2, $a2, $v0
    a2 = a2 << 3;                                               // 0x001645a8: sll $a2, $a2, 3
    a2 = a2 + v0;                                               // 0x001645ac: addu $a2, $a2, $v0
    a2 = a2 << 2;                                               // 0x001645b0: sll $a2, $a2, 2
    a2 = v1 - a2;                                               // 0x001645b4: subu $a2, $v1, $a2
    return func_00132ca8();  // Tail call                        // 0x001645b8: j 0x132ca0
    sp = sp + 0x10;                                             // 0x001645bc: addiu $sp, $sp, 0x10
    v1 = *(int32_t*)(a0);                                       // 0x001645c0: lw $v1, 0($a0)
    a1 = 0x26 << 16;                                            // 0x001645c4: lui $a1, 0x26
    a1 = a1 + 0x1ed0;                                           // 0x001645c8: addiu $a1, $a1, 0x1ed0
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001645cc: lw $v0, 8($a0)
    g_00261ed0 = v1;  // Global at 0x00261ed0                   // 0x001645d0: sw $v1, 0($a1)
    a2 = -0x20;                                                 // 0x001645d4: addiu $a2, $zero, -0x20
    v0 = v0 + 0x1f;                                             // 0x001645d8: addiu $v0, $v0, 0x1f
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001645dc: lw $v1, 4($a0)
    v0 = v0 & a2;                                               // 0x001645e0: and $v0, $v0, $a2
    g_00261ed8 = v0;  // Global at 0x00261ed8                   // 0x001645e4: sw $v0, 8($a1)
    g_00261ed4 = v1;  // Global at 0x00261ed4                   // 0x001645e8: sw $v1, 4($a1)
    v0 = *(int32_t*)((a0) + 0x18);                              // 0x001645ec: lw $v0, 0x18($a0)
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x001645f0: lw $v1, 0xc($a0)
    v0 = v0 + 0x1f;                                             // 0x001645f4: addiu $v0, $v0, 0x1f
    g_00261edc = v1;  // Global at 0x00261edc                   // 0x001645f8: sw $v1, 0xc($a1)
    v0 = v0 & a2;                                               // 0x001645fc: and $v0, $v0, $a2
    g_00261ee8 = v0;  // Global at 0x00261ee8                   // 0x00164600: sw $v0, 0x18($a1)
    v1 = *(int32_t*)((a0) + 0x10);                              // 0x00164604: lw $v1, 0x10($a0)
    g_00261ee0 = v1;  // Global at 0x00261ee0                   // 0x00164608: sw $v1, 0x10($a1)
    v0 = *(int32_t*)((a0) + 0x14);                              // 0x0016460c: lw $v0, 0x14($a0)
    return;                                                     // 0x00164610: jr $ra
    g_00261ee4 = v0;  // Global at 0x00261ee4                   // 0x00164614: sw $v0, 0x14($a1)
}