void func_0019c030() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0019c030: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019c03c: addu.qb $zero, $sp, $s1
    a0 = 0xf70;                                                 // 0x0019c050: addiu $a0, $zero, 0xf70
    func_0018dca0();  // 0x18dc30                                // 0x0019c054: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019c058: addiu $a1, $zero, 0x10
    v1 = 0x2000 << 16;                                          // 0x0019c05c: lui $v1, 0x2000
    a1 = 0x1300 << 16;                                          // 0x0019c060: lui $a1, 0x1300
    a0 = v1 | 0xf6;                                             // 0x0019c064: ori $a0, $v1, 0xf6
    a3 = 0x6cf4 << 16;                                          // 0x0019c068: lui $a3, 0x6cf4
    *(uint32_t*)(v0) = a0;                                      // 0x0019c06c: sw $a0, 0($v0)
    v1 = 0x100 << 16;                                           // 0x0019c070: lui $v1, 0x100
    *(uint32_t*)((v0) + 4) = s0;                                // 0x0019c074: sw $s0, 4($v0)
    a2 = v1 | 0x404;                                            // 0x0019c078: ori $a2, $v1, 0x404
    v1 = 0x7000 << 16;                                          // 0x0019c080: lui $v1, 0x7000
    *(uint32_t*)((v0) + 0x10) = a1;                             // 0x0019c084: sw $a1, 0x10($v0)
    at = 0x28 << 16;                                            // 0x0019c088: lui $at, 0x28
    *(uint32_t*)((v0) + 0x14) = 0;                              // 0x0019c08c: sw $zero, 0x14($v0)
    a1 = v1 | 0x3f40;                                           // 0x0019c090: ori $a1, $v1, 0x3f40
    *(uint32_t*)((v0) + 0x18) = a2;                             // 0x0019c094: sw $a2, 0x18($v0)
    a0 = v0 + 0x30;                                             // 0x0019c098: addiu $a0, $v0, 0x30
    *(uint32_t*)((v0) + 0x1c) = a3;                             // 0x0019c09c: sw $a3, 0x1c($v0)
    a2 = 0x28 << 16;                                            // 0x0019c0a0: lui $a2, 0x28
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c0a4: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019c0a8: lwc1 $f1, 0x5470($at)
    a2 = a2 + 0x5360;                                           // 0x0019c0ac: addiu $a2, $a2, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c0b0: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c0b4: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019c0b8: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019c0bc: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c0c0: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019c0c4: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c0c8: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c0cc: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019c0d0: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019c0d4: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c0d8: lw $v1, 0x4c($s2)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019c0dc: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019c0e0: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019c0e4: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019c0e8: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019c0ec: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019c0f0: lwc1 $f0, 0x547c($at)
    func_00199240();  // 0x1991c0                                // 0x0019c0f4: jal 0x1991c0
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019c0f8: swc1 $f0, 0x2c($v0)
    v1 = 0x7000 << 16;                                          // 0x0019c0fc: lui $v1, 0x7000
    a2 = 0x28 << 16;                                            // 0x0019c100: lui $a2, 0x28
    a0 = v0 + 0x70;                                             // 0x0019c104: addiu $a0, $v0, 0x70
    a1 = v1 | 0x3f40;                                           // 0x0019c108: ori $a1, $v1, 0x3f40
    func_00199240();  // 0x1991c0                                // 0x0019c10c: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019c110: addiu $a2, $a2, 0x5320
    at = 0x28 << 16;                                            // 0x0019c114: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4854);  // Load float           // 0x0019c118: lwc1 $f0, 0x4854($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c11c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c120: lui $at, 0x28
    *(float*)((v0) + 0xb0) = FPU_F0;  // Store float            // 0x0019c124: swc1 $f0, 0xb0($v0)
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019c128: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c12c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c130: lui $at, 0x28
    *(float*)((v0) + 0xb4) = FPU_F0;  // Store float            // 0x0019c134: swc1 $f0, 0xb4($v0)
    FPU_F0 = *(float*)((at) + 0x485c);  // Load float           // 0x0019c138: lwc1 $f0, 0x485c($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c13c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c140: lui $at, 0x28
    *(float*)((v0) + 0xb8) = FPU_F0;  // Store float            // 0x0019c144: swc1 $f0, 0xb8($v0)
    FPU_F0 = *(float*)((at) + 0x48bc);  // Load float           // 0x0019c148: lwc1 $f0, 0x48bc($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c14c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c150: lui $at, 0x28
    *(float*)((v0) + 0xc0) = FPU_F0;  // Store float            // 0x0019c154: swc1 $f0, 0xc0($v0)
    FPU_F0 = *(float*)((at) + 0x48c0);  // Load float           // 0x0019c158: lwc1 $f0, 0x48c0($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c15c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c160: lui $at, 0x28
    *(float*)((v0) + 0xc4) = FPU_F0;  // Store float            // 0x0019c164: swc1 $f0, 0xc4($v0)
    FPU_F0 = *(float*)((at) + 0x48c4);  // Load float           // 0x0019c168: lwc1 $f0, 0x48c4($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c16c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c170: lui $at, 0x28
    *(float*)((v0) + 0xc8) = FPU_F0;  // Store float            // 0x0019c174: swc1 $f0, 0xc8($v0)
    FPU_F0 = *(float*)((at) + 0x4924);  // Load float           // 0x0019c178: lwc1 $f0, 0x4924($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c17c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c180: lui $at, 0x28
    *(float*)((v0) + 0xd0) = FPU_F0;  // Store float            // 0x0019c184: swc1 $f0, 0xd0($v0)
    FPU_F0 = *(float*)((at) + 0x4928);  // Load float           // 0x0019c188: lwc1 $f0, 0x4928($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c18c: neg.s $f0, $f0
    at = 0x28 << 16;                                            // 0x0019c190: lui $at, 0x28
    *(float*)((v0) + 0xd4) = FPU_F0;  // Store float            // 0x0019c194: swc1 $f0, 0xd4($v0)
    FPU_F0 = *(float*)((at) + 0x492c);  // Load float           // 0x0019c198: lwc1 $f0, 0x492c($at)
    /* FPU: neg.s $f0, $f0 */                                   // 0x0019c19c: neg.s $f0, $f0
    *(float*)((v0) + 0xd8) = FPU_F0;  // Store float            // 0x0019c1a0: swc1 $f0, 0xd8($v0)
    a1 = *(int32_t*)((s2) + 0x54);                              // 0x0019c1a4: lw $a1, 0x54($s2)
    func_00199b90();  // 0x199b40                                // 0x0019c1a8: jal 0x199b40
    a0 = v0 + 0x160;                                            // 0x0019c1ac: addiu $a0, $v0, 0x160
    v1 = *(int32_t*)((s2) + 0x4c);                              // 0x0019c1b0: lw $v1, 0x4c($s2)
    FPU_F12 = *(float*)((v1) + 0x24);  // Load float            // 0x0019c1b4: lwc1 $f12, 0x24($v1)
    func_001998d0();  // 0x199760                                // 0x0019c1b8: jal 0x199760
    a0 = v0 + 0xe0;                                             // 0x0019c1bc: addiu $a0, $v0, 0xe0
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019c1c0: lwc1 $f1, -0x6464($gp)
    v1 = 0x3f80 << 16;                                          // 0x0019c1c4: lui $v1, 0x3f80
    /* move to FPU: $v1, $f0 */                                 // 0x0019c1c8: mtc1 $v1, $f0
    a0 = v0 + 0x130;                                            // 0x0019c1cc: addiu $a0, $v0, 0x130
    *(float*)((v0) + 0x120) = FPU_F1;  // Store float           // 0x0019c1d0: swc1 $f1, 0x120($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019c1d4: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019c1d8: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019c1dc: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019c1e0: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x124) = FPU_F0;  // Store float           // 0x0019c1e4: swc1 $f0, 0x124($v0)
    *(uint32_t*)((v0) + 0x128) = 0;                             // 0x0019c1e8: sw $zero, 0x128($v0)
    func_00199b40();  // 0x199b10                                // 0x0019c1ec: jal 0x199b10
    *(uint32_t*)((v0) + 0x12c) = 0;                             // 0x0019c1f0: sw $zero, 0x12c($v0)
    v1 = 0x1500 << 16;                                          // 0x0019c1f4: lui $v1, 0x1500
    v1 = s1 | v1;                                               // 0x0019c1f8: or $v1, $s1, $v1
    *(uint32_t*)((v0) + 0xf60) = v1;                            // 0x0019c1fc: sw $v1, 0xf60($v0)
    *(uint32_t*)((v0) + 0xf64) = 0;                             // 0x0019c200: sw $zero, 0xf64($v0)
    *(uint32_t*)((v0) + 0xf68) = 0;                             // 0x0019c204: sw $zero, 0xf68($v0)
    *(uint32_t*)((v0) + 0xf6c) = 0;                             // 0x0019c208: sw $zero, 0xf6c($v0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019c210: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019c214: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019c218: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019c21c: jr $ra
    sp = sp + 0x40;                                             // 0x0019c220: addiu $sp, $sp, 0x40
}