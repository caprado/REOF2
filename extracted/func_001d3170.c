void func_001d3170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001d3170: addiu $sp, $sp, -0x130
    v0 = 0x33 << 16;                                            // 0x001d3174: lui $v0, 0x33
    v0 = v0 + -0x1f10;                                          // 0x001d317c: addiu $v0, $v0, -0x1f10
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d3180: addu.qb $zero, $sp, $s1
    at = 0x31 << 16;                                            // 0x001d3184: lui $at, 0x31
    *(uint32_t*)((gp) + -0x6240) = v0;                          // 0x001d3190: sw $v0, -0x6240($gp)
    v1 = *(int32_t*)((gp) + -0x610c);                           // 0x001d3198: lw $v1, -0x610c($gp)
    v0 = *(int32_t*)((gp) + -0x6240);                           // 0x001d319c: lw $v0, -0x6240($gp)
    g_0032e174 = v1;  // Global at 0x0032e174                   // 0x001d31a0: sw $v1, 0x84($v0)
    s1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d31a4: lw $s1, 0x37fc($at)
    *(uint32_t*)((gp) + -0x6238) = s1;                          // 0x001d31a8: sw $s1, -0x6238($gp)
    a0 = *(int32_t*)((gp) + -0x6238);                           // 0x001d31ac: lw $a0, -0x6238($gp)
    func_00107c70();  // 107c70                                // 0x001d31b0: jal 0x107c70
    a2 = 0x64;                                                  // 0x001d31b4: addiu $a2, $zero, 0x64
    a1 = 0x24 << 16;                                            // 0x001d31b8: lui $a1, 0x24
    v1 = s1 + 0xa3;                                             // 0x001d31bc: addiu $v1, $s1, 0xa3
    v0 = -0x40;                                                 // 0x001d31c4: addiu $v0, $zero, -0x40
    a0 = sp + 0x30;                                             // 0x001d31c8: addiu $a0, $sp, 0x30
    s0 = v1 & v0;                                               // 0x001d31cc: and $s0, $v1, $v0
    func_0010a4d8();  // 10a4d8                                // 0x001d31d0: jal 0x10a4d8
    a1 = &str_00243b60;  // "DATA\\ROM\\TEX\\EM\\E00\\E00_00.TEX" // 0x001d31d4: addiu $a1, $a1, 0x3b60
    func_0018d910();  // 18d910                                // 0x001d31d8: jal 0x18d910
    a0 = sp + 0x30;                                             // 0x001d31dc: addiu $a0, $sp, 0x30
    a0 = sp + 0x30;                                             // 0x001d31e4: addiu $a0, $sp, 0x30
    a2 = 1;                                                     // 0x001d31ec: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d31f0: jal 0x1d3390
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d31f8: lw $a1, -0x6238($gp)
    v1 = s0 + s1;                                               // 0x001d31fc: addu $v1, $s0, $s1
    v1 = v1 + 0x3f;                                             // 0x001d3200: addiu $v1, $v1, 0x3f
    a3 = -0x40;                                                 // 0x001d3204: addiu $a3, $zero, -0x40
    t0 = v1 & a3;                                               // 0x001d3208: and $t0, $v1, $a3
    a0 = 1;                                                     // 0x001d320c: addiu $a0, $zero, 1
    v1 = t0 + 0x7f;                                             // 0x001d3210: addiu $v1, $t0, 0x7f
    at = 0x33 << 16;                                            // 0x001d3214: lui $at, 0x33
    v1 = v1 & a3;                                               // 0x001d3218: and $v1, $v1, $a3
    g_00243b64 = s0;  // Global at 0x00243b64                   // 0x001d321c: sw $s0, 4($a1)
    a2 = *(int32_t*)((s0) + 4);                                 // 0x001d3220: lw $a2, 4($s0)
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d3224: lw $a1, -0x6238($gp)
    a2 = a2 + -8;                                               // 0x001d3228: addiu $a2, $a2, -8
    g_00243b68 = a2;  // Global at 0x00243b68                   // 0x001d322c: sw $a2, 8($a1)
    a2 = *(int16_t*)((s0) + 8);                                 // 0x001d3230: lh $a2, 8($s0)
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d3234: lw $a1, -0x6238($gp)
    g_00243b6c = a2;  // Global at 0x00243b6c                   // 0x001d3238: sw $a2, 0xc($a1)
    a2 = *(int16_t*)((s0) + 0xa);                               // 0x001d323c: lh $a2, 0xa($s0)
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d3240: lw $a1, -0x6238($gp)
    g_00243b70 = a2;  // Global at 0x00243b70                   // 0x001d3244: sw $a2, 0x10($a1)
    a2 = *(int32_t*)((s0) + 0xc);                               // 0x001d3248: lw $a2, 0xc($s0)
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d324c: lw $a1, -0x6238($gp)
    g_00243b74 = a2;  // Global at 0x00243b74                   // 0x001d3250: sw $a2, 0x14($a1)
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d3254: lw $a1, -0x6238($gp)
    g_00243b78 = 0;  // Global at 0x00243b78                    // 0x001d3258: sw $zero, 0x18($a1)
    a2 = *(int32_t*)((gp) + -0x6238);                           // 0x001d325c: lw $a2, -0x6238($gp)
    a1 = *(int32_t*)((a2) + 0xc);                               // 0x001d3260: lw $a1, 0xc($a2)
    a1 = (unsigned)a1 >> 4;                                     // 0x001d3264: srl $a1, $a1, 4
    *(uint32_t*)((a2) + 0x1c) = a1;                             // 0x001d3268: sw $a1, 0x1c($a2)
    a2 = *(int32_t*)((gp) + -0x6238);                           // 0x001d326c: lw $a2, -0x6238($gp)
    a1 = *(int32_t*)((a2) + 0x10);                              // 0x001d3270: lw $a1, 0x10($a2)
    a1 = (unsigned)a1 >> 4;                                     // 0x001d3274: srl $a1, $a1, 4
    *(uint32_t*)((a2) + 0x20) = a1;                             // 0x001d3278: sw $a1, 0x20($a2)
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d327c: lw $a1, -0x6238($gp)
    g_00243b88 = t0;  // Global at 0x00243b88                   // 0x001d3280: sw $t0, 0x28($a1)
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d3284: lw $a1, -0x6238($gp)
    g_00243b8c = v1;  // Global at 0x00243b8c                   // 0x001d3288: sw $v1, 0x2c($a1)
    t0 = *(int32_t*)((gp) + -0x6238);                           // 0x001d328c: lw $t0, -0x6238($gp)
    a2 = *(int32_t*)((t0) + 0xc);                               // 0x001d3290: lw $a2, 0xc($t0)
    a1 = *(int32_t*)((t0) + 0x10);                              // 0x001d3294: lw $a1, 0x10($t0)
    *(uint32_t*)(t0) = 0;                                       // 0x001d329c: sw $zero, 0($t0)
    t0 = a2 << 2;                                               // 0x001d32a0: sll $t0, $a2, 2
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d32a4: lw $a1, -0x6238($gp)
    v1 = v1 + t0;                                               // 0x001d32a8: addu $v1, $v1, $t0
    v1 = v1 + 0x3f;                                             // 0x001d32ac: addiu $v1, $v1, 0x3f
    v1 = v1 & a3;                                               // 0x001d32b0: and $v1, $v1, $a3
    g_00243b90 = v1;  // Global at 0x00243b90                   // 0x001d32b4: sw $v1, 0x30($a1)
    v1 = v1 + t0;                                               // 0x001d32b8: addu $v1, $v1, $t0
    a1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d32bc: lw $a1, -0x6238($gp)
    v1 = v1 + 0x3f;                                             // 0x001d32c0: addiu $v1, $v1, 0x3f
    a2 = v1 & a3;                                               // 0x001d32c4: and $a2, $v1, $a3
    v1 = a2 + t0;                                               // 0x001d32c8: addu $v1, $a2, $t0
    v1 = v1 + 0x3f;                                             // 0x001d32cc: addiu $v1, $v1, 0x3f
    a3 = v1 & a3;                                               // 0x001d32d0: and $a3, $v1, $a3
    g_00243b94 = a2;  // Global at 0x00243b94                   // 0x001d32d4: sw $a2, 0x34($a1)
    v1 = *(int32_t*)((gp) + -0x6238);                           // 0x001d32d8: lw $v1, -0x6238($gp)
    *(uint32_t*)((v1) + 0x3c) = a3;                             // 0x001d32dc: sw $a3, 0x3c($v1)
    g_0032e0f0 = a0;  // Global at 0x0032e0f0                   // 0x001d32e0: sw $a0, -0x1f10($at)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d32e8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d32ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d32f0: jr $ra
    sp = sp + 0x130;                                            // 0x001d32f4: addiu $sp, $sp, 0x130
}