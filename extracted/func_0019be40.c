void func_0019be40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c;
    
    sp = sp + -0xa0;                                            // 0x0019be40: addiu $sp, $sp, -0xa0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019be48: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019be54: addu.qb $zero, $sp, $s1
    a0 = 0x1a0;                                                 // 0x0019be60: addiu $a0, $zero, 0x1a0
    a1 = 0x10;                                                  // 0x0019be64: addiu $a1, $zero, 0x10
    func_0018dca0();  // 0x18dc30                                // 0x0019be68: jal 0x18dc30
    v1 = 0x2000 << 16;                                          // 0x0019be70: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019be74: lui $t0, 0x28
    v1 = v1 | 0x19;                                             // 0x0019be78: ori $v1, $v1, 0x19
    a0 = 0x1300 << 16;                                          // 0x0019be7c: lui $a0, 0x1300
    g_70000000 = v1;  // Global at 0x70000000                   // 0x0019be80: sw $v1, 0($v0)
    a2 = 0x6c17 << 16;                                          // 0x0019be84: lui $a2, 0x6c17
    g_70000004 = s1;  // Global at 0x70000004                   // 0x0019be88: sw $s1, 4($v0)
    v1 = 0x100 << 16;                                           // 0x0019be8c: lui $v1, 0x100
    v1 = v1 | 0x404;                                            // 0x0019be94: ori $v1, $v1, 0x404
    g_70000010 = a0;  // Global at 0x70000010                   // 0x0019be98: sw $a0, 0x10($v0)
    g_70000014 = 0;  // Global at 0x70000014                    // 0x0019bea0: sw $zero, 0x14($v0)
    at = 0x28 << 16;                                            // 0x0019bea4: lui $at, 0x28
    g_70000018 = v1;  // Global at 0x70000018                   // 0x0019bea8: sw $v1, 0x18($v0)
    a0 = s0 + 0x40;                                             // 0x0019beac: addiu $a0, $s0, 0x40
    v1 = 0x7000 << 16;                                          // 0x0019beb0: lui $v1, 0x7000
    g_7000001c = a2;  // Global at 0x7000001c                   // 0x0019beb4: sw $a2, 0x1c($v0)
    a2 = v1 | 0x3700;                                           // 0x0019beb8: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019bebc: ori $a3, $v1, 0x3f40
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bec0: lw $v1, 0x4c($s3)
    FPU_F1 = *(float*)((at) + 0x5470);  // Load float           // 0x0019bec4: lwc1 $f1, 0x5470($at)
    a1 = sp + 0x60;                                             // 0x0019bec8: addiu $a1, $sp, 0x60
    t0 = t0 + 0x5360;                                           // 0x0019becc: addiu $t0, $t0, 0x5360
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019bed0: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019bed4: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019bed8: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x20) = FPU_F0;  // Store float            // 0x0019bedc: swc1 $f0, 0x20($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bee0: lw $v1, 0x4c($s3)
    FPU_F1 = *(float*)((at) + 0x5474);  // Load float           // 0x0019bee4: lwc1 $f1, 0x5474($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019bee8: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019beec: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019bef0: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x24) = FPU_F0;  // Store float            // 0x0019bef4: swc1 $f0, 0x24($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bef8: lw $v1, 0x4c($s3)
    FPU_F1 = *(float*)((at) + 0x5478);  // Load float           // 0x0019befc: lwc1 $f1, 0x5478($at)
    FPU_F0 = *(float*)((v1) + 0x24);  // Load float             // 0x0019bf00: lwc1 $f0, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019bf04: lui $at, 0x28
    /* FPU: mul.s $f0, $f1, $f0 */                              // 0x0019bf08: mul.s $f0, $f1, $f0
    *(float*)((v0) + 0x28) = FPU_F0;  // Store float            // 0x0019bf0c: swc1 $f0, 0x28($v0)
    FPU_F0 = *(float*)((at) + 0x547c);  // Load float           // 0x0019bf10: lwc1 $f0, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F0;  // Store float            // 0x0019bf14: swc1 $f0, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019bf18: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5460);  // Load float           // 0x0019bf1c: lwc1 $f0, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F0;  // Store float            // 0x0019bf20: swc1 $f0, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019bf24: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5464);  // Load float           // 0x0019bf28: lwc1 $f0, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019bf2c: swc1 $f0, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019bf30: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x5468);  // Load float           // 0x0019bf34: lwc1 $f0, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F0;  // Store float            // 0x0019bf38: swc1 $f0, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019bf3c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x546c);  // Load float           // 0x0019bf40: lwc1 $f0, 0x546c($at)
    func_00199320();  // 0x199240                                // 0x0019bf44: jal 0x199240
    *(float*)((v0) + 0x3c) = FPU_F0;  // Store float            // 0x0019bf48: swc1 $f0, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019bf4c: lui $a2, 0x28
    a0 = s0 + 0x80;                                             // 0x0019bf50: addiu $a0, $s0, 0x80
    func_00199240();  // 0x1991c0                                // 0x0019bf54: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019bf58: addiu $a2, $a2, 0x5320
    a2 = 0x28 << 16;                                            // 0x0019bf5c: lui $a2, 0x28
    a1 = s0 + 0xc0;                                             // 0x0019bf60: addiu $a1, $s0, 0xc0
    a2 = a2 + 0x52e0;                                           // 0x0019bf64: addiu $a2, $a2, 0x52e0
    a0 = 8;                                                     // 0x0019bf68: addiu $a0, $zero, 8
