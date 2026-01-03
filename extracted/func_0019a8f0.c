void func_0019a8f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c, local_6c, local_7c;
    
    sp = sp + -0xc0;                                            // 0x0019a8f0: addiu $sp, $sp, -0xc0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019a8f8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019a904: addu.qb $zero, $sp, $s1
    a0 = 0x170;                                                 // 0x0019a910: addiu $a0, $zero, 0x170
    a1 = 0x10;                                                  // 0x0019a914: addiu $a1, $zero, 0x10
    func_0018dc30();  // 18dc30                                // 0x0019a918: jal 0x18dc30
    v1 = 0x2000 << 16;                                          // 0x0019a920: lui $v1, 0x2000
    t0 = 0x28 << 16;                                            // 0x0019a924: lui $t0, 0x28
    v1 = v1 | 0x16;                                             // 0x0019a928: ori $v1, $v1, 0x16
    a2 = 0x1300 << 16;                                          // 0x0019a92c: lui $a2, 0x1300
    g_70000000 = v1;  // Global at 0x70000000                   // 0x0019a930: sw $v1, 0($v0)
    a1 = 0x6c14 << 16;                                          // 0x0019a934: lui $a1, 0x6c14
    g_70000004 = s1;  // Global at 0x70000004                   // 0x0019a938: sw $s1, 4($v0)
    v1 = 0x100 << 16;                                           // 0x0019a93c: lui $v1, 0x100
    a0 = v1 | 0x404;                                            // 0x0019a944: ori $a0, $v1, 0x404
    g_70000010 = a2;  // Global at 0x70000010                   // 0x0019a948: sw $a2, 0x10($v0)
    v1 = 0x3f80 << 16;                                          // 0x0019a94c: lui $v1, 0x3f80
    g_70000014 = 0;  // Global at 0x70000014                    // 0x0019a950: sw $zero, 0x14($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0019a954: mtc1 $v1, $f0
    g_70000018 = a0;  // Global at 0x70000018                   // 0x0019a958: sw $a0, 0x18($v0)
    g_7000001c = a1;  // Global at 0x7000001c                   // 0x0019a960: sw $a1, 0x1c($v0)
    v1 = 0x7000 << 16;                                          // 0x0019a964: lui $v1, 0x7000
    t1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019a968: lw $t1, 0x4c($s3)
    at = 0x28 << 16;                                            // 0x0019a96c: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x5470);  // Load float           // 0x0019a970: lwc1 $f2, 0x5470($at)
    a2 = v1 | 0x3700;                                           // 0x0019a974: ori $a2, $v1, 0x3700
    a3 = v1 | 0x3f40;                                           // 0x0019a978: ori $a3, $v1, 0x3f40
    a0 = s0 + 0x40;                                             // 0x0019a97c: addiu $a0, $s0, 0x40
    a1 = sp + 0x80;                                             // 0x0019a980: addiu $a1, $sp, 0x80
    t0 = t0 + 0x5360;                                           // 0x0019a984: addiu $t0, $t0, 0x5360
    FPU_F1 = *(float*)((t1) + 0x24);  // Load float             // 0x0019a988: lwc1 $f1, 0x24($t1)
    at = 0x28 << 16;                                            // 0x0019a98c: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019a990: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x20) = FPU_F1;  // Store float            // 0x0019a994: swc1 $f1, 0x20($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019a998: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5474);  // Load float           // 0x0019a99c: lwc1 $f2, 0x5474($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a9a0: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a9a4: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019a9a8: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x24) = FPU_F1;  // Store float            // 0x0019a9ac: swc1 $f1, 0x24($v0)
    v1 = *(int32_t*)((s3) + 0x4c);                              // 0x0019a9b0: lw $v1, 0x4c($s3)
    FPU_F2 = *(float*)((at) + 0x5478);  // Load float           // 0x0019a9b4: lwc1 $f2, 0x5478($at)
    FPU_F1 = *(float*)((v1) + 0x24);  // Load float             // 0x0019a9b8: lwc1 $f1, 0x24($v1)
    at = 0x28 << 16;                                            // 0x0019a9bc: lui $at, 0x28
    /* FPU: mul.s $f1, $f2, $f1 */                              // 0x0019a9c0: mul.s $f1, $f2, $f1
    *(float*)((v0) + 0x28) = FPU_F1;  // Store float            // 0x0019a9c4: swc1 $f1, 0x28($v0)
    FPU_F1 = *(float*)((at) + 0x547c);  // Load float           // 0x0019a9c8: lwc1 $f1, 0x547c($at)
    *(float*)((v0) + 0x2c) = FPU_F1;  // Store float            // 0x0019a9cc: swc1 $f1, 0x2c($v0)
    FPU_F1 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a9d0: lwc1 $f1, -0x6464($gp)
    *(float*)((v0) + 0x30) = FPU_F1;  // Store float            // 0x0019a9d4: swc1 $f1, 0x30($v0)
    FPU_F2 = *(float*)((gp) + -0x6464);  // Load float          // 0x0019a9d8: lwc1 $f2, -0x6464($gp)
    FPU_F1 = *(float*)((gp) + -0x6460);  // Load float          // 0x0019a9dc: lwc1 $f1, -0x6460($gp)
    /* FPU: sub.s $f1, $f2, $f1 */                              // 0x0019a9e0: sub.s $f1, $f2, $f1
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0019a9e4: div.s $f0, $f0, $f1
    *(float*)((v0) + 0x34) = FPU_F0;  // Store float            // 0x0019a9e8: swc1 $f0, 0x34($v0)
    g_70000038 = 0;  // Global at 0x70000038                    // 0x0019a9ec: sw $zero, 0x38($v0)
    func_00199240();  // 199240                                // 0x0019a9f0: jal 0x199240
    g_7000003c = 0;  // Global at 0x7000003c                    // 0x0019a9f4: sw $zero, 0x3c($v0)
    a2 = 0x28 << 16;                                            // 0x0019a9f8: lui $a2, 0x28
    a0 = s0 + 0x80;                                             // 0x0019a9fc: addiu $a0, $s0, 0x80
    func_001991c0();  // 1991c0                                // 0x0019aa00: jal 0x1991c0
    a2 = a2 + 0x5320;                                           // 0x0019aa04: addiu $a2, $a2, 0x5320
    at = 0x28 << 16;                                            // 0x0019aa08: lui $at, 0x28
    v0 = 0x3f80 << 16;                                          // 0x0019aa0c: lui $v0, 0x3f80
    FPU_F1 = *(float*)((at) + 0x4854);  // Load float           // 0x0019aa10: lwc1 $f1, 0x4854($at)
    local_5c = v0;                                              // 0x0019aa14: sw $v0, 0x5c($sp)
    local_6c = v0;                                              // 0x0019aa18: sw $v0, 0x6c($sp)
    a0 = s0 + 0xc0;                                             // 0x0019aa1c: addiu $a0, $s0, 0xc0
    local_7c = v0;                                              // 0x0019aa20: sw $v0, 0x7c($sp)
    a1 = s0 + 0xf0;                                             // 0x0019aa24: addiu $a1, $s0, 0xf0
    v0 = 0x7000 << 16;                                          // 0x0019aa28: lui $v0, 0x7000
    a3 = sp + 0x50;                                             // 0x0019aa2c: addiu $a3, $sp, 0x50
    a2 = v0 | 0x3700;                                           // 0x0019aa30: ori $a2, $v0, 0x3700
    at = 0x28 << 16;                                            // 0x0019aa34: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4858);  // Load float           // 0x0019aa38: lwc1 $f0, 0x4858($at)
    /* FPU: neg.s $f1, $f1 */                                   // 0x0019aa3c: neg.s $f1, $f1
    *(float*)((sp) + 0x50) = FPU_F1;  // Store float            // 0x0019aa40: swc1 $f1, 0x50($sp)
    at = 0x28 << 16;                                            // 0x0019aa44: lui $at, 0x28
    FPU_F4 = *(float*)((at) + 0x485c);  // Load float           // 0x0019aa48: lwc1 $f4, 0x485c($at)
    /* FPU: neg.s $f5, $f0 */                                   // 0x0019aa4c: neg.s $f5, $f0
    *(float*)((sp) + 0x54) = FPU_F5;  // Store float            // 0x0019aa50: swc1 $f5, 0x54($sp)
    at = 0x28 << 16;                                            // 0x0019aa54: lui $at, 0x28
    FPU_F3 = *(float*)((at) + 0x48c8);  // Load float           // 0x0019aa58: lwc1 $f3, 0x48c8($at)
    /* FPU: neg.s $f4, $f4 */                                   // 0x0019aa5c: neg.s $f4, $f4
    *(float*)((sp) + 0x58) = FPU_F4;  // Store float            // 0x0019aa60: swc1 $f4, 0x58($sp)
    at = 0x28 << 16;                                            // 0x0019aa64: lui $at, 0x28
    FPU_F2 = *(float*)((at) + 0x48cc);  // Load float           // 0x0019aa68: lwc1 $f2, 0x48cc($at)
    *(float*)((sp) + 0x60) = FPU_F3;  // Store float            // 0x0019aa6c: swc1 $f3, 0x60($sp)
    at = 0x28 << 16;                                            // 0x0019aa70: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x48d0);  // Load float           // 0x0019aa74: lwc1 $f1, 0x48d0($at)
    *(float*)((sp) + 0x64) = FPU_F2;  // Store float            // 0x0019aa78: swc1 $f2, 0x64($sp)
    at = 0x28 << 16;                                            // 0x0019aa7c: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4930);  // Load float           // 0x0019aa80: lwc1 $f0, 0x4930($at)
    *(float*)((sp) + 0x68) = FPU_F1;  // Store float            // 0x0019aa84: swc1 $f1, 0x68($sp)
    at = 0x28 << 16;                                            // 0x0019aa88: lui $at, 0x28
    FPU_F1 = *(float*)((at) + 0x4934);  // Load float           // 0x0019aa8c: lwc1 $f1, 0x4934($at)
    *(float*)((sp) + 0x70) = FPU_F0;  // Store float            // 0x0019aa90: swc1 $f0, 0x70($sp)
    at = 0x28 << 16;                                            // 0x0019aa94: lui $at, 0x28
    FPU_F0 = *(float*)((at) + 0x4938);  // Load float           // 0x0019aa98: lwc1 $f0, 0x4938($at)
    *(float*)((sp) + 0x74) = FPU_F1;  // Store float            // 0x0019aa9c: swc1 $f1, 0x74($sp)
    func_00199580();  // 199580                                // 0x0019aaa0: jal 0x199580
    *(float*)((sp) + 0x78) = FPU_F0;  // Store float            // 0x0019aaa4: swc1 $f0, 0x78($sp)
    v0 = *(int32_t*)((s3) + 0x4c);                              // 0x0019aaa8: lw $v0, 0x4c($s3)
    FPU_F12 = *(float*)((v0) + 0x24);  // Load float            // 0x0019aaac: lwc1 $f12, 0x24($v0)
    func_001998d0();  // 1998d0                                // 0x0019aab0: jal 0x1998d0
    a0 = s0 + 0x100;                                            // 0x0019aab4: addiu $a0, $s0, 0x100
    v1 = 0x1500 << 16;                                          // 0x0019aab8: lui $v1, 0x1500
    v1 = s2 | v1;                                               // 0x0019aac0: or $v1, $s2, $v1
    *(uint32_t*)((s0) + 0x160) = v1;                            // 0x0019aac4: sw $v1, 0x160($s0)
    *(uint32_t*)((s0) + 0x164) = 0;                             // 0x0019aac8: sw $zero, 0x164($s0)
    *(uint32_t*)((s0) + 0x168) = 0;                             // 0x0019aacc: sw $zero, 0x168($s0)
    *(uint32_t*)((s0) + 0x16c) = 0;                             // 0x0019aad0: sw $zero, 0x16c($s0)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019aadc: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019aae0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019aae4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019aae8: jr $ra
    sp = sp + 0xc0;                                             // 0x0019aaec: addiu $sp, $sp, 0xc0
}