void func_0019bc30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c;
    
    sp = sp + -0xa0;                                            // 0x0019bc30: addiu $sp, $sp, -0xa0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019bc38: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019bc44: addu.qb $zero, $sp, $s1
    a0 = 0x1b0;                                                 // 0x0019bc50: addiu $a0, $zero, 0x1b0
    a1 = 0x10;                                                  // 0x0019bc54: addiu $a1, $zero, 0x10
    func_0018dca0();  // 0x18dc30                                // 0x0019bc58: jal 0x18dc30
    v1 = 0x2000 << 16;                                          // 0x0019bc60: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019bc64: lui $t0, 0x28
    v1 = v1 | 0x1a;                                             // 0x0019bc68: ori $v1, $v1, 0x1a
    a2 = 0x1300 << 16;                                          // 0x0019bc6c: lui $a2, 0x1300
    g_70000000 = v1;  // Global at 0x70000000                   // 0x0019bc70: sw $v1, 0($v0)
    a1 = 0x6c18 << 16;                                          // 0x0019bc74: lui $a1, 0x6c18
    g_70000004 = s1;  // Global at 0x70000004                   // 0x0019bc78: sw $s1, 4($v0)
    v1 = 0x100 << 16;                                           // 0x0019bc7c: lui $v1, 0x100
    a0 = v1 | 0x404;                                            // 0x0019bc84: ori $a0, $v1, 0x404
    g_70000010 = a2;  // Global at 0x70000010                   // 0x0019bc88: sw $a2, 0x10($v0)
    v1 = 0x3f80 << 16;                                          // 0x0019bc8c: lui $v1, 0x3f80
    g_70000014 = 0;  // Global at 0x70000014                    // 0x0019bc90: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019bc94: mtc1 $v1, $f0
    g_70000018 = a0;  // Global at 0x70000018                   // 0x0019bc98: sw $a0, 0x18($v0)
    g_7000001c = a1;  // Global at 0x7000001c                   // 0x0019bca0: sw $a1, 0x1c($v0)
    v1 = 0x7000 << 16;                                          // 0x0019bca4: lui $v1, 0x7000
    t1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bca8: lw $t1, 0x4c($s3)
    at = 0x28 << 16;                                            // 0x0019bcac: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019bcb0: lwc1 $f2, 0x5470($at)
    a2 = v1 | 0x3700;                                           // 0x0019bcb4: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019bcb8: ori $a3, $v1, 0x3f40
    a0 = s0 + 0x50;                                             // 0x0019bcbc: addiu $a0, $s0, 0x50
    a1 = sp + 0x60;                                             // 0x0019bcc0: addiu $a1, $sp, 0x60
    t0 = t0 + 0x5360;                                           // 0x0019bcc4: addiu $t0, $t0, 0x5360
    FPU_F1 = *(float*)((t1) + 0x24);  // Load float             // 0x0019bcc8: lwc1 $f1, 0x24($t1)
    at = 0x28 << 16;                                            // 0x0019bccc: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019bcd0: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019bcd4: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bcd8: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019bcdc: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019bce0: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019bce4: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019bce8: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019bcec: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bcf0: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019bcf4: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019bcf8: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019bcfc: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019bd00: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019bd04: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019bd08: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019bd0c: swc1 $f1, 0x2c($v0)
    at = 0x28 << 16;                                            // 0x0019bd10: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5460);  // Load float           // 0x0019bd14: lwc1 $f1, 0x5460($at)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019bd18: swc1 $f1, 0x30($v0)
    at = 0x28 << 16;                                            // 0x0019bd1c: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5464);  // Load float           // 0x0019bd20: lwc1 $f1, 0x5464($at)
    *(float*)((v0) + 0x34) = FPU_F1;  // Store float            // 0x0019bd24: swc1 $f1, 0x34($v0)
    at = 0x28 << 16;                                            // 0x0019bd28: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x5468);  // Load float           // 0x0019bd2c: lwc1 $f1, 0x5468($at)
    *(float*)((v0) + 0x38) = FPU_F1;  // Store float            // 0x0019bd30: swc1 $f1, 0x38($v0)
    at = 0x28 << 16;                                            // 0x0019bd34: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x546c);  // Load float           // 0x0019bd38: lwc1 $f1, 0x546c($at)
    *(float*)((v0) + 0x3c) = FPU_F1;  // Store float            // 0x0019bd3c: swc1 $f1, 0x3c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019bd40: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x40) = FPU_F1;  // Store float            // 0x0019bd44: swc1 $f1, 0x40($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019bd48: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019bd4c: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019bd50: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019bd54: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x44) = FPU_F0;  // Store float            // 0x0019bd58: swc1 $f0, 0x44($v0)
    g_70000048 = 0;  // Global at 0x70000048                    // 0x0019bd5c: sw $zero, 0x48($v0)
    func_00199320();  // 0x199240                                // 0x0019bd60: jal 0x199240
    g_7000004c = 0;  // Global at 0x7000004c                    // 0x0019bd64: sw $zero, 0x4c($v0)
    a2 = 0x28 << 16;                                            // 0x0019bd68: lui $a2, 0x28
    a0 = s0 + 0x90;                                             // 0x0019bd6c: addiu $a0, $s0, 0x90
    func_00199240();  // 0x1991c0                                // 0x0019bd70: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019bd74: addiu $a2, $a2, 0x5320
    a2 = 0x28 << 16;                                            // 0x0019bd78: lui $a2, 0x28
    a1 = s0 + 0xd0;                                             // 0x0019bd7c: addiu $a1, $s0, 0xd0
    a2 = a2 + 0x52e0;                                           // 0x0019bd80: addiu $a2, $a2, 0x52e0
    a0 = 8;                                                     // 0x0019bd84: addiu $a0, $zero, 8