label_0x19bf6c:
    v1 = g_002852e0;  // Global at 0x002852e0                   // 0x0019bf6c: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x0019bf70: addiu $a0, $a0, -1
    v0 = g_002852e4;  // Global at 0x002852e4                   // 0x0019bf74: lw $v0, 4($a2)
    *(uint32_t*)(a1) = v1;                                      // 0x0019bf78: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x0019bf7c: addiu $a2, $a2, 8
    *(uint32_t*)((a1) + 4) = v0;                                // 0x0019bf80: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x19bf6c;                            // 0x0019bf84: bgtz $a0, 0x19bf6c
    a1 = a1 + 8;                                                // 0x0019bf88: addiu $a1, $a1, 8
    func_00199b40();  // 0x199b10                                // 0x0019bf8c: jal 0x199b10
    a0 = s0 + 0x100;                                            // 0x0019bf90: addiu $a0, $s0, 0x100
    at = 0x28 << 16;                                            // 0x0019bf94: lui $at, 0x28
    v0 = 0x3f80 << 16;                                          // 0x0019bf98: lui $v0, 0x3f80
    FPU_F2 = *(float*)((at) + 0x4860);  // Load float           // 0x0019bf9c: lwc1 $f2, 0x4860($at)
    local_5c = v0;                                              // 0x0019bfa0: sw $v0, 0x5c($sp)
    v0 = 0x7000 << 16;                                          // 0x0019bfa4: lui $v0, 0x7000
    a0 = s0 + 0x130;                                            // 0x0019bfa8: addiu $a0, $s0, 0x130
    a1 = s0 + 0x160;                                            // 0x0019bfac: addiu $a1, $s0, 0x160
    a2 = v0 | 0x3700;                                           // 0x0019bfb0: ori $a2, $v0, 0x3700
    a3 = sp + 0x50;                                             // 0x0019bfb4: addiu $a3, $sp, 0x50
    at = 0x28 << 16;                                            // 0x0019bfb8: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4864);  // Load float           // 0x0019bfbc: lwc1 $f1, 0x4864($at)
    *(float*)((sp) + 0x50) = FPU_F2;  // Store float            // 0x0019bfc0: swc1 $f2, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019bfc4: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4868);  // Load float           // 0x0019bfc8: lwc1 $f0, 0x4868($at)
    *(float*)((sp) + 0x54) = FPU_F1;  // Store float            // 0x0019bfcc: swc1 $f1, 0x54($sp)
    func_00199580();  // 0x1994e0                                // 0x0019bfd0: jal 0x1994e0
    *(float*)((sp) + 0x58) = FPU_F0;  // Store float            // 0x0019bfd4: swc1 $f0, 0x58($sp)
    v0 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bfd8: lw $v0, 0x4c($s3)
    a0 = s0 + 0x170;                                            // 0x0019bfdc: addiu $a0, $s0, 0x170
    FPU_F12 = *(float*)((v0) + 0x24);  // Load float            // 0x0019bfe0: lwc1 $f12, 0x24($v0)
    func_00199b10();  // 0x199a60                                // 0x0019bfe4: jal 0x199a60
    a1 = s0 + 0x180;                                            // 0x0019bfe8: addiu $a1, $s0, 0x180
    v1 = 0x1500 << 16;                                          // 0x0019bfec: lui $v1, 0x1500
    v1 = s2 | v1;                                               // 0x0019bff4: or $v1, $s2, $v1
    *(uint32_t*)((s0) + 0x190) = v1;                            // 0x0019bff8: sw $v1, 0x190($s0)
    *(uint32_t*)((s0) + 0x194) = 0;                             // 0x0019bffc: sw $zero, 0x194($s0)
    *(uint32_t*)((s0) + 0x198) = 0;                             // 0x0019c000: sw $zero, 0x198($s0)
    *(uint32_t*)((s0) + 0x19c) = 0;                             // 0x0019c004: sw $zero, 0x19c($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019c010: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019c014: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019c018: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019c01c: jr $ra
    sp = sp + 0xa0;                                             // 0x0019c020: addiu $sp, $sp, 0xa0
}