label_0x19bd88:
    v1 = g_002852e0;  // Global at 0x002852e0                   // 0x0019bd88: lw $v1, 0($a2)
    a0 = a0 + -1;                                               // 0x0019bd8c: addiu $a0, $a0, -1
    v0 = g_002852e4;  // Global at 0x002852e4                   // 0x0019bd90: lw $v0, 4($a2)
    g_6c180000 = v1;  // Global at 0x6c180000                   // 0x0019bd94: sw $v1, 0($a1)
    a2 = a2 + 8;                                                // 0x0019bd98: addiu $a2, $a2, 8
    g_6c180004 = v0;  // Global at 0x6c180004                   // 0x0019bd9c: sw $v0, 4($a1)
    if (a0 > 0) goto label_0x19bd88;                            // 0x0019bda0: bgtz $a0, 0x19bd88
    a1 = a1 + 8;                                                // 0x0019bda4: addiu $a1, $a1, 8
    func_00199b40();  // 0x199b10                                // 0x0019bda8: jal 0x199b10
    a0 = s0 + 0x110;                                            // 0x0019bdac: addiu $a0, $s0, 0x110
    at = 0x28 << 16;                                            // 0x0019bdb0: lui $at, 0x28
    v0 = 0x3f80 << 16;                                          // 0x0019bdb4: lui $v0, 0x3f80
    FPU_F2 = *(float*)((at) + 0x4860);  // Load float           // 0x0019bdb8: lwc1 $f2, 0x4860($at)
    local_5c = v0;                                              // 0x0019bdbc: sw $v0, 0x5c($sp)
    v0 = 0x7000 << 16;                                          // 0x0019bdc0: lui $v0, 0x7000
    a0 = s0 + 0x140;                                            // 0x0019bdc4: addiu $a0, $s0, 0x140
    a1 = s0 + 0x170;                                            // 0x0019bdc8: addiu $a1, $s0, 0x170
    a2 = v0 | 0x3700;                                           // 0x0019bdcc: ori $a2, $v0, 0x3700
    a3 = sp + 0x50;                                             // 0x0019bdd0: addiu $a3, $sp, 0x50
    at = 0x28 << 16;                                            // 0x0019bdd4: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4864);  // Load float           // 0x0019bdd8: lwc1 $f1, 0x4864($at)
    *(float*)((sp) + 0x50) = FPU_F2;  // Store float            // 0x0019bddc: swc1 $f2, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019bde0: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4868);  // Load float           // 0x0019bde4: lwc1 $f0, 0x4868($at)
    *(float*)((sp) + 0x54) = FPU_F1;  // Store float            // 0x0019bde8: swc1 $f1, 0x54($sp)
    func_00199580();  // 0x1994e0                                // 0x0019bdec: jal 0x1994e0
    *(float*)((sp) + 0x58) = FPU_F0;  // Store float            // 0x0019bdf0: swc1 $f0, 0x58($sp)
    v0 = *(int32_t*)((s3) + 0x4c);                              // 0x0019bdf4: lw $v0, 0x4c($s3)
    a0 = s0 + 0x180;                                            // 0x0019bdf8: addiu $a0, $s0, 0x180
    FPU_F12 = *(float*)((v0) + 0x24);  // Load float            // 0x0019bdfc: lwc1 $f12, 0x24($v0)
    func_00199b10();  // 0x199a60                                // 0x0019be00: jal 0x199a60
    a1 = s0 + 0x190;                                            // 0x0019be04: addiu $a1, $s0, 0x190
    v1 = 0x1500 << 16;                                          // 0x0019be08: lui $v1, 0x1500
    v1 = s2 | v1;                                               // 0x0019be10: or $v1, $s2, $v1
    *(uint32_t*)((s0) + 0x1a0) = v1;                            // 0x0019be14: sw $v1, 0x1a0($s0)
    *(uint32_t*)((s0) + 0x1a4) = 0;                             // 0x0019be18: sw $zero, 0x1a4($s0)
    *(uint32_t*)((s0) + 0x1a8) = 0;                             // 0x0019be1c: sw $zero, 0x1a8($s0)
    *(uint32_t*)((s0) + 0x1ac) = 0;                             // 0x0019be20: sw $zero, 0x1ac($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019be2c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019be30: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019be34: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019be38: jr $ra
    sp = sp + 0xa0;                                             // 0x0019be3c: addiu $sp, $sp, 0xa0
}